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
    long int temp;
    std::vector<long> sum_modulo;

    

    for(int i=0;i<a.size();i++)
    {
        temp=a.at(i)%m;
        sum=sum+temp;
        mod=sum%m;
        sum_modulo.push_back(mod);
        
        if(temp > max_mod)
        {
            max_mod=temp;
        }



    }


    for(int i=0;i<a.size();i++)
    {
        for(int j=i-1;j>0;j--)
        {
            mod=(sum_modulo.at(i)-sum_modulo.at(j)+m)%m;
            if(mod>max_mod)
            {
                max_mod=mod;
            }
        }
        if(max_mod<sum_modulo.at(i))
        {
            max_mod=sum_modulo.at(i);
        }
    }


    cout<<"the max mod is "<<max_mod;

return max_mod;






}

int main()
{
    ifstream infile;
    infile.open("/home/shashank/Documents/1/input/input18.txt");
    if(!infile)
    {
    	cout<<"unable to open"<<endl;
    	return 0;
    }

    string nm_temp;
   
    getline(infile,nm_temp);
    getline(infile,nm_temp);

    vector<string> nm = split_string(nm_temp);

    int n = stoi(nm[0]);
    cout<<n<<endl;

    long m = stol(nm[1]);
    cout<<m<<endl;

    string a_temp_temp;
    getline(infile, a_temp_temp);

    vector<string> a_temp = split_string(a_temp_temp);

    vector<long> a(n);

    for (int i = 0; i < n; i++)
    {
        long a_item = stol(a_temp[i]);

         a[i] = a_item;

        cout<<a[i]<<endl;
    }


    maximumSum(a,m);

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
