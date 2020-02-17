#include<stdio.h>  //this program prints the prime number equal to or less than the given no.
#include<math.h>
int main(){ 
int n,factors,a;
printf("Enter the number: ");
scanf("%d",&n);
for(int i=1;i<=n;+i++){
    factors=0;
    for(int j=1;j<=i;j++){
        if(i%j==0)
        factors++;}
    if(factors==2)
    a=i;}
printf("%d ",a);
return 0;}
