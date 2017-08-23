//
// Created by YuXiao on 8/23/17.
//

#ifndef MY_GMOCK_START_STRINGUTIL_H
#define MY_GMOCK_START_STRINGUTIL_H
#include <string>

namespace stringutil {
    std::string head(const std::string& word);
    std::string tail(const std::string& word);
    std::string zeroPad(const std::string& text, unsigned int toLength);
    std::string upperFront(const std::string& string);
}


#endif //MY_GMOCK_START_STRINGUTIL_H
