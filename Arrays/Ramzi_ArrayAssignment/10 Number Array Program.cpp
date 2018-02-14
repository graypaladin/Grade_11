/* Ramzi Yakan
   10-Value Array Program
   Computes a variety of operations for a given array of size 10.      //Header
   Dec 9 2016
   */

#include <cstdlib>        //Libraries
#include <iostream>

using namespace std;

void createArray(double[]);
void displayArray(double[]);
double determineSumArray(double[]);
double determineAverageArray(double[]);
bool isTheValueInTheArray(double[], double);               //Function Declarations
double determineLargestValue(double[]);
double determineSecondLargestValue(double[]);
double determinePositionOfValue(double[], double);
void quitProgram();

int main(int argc, char *argv[])
{
    int option=0; 
    double values [10]={}; //Creates an array, with all values being 0.
    while(option != 9)
        {
                 cout<<"Which operation do you wish to perform?"<<endl;
                 cout<<"1. Create an array."<<endl;
                 cout<<"2. Display the array."<<endl;
                 cout<<"3. Determine the sum of all the values in the array."<<endl;
                 cout<<"4. Determine the average of all the values in the array."<<endl;    //Menu- Displays all operations you can do with an array.
                 cout<<"5. Determine whether a value is in the array."<<endl;
                 cout<<"6. Determine the largest value in the array."<<endl;
                 cout<<"7. Determine the second largest value in the array."<<endl;
                 cout<<"8. Determine the position of the array where a value is stored."<<endl;
                 cout<<"9. Quit"<<endl<<endl;
                 cin>>option;  //User inputs an option of their choice.
                 switch (option)  //Takes the user's option of choice.
                        {
                                case 1:    //If the user chose option 1...
                                     {
                                                  cout<<endl;
                                                  cout<<"Please enter 10 values."<<endl;  //Asks the user to input 10 values for the new array...
                                                  createArray(values);                    //...and calls a function to insert the inputed values into it.
                                                  cout<<endl;
                                                  break;
                                     }
                                case 2:   //If the user chose option 2...
                                     {
                                                  cout<<endl;
                                                  displayArray(values);     //Calls a function to display the array.
                                                  cout<<endl<<endl;
                                                  break;
                                     }
                                case 3:   //If the user chose option 3...
                                     {
                                                  cout<<endl<<"Sum: "<<determineSumArray(values)<<endl<<endl;  //Calls a function to determine the sum of the array, then outputs it.
                                                  break;
                                     }
                                case 4:   //If the user chose option 4...
                                     {
                                                  cout<<endl<<"Average: "<<determineAverageArray(values)<<endl<<endl;  //Calls a function to determine the average of the array, then outputs it.
                                                  break;
                                     }
                                case 5:   //If the user chose option 5...
                                     {
                                                  cout<<endl;
                                                  int number=0;
                                                  cout<<"Please enter a number."<<endl;  //Asks the user to input a value to check for in the array.
                                                  cin>>number;                           //User inputs the value.
                                                  isTheValueInTheArray(values, number);  //Calls a function to determine whether the inputted value is in the array.
                                                  if (isTheValueInTheArray(values, number)==true)
                                                       {
                                                            cout<<"This number is in the array."<<endl<<endl;   //If the function returns true, the inputed value is in the array.
                                                       }
                                                  else
                                                       {
                                                            cout<<"This number is not in the array."<<endl<<endl;  //Else, the inputed value is not in the array.
                                                       } 
                                                  break;
                                     }
                                case 6:   //If the user chose option 6...
                                     {
                                                  cout<<endl<<"Largest Value: "<<determineLargestValue(values)<<endl<<endl;  //Calls a function to determine the largest value in the array, then outputs it.
                                                  break;
                                     }
                                case 7:   //If the user chose option 7...
                                     {
                                                  cout<<endl<<"Second Largest Value: "<<determineSecondLargestValue(values)<<endl<<endl;  //Calls a function to determine the second largest value in the array, then outputs it.
                                                  break;
                                     }
                                case 8:   //If the user chose option 8...
                                     {
                                                  cout<<endl;
                                                  int number=0;
                                                  cout<<"Please enter a number."<<endl; //Asks the user to input a value to check its position for in the array.
                                                  cin>>number;                          //User inputs the value.
                                                  cout<<"Position of Value: "<<determinePositionOfValue(values, number)<<endl<<endl;  //Calls a function to check for the inputed value's position in the array, then outputs it.
                                                  break;
                                     }
                                case 9:   //If the user chose option 9...
                                     {
                                                  quitProgram();  //Calls a function to quit the program.
                                                  break;       
                                     }
                                default:  //If the user chose a different option...
                                     {
                                                  cout<<"Please answer the question."<<endl<<endl;  //User did not input a valid option.
                                     }
                              }
              }
}

