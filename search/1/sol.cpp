#include <bits/stdc++.h>
#include<iostream>
#include<string>
#include<vector>

using namespace std;

vector<string> split_string(string);

// Complete the maximumSum function below.
    long maximumSum(vector<long> a, long m) {

     
    //int no_subsets=pow(2,a.size());
    
    long int max_mod=0;
    long int sum=0;
    long int mod;
    long int temp=0;
    std::vector<long> sum_modulo;

    //sum_modulo.push_back(0);

    for(int i=0;i<a.size();i++)
    {
        //temp=a.at(i)%m;
        sum=sum+a.at(i);
        mod=sum%m;
        sum_modulo.push_back(mod);
        
        if(temp > max_mod)
        {
            max_mod=temp;
        }



    }

    int min_elemment_greater_than_i=0;

    for(int i=1;i<a.size();i++)
    {
        int element=sum_modulo.at(i);
        int index=0;

        for(int j=0;j<i;j++)
        {
            if(sum_modulo.at(j)>element)
            {
                if(index==0)
                {
                    min_elemment_greater_than_i=sum_modulo.at(j);
                    index=1;
                }

                else if(index==1)
                {
                    if(min_elemment_greater_than_i>sum_modulo.at(j))
                    {
                        min_elemment_greater_than_i=sum_modulo.at(j);
                    }
                }
                else
                {
                    continue;
                }


            }
        }

        mod=(sum_modulo.at(i)-min_elemment_greater_than_i+m)%m;
        if(mod>max_mod)
        {
            max_mod=mod;
        }

    }


    //cout<<"the max mod is "<<max_mod;

return max_mod;






}

int main()
{
    ifstream infile;
    infile.open("/home/shashank/Documents/hacker_rank/search/1/input/input01.txt");
    if(!infile)
    {
    	cout<<"unable to open"<<endl;
    	return 0;
    }

    ifstream outfile;
    outfile.open("/home/shashank/Documents/hacker_rank/search/1/output/output01.txt");
    //outfile.open("/home/shashank/Documents/hacker_rank/search/1/output/test_output.txt",ios::app);
    if(!outfile)
    {
        cout<<"unable to open output file"<<endl;
        return 0;
    }


    string nm_temp;
    string read_out_file;
   
    getline(infile,nm_temp);

    int num_of_querry=stoi(nm_temp);

    

    
    

    for (int j=1;j<=num_of_querry;j++)
    {

        getline(infile,nm_temp);

        vector<string> nm = split_string(nm_temp);

        int n = stoi(nm[0]);
        //cout<<j<<" "<<n<<endl;

        long m = stol(nm[1]);
        //cout<<"the correct value is "<<m<<endl;

        string a_temp_temp;
        getline(infile, a_temp_temp);
        vector<string> a_temp = split_string(a_temp_temp);
        vector<long> a(n);

        for (int i = 0; i < n; i++)
        {
            long a_item = stol(a_temp[i]);

             a[i] = a_item;

            //cout<<a[i]<<endl;
        }



        long temp=maximumSum(a,m);
        a.clear();

      //cout<<"the output computed is "<<temp<<endl;

        getline(outfile,read_out_file);
        int out = stoi(read_out_file);

        //cout<<"the real output  is "<<out<<endl;

        if(out != temp)
        {
            cout<<"the output value is "<< out <<" the computed is" << temp<<endl;
        }

    }

    //compare output 






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
