#include <string>

namespace log_line {
std::string message(std::string line) {
    int message_start_index = line.find("]: ") + 3;
    return line.substr(message_start_index);
}

std::string log_level(std::string line) {
    return line.substr(1, line.find("]") - 1);
}

std::string reformat(std::string line) {
    return message(line) + " (" + log_level(line) + ")";
}
}  // namespace log_line
