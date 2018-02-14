/* Ramzi Yakan
   Car Lights Program
   Tells the user the state of car lights based on the scenario of their choice.
   Sept 26 2016
*/

#include <cstdlib>
#include <iostream>

using namespace std;

bool brakes=false;
bool ignition=false;
bool turnsignal=false;
bool hazardsignal=false;
string input;

int main(int argc, char** argv) {
    while (true)
{
	cout<<"Which input do you want to change: brakes, ignition, turn_signal, or hazard_signal?"<<endl;
	cin>>input;
	if (input=="brakes")
	{brakes=!brakes;
    }
    else if (input=="ignition")
    {ignition=!ignition;
    }
    else if (input=="turn_signal")
    {turnsignal=!turnsignal;
    }
    else if (input=="hazard_signal")
    {hazardsignal=!hazardsignal;
    }
    else
    {cout<<"Please answer the question."<<endl;
    }
    if (((brakes) and (!hazardsignal)) or ((ignition) and (!turnsignal) and (!hazardsignal)))
	{cout<<"The lights of the car are on."<<endl;
    }
    else if ((hazardsignal) or ((!brakes) and (turnsignal)))
    {cout<<"The lights of the car are flashing."<<endl;
    }
    else
    {cout<<"The lights of the car are off."<<endl;
    }
}
	system("PAUSE");
	return 0;
}
