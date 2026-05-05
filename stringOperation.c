#include<stdio.h> 
#include<string.h> 

char inputString(); 
void MainMenu(char *); 
void convertUpperCase(char *); 
void convertLowerCase(char *); 
void reverseString(char *); 
void reverseOnPosition(char *); 
void firstLetterWordUpperCase(char *); 
void lastLetterWordUpperCase(char *); 
void countOccurance(char *); 
void main() 
{ 
    inputString(); 
}
char inputString() 
{
     char input[40]; 
    printf("***** Welcome to String Operation Project *****\n\n"); 
    printf("Enter String -- "); 
    gets(input); 
    printf("\nYou Enter -- %s\n\n",input); 
    MainMenu(input); 
} 
void MainMenu(char *input) 
{ 
    char c; 
    printf("\n\n***** String Operation Project *****\n\n"); 
    printf("1. Convert UpperCase Letter\n"); 
    printf("2. Convert LowerCase Letter\n"); 
    printf("3. Reverse String\n"); 
    printf("4. Reverse Each Word on their Position\n"); 
    printf("5. Convert First Letter of Each Word into Uppercase\n"); 
    printf("6. Convert Last Letter of Each Word into Uppercase\n"); 
    printf("7. Count Occurrence of Each Letter\n"); 
    printf("Enter Your Choice -- "); 
    c = getch(); 
    if ( c == '1'){ 
        convertUpperCase(input); 
    } 
    else if ( c == '2'){ 
        convertLowerCase(input); 
    } 
    else if ( c == '3'){ 
        reverseString(input); 
    }
    else if ( c == '4'){ 
        reverseOnPosition(input); 
    } 
    else if ( c == '5'){ 
        firstLetterWordUpperCase(input); 
    } 
    else if ( c == '6'){ 
        lastLetterWordUpperCase(input); 
    } 
    else if ( c == '7'){ 
        countOccurance(input); 
    } 
 
    printf("\n\nDo you want to Continue with Same string to press s and a new string press n else any key..."); 
    c = getch(); 
    if ( c == 's'){ 
        MainMenu(input); 
    } 
    else if ( c == 'n'){ 
        inputString(); 
    } 
} 
void convertUpperCase(char *input) 
{ 
    printf("\n\nConvert UpperCase Letter \n\n"); 
    int i; 
    for ( i = 0 ; input[i]!='\0' ; i++){ 
        if ( input[i] >= 97 && input[i] <= 122){
            input[i] = input[i]-32; 
        } 
    } 
    printf("\n\nAfter Conversion String is -- \n\n"); 
    printf("%s",input); 
    getch(); 
} 
void convertLowerCase(char *input) 
{ 
    printf("\n\nConvert LowerCase Letter \n\n"); 
    int i; 
    for ( i = 0 ; input[i]!='\0' ; i++){ 
        if ( input[i] >= 65 && input[i] <= 90){ 
            input[i] = input[i]+32; 
        } 
    } 
    printf("\n\nAfter Conversion String is -- \n\n"); 
    printf("%s",input); 
    getch(); 
} 
void reverseString(char *input) 
{ 
    printf("\n\nPrint Reverse Order \n\n"); 
    int i, j; 
    for ( i = 0 ; input[i]!='\0' ; i++); 
    printf("\n\nAfter Reverse String is -- \n\n"); 
    for(j = i-1 ; j >= 0 ; j--) 
        printf("%c",input[j]); 
    getch();
    } 
void firstLetterWordUpperCase(char *input) 
{ 
    printf("\n\nConvert First Letter Upper Case \n\n"); 
    int i; 
    for ( i = 0 ; input[i]!='\0' ; i++){ 
        if ( i == 0 || input[i-1] == ' '){ 
            if ( input[i] >= 97 && input[i] <= 122){ 
                input[i] = input[i]-32; 
            } 
        } 
        else if ( input[i] >= 65 && input[i] <= 90) 
            input[i] = input[i] + 32; 
    } 
    printf("\n\nAfter Conversion String is -- \n\n"); 
    printf("%s",input); 
    getch(); 
} 
void lastLetterWordUpperCase(char *input) 
{ 
    printf("\n\nConvert last Letter Upper Case \n\n"); 
    int i, l; 
    for ( l = 0 ; input[l]!='\0' ; l++); 
    for ( i = 0 ; input[i]!='\0' ; i++){ 
        if ( i == l-1 || input[i+1] == ' '){ 
            if ( input[i] >= 97 && input[i] <= 122){ 
                input[i] = input[i]-32; 
            } 
        }
        else if ( input[i] >= 65 && input[i] <= 90) 
            input[i] = input[i] + 32; 
    } 
    printf("\n\nAfter Conversion String is -- \n\n"); 
    printf("%s",input); 
    getch(); 
} 
void countOccurance(char *input) 
{ 
    char tmp[20]; 
    int i, j, c = 0, k = 0, l=0, check = 0; 
    printf("\n\nCount Occurrence of String \n\n"); 
    for (i = 0 ; input[i] != '\0' ; i++){ 
        for(l = 0, check = 0 ; tmp[l]!='\0'; l++){ 
            if (tmp[l] == input[i]){ 
                check = 1; 
                break; 
            } 
        } 
        if ( check == 0){ 
            for ( j = 0, c = 0 ; input[j] != '\0' ; j++){ 
                if ( input[i] == input[j]){ 
                    c++; 
                } 
            } 
            tmp[k++] = input[i]; 
            tmp[k] = '\0'; 
            printf("Occurrence of %c is -- %d\n",input[i], c); 
        }
         } 
} 
void reverseOnPosition(char *input) 
{ 
    printf("\n\nReverse Each Word On Their Position \n\n"); 
    char temp[20]; 
    int i, j , k, l; 
    for ( i = 0, j = 0 ; input[i]!='\0' ; i++) 
    { 
        if ( input[i]!=' '){ 
            temp[j++] = input[i]; 
            l = i; 
            if (input[i+1] == '\0'){ 
                temp[j] = '\0'; 
                for (k = 0 ; temp[k]!='\0' ; k++,l--){ 
                    input[l] = temp[k]; 
                } 
            } 
        } 
        else{ 
            temp[j] = '\0'; 
            for (k = 0 ; temp[k]!='\0' ; k++,l--) 
            { 
                input[l] = temp[k]; 
            } 
            j = 0; 
        } 
    } 
    printf("\n\nAfter Operation String is -- \n\n"); 
    printf("%s",input); 
    getch(); 
}