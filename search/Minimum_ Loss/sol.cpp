#include <bits/stdc++.h>

using namespace std;


bool sortbyfirst(const pair<long int,int> &a,const pair<long int,int> &b)
{
    return (a.first > b.first);
}

vector<string> split_string(string);

// Complete the minimumLoss function below.
 long int minimumLoss(vector<long> price) {


    int first_loss=0;
    long int min_loss;
    vector<pair<long int,int>> price_index;
    for(int i=0;i<price.size();i++)
    {
        pair<long int,int> temp;
        temp.first=price.at(i);
        temp.second=i;
        price_index.push_back(temp);
    }

    sort(price_index.begin(),price_index.end(),sortbyfirst);

    for(int i=0;i<price_index.size()-1;i++)
    {
         pair<long int,int> temp=price_index.at(i);
         pair<long int,int> temp_next=price_index.at(i+1);
        if((temp_next.second > temp.second) && (temp.first > temp_next.first))
        {
            long int loss=temp.first-temp_next.first;
            if(first_loss==0)
            {
                min_loss=loss;
                first_loss=1;
            }
            else
            {
                min_loss=min(loss,min_loss);
            }    

        }

    }

    if(first_loss==0)
    {
        min_loss=0;
    }


    cout<<"the ans is"<<min_loss;
    return min_loss;

}

int main()
{
    ifstream infile;
    infile.open("/home/shashank/Documents/hacker_rank/search/Minimum_ Loss/input/input15.txt");
    if(!infile)
    {
        cout<<"unable to open"<<endl;
        return 0;
    }

    string num;

    getline(infile, num);

    int n=stoi(num);
    
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string price_temp_temp;
    getline(infile, price_temp_temp);

    vector<string> price_temp = split_string(price_temp_temp);

    vector<long> price(n);

    for (int i = 0; i < n; i++) {
        long price_item = stol(price_temp[i]);

        price[i] = price_item;
    }

    long int result = minimumLoss(price);
    cout<<result<<endl;
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

