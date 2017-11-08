#pragma once
#ifndef STOPWORD_H
#define STOPWORD_H
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class stopword
{
public:
	stopword(); // creates object with an empty stopword list
    ~stopword();
    stopword(string fileName); // reads stopword list from file
	bool operator() (string &token);
	// &operator<< (ostream &os, stopword &stop);
private:
	string fileName;
	vector<string> stopWords;
};

#endif
