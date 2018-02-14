/* Ramzi Yakan
   Car Alarm Program
   Tells the user the state of a car alarm based on the scenario of their choice.
   Sept 27 2016
*/

#include <cstdlib>
#include <iostream>

using namespace std;

bool door=false;
bool ignition=false;
bool lights=false;
bool Clock=true;
string input;

int main(int argc, char** argv) {
	while (true)
{  
    cout<<"Which input do you want to change: door, ignition, or lights?"<<endl;
	cin>>input;
	if (input=="door")
	{door=!door;
    }
    else if (input=="ignition")
    {ignition=!ignition;
    }
    else if (input=="lights")
    {lights=!lights;
    }
    else
    {cout<<"Please answer the question."<<endl;
    }
    if (((door) and (ignition) and (Clock)) or ((door) and (lights) and (Clock)))
	{cout<<"The car alarm is on."<<endl;
    }
    else
    {cout<<"The car alarm is off."<<endl;
	}
}
    system("PAUSE");
	return 0;
}
