#pragma once

#include "colorhead/text_decoration.hpp"
#include <string>

namespace clrhd
{

std::string color_text_old(std::string str, int clr_num) // color text in console built-in color (0-255). Sense - weights 9-11 bytes, when rgb weights 14-17 bytes
{
    return "\033[38;5;" + std::to_string(clr_num) + "m" + std::move(str) + "\033[0m";
}

std::string color_bg_old(std::string str, int clr_num)
{
    return "\033[48;5;" + std::to_string(clr_num) + "m" + std::move(str) + "\033[0m";
}

std::string color_text_rgb(std::string str, int r, int g, int b)
{
    return "\033[38;2;" + std::to_string(r) + ";" + std::to_string(g) + ";" + std::to_string(b) + "m" + std::move(str) + "\033[0m";
}

std::string color_bg_rgb(std::string str, int r, int g, int b)
{
    return "\033[48;2;" + std::to_string(r) + ";" + std::to_string(g) + ";" + std::to_string(b) + "m" + std::move(str) + "\033[0m";
}

std::string decorate_text(std::string str)
{
    return str;
}
template<typename... Args>
std::string decorate_text(std::string str, TextDecoration decoration, Args&&... decorations)
{
    return decorate_text("\033[" + std::to_string(static_cast<int>(decoration)) + "m" + std::move(str) + "\033[0m", decorations...);
}

}