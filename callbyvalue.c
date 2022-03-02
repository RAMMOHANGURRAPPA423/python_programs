
/*#include <stdio.h>
int swap(int x,int y);
int main(){
    int a=3,b=6;
    swap(a,b);
    printf("%d\n %d\n",a,b);
}
int swap(int m,int n){
   int temp=m;
   m=n;
   n=temp;
}*/
#include <stdio.h>
int swap(int x,int y);
int main(){
    int a=3,b=6;
    swap(a,b);
    printf("%d\n %d\n",a,b);
}
int swap(int m,int n){
   m=m+n;
   n=m-n;
   m=m-n;
} 
