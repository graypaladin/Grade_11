#include <cstdlib>
#include <iostream>

using namespace std;

struct Student
{
       string name;
       int number;
       int grade;
};

Student initialize(Student _Student, string _name, int _number, int _grade)
{
       _Student.name=_name;
       _Student.number=_number;
       _Student.grade=_grade;
       return _Student;
}

void display(Student _Student)
{
       cout<<"Name: "<<_Student.name<<endl;
       cout<<"Student #: "<<_Student.number<<endl;
       cout<<"Grade: "<<_Student.grade<<endl;
       return;
}

bool isEqual(Student student1, Student student2)
{
     if ((student1.name==student2.name) and (student1.grade==student2.grade))
        {
             return true;
        }
     else
        {
             return false;
        }
}

bool isInListName(Student student1, Student student2, Student student3)
{
     if ((student1.name==student3.name) or (student2.name==student3.name))
        {
             return true;
        }
     else
        {
             return false;
        }
}

bool isInListStudent(Student student1, Student student2, Student student3, Student student4)
{
     if (((student1.name==student4.name) or (student2.name==student4.name) or (student3.name==student4.name)) and ((student1.grade==student4.grade) or (student2.grade==student4.grade) or (student3.grade==student4.grade)))
        {
             return true;
        }
     else
        {
             return false;
        }
}

int main(int argc, char *argv[])
{
    Student theStudent1;
    Student theStudent2;
    Student theStudent3;
    Student theStudent4;
    string nameOfStudent1;
    int student1Number=0;
    int gradeOfStudent1=0;
    string nameOfStudent2;
    int student2Number=0;
    int gradeOfStudent2=0;
    string nameOfStudent3;
    int student3Number=0;
    int gradeOfStudent3=0;
    string nameOfStudent4;
    int student4Number=0;
    int gradeOfStudent4=0;
    int studentNumberCounter=1;
    cout<<"Welcome to the Student Program!"<<endl<<endl;
    cout<<"Please enter the name and grade of the first student."<<endl;
    cout<<"Student 1: "<<endl;
    cout<<"Name: ";
    cin>>nameOfStudent1;
    student1Number=studentNumberCounter++;
    cout<<"Grade: ";
    cin>>gradeOfStudent1;
    cout<<endl;
    cout<<"Please enter the name and grade of the second student."<<endl;
    cout<<"Student 2: "<<endl;
    cout<<"Name: ";
    cin>>nameOfStudent2;
    student2Number=studentNumberCounter++;
    cout<<"Grade: ";
    cin>>gradeOfStudent2;
    cout<<endl<<endl;
    theStudent1 = initialize(theStudent1, nameOfStudent1, student1Number, gradeOfStudent1);
    theStudent2 = initialize(theStudent2, nameOfStudent2, student2Number, gradeOfStudent2);
    display(theStudent1);
    cout<<endl;
    display(theStudent2);
    cout<<endl<<endl;
    isEqual(theStudent1, theStudent2);
    if (isEqual(theStudent1, theStudent2)==true)
       {
            cout<<"Are they the same student?: Yes!"<<endl<<endl;
       }
    else
       {
            cout<<"Are they the same student?: No!"<<endl<<endl;
       }
    cout<<"Now please enter the name of another student."<<endl;
    cout<<"Name: ";
    cin>>nameOfStudent3;
    theStudent3 = initialize(theStudent3, nameOfStudent3, student3Number, gradeOfStudent3);
    isInListName(theStudent1, theStudent2, theStudent3);
    if (isInListName(theStudent1, theStudent2, theStudent3)==true)
       {
            cout<<"Is the name of the student already in the list?: Yes!"<<endl<<endl;
       }
    else
       {
            cout<<"Is the name of the student already in the list?: No!"<<endl<<endl;
       }
    cout<<"Now please enter the name and grade of another student."<<endl;
    cout<<"Name: ";
    cin>>nameOfStudent4;
    cout<<"Grade: ";
    cin>>gradeOfStudent4;
    theStudent4 = initialize(theStudent4, nameOfStudent4, student4Number, gradeOfStudent4);
    isInListStudent(theStudent1, theStudent2, theStudent3, theStudent4);
    if (isInListStudent(theStudent1, theStudent2, theStudent3, theStudent4)==true)
       {
            cout<<"Is the student already in the list?: Yes!"<<endl<<endl<<endl;
       }
    else
       {
            cout<<"Is the student already in the list?: No!"<<endl<<endl<<endl;
       }
    system("PAUSE");
    return EXIT_SUCCESS;
}
