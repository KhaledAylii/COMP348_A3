/*
 * indexer.h
 *
 *  Created on: 17 oct. 2017
 *      Author: Amarisse
 */

#ifndef INDEXER_H_
#define INDEXER_H_
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <list>
#include <iomanip>
#include <fstream>
#include <algorithm>
#include "tokenizer.h"
#include "stopword.h"
#include "document.h"
using namespace std;

class indexer {
public:
	indexer();
	indexer(document &doc);
	int size();
	vector<string> fileNames;
	double normalize();
	friend void addDocument(indexer &idx, document &doc);
	// document& operator[] (document &indexedDocs);
//	string to_string();
	void operator<<(document &doc);
	void operator>>(document &doc);
private:
	vector<document> documents;
	int numOfDocs;
	int termFrequency;
	int documentFrequency;
	void calculateTermFreq();
	void calculateDocumentFreq();

};

#endif /* INDEXER_H_ */
