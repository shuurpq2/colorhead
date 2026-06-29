#pragma once

#include <string>

namespace clrhd
{

inline constexpr const std::string_view RESET = "\033[0m";

// 16-colored base
// default colors
inline constexpr const std::string_view BLACK_16 = "30";
inline constexpr const std::string_view RED_16 = "31";
inline constexpr const std::string_view GREEN_16 = "32";
inline constexpr const std::string_view YELLOW_16 = "33";
inline constexpr const std::string_view BLUE_16 = "34";
inline constexpr const std::string_view MAGENTA_16 = "35";
inline constexpr const std::string_view CYAN_16 = "36";
inline constexpr const std::string_view LIGHT_GRAY_16 = "37";
// default backgrounds
inline constexpr const std::string_view BG_BLACK_16 = "40";
inline constexpr const std::string_view BG_RED_16 = "41";
inline constexpr const std::string_view BG_GREEN_16 = "42";
inline constexpr const std::string_view BG_YELLOW_16 = "43";
inline constexpr const std::string_view BG_BLUE_16 = "44";
inline constexpr const std::string_view BG_MAGENTA_16 = "45";
inline constexpr const std::string_view BG_CYAN_16 = "46";
inline constexpr const std::string_view BG_LIGHT_GRAY_16 = "47";
// bright colors
inline constexpr const std::string_view DARK_GRAY_16 = "90";
inline constexpr const std::string_view B_RED_16 = "91";
inline constexpr const std::string_view B_GREEN_16 = "92";
inline constexpr const std::string_view B_YELLOW_16 = "93";
inline constexpr const std::string_view B_BLUE_16 = "94";
inline constexpr const std::string_view B_MAGENTA_16 = "95";
inline constexpr const std::string_view B_CYAN_16 = "96";
inline constexpr const std::string_view WHITE_16 = "97";
// bright background
inline constexpr const std::string_view BG_DARK_GRAY_16 = "100";
inline constexpr const std::string_view BG_B_RED_16 = "101";
inline constexpr const std::string_view BG_B_GREEN_16 = "102";
inline constexpr const std::string_view BG_B_YELLOW_16 = "103";
inline constexpr const std::string_view BG_B_BLUE_16 = "104";
inline constexpr const std::string_view BG_B_MAGENTA_16 = "105";
inline constexpr const std::string_view BG_B_CYAN_16 = "106";
inline constexpr const std::string_view BG_WHITE_16 = "107";

// text decorations
inline constexpr const std::string_view BOLD = "1";
inline constexpr const std::string_view DIM = "2";
inline constexpr const std::string_view ITALIC = "3";
inline constexpr const std::string_view UNDERLINE = "4";
inline constexpr const std::string_view BLINK = "5";
inline constexpr const std::string_view RAPID_BLINK = "6";
inline constexpr const std::string_view INVERT = "7";
inline constexpr const std::string_view HIDE = "8";
inline constexpr const std::string_view STRIKETHROUGH = "9";
inline constexpr const std::string_view DOUBLE_UNDERLINE = "21";

}