#pragma once

#include "colorhead/text_decoration.hpp"
#include "colorhead/consts.hpp"
#include <string>
#include <iostream>

namespace clrhd
{

inline std::string add_reset(std::string str)
{
    if (str.size() > 4 && std::string_view(str.data() + str.size()-4, 4) != "\033[0m") {
        str += "\033[0m";
    }

    return std::move(str);
}

// inline std::string color_text_256(std::string str, int clr_num) // color text in console built-in color (0-255). Sense - weights 9-11 bytes, when rgb weights 14-17 bytes
// {
//     return add_reset("\033[38;5;" + std::to_string(clr_num) + "m" + std::move(str));
// }

// inline std::string color_bg_256(std::string str, int clr_num)
// {
//     return add_reset("\033[48;5;" + std::to_string(clr_num) + "m" + std::move(str));
// }

// inline std::string color_text_rgb(std::string str, int r, int g, int b)
// {
//     return add_reset("\033[38;2;" + std::to_string(r) + ";" + std::to_string(g) + ";" + std::to_string(b) + "m" + std::move(str));
// }

// inline std::string color_bg_rgb(std::string str, int r, int g, int b)
// {
//     return add_reset("\033[48;2;" + std::to_string(r) + ";" + std::to_string(g) + ";" + std::to_string(b) + "m" + std::move(str));
// }

// inline std::string decorate_text(std::string str)
// {
//     return add_reset(std::move(str));
// }
// template<typename... Args>
// inline std::string decorate_text(std::string str, TextDecoration decoration, Args&&... decorations)
// {
//     return decorate_text("\033[" + std::to_string(static_cast<int>(decoration)) + "m" + std::move(str), decorations...);
// }

template<typename... Args>
inline std::string transform_text(std::string str, Args&&... attrs)
{
    if (str.size() < 2 || std::string_view(str.data(), 2) != "\033[")
    {
        std::string final_attr = "\033[";
    
        ((final_attr += attrs, final_attr += ";"), ...);
        final_attr.pop_back();
        final_attr += "m";

        str.insert(0, final_attr);
    }
    else
    {
        size_t m_pos = str.find_first_of("m");
        ((str.insert(m_pos, ";"), str.insert(m_pos+1, attrs), m_pos += 2), ...);
    }

    return add_reset(std::move(str));
}

}