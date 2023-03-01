/*
Problem
There are 
2
2 stores in Chefland and both sell the same product. The first store sells the product for 
100
100 rupees whereas the second store sells it for 
200
200 rupees.

It is the holiday season and both stores have announced a special discount. The first store is providing a discount of 
�
A percent on its product and the second store is providing a discount of 
�
B percent on its product.

Chef is wondering which store is selling the product at a cheaper price after the discount has been applied. Can you help him identify the better deal?

Input Format
The first line of input will contain a single integer 
�
T, denoting the number of test cases.
Each test case consists of a single line of input containing two space-separated integers 
�
A and 
�
B denoting the discount provided by the first and second store respectively.
Output Format
For each test case, output FIRST if the first store is cheaper, SECOND if the second store is cheaper, and BOTH if both the stores are selling the product for the same price after discount.

The checker is case-insensitive so answers like FiRsT, first, and FIRST would be considered the same.
*/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,x,y;
	    cin>>a>>b;
	    x = 100 - (100/100 * a);
	    y = 200 - (200/100 * b);
	    if(x==y)
	        cout<<"BOTH"<<endl;
	    else if(x>y)
	        cout<<"SECOND"<<endl;
	    else
	        cout<<"FIRST"<<endl;
	}
	return 0;
}
