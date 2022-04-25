#include<stdio.h>

int main() {
    int num1,num2,add,sub,mul,mod;
    float div;
    scanf("%d %d",&num1,&num2);
    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    mod = num1 % num2;
    div = (float) num1 / num2;
    printf("Sumation : %d\nsubtraction : %d\nmultiplication : %d\ndivision : %.2f\nmodulation : %d",add,sub,mul,div,mod);
}