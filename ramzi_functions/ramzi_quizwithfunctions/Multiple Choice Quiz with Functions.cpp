/* Ramzi Yakan
   Multiple Choice Quiz Program
   Asks the user to answer 3 multiple choice questions, then calculates how many questions the user got right and wrong.
   Sept 14 2016
   */

#include <cstdlib>
#include <iostream>

using namespace std;

int question;
string answer1;
string answer2;
string answer3;
int answersCorrect=0;
int answersIncorrect=0;
string playAgain="yes";

void quiz()
{
    while (question==1)
    {cout<<"What's 3*3? a)9 b)6 c)1 d)0"<<endl;
     cin>>answer1;      
     if (answer1=="a")
     {cout<<"Correct!"<<endl;
      answersCorrect=answersCorrect+1;
      question=question+1;
     }
     else if ((answer1=="b") or (answer1=="c") or (answer1=="d"))
     {cout<<"Incorrect!"<<endl;
      answersIncorrect=answersIncorrect+1;
      question=question+1;
     }
     else
     {cout<<"Please answer the question."<<endl;
     }   	   
    }
    while (question==2)
    {cout<<"What's 6*4? a)10 b)2 c)1.5 d)24"<<endl;
     cin>>answer2;      
     if (answer2=="d")
     {cout<<"Correct!"<<endl;
      answersCorrect=answersCorrect+1;
      question=question+1;
     }
     else if ((answer2=="a") or (answer2=="b") or (answer2=="c"))
     {cout<<"Incorrect!"<<endl;
      answersIncorrect=answersIncorrect+1;
      question=question+1;
     }
     else
     {cout<<"Please answer the question."<<endl;
     }   	   
    }
    while (question==3)
    {cout<<"What's 8*7? a)1 b)15 c)56 d)some weird decimal"<<endl;
     cin>>answer3;      
     if (answer3=="c")
     {cout<<"Correct!"<<endl;
      answersCorrect=answersCorrect+1;
      question=question+1;
     }
     else if ((answer3=="a") or (answer3=="b") or (answer3=="d"))
     {cout<<"Incorrect!"<<endl;
      answersIncorrect=answersIncorrect+1;
      question=question+1;
     }
     else
     {cout<<"Please answer the question."<<endl;  
     }
    }
    if (question==4)
     {cout<<endl;
      cout<<"Congratulations! You have completed the quiz."<<endl;
      cout<<"You've answered "<<answersCorrect<<" questions correctly and "<<answersIncorrect<<" questions incorrectly!"<<endl;
     }
}


int main(int argc, char** argv) 
{
    cout<<"Welcome to my multiple choice quiz!"<<endl;
    cout<<"Please answer the questions using the letters a, b, c, or d."<<endl;
    cout<<"At the end of the quiz, you will be told how many questions you got correct and how many questions you got incorrect."<<endl;
    cout<<"You will then be asked if you want to redo the quiz. Answer with 'yes' or 'no'."<<endl;
    cout<<"If you say yes, the scores will reset and the quiz will start again. If you say no, this program will close."<<endl;
    cout<<"Good luck!"<<endl<<endl;
    while (playAgain=="yes")
    {cout<<endl<<endl;
     answersCorrect=0;
     answersIncorrect=0;
     question=1;
     quiz();
     cout<<"Play again? yes/no"<<endl;
     cin>>playAgain;
    }
    return 0;
}
