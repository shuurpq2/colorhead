#pragma once

#include <iostream>

#ifdef CLRHD_DEBUG
    #define CLRHD_DEBUG_PRINT(msg) std::cout << "[\033[1;36mCLRHD_DEBUG\033[0m] " << msg << "\n";
#else
    #define CLRHD_DEBUG_PRINT(msg) do {} while (0)
#endif