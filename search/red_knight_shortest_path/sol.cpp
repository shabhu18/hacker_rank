#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

#define UL 1
#define UR 2
#define R 3
#define LR 4
#define LL 5
#define L 6
#define INF 99999999

typedef pair<int, int> iPair;



void print_sequence(vector<int> sequence)
{
    ofstream fout(getenv("OUTPUT_PATH"));

    if(sequence.size()==0)
    {
        cout<<"Impossible"<<endl;
    }
    else
    {
        fout<<sequence.size()<<endl;
        for(int i=sequence.size();i>0;i--)
        {
            int val=sequence.at(i-1);
            switch(val)
            {
                case UL:
                cout<<"UL"<<" "; 
                break;
                case UR:
                cout<<"UR"<<" ";
                break;
                case R :
                cout<<"R"<<" ";
                break;
                case LR:
                cout<<"LR"<<" ";
                break;
                case LL:
                cout<<"LL"<<" ";
                break;
                case L:
                cout<<"L"<<" ";
                break;
                default:
                cout<<"unable to find a sequence";
            }
        }
        cout<<endl;
    }
}



vector<pair<int,int>> get_moves(int n,int knight_position_i,int knight_position_j)
{
    int arr_moves[]={-2,-1,-2,1,0,2,2,1,2,-1,0,-2};
    int arr_move_itration_sequence[]={UL,UR,R,LR,LL,L};
    vector<pair<int,int>> connected_nodes;

    for(int i=0;i<12;i=i+2)
    {
        int knight_position_after_move_i=knight_position_i+arr_moves[i];
        int knight_position_after_move_j=knight_position_j+arr_moves[i+1];

        if(knight_position_after_move_i >= 0 && knight_position_after_move_i < n && knight_position_after_move_j >=0 && knight_position_after_move_j< n)
        {
            pair<int ,int> temp_push_back;
            temp_push_back.first=knight_position_after_move_i*n+knight_position_after_move_j;
            temp_push_back.second=arr_move_itration_sequence[i/2];
            connected_nodes.push_back(temp_push_back);
        }
    }
    return connected_nodes;


}

// Complete the printShortestPath function below.
void printShortestPath(int n, int i_start, int j_start, int i_end, int j_end) {
    // Print the distance along with the sequence of moves.

    unordered_map<int,vector<pair<int,int> > > graph;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            graph[i*n+j]=get_moves(n,i,j);
        }
    }

    //cout<<"break point"<<endl;

    int start_node=i_start*n+j_start;
    int end_node=i_end*n+j_end;
    int num_vertex=n*n;


    priority_queue< iPair, vector <iPair> , greater<iPair> > pq;
    vector<int> dist(num_vertex, INF); 
    pq.push(make_pair(0,start_node));
    dist[start_node]=0;

    vector<int> move_sequence;
    std::vector<int> parents(num_vertex,INF);
    int previous_parent=start_node;
    std::vector<int> parent_move_children(num_vertex,0);
    parents[start_node]=start_node;

    while(!pq.empty())
    {
        int u=pq.top().second;
        pq.pop();

        vector<pair<int,int> > childrens=graph[u];

        for(int i=0;i<childrens.size();i++)
        {
            int node=(childrens.at(i)).first;
            int weight=(childrens.at(i)).second;

            if(dist[node] > dist[u]+weight)
            {
                dist[node]=dist[u]+weight;
                pq.push(make_pair(dist[node],node));
                parent_move_children[node]=weight;
                parents[node]=u;

            }
        }



       

    }


    int children=parents[end_node];
    

    vector<int> sequence;


    if(dist[end_node]!=INF)
    {    
        sequence.push_back(parent_move_children[end_node]);
        while(children != start_node)
        {
            sequence.push_back(parent_move_children[children]);
            children=parents[children];            
            
        }
    }

    print_sequence(sequence);
    //cout<<"temp"<<endl;    




}

int main()
{
    int n;
    ifstream myfile;
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');
    myfile.open("/home/shashank/Documents/hacker_rank/search/red_knight_shortest_path/input/input00.txt");

    string temp_n;

    getline(myfile, temp_n);
    n=stoi(temp_n);

    string i_startJ_start_temp;
    getline(myfile, i_startJ_start_temp);

    vector<string> i_startJ_start = split_string(i_startJ_start_temp);

    int i_start = stoi(i_startJ_start[0]);

    int j_start = stoi(i_startJ_start[1]);

    int i_end = stoi(i_startJ_start[2]);

    int j_end = stoi(i_startJ_start[3]);

    printShortestPath(n, i_start, j_start, i_end, j_end);

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
