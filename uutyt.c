#include <stdio.h>
 int main()
 {
 int x1,x2,i,temp,n,r;
 printf("Enter two numbers for intervals ");
 scanf("%d %d", &x1,&x2);
 printf("Armstrong numbers given intervals",x1,x2);
 for(i=x1+1;i<x2;++i)
{
 temp=i;
 n=0;
 while(temp!=0)
 {
 r=(temp%10);
 n+=r*r*r;
 temp/=10;
  }
  if(i==n)
 {
 printf("\n%d ",i);
 }
 }
 return 0;
 }
