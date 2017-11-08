//
//  sentence_tokenizer.cpp
//  A3_COMP345
//
//  Created by Amarisse Brito-Martins on 06/11/2017.
//  Copyright © 2017 Amarisse Brito-Martins. All rights reserved.
//

#include "sentence_tokenizer.hpp"
#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
using namespace std;
vector<sentence> sentence_tokenizer::splitSentence(const string &docText){
    ifstream abbrDoc;
    abbrDoc.open("abbreviations.txt");
    if (abbrDoc.fail()){
        cout << "failed to open abbreviations document." << endl;
    }
    int start = 0;
    int end = 0;
    int currentPos = 0;
    for (string::const_iterator it=docText.begin(); it!= docText.end(); ++it){
        end = docText.find_first_not_of("?.!", start);
        if (*it=='?'){
            
//            sentence currentS(docText.substr(start, currentPos), start);
//            tokenSentences.push_back(currentS);
              start=currentPos+2;
//            cout << currentS.content() << " " << currentS.getPos() << endl;
           
        }
        ++currentPos;
    }
    
    
    
//    size_t start= 0;
//    size_t end = 0;
//    while (end != string::npos){
//        end = docText.find_first_of("?.!",start);
//        sentence currentS(docText.substr(start, end+1), start);
//        tokenSentences.push_back(currentS);
//        cout << currentS.content() << currentS.getPos() << " " <<currentS.size() << endl;
//       // if (isspace(docText.at(end+1)))
//         //   start= end+2;
//        //else
//          //  start = end+1;
//    }
    return tokenSentences;
    
//for (std::map<string, int>::const_iterator it=tokenSentences.begin(); it!=tokenSentences.end(); ++it){
//    cout << it->first << endl;    }
    
}


