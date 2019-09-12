/* Ramzi Yakan
   Prime Number? Program
   Determines whether or not a given number is prime.
   Nov 17 2016
   */

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int number;
int remain;
int compositeCounter;
string program="yes";

void determineNumber()
{    
     cout<<"Please enter a positive number."<<endl;
     cin>>number;
     if (number<2)
         {cout<<"This number is not prime."<<endl;
         }   
     else if ((number==2) or (number==3))
         {cout<<"This number is prime."<<endl;
         }
     else
         {for (int i=2; i<=sqrt(number); i++)
              {remain=number%i;
               if (remain==0) 
                  {compositeCounter++;
                   break;
                  }      
              }
          if (compositeCounter==0)
              {cout<<"This number is prime."<<endl;
              }
          else 
              {cout<<"This number is not prime."<<endl;
              }
          }
     cout<<"Try again? yes/no"<<endl;
     cin>>program;
}


int main(int argc, char *argv[])
{   
    while (program=="yes")
          {determineNumber();
          }
    return EXIT_SUCCESS;
}
