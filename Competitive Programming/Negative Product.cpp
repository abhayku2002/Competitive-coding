
/*
Problem
Chef is given three numbers A, B,A,B, and CC.

He wants to find whether he can select exactly two numbers out of these such that the product of the selected numbers is negative.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of three integers A, B,A,B, and CC, the given numbers.
Output Format
For each test case, output YES if Chef can select exactly two numbers out of these such that the product of the selected numbers is negative, NO otherwise.

You may print each character in uppercase or lowercase. For example, the strings NO, no, No, and nO, are all considered identical.

Constraints
1 \leq T \leq 10001≤T≤1000
-10 \leq A, B, C \leq 10−10≤A,B,C≤10
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int p1=a*b;
        int p2=b*c;
        int p3=c*a;
        if(p1<0 || p2<0 || p3<0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
	return 0;
}
