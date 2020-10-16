#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
int width;
int lenght;

// Complete the countLuck function below.]
std::vector<int> connected(vector<vector<int>> arr_matrix, int index_r, int index_c) 
{
    int arr_check_index[8]={1,0,-1,0,0,1,0,-1};
    int rows=arr_matrix.size();
    int col=arr_matrix[0].size();
    vector<int> connected;


    for(int i=0;i<8;i=i+2)
    {
        int index_i=index_r+arr_check_index[i];
        int index_j=index_c+arr_check_index[i+1];
        if(index_i >= rows || index_j >= col || index_i < 0 || index_j < 0)
        {
            continue;
        }
        else
        {
            if(arr_matrix[index_i][index_j]==1)
            {

                int index_row_order=index_i*col+index_j;
                connected.push_back(index_row_order);
            }
        }

    }
    return connected;
}





string countLuck(vector<string> matrix, int k) {

    int goal;
    int start_point;
    int matrix_width=(matrix[0]).length();
    

    int matrix_length=matrix.size();
    

    vector<vector<int>> arr_matrix(matrix_length);

    for (int i=0;i<matrix_length;i++)
    {
        arr_matrix[i].resize(matrix_width);
        string s=matrix.at(i);
        for (int j=0;j<matrix_width;j++)
        {
            char temp=s.at(j);
            if(temp == 'X')
            {
                arr_matrix[i][j]=0;
            }
            else if(temp == '.')
            {
                arr_matrix[i][j]=1;
            }
            else if(temp == 'M')
            {
                arr_matrix[i][j]=1;
                start_point=(i)*matrix_width+j;
            }
            else if(temp == '*')
            {
                arr_matrix[i][j]=1;
                goal=(i)*matrix_width+j;
            }
            else
            {
                continue;
            }
        }
    }

    int num_nodes=0;
    unordered_map<int,vector<int>> graph;

    for(int i=0;i<matrix_length;i++)
    {
        for(int j=0;j<matrix_width;j++)
        {
            int index=i*matrix_width+j;
            if(arr_matrix[i][j]==1)
            {
                
                graph[index]=connected(arr_matrix,i,j);
                num_nodes++;
            }

        }

    }


    // BFS here

    vector<pair<int,int>> parent_child;
    std::vector<int > parent;
    std::vector<int> child;     
    int start_node=start_point;     
    vector<int> frontier;
    vector<int> visited_node;
    vector<int> next;


    frontier.push_back(start_node);
    visited_node.push_back(start_node);
        while (frontier.size() != 0)
            {
                for(int i=0;i<frontier.size();i++)
                {
                    std::vector<int> adj_edges=graph[frontier.at(i)];
                    for(int j=0;j<adj_edges.size();j++)
                    {

                        std::vector<int>::iterator itr ;
                        itr=find(visited_node.begin(),visited_node.end(),adj_edges.at(j));
                        if(itr == visited_node.end())
                        {
                            parent_child.push_back(make_pair(frontier.at(i),adj_edges.at(j)));
                            parent.push_back(frontier.at(i));
                            child.push_back(adj_edges.at(j));
                            next.push_back(adj_edges.at(j));
                            visited_node.push_back(adj_edges.at(j));
                           
                        }



                    }


                    
                                     

                }

                std::vector<int>::iterator itr ;
                itr=find(next.begin(),next.end(),goal);
                if(itr != next.end())
                {
                    break;
                }
                       
            frontier=next;
            next.clear();

            }
                
        

    

 // traverse back and find fork
    //for (int i=parent_child.size()-1 ; parent_child < 0 ; i--)
    //{

    //}
        int node_to_find=goal;
        int count_wand=0;    
        for(int i=0;i<parent_child.size();i++)
        {
            std::vector<int >::iterator find_child;
            find_child=find(child.begin(),child.end(),node_to_find);
            int corresponding_parent=parent.at(find_child-child.begin());
            int num_adj_nodes_parent=graph[corresponding_parent].size();
            if(num_adj_nodes_parent > 2 && corresponding_parent!=start_node)
            {
                count_wand=count_wand+1;
            }
            if(num_adj_nodes_parent > 1 && corresponding_parent==start_node)
            {
                count_wand=count_wand+1;
            }


            if(corresponding_parent==start_node)
            {
                break;
            }
            node_to_find=corresponding_parent;



        }

    if(count_wand == k)
    {
        return "Impressed";
    }    
    else
    {
        return "Oops!";
    }

   
    


}

int main()
{
    ifstream myfile;
    myfile.open("/home/shashank/Documents/hacker_rank/search/count_luck/input/input07.txt");
    if(!myfile)
    {
        cout<<"unable to open"<<endl;
        return 0;
    }

    
    string s;
    getline(myfile,s);
    int t=stoi(s);
    //cin >> t;
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string nm_temp;
        getline(myfile, nm_temp);

        vector<string> nm = split_string(nm_temp);

        int n = stoi(nm[0]);

        int m = stoi(nm[1]);

        vector<string> matrix(n);

        for (int i = 0; i < n; i++) {
            string matrix_item;
            getline(myfile, matrix_item);

            matrix[i] = matrix_item;
        }

        
        getline(myfile,s);
        //cin.ignore(numeric_limits<streamsize>::max(), '\n');
        int k=stoi(s);
        string result = countLuck(matrix, k);

        //fout << result << "\n";
    }

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

