#include<stdio.h> 
void main() 
{ 
    float tp , ntp , dis ; 
    char c; 
    system ("cls"); 
    printf("television Price Calculator.. \n\n"); 
    printf("1. Color Television \n"); 
    printf("2. Black & White Television\n"); 
    printf("3. Exit\n\n"); 
    printf("Enter Your Choice-- "); 
    c = getch(); 
    if (c == '1'){ 
    system("cls"); 
    printf("Color Television -- \n\n"); 
    printf("1. 24\" Television\n"); 
    printf("2. 32\" Television\n"); 
    printf("Enter Choice .. "); 
    c = getch(); 
    if(c == '1'){ 
        printf("\n\nYou Choose 24 inches .. \n\n"); 
        printf("Enter Television Price -- "); 
        scanf("%f",&tp); 
        dis = tp * 0.10; 
        ntp = tp - dis; 
        printf("\n\nTelevision Amount -- %.2f",tp);
 
        printf("\n\nDicounted Amount -- %.2f",dis); 
        printf("\n\nNet Television Amount -- %.2f",ntp); 
    }else{ 
    printf("\n\nYou Choose 32 inches .. \n\n"); 
        printf("Enter Television Price -- "); 
        scanf("%f",&tp); 
        dis = tp * 0.15; 
        ntp = tp - dis; 
        printf("\n\nTelevision Amount -- %.2f",tp); 
        printf("\n\nDicounted Amount -- %.2f",dis); 
        printf("\n\nNet Television Amount -- %.2f",ntp); 
    } 
    }else if (c == '2'){ 
    printf("\n\nYou Choose B & W & 21\" .. \n\n"); 
        printf("Enter Television Price -- "); 
        scanf("%f",&tp); 
        dis = tp * 0.12; 
        ntp = tp - dis; 
        printf("\n\nTelevision Amount -- %.2f",tp); 
        printf("\n\nDicounted Amount -- %.2f",dis); 
        printf("\n\nNet Television Amount -- %.2f",ntp); 
}else if(c == '3') 
    exit(0); 
}