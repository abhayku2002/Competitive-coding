"""

Link: https://www.codechef.com/START168D/problems/HJJ

Can You Bench
Chef goes to the gym daily and follow a progressive bench press routine. In the 
1 st set, Chef will lift 
X kilograms. For each subsequent set, you increase the weight by 
10 kilograms.

Your task is to calculate the amount of weight Chef will bench in the 
3 rd set.
"""
def weight_in_third_set(X):  
    third_set_weight1 = X + 20  
    return third_set_weight1  

X = int(input())  

 
print(weight_in_third_set(X))