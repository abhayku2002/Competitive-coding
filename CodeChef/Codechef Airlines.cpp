
/*
Problem
Chef has opened a new airline. Chef has 
10
10 airplanes where each airplane has a capacity of 
�
X passengers.
On the first day itself, 
�
Y people are willing to book a seat in any one of Chef's airplanes.

Given that Chef charges 
�
Z rupees for each ticket, find the maximum amount he can earn on the first day.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of three space-separated integers 
�
,
�
,
X,Y, and 
�
Z — the capacity of each airplane, the number of people willing to book a seat in any one of Chef's airplanes on the first day, and the cost of each seat respectively.
Output Format
For each test case, output on a new line, the maximum amount Chef can earn on the first day.

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
	//your code here
	int x,y,z;
	cin>>x>>y>>z;
	int capacity = 10 *x;
	if(y<=capacity)
	    cout<<y*z<<endl;
	else{
	    cout<<capacity*z<<endl;
	}
	

}

signed main()
{
	fast;
	int t = 1;
	cin >> t;
	while(t--) code();
}
