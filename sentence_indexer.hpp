//
//  sentence_indexer.hpp
//  A3_COMP345
//
//  Created by Amarisse Brito-Martins on 07/11/2017.
//  Copyright © 2017 Amarisse Brito-Martins. All rights reserved.
//

#ifndef sentence_indexer_hpp
#define sentence_indexer_hpp
#include "indexer.hpp"
#include "document.hpp"
#include "sentence_tokenizer.hpp"
#include <stdio.h>
class sentence_indexer: public indexer{
public:
    sentence_indexer();
    sentence_indexer(document &doc);
    
private:
    vector<sentence> indexedSentences;
};
#endif /* sentence_indexer_hpp */
