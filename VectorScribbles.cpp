// VectorScribbles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// MY NOTEPAD 

// In modern C++, Arrays are hardly used, more often than not, Vectors are in use because Vectors offer Dynamism

// They are a part of the C++ STL (Standard Template Library) 
//Speaking of their dynamic abilities, they can grow or shrink in size at runtime
//They also offer the possibilites of bounds checking
//Finally, they have a lot of cool and very useful functions. 

// DECLARING VECTORS 

//vector <char> vowels ; 
//vector <int> test_scores; 

//EXAMPLE

/*
    vector <char> vowels (5); This would create a vector of 5 characters all initialized to 0.
    vector <int> test_scores (10); Containing 10 integers all initialized to 0. 

    one thing I need to take note of is that vector elements are intialized to 0 by default, unlike arrays which just shoot garbage and junk. 

    VECTOR INITIALIZATION

    vector <char> vowels {'a', 'e', 'i', 'o', 'u'}; 
    vector <int) test_scores {100, 98, 85, 87, 89};
    vector <double> hi_temperatures (365, 80.0); this means that a vector of 365 elements would be created and all of them would be initialized to 0

    ACCESSING VECTOR ELEMENTS

    We can use the Array Subscripting style

    vector_name [element_index];
    for example, test_scores [0];

    So if we create a vector, declared below;

    vector <int> test_scores {100, 95, 99, 87, 88}; 

    cout << "First score at index 0: " << test_scores[0] << endl; 

    N.B: when we use the subscript operator, there would be no bounds checking. 

    ACCESSING VECTOR ELEMENTS - VECTOR SYNTAX

    vector_name.at(element_index)

    e.g test_scores.at(1); 

    If we declare a vector below

    vector <int> test_scores {100, 95, 99, 87, 88};

    cin >> test_scores.at(1); 

    test_scores.at(1) = 90; This means that we have reassigned the value of 90 to the index 1 which then replaces 95

    ADDING ELEMENTS

    To add an element (of the same type) to a vector, we use the push_back(element) method. 




*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
//    vector <char> vowels;         // empty 
//    vector <char> vowels (5);      // 5 initialized to zero 
    vector <char> vowels{ 'a' , 'e', 'i', 'o', 'u' };
    cout << "The vowel at index 0 :" << vowels[0] << endl;
    cout << "The vowel at index 4 :" << vowels[4] << endl;

    //    vector <int> test_scores (3);  // 3 elements all initialized to zero
    //   vector <int> test_scores (3, 100); // 3 elements all initialized to 100

    vector <int> test_scores{ 100, 98, 89 };

    cout << "\nTest scores using array syntax:" << endl;
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl; 
    cout << test_scores[2] << endl;


    cout << "\nTest scores using vector syntax:" << endl;

    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << endl << "There are " << test_scores.size() << " scores in the vector" << endl;

    cout << "\nEnter 3 test scores: ";

    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);

    cout << "\nUpdated test scores: " << endl;

    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;


    cout << "\nEnter a test score to add to the vector: ";

    int addedScore{ 0 };
    cin >> addedScore;

    test_scores.push_back(addedScore);

    cout << "\nEnter one more test score to add to the vector: ";

    cin >> addedScore;

    test_scores.push_back(addedScore);

    cout << "\nTest scores are now: " << endl;

    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;

    cout << endl << "There are now " << test_scores.size() << " scores in the vector" << endl;

    //Assuming I want to check the sizeof the vector

    cout << sizeof test_scores << endl;

    //  cout << "This should cause an exception!!" << test_scores.at(10) << endl; //It is out of bounds. 

      // Example of a 2D-vector

    vector <vector<int>> movie_ratings
    {
        {2, 4, 4, 3},
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5}
    };

    cout << "\nHere are the movie rating for reviewer #1 using array syntax :" << endl;
    cout << movie_ratings[0][0] << endl;
    cout << movie_ratings[0][1] << endl;
    cout << movie_ratings[0][2] << endl;
    cout << movie_ratings[0][3] << endl;

    cout << "\nHere are the movie rating for reviewer #1 using vector syntax :" << endl;

    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl; 

    cout << movie_ratings.at(1).at(0) << endl;
    cout << movie_ratings.at(1).at(1) << endl;
    cout << movie_ratings.at(1).at(2) << endl;
    cout << movie_ratings.at(1).at(3) << endl;

    cout << endl;
    return 0;
}