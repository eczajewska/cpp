#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    int a,i;
    int fib[100000];
    cout << "Ile wyrazow ciagu Fibonacciego wyznaczyc?" << endl;
    cin>>a;

    cout<<"************************************"<<endl<<a;
    if (a>=5)
        cout<<" wyrazow ciagu Fibonacciego: ";
    else if (a<5 && a>1)
        cout<<" wyrazy ciagu Fibonacciego: ";
    else if (a=1)
        cout<<" wyraz ciagu Fibonacciego: ";
    else if (a=0)
        cout<<" wyrazow ciagu Fibonacciego.";


    fib [0]=1;
    fib[1]=1;
    if(a==1)
        {cout<<fib[0];}
        else if (a==2)
           {
            cout<<fib[0]<<" "<<fib[1];}
            else if (a>2)
                {cout<< fib [0] <<" " <<fib [1]<< " ";
                for(i=2;i<a;i++)
                {fib[i]=fib[i-2]+fib[i-1];
                cout<<fib[i]<<" ";}

    }
cout<<endl<<endl;
    system("pause");
    return 0;



}

