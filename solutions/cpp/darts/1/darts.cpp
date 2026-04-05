#include "darts.h"
#include <cmath>
namespace darts {

// TODO: add your solution here
    int score(double x, double y){
        double distance_from_centre = std::hypot(x, y);
        if (distance_from_centre > 10) {
            return 0;
        }
        else if (distance_from_centre > 5) {
            return 1;
        }
        else if (distance_from_centre > 1) {
            return 5;
        }
        else {
            return 10;
        }
    }

}  // namespace darts
