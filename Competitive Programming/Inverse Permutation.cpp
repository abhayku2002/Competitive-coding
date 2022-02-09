/*
Given an array A of size n of integers in the range from 1 to n, we need to find the inverse permutation of that array.
Inverse Permutation is a permutation which you will get by inserting position of an element at the position specified by the element value in the array. For better understanding, consider the following example:
Suppose we found element 4 at position 3 in an array, then in reverse permutation, we insert 3 (position of element 4 in the array) in position 4 (element value).
#include <bits/stdc++.h>
using namespace std;

Input:
N = 5
Arr[] = {2, 3, 4, 5, 1}
Output:
5 1 2 3 4
Explanation:
As index 1 has value 2 so 1 will b 
placed at index 2, similarly 2 has
3 so 2 will be placed at index 3
similarly 3 has 4 so placed at 4,
4 has 5 so 4 placed at 5 and 5 
has 1 so placed at index 1.

Your Task:  
You don't need to read input or print anything. Your task is to complete the function inversePermutation() which takes the array Arr[] and its size N as inputs and returns the vector array after performing inverse permutation on Arr.

 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

 

Constraints:
1 ≤ N ≤ 105
1 ≤ A[i] ≤ N
Note: Array should contain unique elements and should have all elements from 1 to N

*/
vector<int> inversePermutation(int arr[], int size);

// Driver program to test above function
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        vector<int> ans = inversePermutation(arr, n);
        for (int i = 0; i < n; i++)
        	cout << ans[i] << " ";
    	cout<<endl;
    }
    return 0;
}



vector<int> inversePermutation(int arr[], int size) {
    vector<int>v(size,0);
    for(int i=0;i<size;i++){
        v[arr[i]-1]=i+1;
        
    }
    return v;
    
}
