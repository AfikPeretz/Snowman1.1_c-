/**
 *
 * AUTHORS: <afik peretz>
 * 
 * Date: 2021-03
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;



TEST_CASE("Good snowman code") {
    CHECK(snowman(11114411) == string("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(snowman(12341234) == string(" _===_\n (O.-)/\n<(> <) \n (   )\n"));
    CHECK(snowman(31313131) == string("   _  \n  /_\\ \n (O,.) \n/(> <)>\n ( : )"));
    CHECK(snowman(12344434) == string(" _===_\n (O.-) \n (> <) \n (   )\n"));
    CHECK(snowman(11111111) == string(" _===_\n (.,.) \n<( : )>\n ( : )\n"));
    CHECK(snowman(22222222) == string("  ---\n .....\n\\(o.o)/\n (] [) \n (\" \")\n"));
    CHECK(snowman(21114431) == string("  ___ \n .....\n (.,.) \n (> <) \n ( : )"));
    CHECK(snowman(12341424) == string("      \n _===_\n (O.-) \n<(] [) \n (   )"));
    CHECK(snowman(33333333) == string("   -\n  /_\\\n (O_O) \n/(> <)\\\n (___)\n"));
    CHECK(snowman(44444444) == string("  ---\n (_*_)\n (- -) \n (   ) \n (   )\n"));
    CHECK(snowman(21114411) == string("  ___ \n .....\n (.,.) \n ( : ) \n ( : )"));
    CHECK(snowman(33333433) == string("   _  \n  /_\\ \n (O_O) \n/(> <) \n (___)"));
    CHECK(snowman(11111123) == string("      \n _===_\n (.,.) \n<(] [)>\n (___)"));
    CHECK(snowman(12331111) == string("      \n _===_\n (O.O) \n<( : )>\n ( : )"));
    CHECK(snowman(31421312) == string("   _  \n  /_\\ \n (-,o) \n<( : )\\\n (\" \")"));
    CHECK(snowman(44332211) == string("  ___ \n (_*_)\n\\(O O)/\n ( : ) \n ( : )"));
    CHECK(snowman(12121212) == string("      \n _===_\n (..o)/\n<( : ) \n (\" \")"));
    CHECK(snowman(33333443) == string("   _  \n  /_\\ \n (O_O) \n/(   ) \n (___)"));
    CHECK(snowman(12311111) == string("      \n _===_\n (O..) \n<( : )>\n ( : )"));
    CHECK(snowman(43312222) == string("  ___ \n (_*_)\n\\(O_.)/\n (] [) \n (\" \")"));
    CHECK(snowman(42424222) == string("  ___ \n (_*_)\n (-.o)/\n (] [) \n (\" \")"));
    CHECK(snowman(31421322) == string("   _  \n  /_\\ \n (-,o) \n<(] [)\\\n (\" \")"));
    CHECK(snowman(42134444) == string(" ___  \n (_*_) \n (..O) \n (   ) \n (   ) "));
    CHECK(snowman(44444441) == string(" ___  \n (_*_) \n (- -) \n (   ) \n ( : )"));
    CHECK(snowman(13241324) == string(" _===_\n (o_-)\n<(] [)\\\n (   )"));
    CHECK(snowman(41312222) == string("  ___ \n (_*_)\n\\(O,.)/\n (] [) \n (\" \")"));
    CHECK(snowman(42312222) == string("  ___ \n (_*_)\n\\(O..)/\n (] [) \n (\" \")"));
    CHECK(snowman(41114411) == string("  ___ \n (_*_)\n (.,.) \n ( : ) \n ( : )"));
    CHECK(snowman(12321111) == string("      \n _===_\n (O.o) \n<( : )>\n ( : )"));
    CHECK(snowman(21114421) == string("  ___ \n .....\n (.,.) \n (] [) \n ( : )"));
    CHECK(snowman(11111122) == string("      \n _===_\n (.,.) \n<(] [)>\n (\" \")"));
    CHECK(snowman(11111124) == string("      \n _===_\n (.,.) \n<(] [)>\n (   )"));
    CHECK(snowman(11423344) == string("      \n _===_\n (-,o) \n/(   )\\\n (   )"));
    






    CHECK(snowman(44444444) == string(hat[3]+"\n"+rightarm[3]+lefteye[3]+nose[3]+righteye[3]+leftarm[3]+"\n"+torso[3]+"\n"+base[3]));
    CHECK(snowman(11114411) == string(hat[0]+"\n"+rightarm[0]+lefteye[0]+nose[0]+righteye[3]+leftarm[3]+"\n"+torso[0]+"\n"+base[0]));
    CHECK(snowman(12341234) == string(hat[0]+"\n"+rightarm[1]+lefteye[2]+nose[3]+righteye[0]+leftarm[1]+"\n"+torso[2]+"\n"+base[3]));
}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(11224466));
    CHECK_THROWS(snowman(12340123));
    CHECK_THROWS(snowman(-12344123));
}


TEST_CASE("input too long") {
    CHECK_THROWS(snowman(333333333));
    CHECK_THROWS(snowman(111111111));
    CHECK_THROWS(snowman(211322211));
    CHECK_THROWS(snowman(413333331));
}


TEST_CASE("input too short") {
    CHECK_THROWS(snowman(12341));
    CHECK_THROWS(snowman(4444));
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(22));
    CHECK_THROWS(snowman(333));
    CHECK_THROWS(snowman(214321));
}


TEST_CASE("combinatiaon lllegal") {
    CHECK_THROWS(snowman(-47633442));
    CHECK_THROWS(snowman(-62));
    CHECK_THROWS(snowman(000000));


}








    


