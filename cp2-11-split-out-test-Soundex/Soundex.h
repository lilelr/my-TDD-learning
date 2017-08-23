//
// Created by YuXiao on 8/22/17.
//

#ifndef MY_GMOCK_START_SOUNDEX_H
#define MY_GMOCK_START_SOUNDEX_H

#include <string>

class Soundex{
public:
    std::string encode(const std::string& word) const{
        return zeroPad(word);
    }

private:
    std::string zeroPad(const std::string& word)const {
        return word+"000";
    }
};
#endif //MY_GMOCK_START_SOUNDEX_H
