///LICZBY PSEUDOLOSOWE

    #include <time.h> //konieczne biblioteki
    #include <cstdlib>

    srand(time(NULL)); //pobiera czas unixowy z komputera
    liczba=rand()%a+b; //reszta dzielenia czasu unixowego przez a, gdy� jest to ilo�� liczb, ile mamy do dyspozycji
                   //+b, gdy� nasz przedzia� liczbowy zaczyna si� od b

                   //w praktyce:

          srand(time(NULL));
          liczba=rand()%100+1; //liczba pseudolosowa z zakresu od 1 do 100

          srand(time(NULL));
          liczba=rand()%50+5; //liczba pseudolosowa z zakresu od 5 do 55


///SP�JNIKI I INNE

    //      !== - jest r�ne od
    //      && - i
    //      || - lub

/// RӯNE

    #include <cstdlib>
    system("cls")           //czyszczenie ekranu

    #include <windows.h>
    Sleep(1000)             //czeka sekunde

    system("pause");        //program sam si� nie wy��cza

    #include <stdio.h>
    getchar();              //program sam si� nie wy��cza

    cout<< "\a";            //fajowy beep z g�o�nika
