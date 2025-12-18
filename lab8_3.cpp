/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include <iostream>
using namespace std;

int main()
{
  int age;
  double height;
  double bounty;
  cout << "Enter your age: ";
  cin >> age;
  //cout << "Enter your height: ";
  //cin >> height;
  //cout << "Enter your bounty: ";
  //cin >> bounty;

  if(age <= 25)
    {
        cout << "Enter your height: ";
        cin >> height;
        if (height < 100)
        {
            cout << "Your character = Chopper\n";
        }
        else if (height < 180)
        {
            cout << "Your character = Usopp\n";
        }
        else if (height >= 180)
        {

            cout << "Enter your bounty: ";
            cin >> bounty;
            if (bounty <= 1100000000)
            {
                cout << "Your character = Sanji\n";
            }
            else if (bounty > 1100000000)
        {
            cout << "Your character = Zoro\n";
        }
        
    }
}
   else if(age > 25 )
    {
        cout << "Enter your bounty: ";
        cin >> bounty;
        if (bounty <= 500000000)
        {
            cout << "Your character = Franky\n";
        }
        else if (bounty >= 500000000)
        {
            cout << "Your character = Jinbe\n";
        }
        else if (age > 60)
    {
        cout << "Your character = Brook\n";
    }
    }
    
    
    }
