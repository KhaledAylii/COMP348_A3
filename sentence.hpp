//
//  sentence.hpp
//  A3_COMP345
//
//  Created by Amarisse Brito-Martins on 06/11/2017.
//  Copyright © 2017 Amarisse Brito-Martins. All rights reserved.
//

#ifndef sentence_hpp
#define sentence_hpp
#include "index_item.hpp"
#include <stdio.h>
#include <string>
class sentence: private index_item
{
public:
    sentence();
    sentence(std::string t, int p);
    size_t getPos();
    int size() override;
    std::string content() override;
    
private:
    size_t pos;
    std::string text;
    int sizeItem;
};

#endif /* sentence_hpp */