//Function Definitions:

void createArray(double a[])
{
     for (int i=0; i<10; i++)   //While the program is working inside of the given array...
        {
             cin>>a[i];         //...the user can input their 10 values into the array.
        }
}                                                  

void displayArray(double a[])
{
     for (int i=0; i<10; i++)   //While the program is working inside of the given array...
        {
             cout<<a[i]<<" ";   //...display the values of the array.
        }
}
                                                 
double determineSumArray(double a[])
{
    double sum=0;             //The sum variable is declared with a default value of 0.
    for (int i=0; i<10; i++)  //While the program is working inside of the given array...
        {
             sum=sum+a[i];    //The sum of the array is equal to the addition of all the values in the array, starting with adding the second inputed value to the first, adding that to the third, to the fourth, etc.
        }
    return sum;    //Returns the sum to the main program to be outputted.
}
    
double determineAverageArray(double a[])
{
    double sum=0;
    for (int i=0; i<10; i++)  //Determining the sum of the values in the array again.
        {
             sum=sum+a[i];
        }
    double average=sum/10;    //Variable "average" is declared, which takes the sum and divides it by 10 (the number of values in the array) to determine the average of the values in the array. 
    return average;           //Returns the average to the main program to be outputted.
}
    
bool isTheValueInTheArray(double a[], double b)
{
    for (int i=0; i<10; i++)  //While the program is working inside of the given array...
        {
             if (a[i]==b)  //If the value inputted by the user is equal to a value in the array...
                {
                      return true;   //...the inputted value is in the array (return to the main program that this is the case).
                      break;
                }    
        }
    return false;  //After going through all the values in the array, if the value inputted by the user is not equal to a value in the array, the inputted value is not in the array (return to the main program that this is the case).
}

double determineLargestValue(double a[])
{
    double largestValue=0;  //The variable to determine the largest value in the array is declared.
    for (int i=0; i<10; i++)  //While the program is working inside of the given array...
        {
             if (a[(i+1)]>a[i]) //If a value in the array is larger than the one before it...
                {
                       largestValue=a[i+1];  //...make this value the current largest variable in the array (this, of course, can change throughout the course of this loop if a larger value is found).
                }
        }
    return largestValue;  //Returns the largest value of the entire array to the main program to be outputted.
}
               
double determineSecondLargestValue(double a[])
{
    double largestValue=0;
    for (int i=0; i<10; i++)
        {
             if (a[(i+1)]>a[i])                     //Determining the largest value in the array again.
                {
                       largestValue=a[i+1];
                }
        }
    double secondLargestValue=0;
    for (int j=0; j<10; j++)  //While the program is working inside of the given array...
        {
             if ((a[j+1]>a[j]) and (a[j+1]!=largestValue))  //If a value in the array is larger than the one before it, and that value isn't the largest in the array...
                {
                       secondLargestValue=a[j+1];   //...make this value the current second-largest variable in the array (this, of course, can also change throughout the course of this loop).
                }
        }
    return secondLargestValue;  //Returns the second-largest value of the entire array to the main program to be outputted.
}
        
double determinePositionOfValue(double a[], double b)
{    
    for (int i=0; i<10; i++)  //While the program is working inside of the given array...
        {
             if (a[i]==b)   //If a value in the array is equal to the value inputed by the user...
                {
                       return i;  //...return that value's poition to the main program to be outputted.
                }
        }
    return -1;  //After going through all the values in the array, if the inputed value is not found, return "-1" to the main program to be outputed.
}

void quitProgram()
{
    return;  //Program quits.
}
