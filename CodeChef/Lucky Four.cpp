
/*
Problem
Karan likes the number 4 very much.

Impressed by the power of this number, Karan has begun to look for occurrences of four anywhere. He has a list of T integers, for each of them he wants to calculate the number of occurrences of the digit 4 in the decimal representation. He is too busy now, so please help him.

Input Format
The first line of input consists of a single integer T, denoting the number of integers in Karan's list.

Then, there are T lines, each of them contain a single integer from the list.

Output Format
Output T lines. Each of these lines should contain the number of occurrences of the digit 4 in the respective integer from Karan's list.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        while (n != 0)
        {
            if (n % 10 == 4)
                count++;
            n = n / 10;
        }
        cout << count << endl;
    }
    return 0;
}
