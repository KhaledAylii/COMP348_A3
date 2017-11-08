//
//  main.cpp
//  A3_COMP345
//
//  Created by Amarisse Brito-Martins on 06/11/2017.
//  Copyright © 2017 Amarisse Brito-Martins. All rights reserved.
//

#include "sentence_tokenizer.hpp"
#include <string>
#include <map>
#include "document.hpp"
#include <iostream>
#include <fstream>
#include "sentence.hpp"
#include "sentence_indexer.hpp"
using namespace std;
int main(){
    string name = "q1.txt";
    document doc(name);
    sentence_indexer ind(doc);

//    string n ="What countries are or have been involved in land or water boundary disputes with each other over oil resources or exploration? How have disputes been resolved, or towards what kind of resolution are the countries moving? What other factors affect the disputes?";
//    if (n.at(125)=='?')
//    cout <<  "true";
//    else
//    cout << "false";
}
