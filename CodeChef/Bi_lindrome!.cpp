
/*
Problem
You are given a string 
�
S of length 
�
N.

Your task is to delete a subsequence of maximum length from the string, such that, after concatenating the remaining parts of the string, it becomes a palindrome of length greater than 
1
1.

If this is possible, print the maximum length of the subsequence that can be deleted. Otherwise, print 
−
1
−1.

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of 
2
2 lines of input:
The first line consists the a single integer 
�
N - the length of string 
�
S.
The second line contains string 
�
S, consisting of lowercase english alphabets.
Output Format
For each test case, if it is possible to delete a subsequence under the given conditions, print a single integer, denoting the maximum length of the subsequence that can be deleted. Otherwise, print 
−
1
−1.
*/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void solution(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    //map<char,int> mp;
    for(int i=0;i<n;i++)
        s[i]++;
        if(s[i]>=2){
            cout<<n-2<<endl;
            return ; 
            
        }
    cout<<-1<<endl;       
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solution();
	}
	
	return 0;
}

