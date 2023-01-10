
/*
Problem
You're given an integer N. Write a program to calculate the sum of all the digits of N.

Input Format
The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.

Output Format
For each test case, calculate the sum of digits of N, and display it in a new line.

Constraints
1 \leq T \leq 10001≤T≤1000
1 \leq N \leq 10000001≤N≤1000000
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum = 0;
        while(n!=0)
        {
            int r = n%10;
            sum+= r;
            n /= 10;
        }

        cout<<sum<<endl;
    }

    return 0;
}
