#include<stdio.h>

int main()

{
    int a = 0;
    printf("%d %d %d \n",a,++a,a++);
    return 0;
}

// Undefined behavior because variable 'a' is modified multiple times in the same expression without sequence points.