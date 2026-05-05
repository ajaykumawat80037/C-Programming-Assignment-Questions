#include<iostream>
#include<conio.h>
#include<cmath>
#include<cstdlib>
#include<fstream>
using namespace std;
class calculator
{
public:
    double n1,n2,s,su,m,d,sq,countt=0,p;
    string history[50];
    float sqr;
    char c,a;

    void get()
    {
        system("cls");
        cout<<"============================\n";
        cout<<"\tSmart Calculator\n";
        cout<<"============================\n\n";
        cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Square\n";
        cout<<"6. Square Root\n";
         cout<<"7. Percentage\n";
        cout<<"8. History\n";
        cout<<"9. Exit\n";

        cout<<"=============================\n";
        cout<<"\nSelect Your Choice :- ";
        c=getchar();
        if(c=='1'){
                addition();

        }
        else if(c=='2'){
            subtraction();
        }
        else if(c=='3'){
            multiplication();
        }
        else if(c=='4'){
            division();
        }
        else if(c=='5'){
                square();

        }
        else if(c=='6')
        {
            squareroot();
        }
        else if (c=='8'){
            historyy();
        }
        else if(c=='7'){
            percentage();
        }

        else{
            exit(0);
        }


    }
    void addition()
    {
        cout<<"\n\n=============================\n";
        cout<<"\t****Addition****";
        cout<<"\n===============================\n\n";
        cout<<"Enter Two Number and (+) Between Numbers :- ";cin>>n1 >>a >> n2;
         if(a=='+'){
        s=n1+n2;
        cout<<"Addition is :- "<<n1<<" + "<<n2<<" = "<<s;
         }
         else{
            cout<<"Enter (+) Between Numbers Like 2+2\n";
         }
         if(a=='+'){
        fstream file;
        file.open("Calculate.txt",ios::app);
        file<<"\n"<<"Addition is :- "<<n1<<"+"<<n2<<"="<<s;
        file.close();
        }
        cout<<"\n\nDo You Want to Continue Prees 1 else any key \n\n";
        c=getch();
        if(c=='1'){
            get();

        }




    }
    void subtraction()
    {

        cout<<"\n===============================\n";
         cout<<"\t****Subtraction****";
         cout<<"\n===============================\n\n";
        cout<<"Enter Two Number and (-) Between Numbers :- ";cin>>n1 >>a >> n2;
        if(a=='-'){
            su=n1-n2;
        cout<<"Subtraction is :- "<<n1<<" - "<<n2<<" = "<<su;
        }
        else{
            cout<<"Enter (-) Between Numbers Like 2-2\n";
        }
        if(a=='-'){
        fstream file;
        file.open("Calculate.txt",ios::app);
        file<<"\n"<<"Subtraction is :- "<<n1<<"-"<<n2<<"="<<su;
        file.close();
        }
         cout<<"\n\nDo You Want to Continue Prees 1 else any key ";
        c=getch();
        if(c=='1'){
            get();
        }


    }
    void multiplication()
    {

        cout<<"\n===============================\n";
         cout<<"\t****Multiplication****";
        cout<<"\n===============================\n\n";
       cout<<"Enter Two Number and (*) Between Numbers :- ";cin>>n1 >>a >> n2;
       if(a=='*'){
        m=n1*n2;
        cout<<"Multiplication of Number is :- "<<m;
        }
        else{
            cout<<"Enter (*) Between Numbers Like 2*2\n";
        }
        if(a=='*'){
        fstream file;
        file.open("Calculate.txt",ios::app);
        file<<"\n"<<"Multiplication is :- "<<n1<<"*"<<n2<<"="<<m;
        file.close();
        }
         cout<<"\n\nDo You Want to Continue Prees 1 else any key ";
        c=getch();
        if(c=='1'){
            get();
        }


    }
    void division()
    {
        cout<<"\n===============================\n";
         cout<<"\t****Division****";
        cout<<"\n===============================\n\n";
         cout<<"Enter Two Number and (/) Between Numbers :- ";cin>>n1 >>a >> n2;
         if(n2!=0){
                if(a=='/'){
        d=n1/n2;
        cout<<"Division of Number is :- "<<d;
        }
        }
        else{
            cout<<"Division by Zero is not Allowed";
        }
        if(a=='/'){
        fstream file;
        file.open("Calculate.txt",ios::app);
        file<<"\n"<<"Division is :- "<<n1<<"/"<<n2<<"="<<d;
        file.close();
        }
         cout<<"\n\nDo You Want to Continue Prees 1 else any key ";
        c=getch();
        if(c=='1'){
            get();
        }


    }
    void square()
    {
        cout<<"\n===============================\n";
         cout<<"\t****Square****";
        cout<<"\n===============================\n\n";
        cout<<"Enter Number :- ";cin>>n1;
        sq=pow(n1,2);
        cout<<"Square is :- "<<sq;
        fstream file;
        file.open("Calculate.txt",ios::app);
        file<<"\n"<<"Square is :- "<<n1<<"^2"<<"="<<sq;
        file.close();
         cout<<"\n\nDo You Want to Continue Prees 1 else any key ";
        c=getch();
        if(c=='1'){
            get();
        }

    }
    void squareroot()
    {

        cout<<"\n===============================\n";
         cout<<"\t****Square Root****";
        cout<<"\n===============================\n\n";
         cout<<"Enter Number :- ";cin>>n1;
        sqr=sqrt(n1);
        cout<<"Square Root is :- "<<sqr;
        fstream file;
        file.open("Calculate.txt",ios::app);
        file<<"\nSquar Root of "<<n1 <<"is"<<"="<<sqr;
        file.close();
         cout<<"\n\nDo You Want to Continue Prees 1 else any key ";
        c=getch();
        if(c=='1'){
            get();
        }

    }
    void historyy()
    {
        fstream file;
        string line;
        file.open("Calculate.txt");
        cout<<"\n===============================\n";
        cout<<"\t****History :- ****";
        cout<<"\n===============================\n\n";
        while(getline(file,line)){

            cout<<line<<"\n";

        }
        file.close();

    }
    void percentage()
     {
        cout<<"\n===============================\n";
        cout<<"\t****Percentage ****";
        cout<<"\n===============================\n\n";

         cout<<"percentage you want to calculate :- ";cin>>n2;
        cout<<"Enter the Total Number :- " ;cin>>n1;
        p=(n2*100)/n1;
        cout<<"Percentage of "<<n2 <<"is :- "<<p<<"%\n";
        fstream file;
        file.open("Calculate.txt",ios::app);
        file<<"\nPercentage of "<<n1 <<"is"<<" = "<<p <<"%";
        file.close();
    }


};
int main()
{
    calculator d;
    d.get();
}