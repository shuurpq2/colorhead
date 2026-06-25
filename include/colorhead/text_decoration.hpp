#pragma once

namespace clrhd {

enum class TextDecoration
{
    BOLD = 1,
    DIM,
    ITALIC,
    UNDERLINE,
    BLINK,
    RAPID_BLINK,
    INVERT,
    HIDE,
    STRIKETHROUGH,
    DOUBLE_UNDERLINE = 21,
    // CANCEL_BOLD_AND_DIM,
    // CANCEL_ITALIC,
    // CANCEL_UNDERLINES,
    // CANCEL_BLINKS,
    // CANCEL_INVERT = 27,
    // CANCEL_HIDE,
    // CANCEL_STRIKETHROUGH,
};

}