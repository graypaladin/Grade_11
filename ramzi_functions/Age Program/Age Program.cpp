/* Ramzi Yakan
   Age Program
   Asks the user for their age, then tells them how many more years they have until they become an adult.
   Oct 11 2016
   */

#include <cstdlib>
#include <iostream>

using namespace std;

int adulthood (int);

int age;

int main(int argc, char *argv[])
{
    cout<<"Please enter your age."<<endl;
    cin>>age;
    cout<<"You are "<<adulthood(age)<<" years away from adulthood."<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}

int adulthood (int age1)
{
 return 18-age1;
}
