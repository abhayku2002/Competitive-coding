
/*
https://www.codechef.com/LP1TO201/problems/IMDB

Problem
Read problem statements in Russian
Chef has been searching for a good motivational movie that he can watch during his exam time. His hard disk has 
�
X GB of space remaining. His friend has 
�
N movies represented with 
(
�
�
,
�
�
)
(S 
i
​
 ,R 
i
​
 ) representing (space required, IMDB rating). Help Chef choose the single best movie (highest IMDB rating) that can fit in his hard disk.

Input
The first line of the input contains a single integer 
�
T denoting the number of test cases. The description of 
�
T test cases follows.
The first line of each test case contains two space-separated integers 
�
N and 
�
X.
�
N lines follow. For each valid 
�
i, the 
�
i-th of these lines contains two space-separated integers 
�
�
S 
i
​
  and 
�
�
R 
i
​
 .
Output
For each test case, print a single line containing one integer - the highest rating of an IMDB movie which Chef can store in his hard disk.
*/
#include <iostream>
using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
	fast;
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,ans=0;
	    cin>>n>>x; 
	    for(int i=0; i<n; i++)
	    {
	        int s,r;
	        cin>>s>>r;
	        if(s<=x)
	        {
	            ans = max(ans,r);
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
