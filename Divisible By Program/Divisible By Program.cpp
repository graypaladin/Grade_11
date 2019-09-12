/* Ramzi Yakan
   Divisible By Program
   Asks the user for two values, then determines whether or not the first value is divisible by the second.
   Oct 11 2016
   */

#include <cstdlib>
#include <iostream>

using namespace std;

bool divisible (int, int);

int num1;
int num2;

int main(int argc, char *argv[])
{
    cout<<"Enter two values."<<endl;
    cin>>num1;
    cin>>num2;
    cout<<divisible(num1,num2);
    system("PAUSE");
    return EXIT_SUCCESS;
}

bool divisible (int value1, int value2)
{
    int answer; 
    answer=value1%value2;
    if (answer==0)
    {return (true);
    }
    else
    {return (false);
    }
}
