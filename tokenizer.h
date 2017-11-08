#pragma once
#ifndef TOKENIZER_H
#define TOKENIZER_H
#include <string>
#include <map>
#include <fstream>
using namespace std;

class tokenizer
{
	// This class is responsible for breaking input stream into tokens
	// by splitting it at white space and punct. characters.
public:
	void trimPunctuation(string &word);

};

#endif
