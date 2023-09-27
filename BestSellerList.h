//
// Created by westh on 9/15/2023.
//

#ifndef VIDEO_BESTSELLERLIST_H
#define VIDEO_BESTSELLERLIST_H

#include <iostream>
#include <fstream>
#include <string>
#include "BestSellerNode.h"

using namespace std;



class BestSellerList
{
public:
    BestSellerList(); //
    BestSellerList(const BestSellerList & bestSellerList);
    BestSellerList(BestSellerNode* Head, BestSellerNode*Tail, int Count);
    ~BestSellerList();


    void InsertHead(BestSellerNode* newBestSellerNode);
    void InsertTail(BestSellerNode* newBestSellerNode);

    void AuthorInsert();
    void TitleInsert();
    void Print();

    void FindTitle();
    void FindAuthor();
    void MostPopularBook();
    void MostProlificAuthor();







private:
    BestSellerNode* Head; // •	Head – A pointer to first node in the BestSeller linked list.
    BestSellerNode* Tail; // – A pointer to last node in the BestSeller linked list.
    int Count; // – The number of nodes stored in the BestSeller linked list.


};


#endif //VIDEO_BESTSELLERLIST_H
