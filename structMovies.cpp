/*Movie Data

Write a program that creates a structure to store information.  The data stored should include the following: 

Title
Director
Year Released
Running Time (in minutes)
Production Costs
Profits

Create two instances of your structure and input the data from two different movies 
(yes, just google the information (I'll even overlook the use of wikipedia for this)).  
Pass the structure to a function for output, display the information for both instances of the structure 
and take a screen capture of the output.

Submit your screen capture, and .cpp file in a zipped folder.  Don't forget to comment your program!*/



#include <iostream>
#include <string>
#include <iomanip>
#include <cmath> 
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <fstream>
using namespace std;

//structure for movies
struct Movie
{
    string title; //title
    string director; //director
    int yearreleased; // year released
    int runningTime; // running time(in minutes)
    string productionCosts; //production costs
    string profits; //profits
};

int main()
{
    cout << "Hello World!\n\n";

    //pass info for two movies to the structure
    Movie piratesoftheCaribbean1 = { "Pirates of the Caribbean: Curse of the Black Pearl", "Gore Verbinski", 2003, 143, "$140 million", "$654.3 million"}; //pirates of the caribbea
    Movie thesoundofmusic = { "The Sound of Music", "Robert Wise", 1965, 174, "$8.2 million", "$286.2 million" }; //sound of music

    //output structure info movie 1
    cout << "Movie Title: " << piratesoftheCaribbean1.title << endl;
    cout << "Director: " << piratesoftheCaribbean1.director << endl;
    cout << "Year Released: " << piratesoftheCaribbean1.yearreleased << endl;
    cout << "Running Time: " << piratesoftheCaribbean1.runningTime << " minutes" << endl;
    cout << "Budget: " << piratesoftheCaribbean1.productionCosts << endl;
    cout << "Box office: " << piratesoftheCaribbean1.profits << endl << endl;

    //output structure info movie 1
    cout << "Movie Title: " << thesoundofmusic.title << endl;
    cout << "Director: " << thesoundofmusic.director << endl;
    cout << "Year Released: " << thesoundofmusic.yearreleased << endl;
    cout << "Running Time: " << thesoundofmusic.runningTime << " minutes" << endl;
    cout << "Budget: " << thesoundofmusic.productionCosts << endl;
    cout << "Box office: " << thesoundofmusic.profits << endl;
}


