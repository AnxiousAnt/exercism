#include "reverse_string.h"
#include <string>
// #include <algorihtm>

namespace reverse_string {

    std::string reverse_string(std::string str) {
        int n = str.length();
        for (int i = 0; i < n / 2; i++) {
            // Swap character at index i with character at symmetric index
            std::swap(str[i], str[n - i - 1]);
        }
        return str;
    }

}  // namespace reverse_string
