#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int main()
{
    float a,b;
    int i;
    int cyfra;

     for( ; ; )
     {
         cout<< "_________BARDZO PROSTY KALKULATOR__________"<<endl<<"___czyli o tym, jak cwiczyc switcha w cpp__"<<endl<<endl;
         cout<<"MENU: "<<endl<<"1. Dodawanie"<<endl<<"2. Odejmowanie"<<endl<<"3. Mnozenie"<<endl<<"4. Dzielenie"<<endl<<endl;
         cout <<"Wpisz 1 liczbe: ";
     cin>>a;
     cout<<"Wpisz 2 liczbe: ";
     cin>>b;
     cout<<endl;

     cout<<"Teraz wybierz numer z MENU: ";
     cin>>cyfra;

     switch(cyfra)
     {
     case 1:
        cout<<"Dodawanie liczb "<<a<<" i "<<b<<": "<<a+b;
        break;

     case 2:
        cout<<"Odejmowanie "<<a<<" i "<<b<<": "<<a-b;
        break;

     case 3:
        cout<<"Mnozenie "<<a<<" i "<<b<<": "<<a*b;
        break;

     case 4:
         if(b==0)
            {cout<<"Nie dzielimy przez 0."; break;}
            else{
        cout<<"Dzielenie "<<a<<" i "<<b<<": "<<a/b;
        break;}

     default:
        cout<<"Takiej opcji nie ma w MENU.";
        break;}

cout<<endl<<endl;
     system("pause");
     system("cls");
     }


    return 0;



}
