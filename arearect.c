#include <stdio.h>
int area_rect(int *len,int *width);//*len is value and len is address
int main()
{
   int len=8,width=10;
  int area =area_rect(&len,&width);
  printf("%d",area);
}
int area_rect(int *len,int *width){
    int area;
    area=*len* *width;
    return area;
}
