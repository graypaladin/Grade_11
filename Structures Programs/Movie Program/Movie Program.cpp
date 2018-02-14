#include <cstdlib>
#include <iostream>

using namespace std;

struct Movie
{
       string name;
       int duration;
       string genre;
};

Movie initializeMovie(Movie _Movie, string _name, int _duration, string _genre)
{
      _Movie.name=_name;
      _Movie.duration=_duration;
      _Movie.genre=_genre;
      return (_Movie);
}

void displayMovie(Movie _Movie)
{
     cout<<"Name: "<<_Movie.name<<endl;
     cout<<"Duration: "<<_Movie.duration<<" minutes"<<endl;
     cout<<"Genre: "<<_Movie.genre<<endl;
     return;
}

bool compareMovies(Movie movie1, Movie movie2)
{
     if ((movie1.name==movie2.name) and (movie1.duration==movie2.duration) and (movie1.genre==movie2.genre))
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
    Movie theMovie1;
    Movie theMovie2;
    string nameOfMovie1;
    int durationOfMovie1=0;
    string genreOfMovie1;
    string nameOfMovie2;
    int durationOfMovie2=0;
    string genreOfMovie2;
    cout<<"Welcome to the Movie Program!"<<endl<<endl;
    cout<<"Please enter the name, duration (in minutes), and genre of Movie 1."<<endl;
    cout<<"Name: ";
    cin>>nameOfMovie1;
    cout<<"Duration: ";
    cin>>durationOfMovie1;
    cout<<"Genre: ";
    cin>>genreOfMovie1;
    cout<<endl;
    cout<<"Please enter the name, duration (in minutes), and genre of Movie 2."<<endl;
    cout<<"Name: ";
    cin>>nameOfMovie2;
    cout<<"Duration: ";
    cin>>durationOfMovie2;
    cout<<"Genre: ";
    cin>>genreOfMovie2;
    cout<<endl<<endl;
    theMovie1 = initializeMovie(theMovie1, nameOfMovie1, durationOfMovie1, genreOfMovie1);
    theMovie2 = initializeMovie(theMovie2, nameOfMovie2, durationOfMovie2, genreOfMovie2); 
    cout<<"Movie 1:"<<endl;
    displayMovie(theMovie1);
    cout<<endl;
    cout<<"Movie 2:"<<endl;
    displayMovie(theMovie2);
    cout<<endl<<endl;
    compareMovies(theMovie1, theMovie2);
    if (compareMovies(theMovie1, theMovie2)==true)
       {
            cout<<"Are the movies the same?: Yes!"<<endl<<endl<<endl;
       }
    else
       {
            cout<<"Are the movies the same?: No!"<<endl<<endl<<endl;
       }
    system("PAUSE");
    return EXIT_SUCCESS;
}
