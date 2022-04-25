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
    
    
    if(num1 > num2) {
        printf("%d is greater than %d\n",num1,num2);
    } else if (num2 > num1){
        printf("%d is greater than %d\n",num2,num1);
    } else {
        printf("%d is equal to %d\n",num1,num2);
    }
    
    printf("Using Inrement operator on %d : %d\n",num1,num1++);
    printf("Using Decrement operator on %d : %d\n",num2, num2--);
    
    printf("Bitwise & operator : %d\n",num1 & num2);
    printf("Bitwise | operator : %d\n",num1 | num2);
    printf("Bitwise ~ operator : %d\n",~(num1));
    
    return 0;
}
