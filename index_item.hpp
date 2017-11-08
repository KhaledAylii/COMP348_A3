//
//  index_item.hpp
//  A3_COMP345
//
//  Created by Amarisse Brito-Martins on 06/11/2017.
//  Copyright © 2017 Amarisse Brito-Martins. All rights reserved.
//

#ifndef index_item_hpp
#define index_item_hpp

#include <stdio.h>
#include <string>

class index_item{
public:
    index_item();
    virtual ~index_item()=0;
    virtual int size()=0;
    virtual std::string content()=0;
};

#endif /* index_item_hpp */
