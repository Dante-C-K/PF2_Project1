//
// Created by westh on 8/28/2023.
//

#ifndef PF2_PROJECT1_BESTSELLER_H
#define PF2_PROJECT1_BESTSELLER_H

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;


class BestSeller {



private:
    int Year; //Year – The year the best sellers list was published.
    string Week; //Week – The date the best sellers list was published in YYYY-MM-DD format.
    int Rank; //Rank – An integer representing the position of the book on the best sellers list.
    int TitleID; // Title_ID – An integer which is the NYT internal identifier for a book.
    string Title; // A string containing the title of the book (in capital letters).
    string Author; //  A string containing the author of the book (sometimes multiple authors).
public:

//constructor and destructor

    BestSeller();

    // constructor to initialize the object
    BestSeller(int year, string week, int rank, int titleID, string title, string author);

    // copy constructor to copy an object
    BestSeller(const BestSeller& other);

    // destructor to delete the object
    ~BestSeller();

//Get Methods.
    int getYear();
    string getWeek();
    int getRank();
    int getTitleID();
    string getTitle();
    string getAuthor();

//Set Methods.

    void setYear(int year);
    void setWeek(string week);
    void setRank(int rank);
    void setTitleID(int titleID);
    void setTitle(string title);
    void setAuthor(string author);

//Searh Methods.

    //find_title(string title); /*•	find_title – This function should loop over the BestSeller vector and print all of the best seller records that match the specified title. For example, if you search for “THE HOBBIT” you will find this book was on the NYT best seller list for two weeks in 1977. Note all titles are in upper case.

    //find_author(string author); /* •	find_author – This function should loop over the BestSeller vector and print all of the best seller records that match the specified author. For example, if you search for “J. K. Rowling” you will find that her books were on the best sellers list almost 200 times. There are several ways to compare strings in C++. Look at the documentation, select a comparison method, and document your choice in your project report. */

    //find_week(int titleID); /* – This function should loop over the BestSeller vector and print all of the best seller records that were published between the specified start date and specified end date. You will notice that these dates are stored in strings in YYYY-MM-DD format, which makes date comparison trivial compared to the MM/DD/YYYY format.  */
//Utility Methods.

//Print Methods.

    void print();




};


#endif //PF2_PROJECT1_BESTSELLER_H
