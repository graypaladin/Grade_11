/* Ramzi Yakan
   Name Program
   Asks the user for their name, then stores it.
   Oct 6 2016
   */

#include <cstdlib>
#include <iostream>

using namespace std;

string name_of_user();

string name;

int main(int argc, char *argv[])
{
    name=name_of_user();
    system("PAUSE");
    return EXIT_SUCCESS;
}

string name_of_user()
{
    string name1;
    cout<<"Please enter your name."<<endl;
    cin>>name1;
    return name1;
}
