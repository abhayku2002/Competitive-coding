
/*
Given an array arr[] consisting of n integers, find the length of the longest subarray with positive (non zero) product.

 Example 1:

Input:
arr[] ={0, 1, -2, -3, -4} 
Output:
3
Explanation: 
The longest subarray with positive product is: 
{1, -2, -3}.Therefore, the required length is 3.
 

Example 2:

Input:
arr[]={-1, -2, 0, 1, 2}
Output:
2
Explanation:
The longest subarray with positive products 
are: {-1, -2}, {1, 2}. Therefore, the required 
length is 2.
 

Your Task: This is a function problem. You don't need to take any input, 
as it is already accomplished by the driver code. You just need to complete the function maxLength() that takes array arr[], 
and an integer n as parameters and return the length of the longest subarray where the product of all of its element is positive. 

 

Expected Time Complexity: O(n).
Expected Auxiliary Space: O(1).

 

Constraints:
 1<=n<=105
-109<=arr[i]<=109
*/

//{ Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
        // Function to return the length of the
        //longest subarray with ppositive product
        int maxLength(vector<int> &arr,int n){
           //code here
               int mxleft=0;

           int mxRight=0;

           int neg=0;

           int j=0;

           for(int i=0;i<n;i++)

           {

               if(arr[i]==0){

                   neg=0;

                   j=i+1;

                   continue;

               }

               if(arr[i]<0){

                   neg++;

               }

               if(neg%2==0){

                   mxleft=max(mxleft,i-j+1);

               }

               

           }

           j=n;

           neg=0;

           for(int i=n-1;i>=0;i--)

           {

               if(arr[i]==0){

                   neg=0;

                   j=i;

                   continue;

               }

               if(arr[i]<0){

                   neg++;

               }

               if(neg%2==0){

                   mxRight=max(mxRight,j-i);

               }

               

           }

           return max(mxRight,mxleft);

        
        }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	    }
	    Solution ob;
	    int res = ob.maxLength(arr,n);
	    cout<<res<<"\n";
	}
	return 0;
}
// } Driver Code Ends
