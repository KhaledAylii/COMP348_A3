//
//  sentence_tokenizer.hpp
//  A3_COMP345
//
//  Created by Amarisse Brito-Martins on 06/11/2017.
//  Copyright © 2017 Amarisse Brito-Martins. All rights reserved.
//

#ifndef sentence_tokenizer_hpp
#define sentence_tokenizer_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include "sentence.hpp"

class sentence_tokenizer{
public:
    std::vector<sentence> splitSentence(const std::string &docText);
private:
    std::vector <sentence> tokenSentences;
};
#endif /* sentence_tokenizer_hpp */
