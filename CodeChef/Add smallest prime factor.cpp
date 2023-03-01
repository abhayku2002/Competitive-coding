
/*
Problem
Chef's current score is 
�
X. Each second, Chef will find the smallest prime factor of his score and add it to his score.

Determine the minimum time in seconds, after which his score becomes 
≥
�
≥Y.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of a single line containing two integers 
�
X and 
�
Y, the initial and required score of Chef.
Output Format
For each test case, output the minimum time in seconds, after which Chef's score becomes 
≥
�
≥Y.
*/

#include <iostream>
using namespace std;

int main() {
	
int t;
cin>>t;
while(t--)
{
	int x,y;
	cin>>x>>y;
	int prime;
	if(x%2==0){
		prime = 2;
	}
	else if(x%3==0)
	{
		prime = 3;
	}
	else{
		prime = x;
	}
	x = x +prime;
	int diff= y-x;
	int ans=diff/2;
	if(diff % 2!=0)
		ans+=1;
	cout<<ans+1<<endl;

}

	return 0;
}


