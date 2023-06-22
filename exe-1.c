//Write a function to find biggest of 2 numbers using if else and ternary operator???
#include<stdio.h>
int fun1(int a, int b)     //usinf if-else condition
{
    if(a>b){
        printf("%d is big\n",a);
    }else{
        printf("%d is big\n",b);
    }
}
int fun2(int a, int b)     //using ternary operator
{
    a>b?printf("%d is bigger value\n",a):printf("%d is bigger value\n",b);
}

int main()
{
    int a,b;
    printf("Enter a and b values:");
    scanf("%d %d",&a,&b);
    fun1(a,b);
    fun2(a,b);
    return 0;
}