#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the minimumPasses function below.


std::vector<long int> hire_machines_workers(long int workers,long int machines,long int infrastructure)
{

    long int half_infra =infrastructure/2;

    vector<long int> machines_worker;


    if(infrastructure % 2 == 0)
    {
        workers=workers+half_infra;
        machines=machines+half_infra;
        machines_worker.push_back(machines+half_infra);
        machines_worker.push_back(workers+half_infra);

    }
    else
    {
        long long int production1=(workers+half_infra+1) * (machines+half_infra);
        long long int production2=(workers+half_infra) * (machines+half_infra+1);

        if(production1 > production2)
        {
            machines_worker.push_back(machines+half_infra);
            machines_worker.push_back(workers+half_infra+1);

        }
        else
        {
            machines_worker.push_back(machines+half_infra+1);
            machines_worker.push_back(workers+half_infra);
        }
    }

    return machines_worker;

}



long minimumPasses(long m, long w, long p, long n) {

    long long int pass=0;

    long long int candles=0;
    vector<long int> machines_worker;

    while(candles <= n)
    {
        candles+=w*m;
        pass=pass+1;

        if(candles >= n)
        {
            break;
        }
        else
        {
            if(candles < p)
            {
                continue;
            }
            else
            {
                long int infra_proc=candles/p;
                machines_worker=hire_machines_workers(w,m,infra_proc);
                candles=candles % p;
                m=machines_worker.at(0);
                w=machines_worker.at(1);
                
            }
        }

        
    }


    cout<<"the pass is "<<pass<<endl;
    return pass;


}

int main()
{

    //ofstream fout(getenv("OUTPUT_PATH"));

    ifstream myfile;
    myfile.open("/home/shashank/Documents/hacker_rank/search/making_candles/input/input11.txt");


    string mwpn_temp;
    getline(myfile, mwpn_temp);

    vector<string> mwpn = split_string(mwpn_temp);

    long m = stol(mwpn[0]);

    long w = stol(mwpn[1]);

    long p = stol(mwpn[2]);

    long n = stol(mwpn[3]);

    long result = minimumPasses(m, w, p, n);

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
