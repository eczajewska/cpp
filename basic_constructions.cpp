#include <iostream>

using namespace std;
int a, i, b; // global variables could be here or in int main()




///VOID FUNCTION
void example() //we put it before int main(), there can be a local variable inside the brackets, in example void(int x, int y)
{
  cout << "example" << endl << endl;
}


int main() //this is where we put everything
{


///CIN AND COUT
cout << "type a random number: "; //cout - if something has to appear on screen
cin >> a; // cin - if we have to write  here something while using program





///IF
if(a>3) //inside the brackets we put a condition
{
  cout << "something" << endl << endl; //it works if condition is met
}
else
{
  cout << "something else" << endl << endl; //it works if condition isn't met
}




///FOR - LOOP
for (i=0; i<5; i++) //there are three parts inside brackets: 1) tells since where the loop starts, 2) how long the loop should work, 3) should be loop increasing or decreasing
{
  cout << "uwu" << endl; //this is what will be looped or something
}
cout << endl;





///VOID - continuation in int main()
example(); //we put title of void that we made somewhere in int main() where we want the void to work.
           // if earlier there were variables inside the brackets of void, here we have to put in brackets global variables,
           // that would work as the local ones. it would be example(a,b)






cout << "type 1, 2 or 3" << endl;
cin >> b;





    ///SWITCH FUNCTION
    switch(b) // it makes you able to choose an option what program have to do
    {
    case 1: //atfer "case" it has to be a value of variable that were typed. here if it was 1
        cout << "name" << endl;
        break;
    case 2: //if it was 2
        cout << "surname" << endl;
        break;
    case 3:  //if it was 3
        cout << "date of birth" << endl;
        break;
    default: //default - it works if variable that you typed isn't any of those which are in cases
        cout << "you typed number different than 1, 2 and 3";
        break;
    }





return 0; // ends program
}
