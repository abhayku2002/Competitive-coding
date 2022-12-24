/*
Problem
 

Chef is fan of pairs and he likes all things that come in pairs. He even has a doll collection in which the dolls come in pairs. One day while going through his collection he found that there are odd number of dolls. Someone had stolen a doll!!!

Help chef find which type of doll is missing..

Input
The first line contains an integer T, the number of test cases.
The first line of each test case contains an integer N, the number of dolls.
The next N lines are the types of dolls that are left.

Output
For each test case, display the type of doll that doesn't have a pair, in a new line.

Constraints
1<=T<=10
1<=N<=100000 (10^5)
0<=type<=100000
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	 cin >> t; //testcases
	 while(t--){
	     
	     int n;
	     cin >> n;  // nuumber of dolls 
	     int arr[100000]; // constraints
	    // int ct[n];
	     for (int i=0; i<n; i++){
	         cin >> arr[i];
	     }
	     sort(arr,arr+n);   // sorting dunction(initial,end)
	     for(int i=0; i<n; i+=2){
	         if(arr[i]!=arr[i+1]){
	             cout<<arr[i]<<endl;   //OUTPUT 
	           break; 
	         }
	        
	     }
	     
	    
	     
	     
	 }
	return 0;
}
