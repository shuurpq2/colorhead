#pragma once

#include "colorhead/text_decoration.hpp"
#include <string>

namespace clrhd
{

std::string add_reset(std::string str);

inline std::string color_text_old(std::string str, int clr_num) // color text in console built-in color (0-255). Sense - weights 9-11 bytes, when rgb weights 14-17 bytes
{
    return add_reset("\033[38;5;" + std::to_string(clr_num) + "m" + std::move(str));
}

inline std::string color_bg_old(std::string str, int clr_num)
{
    return add_reset("\033[48;5;" + std::to_string(clr_num) + "m" + std::move(str));
}

inline std::string color_text_rgb(std::string str, int r, int g, int b)
{
    return add_reset("\033[38;2;" + std::to_string(r) + ";" + std::to_string(g) + ";" + std::to_string(b) + "m" + std::move(str));
}

inline std::string color_bg_rgb(std::string str, int r, int g, int b)
{
    return add_reset("\033[48;2;" + std::to_string(r) + ";" + std::to_string(g) + ";" + std::to_string(b) + "m" + std::move(str));
}

inline std::string decorate_text(std::string str)
{
    return add_reset(std::move(str));
}
template<typename... Args>
inline std::string decorate_text(std::string str, TextDecoration decoration, Args&&... decorations)
{
    return decorate_text("\033[" + std::to_string(static_cast<int>(decoration)) + "m" + std::move(str), decorations...);
}

}