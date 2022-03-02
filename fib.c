
#include <stdio.h>
int fibonacci(int num);
int main()
{
   int num;
   printf("enter number:");
   scanf("%d",&num);
   printf("the fibonacci series is:");
   fibonacci(num);
} 
int fibonacci(int num){
    int a=0,b=1,c;//0 1 1 2 3
    for(int i=0;i<num;i++){
        printf("%d\n",a);
        c=a+b;//1
        a=b;//1
        b=c;//1
    }
}
