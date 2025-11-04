//Write a recursive function to find the maximum digit in a number.
#include <stdio.h>
int maximum(int x) {
    if (x == 0)
        return 0; 
    int ld = x % 10;               
    int max_rest = maximum(x / 10); 
    if (ld > max_rest)
        return ld;
    else
        return max_rest;
}
int main() {
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);
    int result = maximum(n);
    printf("The maximum digit is: %d\n", result);

    return 0;
}
