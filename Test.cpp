#include <iostream>
#include <stdexcept>
#include <string>
#include "doctest.h"
#include <map>
#include <stdexcept>
#include "NumberWithUnits.hpp"
#include <string>
#include <fstream>
#include <sstream>
using namespace ariel;
using namespace std;

ifstream units_file{"units.txt"};

TEST_CASE("test + with two structs"){
    NumberWithUnits::read_units(units_file);
    NumberWithUnits km{15, "km"};
    NumberWithUnits m{98, "m"};
for(int i=0;i<101;i++){   
 CHECK(km + m == NumberWithUnits{15.98, "km"});
   }
}
