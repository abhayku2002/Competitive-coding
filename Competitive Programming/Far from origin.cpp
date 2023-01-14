
/*
Problem
Alice, Bob, and, Chef are standing on the coordinate plane. Chef is standing at the origin (coordinates (0, 0)(0,0)) while the location of Alice and Bob are (X_1, Y_1)(X 
1
​
 ,Y 
1
​
 ) and (X_2, Y_2)(X 
2
​
 ,Y 
2
​
 ) respectively.

Amongst Alice and Bob, find out who is at a farther distance from Chef or determine if both are at the same distance from Chef.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
The first and only line of each test case contains four space-separated integers X_1, Y_1, X_2,X 
1
​
 ,Y 
1
​
 ,X 
2
​
 , and Y_2Y 
2
​
  — the coordinates of Alex and Bob.
Output Format
For each test case, output on a new line:

ALEX, if Alex is at a farther distance from Chef.
BOB, if Bob is at a farther distance from Chef.
EQUAL, if both are standing at the same distance from Chef.
You may print each character in uppercase or lowercase. For example, Bob, BOB, bob, and bOB, are all considered identical.

Constraints
1 \leq T \leq 20001≤T≤2000
-1000 \leq X_1, Y_1, X_2, Y_2 \leq 1000−1000≤X 
1
​
 ,Y 
1
​
 ,X 
2
​
 ,Y 
2
​
 ≤1000
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int alex = pow(abs(a),2) + pow(abs(b),2);
        int bob  = pow(abs(c),2) + pow(abs(d),2);
        
        double d1 = sqrt(alex);
        double d2 = sqrt(bob);
        if(d1==d2){
            cout<<"EQUAL"<<endl;
        }
        else if(d1>d2){
            cout<<"ALEX"<<endl;
        }
        else{
            cout<<"BOB"<<endl;
        }
    }
	return 0;
}
