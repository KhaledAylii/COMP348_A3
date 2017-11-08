//
//  sentence.cpp
//  A3_COMP345
//
//  Created by Amarisse Brito-Martins on 06/11/2017.
//  Copyright © 2017 Amarisse Brito-Martins. All rights reserved.
//

#include "sentence.hpp"
#include <string>

sentence::sentence(){
    pos = 0;
    sizeItem=0;
}
sentence::sentence(std::string t, int p): text(t), pos(p){
}
int sentence::size(){
    sizeItem=0;
    for (std::string::const_iterator i=text.begin(); i!=text.end(); ++i){
       if (isspace(*i))
           ++sizeItem;
        }
    return sizeItem;
}
size_t sentence::getPos(){
    return pos;
}
std::string sentence::content(){
    return text;
}
