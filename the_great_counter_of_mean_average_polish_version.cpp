#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <time.h>

using namespace std;
int main()
{
    int i, ile;
    int tab[25];
    Sleep(500);
    cout<<"Witamy w POTEZNYM OBLICZACZU SREDNIEJ ARYTMETYCZNEJ OCEN"<<endl;
    Sleep(1000);cout<<"Maksymalna liczba ocen: 25         Maksymalna ocena: 6"<<endl<<endl;
    do {
        cout <<"Wpisz liczbe ocen: ";
            cin>>ile;

    if(ile>25)
        {cout<<"Mozna wpisac maksymalnie 25 ocen, mordeczko";
        Sleep(1500);
        system("cls");}
        else

            Sleep(500);
            cout<<"No i gituwa."<<endl<<endl;}while(ile>25);
            Sleep(500);


    cout <<"Wpisz oceny:"<<endl;
    for(i=0;i<ile;i++)
    {
        cout <<"Ocena "<<i+1<<": ";
        cin>>tab[i];
        if(tab[i]>6)
            {cout<<endl<<"Ocena nie moze byc wieksza niz 6."<<endl;
            Sleep(1500);
            i=i-1;
            cout <<"Wpisz te ocene jeszcze raz."<<endl<<endl;}


    }
    cout<<endl<<"Wpisane oceny: ";
    for(i=0;i<ile;i++)
    {
        cout<<tab[i]<<" ";
    }
    cout<<endl;

    float suma =0;
    for(i=0;i<ile;i++)
        suma=suma+tab[i];
        cout<<"Suma ocen: "<<suma<<endl;
    float srednia =suma/ile;

    cout<<endl<<"**************************"<<endl<<endl;
    cout<<"    SREDNIA OCEN: "<<srednia<<endl;
    cout<<endl<<"**************************"<<endl<<endl;
    system("pause");







    return 0;
}
