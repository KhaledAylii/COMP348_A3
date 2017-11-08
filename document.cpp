#include <iostream>
#include <vector>
#include <fstream>
#include "document.h"
using namespace std;

ifstream input;
string word;

document::document(){
    fileName = "";
    sizeDoc = 0;
}
document::document(string name) {
	fileName = name;
	input.open(name);
	while ( input >> word){
		text += word;
	}
    sizeDoc = text.length();
}
string document::name(const document &doc) {
	return fileName;
}

int document::size(const document &doc) {
	return sizeDoc;
}

string document::content(const document &doc) {
	return text;
}
