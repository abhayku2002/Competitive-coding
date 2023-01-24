/*
You and your friend are playing a game with hoops. There are 
�
N hoops (where 
�
N is odd) in a row. You jump into hoop 
1
1, and your friend jumps into hoop 
�
N. Then you jump into hoop 
2
2, and after that, your friend jumps into hoop 
�
−
1
N−1, and so on.

The process ends when someone cannot make the next jump because the hoop is occupied by the other person. Find the last hoop that will be jumped into.

Input
The first line contains an integer 
�
T, the number of test cases. Then the test cases follow.
Each test case contains a single line of input, a single integer 
�
N.
Output
For each testcase, output in a single line the answer to the problem.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,count=0;
	    cin>>n;
	    cout<<(n/2)+1<<endl;
	
	}
	return 0;
}
