#include<stdio.h>
int palin(int num);
int main(){
    int num,sum=0;
    printf("enter num:");      
    scanf("%d",&num);
   if(palin(num))
    printf("palindrome");
         else
         printf("not palindrome");
       }
int palin(int num){
    int sum=0,temp=num;temp=121
    while(temp>0){//121==12==1
     sum=sum*10+temp%10;//0*10+121%10=0*10+1=1//1*10+2=12//12*10+1=121
     temp=temp/10;//121/10=12//1
    }
    return num==sum;//121==121
     
}
