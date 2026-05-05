#include<stdio.h>  
void main() { 
    char name[20] , rno[5]; 
    int hindi, english , maths ; 
    float total ,per ; 
    printf("Enter Roll No-- "); 
    scanf("%s",&rno); 
    printf("Enter name-- "); 
    scanf("%s",&name); 
    printf("Enter Hindi Marks -- "); 
    scanf("%d",&hindi); 
    printf("Enter English Marks -- "); 
    scanf("%d",&english); 
    printf("Enter Maths Marks -- "); 
    scanf("%d",&maths); 
    total = hindi + english + maths ; 
    per = (total * 100)/300; 
    system ("cls"); 
    printf("Name -- %s\n",name); 
    printf("Roll No -- %s\n",rno); 
    printf("Hindi Marks -- %d\n",hindi); 
    printf("English Marks -- %d\n",english); 
    printf("Maths Marks -- %d\n",maths); 
    printf("Total Marks -- %.2f /300\n\n",total); 
    printf("Percentage -- %.2f %%\n\n",per); 
    
    if(per>=60){ 
    printf("First Division"); 
    }else if(per>=48){ 
    printf("Second Division"); 
    }else if(per>=36){ 
    printf("Third Division"); 
    }else 
    printf("Fail\n\n"); 
}