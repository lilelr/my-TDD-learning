//
// Created by YuXiao on 8/22/17.
//
#include <string>
#include "gmock/gmock.h"
using ::testing::Eq;

class Soundex
{
public:
    std::string encode(const std::string& word) const {
        return zeroPad(word);
    }

private:
    std::string zeroPad(const std::string& word) const{
        return  word+"000";
    }
};


class SoundexFixture: public testing::Test{
public:
    Soundex soundex;
};


TEST_F(SoundexFixture, RetainsSoleLetterOfOneLetterWord){
    auto encoded = soundex.encode("A");
    ASSERT_THAT(encoded,Eq("A000"));
}

TEST_F(SoundexFixture, PadsWithZerosToEnsureThreeDigits){
    auto encoded = soundex.encode("I");
    ASSERT_THAT(encoded, Eq("I000"));
}