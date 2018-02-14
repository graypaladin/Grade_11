#include <cstdlib>
#include <iostream>

using namespace std;

int value1;
int value2;

int main(int argc, char *argv[])
{
    cout<<"Welcome to the greatest common divisor program."<<endl;
    cout<<"Please enter two values."<<endl;
    cout<<"Value 1: ";
    cin>>value1;
    cout<<"Value 2: ";
    cin>>value2;
    int gcd=value1/value2;
    cout<<"gcd: "<<gcd<<endl;
    cout<<"Remainder: "<<value1%value2<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
