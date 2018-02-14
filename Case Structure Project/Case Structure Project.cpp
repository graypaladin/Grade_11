/* Ramzi Yakan
   Case Structure Program
   Sept 28 2016
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int number=0;

int main(int argc, char** argv) {
    label:
	cout<<"Please enter a number between 1 and 10."<<endl;
	cin>>number;
	switch (number) {
	case 1: 
	case 2: 
	case 3: 
	case 4: 
	case 5: 
	case 6: 
	case 7: 
	case 8: 
	case 9: 
	case 10:
    cout<<"Thank you!"<<endl;
    break; 
	default: 
    cout<<"Please answer the question."<<endl<<endl;
	goto label;
	}
	system ("PAUSE");
	return 0;
}
