
/*
Problem
https://www.codechef.com/problems/JERRYCHASE

In a classic chase, Tom is running after Jerry as Jerry has eaten Tom's favourite food.

Jerry is running at a speed of 
�
X metres per second while Tom is chasing him at a speed of 
�
Y metres per second. Determine whether Tom will be able to catch Jerry.

Note that initially Jerry is not at the same position as Tom.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of two space-separated integers 
�
X and 
�
Y — the speeds of Jerry and Tom respectively.
Output Format
For each test case, output on a new line, YES, if Tom will be able to catch Jerry. Otherwise, output NO.

You can print each character in uppercase or lowercase. For example NO, no, No, and nO are all considered the same.
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
	int x,y;
	cin>>x>>y;
	if(y>x)
	    cout<<"YES"<<endl;
	else{
	    cout<<"NO"<<endl;
	}
	

}

signed main()
{
	fast;
	int t = 1;
	cin >> t;
	while(t--) code();
}
