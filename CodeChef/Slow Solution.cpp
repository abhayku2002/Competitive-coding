
/*
Problem
Chef is trying to solve a problem having 
�
T test cases, where, for each test case he is given a single integer 
�
N.

Chef has an algorithm which takes exactly 
�
2
N 
2
  iterations for a test case with value 
�
N.
*/
#include<bits/stdc++.h>
using namespace std;

void solution(){
	int maxT,maxN,sumN;
	cin>>maxT>>maxN>>sumN;
	int T = sumN/maxN;
	int R = sumN%maxN;
	if(T<maxT)
		cout<<T*maxN*maxN + R*R <<endl;
	else
		cout<<maxT*maxN*maxN<<endl;
	
}	


int main(){
	int t;
	cin>>t;
	while(t--){
		solution();
	}
	return 0;
}
