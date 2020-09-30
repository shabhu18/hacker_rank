#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

bool compare(const pair<int,int> &p1, const pair<int,int> &p2)
{
    if(p1.first == p2.first)
    return p1.second < p2.second ;

    return p1.first < p2.first ;

}

// Complete the gridlandMetro function below.
long int gridlandMetro(int n, int m, int k, vector<vector<int>> track) {

    //condition for no track present


    long int no_of_cells=long(n)*long(m);

    if(k==0)
    {
        return long(n)*long(m);
    }

    //arranging data in unordered map

    unordered_map<int,vector<pair<long,long>>> hash_table;

    for (int i=0;i<k;i++)
    {
        vector<int> v=track.at(i);
        long int row=v.at(0);
        pair<long,long> col_pair;
        col_pair.first=v.at(1);
        col_pair.second=v.at(2);

        if(col_pair.second < col_pair.first)
        {
            long int temp =col_pair.second;
            col_pair.second=col_pair.first;
            col_pair.first=temp;
        }

        hash_table[row].push_back(col_pair);

    }


    long int count_railway_track=0;
    for(auto i=hash_table.begin(); i !=hash_table.end() ; i++)
    {
        vector<pair<long,long>> vec;

        //cout<<i->first<<endl;
        vec=i->second;
        sort(vec.begin(), vec.end(),compare) ;
        stack <long> grid;
        pair<long,long> first_pair=vec.at(0);
        grid.push(first_pair.first);
        grid.push(first_pair.second);

        for(int j=1;j<vec.size();j++)
        {
            pair<long,long> incremental_pair=vec.at(j);

            if(grid.top() >= incremental_pair.first)
            {
                if(grid.top() < incremental_pair.second)
                {
                    grid.pop();
                    grid.push(incremental_pair.second);
                }
                else
                {
                    continue;
                }
            }

            else
            {
                grid.push(incremental_pair.first);
                grid.push(incremental_pair.second);
            }

        }
        while(!grid.empty())
        {
            long int first = grid.top();
            grid.pop();
            long int second=grid.top();
            grid.pop();
            count_railway_track=count_railway_track+first-second+1;
            
        }

        
        //printf("%ld\n",no_of_cells);

        //cout<<"iteration "<<endl;


        //grid.clear();


    }


    long int lamp_post_position=(long)no_of_cells-(long)count_railway_track;
    return lamp_post_position;


}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));

    ifstream infile;
    infile.open("/home/shashank/Documents/hacker_rank/search/2/input/input06.txt");
    if(!infile)
    {
        cout<<"unable to open"<<endl;
        return 0;
    }

    string nmk_temp;

    getline(infile, nmk_temp);
    
    vector<string> nmk = split_string(nmk_temp);

    int n = stoi(nmk[0]);

    int m = stoi(nmk[1]);

    int k = stoi(nmk[2]);

    vector<vector<int>> track;
    vector<int> nth_track;
    for (int i = 0; i < k; i++) {
        getline(infile, nmk_temp);
        //cout<<nmk_temp<<endl;
        nmk = split_string(nmk_temp);

        int value;
        for (int j = 0; j < 3; j++) {
            value=stoi(nmk[j]);
            nth_track.push_back(value);
        }
        track.push_back(nth_track);
        nth_track.clear();

        //cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    long int result = gridlandMetro(n, m, k, track);

    cout << result << "\n";

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

