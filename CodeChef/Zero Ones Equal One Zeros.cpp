
/*
https://www.codechef.com/problems/ZOOZ

Problem
Kulyash believes in equality.
Given an integer 
�
N, output a binary string of length 
�
N such that:

The count of 
01
01 subsequences in the string is equal to the count of 
10
10 subsequences;
The string has at least one occurrence of 
0
0 as well as 
1
1.
If multiple such strings exist, print any. Also, it is guaranteed that corresponding to the given input, an answer always exists.

Input Format
First line will contain 
�
T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, an integer 
�
N - the length of the binary string.
Output Format
For each test case, output any binary string of length 
�
N satisfying the given conditions.

*/

#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

template<typename... T>
void see(T&... args) { ((cin >> args), ...);}
template<typename... T>
void put(T&&... args) { ((cout << args << " "), ...);}
template<typename... T>
void putl(T&&... args) { ((cout << args << " "), ...); cout<<'\n';}

#define int long long
#define ll long long
#define all(x) x.begin(),x.end()
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pii>
#define pb push_back

#define rep(i,a,b) for(int i=a; i<b; ++i)
#define rev(i,a,b) for(int i=a; i>b; --i)
#define seea(a,x,y) for(int i=x;i<y;i++){cin>>a[i];}
#define seev(v,n) for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}

const ll inf = INT_MAX;
const ll mod = 1000000007;

void code()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	    if(i==0 || i==n-1)
	        cout<<"1";
	    else{
	        cout<<"0";
	    }
	    cout<<"\n";
	

}

signed main()
{
	fast;
	int t = 1;
	cin >> t;
	while(t--) code();
}
