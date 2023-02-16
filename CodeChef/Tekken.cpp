/*
https://www.codechef.com/START77D/problems/TEKKEN

Problem
The ultimate battle has begun in Tekken.
Each fight has two players. Let the initial health of the players be 
�
X and 
�
Y, then, after the fight, the health of both the players reduces by 
min(X,
 
Y)
min(X, Y).

Anna, Bob, and Claudio have initial health levels of 
�
,
�
,
A,B, and 
�
C respectively. Each pair of players fight exactly once.
Considering that you can schedule the fight between each pair in any order, find whether Anna can have a positive health level at the end of the battle.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
The first and only line of each test case contains three space-separated integers 
�
,
�
,
A,B, and 
�
C — the initial health levels of Anna, Bob, and Claudio respectively.
Output Format
For each test case, output on a new line, YES, if you can schedule the fight between each pair in an order such that Anna can have a positive health at the end of the battle. Otherwise, output NO.

You can print each character in uppercase or lowercase. For example NO, no, No, and nO are all considered identical.

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
	
	int a,b,c;
	cin>>a>>b>>c;
	int m= min(b,c);
	b= b-m;
	c = c-m;
	if(a>b && a>c)
	    cout<<"YES"<<endl;
	else
	    
	    cout<<"NO"<<endl;
	    

}

signed main()
{
	fast;
	int t = 1;
	cin >> t;
	while(t--) code();
}

