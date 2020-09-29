#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the minimumLoss function below.
long int minimumLoss(vector<long> price) {


    long int min_loss;
    int first_index=0;

    for(int i=0;i<price.size();i++)
    {
        for(int j=i+1;j<price.size();j++)
        {
            if(price.at(i)>price.at(j))
            {
                long int loss=price.at(i)-price.at(j);
                if(first_index == 0)
                {
                    min_loss=loss;
                    first_index=1;
                }
                else
                {
                    min_loss=min(loss,min_loss);
                }
            }
        }
    }

    return min_loss;
}

int main()
{
    ifstream infile;
    infile.open("/home/shashank/Documents/hacker_rank/Minimum_ Loss/input/input00.txt");
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

