#include <string>
#include <algorithm>
#include "tokenizer.h"
using namespace std;

void tokenizer::trimPunctuation(string &word) {
		// splits the input text into words using whitespace and punctuation
		// Trims a word of all surrounding punctuation
		int newStart = 0;
		int newEnd = word.size() - 1;
		word.erase(remove_if(word.begin(), word.end(), ::isspace), word.end());
		word.erase(remove_if(word.begin(), word.end(), ::isdigit), word.end());
		for (int i = 0; i <= word.size() - 1; i++) {
			if (!ispunct(word.at(i))) {
				newStart = i;
				break;
			}
		}

		for (int i = word.size() - 1; i >= 0; i--) {
			if (!ispunct(word.at(i))) {
				newEnd = i;
				break;
			}
		}

		int newLength = newEnd - newStart + 1;
		string newWord = word.substr(newStart, newLength);

		word = newWord;
		transform(word.begin(), word.end(), word.begin(), ::tolower);
	
}

