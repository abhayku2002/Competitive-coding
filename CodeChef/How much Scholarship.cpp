
/*
https://www.codechef.com/problems/ZCOSCH

Problem
The ZCO Scholarship Contest has just finished, and you finish with a rank of 
�
R. You know that Rank 
1
1 to Rank 
50
50 will get 
100
%
100% scholarship on the ZCO exam fee and Rank 
51
51 to Rank 
100
100 will get 
50
%
50% percentage scholarship on the ZCO exam fee. The rest do not get any scholarship.
What percentage of scholarship will you get ?

Input Format
Input consist of single line of input containing one integer 
�
R.
Output Format
Output a single line containing one integer — the percentage of scholarship you will get.
*/

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	if((t>=1) && (t<=50))
	    cout<<100<<endl;
	else if((t>=51) && (t<=100))
	    cout<<50<<endl;
	else
	    cout<<0<<endl;
	
	return 0;
}
