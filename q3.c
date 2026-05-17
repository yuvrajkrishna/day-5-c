#include<stdio.h>

float force_of_attraction(int mass){
    return printf("force of attraction would be : %f",mass*9.8);
}

int main()

{
    int mass;
    printf("Enter the mass to get force of attraction : \n");
    scanf("%d",&mass);
    force_of_attraction(mass);
    return 0;
}