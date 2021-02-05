#include "../Headers/Modyst.h"
#include <sstream>

namespace Text
{
    //Enables a modificator in a string
    std::string setMod(Code code)
    {
        std::stringstream stst;
        stst << "\033[" << code << "m";
        return stst.str();
    }

    //Disable a modificator in a string
    std::string clearMod(Code code)
    {
        std::stringstream stst;
        stst << "\033[2" << code << "m";
        return stst.str();
    }

    //Enables, then disables a modificator in a string
    std::string textEffect(Code code, std::string text)
    {
        std::stringstream stst;
        stst << setMod(code) << text << clearMod(code);
        return stst.str();
    }

    //Disable all modificators in a string
    std::string clearMods()
    {
        return setMod(DEFAULT);
    }
}