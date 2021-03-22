#include "doctest.h"
#include "Board.hpp"
using namespace ariel;
#include <string>
using namespace std;
#include<stdexcept>
static Board board;

using namespace std;


TEST_CASE("just a test") {
    Board board;
    CHECK_NOTHROW(board.post(100,200,Direction::Horizontal,"abcd"));
    /* Add more checks here */
}

/* Add more test cases here */
TEST_CASE("read method only") {
    CHECK_THROWS(board.read(100,200,Direction::Horizontal, 4));
    CHECK_THROWS(board.read(10,2,Direction::Vertical,2));
    CHECK_THROWS(board.read(0,0,Direction::Horizontal,7));
    CHECK_THROWS(board.read(1000,100,Direction::Vertical,5));
    CHECK_THROWS(board.read(356,421,Direction::Horizontal,8));
    CHECK_THROWS(board.read(50,957,Direction::Vertical,10));
    CHECK_THROWS(board.read(81,74,Direction::Horizontal,12));
}

TEST_CASE("post nmethod only "){
    CHECK_NOTHROW(board.post(12,43,Direction::Vertical, "abcd"));
    CHECK_NOTHROW(board.post(56,27,Direction::Horizontal,"efg"));
    CHECK_NOTHROW(board.post(10,98,Direction::Vertical,"hijk"));
    CHECK_NOTHROW(board.post(15,67,Direction::Horizontal,"lmnop"));
    CHECK_NOTHROW(board.post(732,109,Direction::Vertical,"qrs"));
    CHECK_NOTHROW(board.post(832,38,Direction::Horizontal,"tuv"));
    CHECK_NOTHROW(board.post(231,98,Direction::Vertical,"wx"));
    CHECK_NOTHROW(board.post(24,0,Direction::Horizontal,"hello you?"));
}

TEST_CASE("Equals"){
    CHECK_EQ(board.read(3,0,Direction::Vertical, 3), "hay");
    CHECK_EQ(board.read(66,120,Direction::Horizontal,0), "");
    CHECK_EQ(board.read(26,0,Direction::Vertical,5), "realm");
    CHECK_EQ(board.read(42,10000,Direction::Horizontal,8), "shalom55");
    CHECK_EQ(board.read(769,1,Direction::Vertical,6), "escoji");
    CHECK_EQ(board.read(6,1111111,Direction::Horizontal,1), "%");
    CHECK_EQ(board.read(1,1,Direction::Horizontal,1), "E");
    CHECK(board.read(24,5,Direction::Horizontal,12)=="YE0545213335");
    CHECK(board.read(21,16,Direction::Vertical,7)=="r05aal");
    CHECK(board.read(15,30,Direction::Horizontal,16)=="_METRO_LINE_1234");
    CHECK(board.read(11,0,Direction::Horizontal,19)=="guitare_were_found");
    CHECK(board.read(0,0,Direction::Vertical, 8)=="jhonybooy");


}