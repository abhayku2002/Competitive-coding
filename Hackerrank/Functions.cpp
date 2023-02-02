/*
Functions are a bunch of statements glued together. A function is provided with zero or more arguments, and it executes the statements on it. Based on the return type, it either returns nothing (void) or something.

The syntax for a function is

return_type function_name(arg_type_1 arg_1, arg_type_2 arg_2, ...) {
    ...
    ...
    ...
    [if return_type is non void]
        return something of type `return_type`;
}
For example, a function to return the sum of four parameters can be written as

int sum_of_four(int a, int b, int c, int d) {
    int sum = 0;
    sum += a;
    sum += b;
    sum += c;
    sum += d;
    return sum;
}
Write a function int max_of_four(int a, int b, int c, int d) which returns the maximum of the four arguments it receives.

+= : Add and assignment operator. It adds the right operand to the left operand and assigns the result to the left operand.
a += b is equivalent to a = a + b;
Input Format

Input will contain four integers -  , one per line.

Output Format

Return the greatest of the four a,b,c,d integers.
PS: I/O will be automatically handled.

*/
