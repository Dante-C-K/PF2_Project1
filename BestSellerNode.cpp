//
// Created by Dante on 8/28/2023.
//

#include "BestSellerNode.h"
#include <iostream>

using namespace std;

BestSellerNode::BestSellerNode(int year, string week, int rank, int titleID, string title, string author) {
    Year = year;
    Week = week;
    Rank = rank;
    TitleID = titleID;
    Title = title;
    Author = author;
}

BestSellerNode::BestSellerNode(const BestSellerNode & bestsellernode) {
    Year = bestsellernode.Year;
    Week = bestsellernode.Week;
    Rank = bestsellernode.Rank;
    TitleID = bestsellernode.TitleID;
    Title = bestsellernode.Title;
    Author = bestsellernode.Author;
}

BestSellerNode::BestSellerNode() {
    Year = 0;
    Week = "";
    Rank = 0;
    TitleID = 0;
    Title = "";
    Author = "";
}

BestSellerNode::~BestSellerNode() {
}

int BestSellerNode::getYear() {
    return Year;
}

string BestSellerNode::getWeek() {
    return Week;
}

int BestSellerNode::getRank() {
    return Rank;
}

int BestSellerNode::getTitleID() {
    return TitleID;
}

string BestSellerNode::getTitle() {
    return Title;
}

string BestSellerNode::getAuthor() {
    return Author;
}

BestSellerNode *BestSellerNode::getNext() {
    return nullptr;
}

BestSellerNode *BestSellerNode::getPrevious() {
    return nullptr;
}

void BestSellerNode::setYear(int year) {
    Year = year;
}

void BestSellerNode::setWeek(string week) {
    Week = week;
}

void BestSellerNode::setRank(int rank) {
    Rank = rank;
}

void BestSellerNode::setTitleID(int titleID) {
    TitleID = titleID;
}

void BestSellerNode::setTitle(string title) {
    Title = title;
}

void BestSellerNode::setAuthor(string author) {
    Author = author;
}

void BestSellerNode::print() {
    cout << "Year: " << Year << endl;
    cout << "Week: " << Week << endl;
    cout << "Rank: " << Rank << endl;
    cout << "TitleID: " << TitleID << endl;
    cout << "Title: " << Title << endl;
    cout << "Author: " << Author << endl;
}

void BestSellerNode::setNext(BestSellerNode* next) {
    Next = next;
}

void BestSellerNode::setPrevious(BestSellerNode *previous) {
    Previous = previous;
}



