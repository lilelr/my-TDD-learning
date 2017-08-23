//
// Created by YuXiao on 8/23/17.
//

#include "CharUtil.h"
#include <string>

using namespace std;

namespace charutil {
    bool isVowel(char letter) {
        return
                std::string("aeiouy").find(tolower(letter)) != std::string::npos;
    }

    char upper(char c) {
        return std::toupper(static_cast<unsigned char>(c));
    }

    char lower(char c)  {
        return std::tolower(static_cast<unsigned char>(c));
    }
}
