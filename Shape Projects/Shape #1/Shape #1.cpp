#include <cstdlib>
#include <iostream>

using namespace std;

int length;
int width;

int main(int argc, char *argv[])
{   cout<<"What do you want the length of your rectangle to be?"<<endl;
    cin>>length;
    cout<<"What do you want the width of your rectangle to be?"<<endl;
    cin>>width;
    for(int i=0;i<length;i++)
    {for(int j=0;j<width;j++)
     {cout<<"#";
     }
     cout<<endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
