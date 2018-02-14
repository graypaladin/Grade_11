/* Ramzi Yakan
   Number Between 1 and 10 Program
   Asks the user to enter a number between 1 and 10, and continues to ask until the user actually
   enters a number between 1 and 10.
   Sept 13 2016
   */

#include <cstdlib>
#include <iostream>

using namespace std;

int number;

int main(int argc, char** argv) {
	cout<<"Please enter a number between 1 and 10."<<endl;
	cin>>number;
    while (number<1)
	{cout<<"Please enter a number between 1 and 10."<<endl;
	 cin>>number;
	}
	while (number>10)
	{cout<<"Please enter a number between 1 and 10."<<endl;
	 cin>>number;
	}
	cout<<"Thank You."<<endl;
	system ("PAUSE");
	return 0;
}
