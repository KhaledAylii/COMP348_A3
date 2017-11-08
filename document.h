#pragma once
#ifndef DOCUMENT_H
#define DOCUMENT_H
#include <iostream>
#include <string>
#include <vector>
#include "tokenizer.h"
using namespace std;

class document
{
public:
    document();
	document(string name);
	string name(const document &doc);
    int size(const document &size);
	string content(const document &content); // returns text of the document.
	friend bool operator<< (document & left, document & right);
private:
	string fileName;
	int sizeDoc;
	string text;
};
#endif

