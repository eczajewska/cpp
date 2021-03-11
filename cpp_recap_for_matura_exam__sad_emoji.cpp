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

    cout<< "\a";            //fajowy beep z głośnika

    #include <iomanip>
    cout<<setprecision(1000); //pokazuje liczbe do 1000 znakow

    exit(o);                //zamyka program

    while(true)
    for( ; ; )              //nieskończone pętle
