#include <bits/stdc++.h>

using namespace std;
vector<string> split_string(string);

// Complete the connectedCell function below.
vector<int> connected_edges(vector<vector<int>> matrix , int node_index)
{
    //row major order
    vector<int> connected_edges;
    int matrix_length=matrix.size();
    int ith_index=node_index/matrix_length;
    int jth_index=node_index-matrix_length*ith_index;
    pair<int,int> right_aside={1,0};
    pair<int,int> left_aside={-1,0};
    pair<int,int> up_aside={0,-1};
    pair<int,int> down_aside={0,1};
    pair<int,int> diagnol_up={1,1};
    pair<int,int> diagnol_down={-1,-1};
    pair<int,int> diagnol_left={-1,1};
    pair<int,int> diagnol_right={1,-1};

    std::vector<pair<int,int> > connectivity_index;
    connectivity_index.push_back(right_aside);
    connectivity_index.push_back(left_aside);
    connectivity_index.push_back(up_aside);
    connectivity_index.push_back(down_aside);
    connectivity_index.push_back(diagnol_up);
    connectivity_index.push_back(diagnol_down);
    connectivity_index.push_back(diagnol_left);
    connectivity_index.push_back(diagnol_right);

    if(matrix[ith_index][jth_index]==1)
    {
        for(int i=0;i<connectivity_index.size();i++)
        {
            pair<int,int> temp=connectivity_index.at(i);
            int index_i=ith_index+temp.first;
            int index_j=jth_index+temp.second;

            if(index_i > matrix.size()-1 || index_j > matrix.size()-1 || index_i < 0 || index_j < 0 )
            {
                continue;
            }
            else
            {
                if(matrix[index_i][index_j]==1)
                {
                    int convert_to_node_number=index_i*matrix.size()+index_j;
                    connected_edges.push_back(convert_to_node_number);

                }
            }
        }
    }
    return connected_edges;
}


int connectedCell(vector<vector<int>> matrix) {


    int max_connected_size=0;

    int matrix_length=matrix.size();
    int num_nodes=matrix_length*matrix_length;
    unordered_map<int,vector<int> > adjacenty_matrix;
    std::vector<int> edges;
    for(int i=0;i<num_nodes;i++)
    {
        edges=connected_edges(matrix,i);
        adjacenty_matrix.insert(make_pair(i,edges));

    }


    

    unordered_map<int,bool> node_bfs_check;

    for(int i=0;i<num_nodes;i++)
    {
        int matrix_length=matrix.size();
        int ith_index=i/matrix_length;
        int jth_index=i-matrix_length*ith_index;
        if(matrix[ith_index][jth_index]==0)
        {
            node_bfs_check.insert(make_pair(i,true));

        }
        else
        {
            node_bfs_check.insert(make_pair(i,false));
        }
    }

    //checking for BFS


    for(int l=0;l<num_nodes;l++)
    {
        if(node_bfs_check[l] == false  )
        {
            int start_node=l; //TODO initilize start        
            vector<int> frontier;
            vector<int> visited_node;
            vector<int> next;



            frontier.push_back(start_node);
            visited_node.push_back(start_node);
            while (frontier.size() != 0)
            {
                for(int i=0;i<frontier.size();i++)
                {
                    std::vector<int> adj_edges=adjacenty_matrix[frontier.at(i)];
                    for(int j=0;j<adj_edges.size();j++)
                    {

                        std::vector<int>::iterator itr ;
                        itr=find(visited_node.begin(),visited_node.end(),adj_edges.at(j));
                        if(itr == visited_node.end())
                        {
                            next.push_back(adj_edges.at(j));
                            visited_node.push_back(adj_edges.at(j));
                        }

                    }

                }       
            frontier=next;
            next.clear();

            }

            for(int m=0;m<visited_node.size();m++)
            {
                node_bfs_check[visited_node.at(m)]=true;
            }

            if(visited_node.size() > max_connected_size)
            {
                max_connected_size=visited_node.size();
                visited_node.clear();
            }

        }
    }






    return max_connected_size;

}

int main()
{
    ifstream myfile;
    myfile.open("/home/shashank/Documents/hacker_rank/search/connnected_cell/input/input00.txt");
    if(!myfile)
    {
        cout<<"unable to open"<<endl;
        return 0;
    }
    string num;

    getline(myfile, num);
    int n=stoi(num);
    getline(myfile, num);
    int m=stoi(num);

    vector<vector<int>> matrix(n);
    //std::stringstream linestream(line);

    for (int i = 0; i < n; i++) {
        matrix[i].resize(m);
        getline(myfile,num);
        vector<string> splited_stream=split_string(num);

        for (int j = 0; j < m; j++) {
            matrix[i][j]=stoi(splited_stream.at(j));
        }

        //cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = connectedCell(matrix,n,m);

    //fout << result << "\n";

    //fout.close();
    myfile.close();
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
