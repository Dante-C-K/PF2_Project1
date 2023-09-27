//
// Created by Dante on 8/28/2023.
//

#include "BestSeller.h"
#include <iostream>


using namespace std;

BestSeller::BestSeller(int year, string week, int rank, int titleID, string title, string author) {
    Year = year;
    Week = week;
    Rank = rank;
    TitleID = titleID;
    Title = title;
    Author = author;
}

BestSeller::BestSeller(const BestSeller & bestSeller) {
     Year = bestSeller.Year;
     Week = bestSeller.Week;
     Rank = bestSeller.Rank;
     TitleID = bestSeller.TitleID;
     Title = bestSeller.Title;
     Author = bestSeller.Author;
}

BestSeller::BestSeller() {
     Year = 0;
     Week = "";
     Rank = 0;
     TitleID = 0;
     Title = "";
     Author = "";
}

BestSeller::~BestSeller() {
}

int BestSeller::getYear() {
    return Year;
}

string BestSeller::getWeek() {
    return Week;
}

int BestSeller::getRank() {
    return Rank;
}

int BestSeller::getTitleID() {
    return TitleID;
}

string BestSeller::getTitle() {
    return Title;
}

string BestSeller::getAuthor() {
    return Author;
}

void BestSeller::setYear(int year) {
    Year = year;
}

void BestSeller::setWeek(string week) {
    Week = week;
}

void BestSeller::setRank(int rank) {
    Rank = rank;
}

void BestSeller::setTitleID(int titleID) {
    TitleID = titleID;
}

void BestSeller::setTitle(string title) {
    Title = title;
}

void BestSeller::setAuthor(string author) {
    Author = author;
}

void BestSeller::print() {
    cout << "Year: " << Year << endl;
    cout << "Week: " << Week << endl;
    cout << "Rank: " << Rank << endl;
    cout << "TitleID: " << TitleID << endl;
    cout << "Title: " << Title << endl;
    cout << "Author: " << Author << endl;
}
