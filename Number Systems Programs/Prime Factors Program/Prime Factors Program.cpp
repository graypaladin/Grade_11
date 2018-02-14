/* Ramzi Yakan
   Prime Factors Program
   Determines the prime factors of a inputed number.
   Nov 22 2016
   */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

string program="y";

int getNumber()
{
    int number;
     cout<<"Please enter a positive number."<<endl;
     cin>>number;
     return number;
}

bool isPrime(int number)
{
    for (int j=2; j<number; j++)
              {int remain=number%j;
               if (remain==0)
                    {return false;
                    }
              }
        return true;
}

void printFactors(int number)
{
     cout<<"Prime Factors:"<<endl;
     if (number<4)
        {cout<<number<<endl;
        return;
        }
     for (int i=2; i<=number/2; i++)
              {int remain=number%i;
               if (remain==0 and isPrime(i))
                     {cout<<i<<endl;
                     }
              }
         if (isPrime(number))
              {cout<<number<<endl;
              }
}

void tryAgain()
{
    cout<<"Try again? y/n"<<endl;
    cin>>program;
}


int main(int argc, char *argv[])
{
    while ((program == "y") or (program == "yes"))
          {int n = getNumber();
           printFactors(n);
           tryAgain();
          }
    return EXIT_SUCCESS;
}
