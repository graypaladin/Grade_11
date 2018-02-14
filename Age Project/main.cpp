
/*  Ramzi Yakan
    Age Program
    Asks the user for their age then predicts their grade.
    Sept 12 2016
    */

#include <cstdlib>
#include <iostream>

int age;

using namespace std;

int main(int argc, char** argv) {
	cout<<"Please enter your age."<<endl;
	cin>>age;
	if (age<4)
	{cout<<"You are not in school yet."<<endl;
	}
	else if (age==4)
	{cout<<"You are in junior kindergarden."<<endl;
	}
	else if (age==5)
	{cout<<"You are in senior kindergarden."<<endl;
	}
	else if (age==6)
	{cout<<"You are in grade 1."<<endl;
	}
	else if (age==7)
	{cout<<"You are in grade 2."<<endl;
	}
	else if (age==8)
	{cout<<"You are in grade 3."<<endl;
	}
	else if (age==9)
	{cout<<"You are in grade 4."<<endl;
	}
	else if (age==10)
	{cout<<"You are in grade 5."<<endl;
	}
	else if (age==11)
	{cout<<"You are in grade 6."<<endl;
	}
	else if (age==12)
	{cout<<"You are in grade 7."<<endl;
	}
	else if (age==13)
	{cout<<"You are in grade 8."<<endl;
	}
	else if (age==14)
	{cout<<"You are in grade 9."<<endl;
	}
	else if (age==15)
	{cout<<"You are in grade 10."<<endl;
	}
	else if (age==16)
	{cout<<"You are in grade 11."<<endl;
	}
	else if (age==17)
	{cout<<"You are in grade 12."<<endl;
	}
	else if (age>99)
	{cout<<"R U DED?!?"<<endl;
	}
    else
    {cout<<"You are a high school graduate. Congratulations!"<<endl;
    }
	system ("PAUSE");
	return 0;
}
