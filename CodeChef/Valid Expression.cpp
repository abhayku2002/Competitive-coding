
/*
Problem
Given an integer 
�
N, find four positive distinct integers 
�
a, 
�
b, 
�
c and 
�
d such that:

1
≤
�
,
�
,
�
,
�
≤
1
0
18
1≤a,b,c,d≤10 
18
 
(
(
�
&
�
)
∣
�
)
⊕
�
=
�
((a&b)∣c)⊕d=N
Here 
&
&, 
∣
∣, and 
⊕
⊕ represent bitwise AND, OR and XOR, respectively.

If there are multiple answers, print any of them. If no answer exists, print 
−
1
−1.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of one line of input, containing a single integer 
�
N.
Output Format
For each test case, output 
−
1
−1 if there is no way to find four distinct integers to satisfy the equation.

Otherwise, print on a new line any four space-separated integers 
�
a, 
�
b, 
�
c and 
�
d that satisfy the conditions.
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
	ll n,x;
	cin>>n>>x;
	ll tot=(n+1);
	if((1-n)<=x and x<=(n+1)){
	if(x<0){
		ll ms = abs(x)+1;
		ll mul = n-ms;
		while(ms--) cout<<"-";
		while(mul--) cout<<"*";
		cout<<endl;
		return ;
	}
	if(x>0){
	    ll pl = abs(x)-1;
	    ll mul =n-pl;
	    while(pl--) cout<<"+";
	    while(mul--) cout<<"*";
	    cout<<endl;
	    return;
	}
	if(x==0){
	    
	    ll mul=(n-1);
	    while(mul--) cout<<"*";
	    cout<<"-"<<endl;
	    return;
	}
}
cout<<-1<<endl;

	

}

signed main()
{
	fast;
	int t = 1;
	cin >> t;
	while(t--) code();
}
