#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'cutTheTree' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY data
 *  2. 2D_INTEGER_ARRAY edges
 */




int max_difference_fun(unordered_map<int,std::vector<int> > graph,int start_node,vector<int> data)
 {

    int sum_tree=0;

    for(int i=0;i<data.size();i++)
    {
        sum_tree=sum_tree+data.at(i);
    }

     std::vector<bool> visited_node(data.size()+1,false);
     std::vector<int> sum_children(data.size()+1,0);


    visited_node.at(start_node-1)=true;
    int max_diff=999999999;

    stack <int> s;
    s.push(start_node);
    //std::vector<int> adj_node=graph[s.top()];
    int parent=start_node;
   

     while(!s.empty())
     {

        std::vector<int> adj_node=graph[s.top()];
        //std::vector<int>::iterator itr;
        //itr=find(adj_node.begin(),adj_node.end(),parent);       
   
        
            for(int i=0;i<adj_node.size();i++)
            {
                if(visited_node.at(adj_node.at(i)-1) == false)
                {
                    parent=s.top();
                    s.push(adj_node.at(i));
                    visited_node.at(adj_node.at(i)-1)=true;
                    break;
                }
                else
                {

                    if(i==adj_node.size()-1)
                    {
                        int sum_children_nodes=0;
                        for(int j=0;j<adj_node.size();j++)
                        {

                            sum_children_nodes=sum_children_nodes+sum_children.at(adj_node.at(j)-1);
                        }
                    
                        sum_children.at(s.top()-1)=sum_children_nodes+data.at(s.top()-1);
                        int diff_node=sum_tree-2*sum_children.at(s.top());
                        max_diff=min(max_diff,abs(diff_node));
                        s.pop();
                    }
                }



            }
        
      
        


     }
    return max_diff;

     
 }





int cutTheTree(vector<int> data, vector<vector<int>> edges) {

    int num_nodes=data.size();
    unordered_map <int,std::vector<int>> graph ;

    for(int i=0;i<edges.size();i++)
    {
        std::vector<int> temp=edges.at(i);

        int first = temp.at(0);
        int second=temp.at(1);
        (graph[first]).push_back(second);
        (graph[second]).push_back(first);
               
    }
    int root=1; 

    //find tree top

  
    
      difference=max_difference_fun(graph,i ,data);
      
    //cout<<min_difference_cal_node<<endl;



    

return min_difference_cal_node;


}

int main()
{
    ifstream myfile;
    myfile.open("/home/shashank/Documents/hacker_rank/search/cut_the_tree/input/input00.txt");
    if(!myfile)
    {
        cout<<"unable to open"<<endl;
        return 0;
    }

    string n_temp;
    getline(myfile, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string data_temp_temp;
    getline(myfile, data_temp_temp);

    vector<string> data_temp = split(rtrim(data_temp_temp));

    vector<int> data(n);

    for (int i = 0; i < n; i++) {
        int data_item = stoi(data_temp[i]);

        data[i] = data_item;
    }

    vector<vector<int>> edges(n - 1);

    for (int i = 0; i < n - 1; i++) {
        edges[i].resize(2);

        string edges_row_temp_temp;
        getline(myfile, edges_row_temp_temp);

        vector<string> edges_row_temp = split(rtrim(edges_row_temp_temp));

        for (int j = 0; j < 2; j++) {
            int edges_row_item = stoi(edges_row_temp[j]);

            edges[i][j] = edges_row_item;
        }
    }

    int result = cutTheTree(data, edges);

    //fout << result << "\n";

    //fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

