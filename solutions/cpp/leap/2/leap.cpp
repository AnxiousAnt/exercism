#include "leap.h"

namespace leap {

// TODO: add your solution here
    bool is_leap_year(int year) {
        /* 
            A = all years divisible by 4
            B = all years divisible by 100
            C = all years divisible by 400

            leap = A - B + C 
        */

        return (year % 4 == 0) and ((year % 100 != 0) or (year % 400 == 0));
    }

}  // namespace leap
