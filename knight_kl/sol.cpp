#include <bits/stdc++.h>

using namespace std;

// Complete the knightlOnAChessboard function below.


vector<pair<int,int> > move(int index1,int index2,int no_of_squares)
{
    
    std::vector<pair<int,int> > valid_moves;
    const int no_of_moves=16;

    int arr_possible_move[no_of_moves]={2,1,2,-1,-2,1,-2,-1,1,2,1,-2,-1,2,-1,-2};
    //check move is valid

    for(int i=0;i < no_of_moves; i=i+2)
    {
        pair<int,int> move;

        move.first=index1+arr_possible_move[i];
        move.second=index2+arr_possible_move[i+1];

        if(move.first > no_of_squares-1 || move.second > no_of_squares-1 || move.first < 0 || move.second < 0) //indexing from 0
        {
            continue;
        }
        else
        {
            valid_moves.push_back(move);
        }

    }

    return valid_moves;
}




vector<vector<int>>  knightlOnAChessboard(int n) {


    // indexes are in row majaor order


    const int no_of_nodes=n*n;
    
    vector<vector<int>> weights(no_of_nodes,vector<int> (no_of_nodes,999999));

    //vector<pair<int,int> > test_moves=move(2,2,5);

    for(int i=0;i< n;i++)
    {
        for(int j=0;j<n;j++)
        {
            std::vector<pair<int,int> > valid_moves =move(i,j,n);
            for(int k=0;k<valid_moves.size();k++)
            {
                 pair<int,int> move;
                 move=valid_moves.at(k);
                 int convert_to_index=move.first*n+move.second;
                 weights[i*n+j][convert_to_index]=1;
            }
        }

    }


    for(int i=0;i<no_of_nodes;i++)
    {
        weights[i][i]=0;
    }

    
    //implementing ford warsherll algo

    for(int k=0;k< no_of_nodes ;k++)
    {

        for(int i=0; i< no_of_nodes;i++)
        {
            for(int j=0;j< no_of_nodes;j++)
            {
                 
                  
                    weights[i][j] = min(weights[i][j],weights[i][k] + weights[k][j]);
                  
            }

        }
    }

    cout<<"break_pt"<<endl;

    return weights;


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n=5;
    //cin >> n;
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');

    //vector<vector<int>>
    knightlOnAChessboard(n);
    return 0;
}
