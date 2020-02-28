    #include<stdio.h>
    long int mult(int n);
    int main() {
        int n;
        printf("Enter a positive integer: ");
        scanf("%d",&n);
        printf("Factorial of %d = %ld", n, mult(n));
        return 0;
    }
    long int mult(int n) {
        if (n>=1)
            return n*mult(n-1);
        else
            return 1;
    }