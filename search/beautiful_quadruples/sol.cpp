#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);


/*
 * Complete the beautifulQuadruples function below.
 */






int beautifulQuadruples(int a, int b, int c, int d) {
    std::vector<int> input;
    input.push_back(a);
    input.push_back(b);
    input.push_back(c);
    input.push_back(d);

    sort(input.begin(), input.end());

    int in_order_a=input.at(0);
    int in_order_b=input.at(1);
    int in_order_c=input.at(2);
    int in_order_d=input.at(3);

    //TODO form a look_up_table
    int arr_xor[in_order_d+1][in_order_d+1];
    for(int i=0;i<=in_order_d;i++)
    {
        for(int j=0;j<=in_order_d;j++)
        {
            arr_xor[i][j]=i^j;
        }
    }






    pair<int,int> temp_pair_for_pushback;
    std::vector<pair<int,int> > pair_a_pair_b;
    std::vector<int> xor_value_first_pair;
    std::vector<int> b_index;


    for(int i=1;i<=in_order_a;i++)
    {
        for(int j=i;j<=in_order_b;j++)
        {
            temp_pair_for_pushback.first=i;
            temp_pair_for_pushback.second=j;
            pair_a_pair_b.push_back(temp_pair_for_pushback);
            xor_value_first_pair.push_back(arr_xor[i][j]);
            b_index.push_back(j);
            
        }        
    }



    std::vector<pair<int,int> > pair_c_pair_d;
    std::vector<int> xor_value_second_pair;
    std::vector<int> c_index;





    for(int i=1;i<=in_order_c;i++)
    {
        for(int j=i;j<=in_order_d;j++)
        {
            temp_pair_for_pushback.first=i;
            temp_pair_for_pushback.second=j;
            pair_c_pair_d.push_back(temp_pair_for_pushback);
            xor_value_second_pair.push_back(arr_xor[i][j]);
            c_index.push_back(i);

        }
    }


    int count=0;

    std::vector<int> quad;
    std::vector<std::vector<int> > valid_pairs;

    for(int i=0;i<pair_a_pair_b.size();i++)
    {
        int b_corresponding_value=b_index.at(i);
        std::vector<int>::iterator iter;
        iter=find(c_index.begin(),c_index.end(),b_corresponding_value);
        int index=iter-c_index.begin();
        
        //count=count+pair_a_pair_b.size()-b_corresponding_value;
        for(int j=index;j<pair_c_pair_d.size();j++)
        {
            if(xor_value_first_pair[i]!=xor_value_second_pair[j])
            {
                count++;
                pair<int,int> temp_pair1=pair_a_pair_b.at(i);
                pair<int,int> temp_pair2=pair_c_pair_d.at(j);
                quad.push_back(temp_pair1.first);
                quad.push_back(temp_pair1.second);
                quad.push_back(temp_pair2.first);
                quad.push_back(temp_pair2.second);
                valid_pairs.push_back(quad);
                quad.clear();
            }

        }


    }






   cout<<"the value is"<<count<<endl;

    return count ;


}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    ifstream MyFile;
    MyFile.open("/home/shashank/Documents/hacker_rank/search/beautiful_quadruples/input/input00.txt");

    string abcd_temp;
    getline(MyFile, abcd_temp);

    vector<string> abcd = split_string(abcd_temp);

    int a = stoi(abcd[0]);
  
    int b = stoi(abcd[1]);

    int c = stoi(abcd[2]);

    int d = stoi(abcd[3]);

    int result = beautifulQuadruples(a, b, c, d);
    //int result = beautifulQuadruples(2, 3, 4, 5);

    //fout << result << "\n";

    //fout.close();

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
