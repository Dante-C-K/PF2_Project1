//
// Created by westh on 9/15/2023.
//
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "BestSellerList.h"
using namespace std;



//Default constructor
BestSellerList::BestSellerList() {
    Head = nullptr;
    Tail = nullptr;
    Count = 0;
}

//Copy constructor
BestSellerList::BestSellerList(const BestSellerList &bestSellerList) {
    Head = bestSellerList.Head;
    Tail = bestSellerList.Tail;
    Count = bestSellerList.Count;
}

//Constructor
BestSellerList::BestSellerList(BestSellerNode* Head, BestSellerNode* Tail, int Count) {

}

//Destructor
BestSellerList::~BestSellerList() {

}


//
void BestSellerList::InsertHead(BestSellerNode* newBestSellerNode) {
// To insert a BestSeller node at the Head of the linked list.

// Checks if their is a head pntr, IE is this the fist item added to the list
    if(Head == nullptr) {
        // If there is no head
        Head = newBestSellerNode;
        Tail = Head;
        Count++;
    }
    else {
        //If there is a head
        BestSellerNode* temp = newBestSellerNode;
        temp->setNext(Head);
        Head = temp;
        Count++;
    }
}

//
void BestSellerList::InsertTail(BestSellerNode* newBestSellerNode) {
// To insert a BestSeller node at the Tail of the linked list.
// Checks if their is a tail pntr, IE is this the fist item added to the list
    if(Tail == nullptr){
        // If there is no tail
        Tail = new BestSellerNode();
        Head = Tail;
        Count++;
    }
    else {
        //If there is a tail
        BestSellerNode* temp = newBestSellerNode;
        temp->setNext(Tail);
        Tail = temp;
        Count++;
    }
}

//
void BestSellerList::AuthorInsert() {
// To insert a BestSeller node into the list in sorted order according to Author.
}

//
void BestSellerList::TitleInsert() {
// To insert a BestSeller node into the list in sorted order according to Title.
}

//
void BestSellerList::Print() {
// Print all the BestSeller nodes starting at the Head and going to Tail
}


void BestSellerList::FindTitle() {
/* FindTitle –
 * his method should loop over the BestSellerList and print all of the best seller records that match the specified title. .
 * For example, if you search for “THE HOBBIT” you will find this book was on the NYT best seller list for two weeks in 1977.
 * Note all titles are in upper case.
 */
}


void BestSellerList::FindAuthor() {
/* FindAuthor –
 * This method should loop over the BestSellerList and print all of the best seller records that match the specified author.
 * For example, if you search for “J. K. Rowling” you will find that her books were on the best sellers list almost 200 times
 */
}



void BestSellerList::MostPopularBook() {
/* MostPopularBook –
 * This method loops over a BestSellerList that is in sorted order according to book title and counts how many times each title appears in the best sellers list.
 * The method should then calculate which title was the most popular (largest count) and print the title and count to the screen.
 * This method may produce incorrect results if the list is not sorted by title.
 */
}



void BestSellerList::MostProlificAuthor() {
/* MostProlificAuthor
 *•This method loops over a BestSellerList that is in sorted order according to book author and counts how many times each author appears in the best sellers list.
 * The method should then calculate which author was the most prolific (largest count) and print the author and count to the screen.
 * This method may produce incorrect results if the list is not sorted by author.
 */
}
