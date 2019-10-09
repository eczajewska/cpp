#include <iostream>

using namespace std;
int a, n, b;
int main()
{
    cin >> n;
    cout << "Program wyswietla tabliczke mnozenia dla liczb od 1 do n" << endl;
    cout << "  " << endl;

    a=1;
    while (a<=n)
    {
        b=1;
        while (b<=n)
        {
            cout << a*b << "\t";
            b++;
        }
        a++;
        cout << endl;
    }




    return 0;
}


