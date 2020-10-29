#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

vector<bool> child;


//initilization

std::vector<bool> convert_state_bool(std::stack<int> p1 , std::stack<int> p2 , std::stack<int> p3 ,  std::stack<int> p4,int no_of_disk);

bool move_possible(std::stack<int> peg1 , std::stack<int> peg2 )
{
    if( peg1.size() >0 )
    {
        if(peg2.size()==0)
        {
            return true;
        }
        else if(peg2.size()!=0 && peg2.top()> peg1.top())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else{
        return false;
    }
}



bool move_per_peg( vector<bool> state,int no_of_disk,int index_peg_1,int index_peg_2)
{

    bool return_value;
    std::stack<int> peg1; 
    std::stack<int> peg2; 
    std::stack<int> peg3;
    std::stack<int> peg4;

 
    
        vector<bool>::iterator lower_bound=state.begin();
        vector<bool>::iterator upper_bound=state.begin()+(no_of_disk);  
        std::vector<bool> temp;
        std::vector<bool>::iterator temp_begin=temp.begin();
        //copy(lower_bound,upper_bound,back_inserter(temp));
        temp.assign(lower_bound,upper_bound);
        for(int j=temp.size()-1;j>=0;j--)
        {
            if(temp[j]==true)
            {
                peg1.push(j+1);
            }
        }


        temp.clear();

        
        lower_bound=upper_bound;
        upper_bound=lower_bound+no_of_disk;
        //copy(lower_bound,upper_bound,back_inserter(temp));
        temp.assign(lower_bound,upper_bound);
        for(int j=temp.size()-1;j>=0;j--)
        {
            if(temp[j]==true)
            {
                peg2.push(j+1);
            }
        }



        temp.clear();

        
        lower_bound=upper_bound;
        upper_bound=lower_bound+no_of_disk;
        //copy(lower_bound,upper_bound,back_inserter(temp));
        temp.assign(lower_bound,upper_bound);
        for(int j=temp.size()-1;j>=0;j--)
        {
            if(temp[j]==true)
            {
                peg3.push(j+1);
            }
        }


         temp.clear();

        lower_bound=upper_bound;
        upper_bound=lower_bound+no_of_disk;
        //copy(lower_bound,upper_bound,back_inserter(temp));
        temp.assign(lower_bound,upper_bound);
        for(int j=temp.size()-1;j>=0;j--)
        {
            if(temp[j]==true)
            {
                peg4.push(j+1);
            }
        }






    


    //move peg1

    std::stack<int> move_stack1;
    std::stack<int> move_stack2; 
    

    
    if(index_peg_1==1 && index_peg_2 ==2)
    {
        move_stack1=peg1;
        move_stack2=peg2;
        if(move_possible(move_stack1,move_stack2))
        {
           int val= move_stack1.top();
           move_stack1.pop();
           move_stack2.push(val);
           child.clear();
           child=convert_state_bool(move_stack1,move_stack2,peg3,peg4,no_of_disk);
           return 1;
           //move_stack1.clear();
           //move_stack2.clear();       
        }
        else
        {
            return 0;
        }
    }




    else if(index_peg_1 ==1 && index_peg_2==3)
    {
        move_stack1=peg1;
        move_stack2=peg3;
        if(move_possible(move_stack1,move_stack2))
        {
           int val= move_stack1.top();
           move_stack1.pop();
           move_stack2.push(val);
           child.clear();
           child=convert_state_bool(move_stack1,peg2,move_stack2,peg4,no_of_disk);
           //return 1;
           return_value=1;
            //move_stack1.clear();
           //move_stack2.clear();  
           
        }
        else
        {
            return_value=0;
        }
    } 



    else if(index_peg_1 == 1 && index_peg_2 ==4)
    {
        move_stack1=peg1;
        move_stack2=peg4;
        if(move_possible(move_stack1,move_stack2))
        {
           int val= move_stack1.top();
           move_stack1.pop();
           move_stack2.push(val);
           child.clear();
           child=convert_state_bool(move_stack1,peg2,peg3,move_stack2,no_of_disk);
           return_value=1;
           //move_stack1.clear();
           //move_stack2.clear();  
           
        }
        else
        {
            return_value=0;
        }
    }

    //stat peg 2

    



    else if(index_peg_1==2 && index_peg_2==1 )
    {
        move_stack1=peg2;
        move_stack2=peg1;
        if(move_possible(move_stack1,move_stack2))
        {
           int val= move_stack1.top();
           move_stack1.pop();
           move_stack2.push(val);
           child.clear();
           child=convert_state_bool(move_stack2,move_stack1,peg3,peg4,no_of_disk);
           return_value=1;
           //move_stack1.clear();
           //move_stack2.clear();       
        }
        else
        {
            return_value=0;
        }
    }




    else if(index_peg_1==2 && index_peg_2==3)
    {
        move_stack1=peg2;
        move_stack2=peg3;
        if(move_possible(move_stack1,move_stack2))
        {
           int val= move_stack1.top();
           move_stack1.pop();
           move_stack2.push(val);
           child.clear();
           child=convert_state_bool(peg1,move_stack1,move_stack2,peg4,no_of_disk);
           return_value=1;
            //move_stack1.clear();
           //move_stack2.clear();  
           
        }
        else
        {
            return_value=0;
        }
    }



    else if(index_peg_1==2 && index_peg_2==4)
    {
        move_stack1=peg2;
        move_stack2=peg4;
        if(move_possible(move_stack1,move_stack2))
        {
           int val= move_stack1.top();
           move_stack1.pop();
           move_stack2.push(val);
           child.clear();
           child=convert_state_bool(peg1,move_stack1,peg3,move_stack2,no_of_disk);
           return_value=1;
           //move_stack1.clear();
           //move_stack2.clear();  
        }
        else
        {
            return_value= 0;
        }
    }


//start peg 3


    else if(index_peg_1==3 && index_peg_2==1)
    {
        move_stack1=peg3;
        move_stack2=peg1;
        if(move_possible(move_stack1,move_stack2))
        {
           int val= move_stack1.top();
           move_stack1.pop();
           move_stack2.push(val);
           child.clear();
           child=convert_state_bool(move_stack2,peg2,move_stack1,peg4,no_of_disk);
           return_value= 1;
           //move_stack1.clear();
           //move_stack2.clear();       
        }
        else
        {
            return_value=0;
        }
    }




    else if(index_peg_1==3 && index_peg_2==2)
    {
        move_stack1=peg3;
        move_stack2=peg2;
        if(move_possible(move_stack1,move_stack2))
        {
           int val= move_stack1.top();
           move_stack1.pop();
           move_stack2.push(val);
           child.clear();
           child=convert_state_bool(peg1,move_stack2,move_stack1,peg4,no_of_disk);
           return_value=1;
           //move_stack1.clear();
           //move_stack2.clear();  
           
        }
        else
        {
            return_value=0;
        }
    }



    else if(index_peg_1==3 && index_peg_2==4)
    {
        move_stack1=peg3;
        move_stack2=peg4;
        if(move_possible(move_stack1,move_stack2))
        {
           int val= move_stack1.top();
           move_stack1.pop();
           move_stack2.push(val);
           child.clear();
           child=convert_state_bool(peg1,peg2,move_stack1,move_stack2,no_of_disk);
           return_value= 1;
           // move_stack1.clear();
           //move_stack2.clear();  
           
        }
        else
        {
            return_value=0;
        }
    }

//start peg4
    else if(index_peg_1 == 4 && index_peg_2==1)
    {
        move_stack1=peg4;
        move_stack2=peg1;
        if(move_possible(move_stack1,move_stack2))
        {
           int val= move_stack1.top();
           move_stack1.pop();
           move_stack2.push(val);
           child.clear();
           child=convert_state_bool(move_stack2,peg2,peg3,move_stack1,no_of_disk);
           return_value= 1;
           //move_stack1.clear();
           //move_stack2.clear();       
        }
        else
        {
            return_value=0;
        }
    }


    else if(index_peg_1==4 && index_peg_2==2)
    {
        move_stack1=peg4;
        move_stack2=peg2;
        if(move_possible(move_stack1,move_stack2))
        {
           int val= move_stack1.top();
           move_stack1.pop();
           move_stack2.push(val);
           child.clear();
           child=convert_state_bool(peg1,move_stack2,peg3,move_stack1,no_of_disk);
           return_value= 1;
            //move_stack1.clear();
           //move_stack2.clear();  
           
        }
        else
        {
            return_value= 0;
        }
    }


    else if(index_peg_1==4 && index_peg_2 ==3)
    {
        move_stack1=peg4;
        move_stack2=peg3;
        if(move_possible(move_stack1,move_stack2))
        {
           int val= move_stack1.top();
           move_stack1.pop();
           move_stack2.push(val);
           child.clear();
           child=convert_state_bool(peg1,peg2,move_stack2,move_stack1,no_of_disk);
           return_value= 1;
           //move_stack1.clear();
           //move_stack2.clear();  
           
        }
        else
        {
            return_value= 0;
        }
    }
    else
    {
        cout<<"error in program";
    }

    return return_value;


}

std::vector<bool> convert_state_bool(std::stack<int> p1 , std::stack<int> p2 , std::stack<int> p3 ,  std::stack<int> p4,int no_of_disk)
{   
    std::vector<bool> state(no_of_disk*4,false);
    int size_p1=p1.size();
    for(int i=0;i< size_p1;i++)
    {
        int top_element=p1.top()-1;
        state[top_element]=1;
        p1.pop();
    }


    int size_p2=p2.size();
    for(int i=0;i< size_p2;i++)
    {
        int top_element=no_of_disk+p2.top()-1;
        state[top_element]=1;
        p2.pop();
    }

    int size_p3=p3.size();
    for(int i=0;i< size_p3;i++)
    {
        int top_element=2*no_of_disk+p3.top()-1;
        state[top_element]=1;
        p3.pop();
    }

    int size_p4=p4.size();

    for(int i=0;i< size_p4;i++)
    {
        int top_element=3*no_of_disk+p4.top()-1;
        state[top_element]=1;
        p4.pop();
    }

    return state;

}

//int convert_to_int(vector::<bool> state)
//{
//    long int i = accumulate(state.rbegin(), state.rend(), 0, [](int x, int y) { return (x << 1) + y; });
//    return i;
//}

//int state_to_pegs()




bool children_contain_end_point(vector<vector<bool>>children,std::vector<bool> end_state)
{
    bool contains_results;
    if(children.size()==0)
    {
        contains_results=false;
        
    }
    else
    {
        for(int i=0;i<children.size();i++)
        {
            std::vector<bool> temp=children.at(i);
            if(temp==end_state)
            {
                contains_results= true;
                break;
            }
            if(i==children.size()-1 && temp!=end_state)
            {
                contains_results= false;
            }
        }
    }
    return contains_results;
}

    


int num_moves(int no_of_disk,std::vector<int> input_state)
{
    const int no_of_pegs=4;
    std::stack<int> peg1; 
    std::stack<int> peg2; 
    std::stack<int> peg3;
    std::stack<int> peg4;



    std::stack<int> end_peg1; 
    std::stack<int> end_peg2; 
    std::stack<int> end_peg3;
    std::stack<int> end_peg4;



    for(int k=input_state.size(); k>0 ;k--)
    {

        int val=input_state.at(k-1);
        if(val ==1)
        {
            end_peg1.push(k);
        }

        if(val ==2)
        {
            end_peg2.push(k);
        }

        if(val ==3)
        {
            end_peg3.push(k);
        }

        if(val ==4)
        {
            end_peg4.push(k);
        }

    }





    int state_index =1;
    for(int i=no_of_disk;i>=1;i--)
    {
        peg1.push(i);
    }

    std::vector<bool> initial_state=convert_state_bool(peg1,peg2,peg3,peg4,no_of_disk);
    std::vector<bool> end_state=convert_state_bool(end_peg1,end_peg2,end_peg3,end_peg4,no_of_disk);


    std::vector<vector<bool>> parents;
    std::vector<std::vector<bool>> children;
    std::vector<bool> childs;
    parents.push_back(initial_state);
    bool check=(children_contain_end_point(children,end_state));
    int index=0;

    while(check==false)
    {
        for(int i=0;i<parents.size();i++)
        {
            for(int j=1;j<=4;j++)
            {
                for(int k=1;k<=4;k++)
                {
                    if(j!=k)
                    {
                        bool moved = move_per_peg( parents.at(i),no_of_disk,j,k);
                        if(moved==true)
                        {
                            children.push_back(child);
                        }

                    }
                }
            }
        }
        check=(children_contain_end_point(children,end_state));
        parents.clear();
        parents=children;
        children.clear();
        index++;
    }        

    cout<<index<<endl;

    return index;


    


}



int main()
{

    ifstream myfile;
    myfile.open("/home/shashank/Documents/hacker_rank/search/gena_playing_hanoi/input/input00.txt");
    if(!myfile)
    {
        cout<<"unable to open"<<endl;
        return 0;
    }
    int N;
    string num;
    getline(myfile, num);
    N=stoi(num);
    string a_temp_temp;
    getline(myfile, a_temp_temp);

    vector<string> a_temp = split_string(a_temp_temp);

    vector<int> a(N);

    for (int i = 0; i < N; i++) {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }
    num_moves(N,a);


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
