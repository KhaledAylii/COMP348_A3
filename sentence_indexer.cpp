//
//  sentence_indexer.cpp
//  A3_COMP345
//
//  Created by Amarisse Brito-Martins on 07/11/2017.
//  Copyright © 2017 Amarisse Brito-Martins. All rights reserved.
//

#include "sentence_indexer.hpp"
#include "sentence_tokenizer.hpp"
#include "sentence.hpp"
#include "document.hpp"
#include "indexer.hpp"
#include <string>
#include <vector>
#include <map>
using namespace std;
sentence_indexer::sentence_indexer():indexer(){}
sentence_indexer::sentence_indexer(document &doc):indexer(){
    sentence_tokenizer t;
    indexedSentences = t.splitSentence(doc.content());
}


