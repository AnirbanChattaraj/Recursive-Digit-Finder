//Write a recursive function to find the minimum digit in a number.
#include <stdio.h>
int minimum(int x) {

    if (x < 10)
        return x;

    int ld = x % 10;                
    int min_rest = minimum(x / 10); 

    
    if (ld < min_rest)
        return ld;
    else
        return min_rest;
}

int main() {
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);

    int result = minimum(n);
    printf("The minimum digit is: %d\n", result);

    return 0;
}
