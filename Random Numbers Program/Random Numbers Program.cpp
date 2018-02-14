#include <cstdlib>
#include <iostream>

using namespace std;

int Ran1 = 0;
int Ran2 = 0;
int Ran3 = 0;

int main(int argc, char *argv[])
{
    srand(time(NULL));
    Ran1 = rand()%9;
    Ran2 = rand()%9;
    Ran3 = rand()%9;
    cout<<" -------------------------"<<endl;
    cout<<" |       |       |       |"<<endl;
    cout<<" |       |       |       |"<<endl;
    cout<<" |   "<<Ran1<<"   |   "<<Ran2<<"   |   "<<Ran3<<"   |"<<endl;
    cout<<" |       |       |       |"<<endl;
    cout<<" |       |       |       |"<<endl;
    cout<<" -------------------------"<<endl;
    if ((Ran1==4) or (Ran2==2) or (Ran3==0))
    {cout<<"You win!"<<endl;
    }
    else
    {cout<<"You lose!"<<endl;
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
