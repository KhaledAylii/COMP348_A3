/*
 * stopword.cpp
 *
 *  Created on: 17 oct. 2017
 *      Author: Amarisse
 */
#include <iostream>
#include <string>
#include <vector>
#include <iostream>
#include <map>
#include <list>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include "stopword.h"

using namespace std;

ifstream ifs;
string inputWord;
stopword::stopword(string name){
	;
		fileName = name;
		ifs.open(name);
		if (ifs.fail())
			{
				cout << "Stopwords file opening failed. \n" << endl;
				exit(1);
			}
	 	while (ifs >> inputWord){
	 		stopWords.push_back(inputWord);
	 	}
		ifs.close();
}
stopword::~stopword(){
    stopWords.pop_back();
}

stopword::stopword() {
	fileName = "";
}


bool stopword::operator() (string &token) {
	if (find(stopWords.begin(), stopWords.end(),token)!= stopWords.end())
		return true;
	else
		return false;
}
//
//ostream operator<< (ostream &os, stopword &stop) {
//	os << stop.fileName;
//	return os;
//}
