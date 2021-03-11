///LICZBY PSEUDOLOSOWE

    #include <time.h> //konieczne biblioteki
    #include <cstdlib>

    srand(time(NULL)); //pobiera czas unixowy z komputera
    liczba=rand()%a+b; //reszta dzielenia czasu unixowego przez a, gdyż jest to ilość liczb, ile mamy do dyspozycji
                   //+b, gdyż nasz przedział liczbowy zaczyna się od b

                   //w praktyce:

          srand(time(NULL));
          liczba=rand()%100+1; //liczba pseudolosowa z zakresu od 1 do 100

          srand(time(NULL));
          liczba=rand()%50+5; //liczba pseudolosowa z zakresu od 5 do 55

///ZAPIS PLIKU
    
    #include <iostream>
    #include <fstream> //!!!!!!!!!!!!!!!!!!!!!!!!!!!PAMIĘTAĆ BO INACZEJ NIE ZADZIAŁA
    using namespace std;

    int main()
    {

        string imie, nazwisko;
        int nr;

        cin>>imie>>nazwisko>>nr;

        fstream plik;
        plik.open("dane.txt", ios::out);            //plik.open("dane.txt", ios::out | ios::app); oznaczałoby dopisanie tekstu do tego pliku
        plik<<imie<<endl<<nazwisko<<endl<<nr;
        plik.close();

        return 0;
    }

///SPÓJNIKI I INNE

    //      !== - jest różne od
    //      && - i
    //      || - lub

/// RÓŻNE

    #include <cstdlib>
    system("cls")           //czyszczenie ekranu

    #include <windows.h>
    Sleep(1000)             //czeka sekunde

    system("pause");        //program sam się nie wyłącza

    #include <stdio.h>
    getchar();              //program sam się nie wyłącza

    int a;
    if(!(cin>>a))                   //jesli wpisywany teraz znak nie jest integerem, to wyskakuje błąd
        {cerr<<"To nie liczba!";
        exit(0);}           

    cout<< "\a";            //fajowy beep z głośnika

    #include <iomanip>
    cout<<setprecision(1000); //pokazuje liczbe do 1000 znakow

    exit(o);                //zamyka program

    while(true)
    for( ; ; )              //nieskończone pętle
