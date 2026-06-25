#include "colorhead/colorhead.hpp"

namespace clrhd {

std::string add_reset(std::string str) {
    if (std::string_view(str.data() + str.size()-4) != "\033[0m") {
        str += "\033[0m";
    }

    return std::move(str);
}

}