#include<stdio.h> 
void main() 
{ 
int n; 
printf("Enter a Number -- "); 
scanf("%d",&n); 
int rev = 0, t = n; 
while ( n > 0 ){ 
rev = rev * 10 + (n % 10); 
n = n / 10 ; 
} 
(rev == t) ? printf("Number %d is %s\n",rev,"Palindrome"):printf("Number %d is %s\n",t,"Not Palindrome"); 
} 