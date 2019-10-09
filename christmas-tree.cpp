#include <iostream>

using namespace std;


int main()
{
    int n, i, j;

    cout << "podaj ilosc wieszy: ";
    cin >> n;

    for (i=1; i<=n; i++)
    {

        for (j=1; j<=n-i; j++)
        {
            cout << " ";
        }

            for (j=1; j<=i*2-1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
        for (i=1; i<=n; i++)
        {
            for (j=1; j<=n-1; j++)
            {
                cout << " ";
            }
            for (j=1; j<=1; j++)
            {
                cout << "*";
            }
            cout << endl;
        }



    return 0;
}
