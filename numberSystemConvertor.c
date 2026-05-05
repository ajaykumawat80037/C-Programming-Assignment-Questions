#include<stdio.h>  
#include<conio.h>  
#include<string.h>  
void main()  
{  
char c;  
char arr[20];  
int n, i , temp;  
system("cls");  
printf("***** Nyumber System Converter *****\n\n");  
printf("1. Decimal To Binary\n");  
printf("2. Decimal To Octal\n");  
printf("3. Decimal To HexaDecimal\n");  
printf("4. Exit\n");  
printf("Choose any one of them.... \n\n");  
c = getch();  
system("cls");  
if (c == '1'){  
system("cls");  
printf("***** Decimal to Binary*****\n\n");  
printf("Enter Decimal number -- "); 
scanf("%d",&n);  
temp = n;  
for(i = 0 ; n > 0 ;(n = n / 2),i++){  
arr[i] = ((n % 2)+48);  
}  
arr[i]='\0';  
strrev(arr);  
printf("Binary of %d is -- %s \n\n",temp,arr);  
}  
else if (c == '2'){  
system("cls");  
printf("***** Decimal to Octal*****\n\n");  
printf("Enter Decimal number -- ");  
scanf("%d",&n);  
temp = n;  
for(i = 0 ; n > 0 ;(n = n / 8),i++){  
arr[i] = (n%8)+48;  
}  
arr[i]='\0';  
strrev(arr);  
printf("Octal of %d is -- %s\n\n",temp,arr);  
}  
else if (c == '3'){  
system("cls");  
printf("***** Decimal to HexaDeciaml *****\n\n");  
printf("Enter Decimal number -- ");  
scanf("%d",&n);  
temp = n;  
for(i = 0 ; n > 0 ;(n = n / 16),i++){ 
arr[i] = ((n%16)<=9)?((n%16)+48) : ((n%16)+55);  
}  
arr[i]='\0';  
strrev(arr);  
printf("HexaDecimal of %d is -- %s\n\n",temp,arr);  
}  
else if (c == '4'){  
exit(0);  
}  
printf("\n\n Do you want to continue.. Press 1 else any key.. ");  
if (getch() == '1'){  
main();  
}  
}  