#include <bits/stdc++.h>

using namespace std;

// Complete the shortPalindrome function below.
int shortPalindrome(string s) {
	long int freq_letter[26]={0};
	long int freq_pair[26][26]={0};
	long int freq_triplet[26]={0};
	long int complete_palindrome[26]={0};
	long int count=0;

	long int val=long (pow(10,9))+(long) 7;

	for(long int i=0;i< s.length();i++)
	{
		char letter=s.at(i);
		int index=letter-'a';
		int triplet_index;
		int pair_index;


		
		
			if(freq_triplet[index] > 0 && i>2)
			{
				complete_palindrome[index]=(complete_palindrome[index]+freq_triplet[index])%val;
			}
			



		for(int k=0;k<26;k++)
		{
			if(freq_pair[k][index] > 0 && i>1)
			{
				freq_triplet[k]=(freq_triplet[k]+freq_pair[k][index]) % val;
			}
		}


		for(int j=0;j<26;j++)
		{
			if(freq_letter[j]>0 && i>0)
			{
				//pair_index=(j+1)*26+index;
				freq_pair[j][index]=(freq_pair[j][index]+freq_letter[j]) % val;
			}
		}

		freq_letter[index]=freq_letter[index]+1;





		
		
		//if(i>2 && freq_letter_to_complete[index] > 0)
		//{
		//	count=count + freq_letter_to_complete[index];
		//}



		


	}


	for(int mp=0;mp<26;mp++)
		{
			count=count+complete_palindrome[mp];
		}





	count=count%val;

	return count;
}

int main()
{
   ifstream myfile;
    myfile.open("/home/shashank/Documents/hacker_rank/search/shortest_palindrone/input/input34.txt");
    if(!myfile)
    {
        cout<<"unable to open"<<endl;
        return 0;
    }

    string s;
    getline(myfile, s);

    int result = shortPalindrome(s);

    cout<<result<<endl;
    //fout << result << "\n";

    //fout.close();
    myfile.close();

    return 0;
}
