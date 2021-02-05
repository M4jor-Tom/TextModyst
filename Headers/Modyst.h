#pragma once

#include <ostream>
#include <string>

namespace Text
{
    enum Code
    {
        //EFFECTS
        DEFAULT             = 0,
        BOLD                = 1,
        DIM                 = 2,
        UNDERLINE           = 4,
        BLINK               = 5,
        //BLINK             = 6,
        FBG_REVERSE         = 7,
        HIDDEN              = 8,
        SLASH               = 9,
      
        //FOREGROUND COLORS
        FG_BLACK            = 30,
        FG_RED              = 31,
        FG_GREEN            = 32,
        FG_YELLOW           = 33,
        FG_BLUE             = 34,
        FG_MAGENTA          = 35,
        FG_CYAN             = 36,
        FG_LIGHT_GRAY       = 37,
        FG_DEFAULT          = 39,
      
        //BACKGROUND COLORS
        BG_BLACK            = 40,
        BG_RED              = 41,
        BG_GREEN            = 42,
        BG_YELLOW           = 43,
        BG_BLUE             = 44,
        BG_MAGENTA          = 45,
        BG_CYAN             = 46,
        BG_LIGHT_GRAY       = 47,
        BG_DEFAULT          = 49,
      
        //FOREGROUND COLORS [ENCORE]
        FG_DARK_GRAY        = 90,
        FG_LIGHT_RED        = 91,
        FG_LIGHT_GREEN      = 92,
        FG_LIGHT_YELLOW     = 93,
        FG_LIGHT_BLUE       = 94,
        FG_LIGHT_MAGENTA    = 95,
        FG_LIGHT_CYAN       = 96,
        FG_LIGHT_WHITE      = 97,
        
        //BACKGROUND COLORS [ENCORE]
        BG_DARK_GRAY        = 100,
        BG_LIGHT_RED        = 101,
        BG_LIGHT_GREEN      = 102,
        BG_LIGHT_YELLOW     = 103,
        BG_LIGHT_BLUE       = 104,
        BG_LIGHT_MAGENTA    = 105,
        BG_LIGHT_CYAN       = 106,
        BG_WHITE            = 107
    };

    //Enables a modificator in a string
    std::string setMod(Code code);

    //Disable a modificator in a string
    std::string clearMod(Code code);

    //Enables, then disables a modificator in a string
    std::string textEffect(Code code, std::string text);

    //Disable all modificators in a string
    std::string clearMods();
}
