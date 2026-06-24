#pragma once

#include <string>

namespace clrhd
{

std::string text_console_builtin(std::string str, int clr_num) // color text in console built-in color (0-255). Sense - weights 9-11 bytes, when rgb weights 14-17 bytes
{
    return "\033[38;5;" + std::to_string(clr_num) + "m" + std::move(str) + "\033[0m";
}

std::string bg_console_builtin(std::string str, int clr_num)
{
    return "\033[48;5;" + std::to_string(clr_num) + "m" + std::move(str) + "\033[0m";
}

std::string text_console_rgb(std::string str, int r, int g, int b)
{
    return "\033[38;2;" + std::to_string(r) + ";" + std::to_string(g) + ";" + std::to_string(b) + "m" + std::move(str) + "\033[0m";
}

std::string bg_console_rgb(std::string str, int r, int g, int b)
{
    return "\033[48;2;" + std::to_string(r) + ";" + std::to_string(g) + ";" + std::to_string(b) + "m" + std::move(str) + "\033[0m";
}

}