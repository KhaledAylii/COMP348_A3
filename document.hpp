//
//  document.hpp
//  A3_COMP345
//
//  Created by Amarisse Brito-Martins on 07/11/2017.
//  Copyright © 2017 Amarisse Brito-Martins. All rights reserved.
//

#pragma once
#ifndef DOCUMENT_H
#define DOCUMENT_H
#include <iostream>
#include <string>
#include <vector>
#include "index_item.hpp"
using namespace std;

class document: private index_item
{
public:
    document();
    document(string &name);
    string name();
    int size() override {return sizeItem;};
    string content() override {return text;}; // returns text of the document.
    friend bool operator<< (document & left, document & right);
private:
    string fileName;
    string text;
    int sizeItem;
};
#endif


