#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;


int main(int argc, char *argv[])
{
    int size=21;
    while (size>20)
    {
        cout<<"What do you want the length and width of your right angle triangle to be?"<<endl;
        cout<<"Please enter a number less than or equal to 20."<<endl;
        cin>>size;
    }

    for (int i=0; i<size+1; i++)
	{
    string mystr(size, '#');
	    for (int j=(size); j>=(size-i); j--)
        {
            mystr[j] = ' ';
        }
        cout<< mystr<<endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}


