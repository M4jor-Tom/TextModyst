#include "Headers/Modyst.h"

#include <iostream>

using namespace std;

int main()
{
    cout
        << "This " << Text::setMod(Text::FG_RED) << "word" << Text::clearMods() << " is red."
        << endl << "This one " << Text::textEffect(Text::BLINK, "blinks") << ", and not this one"
        << endl << "This one " << Text::setMod(Text::BLINK) 
        << "blinks " << setMod(Text::FG_GREEN) 
        << "and" << clearMod(Text::BLINK)
        << " is green " << setMod(Text::FG_DEFAULT) << "!"
        << endl << endl << "Now, this one is " << Text::textEffect(
            Text::UNDERLINE,
            Text::textEffect(
                Text::SLASH,
                "slashed and underlined"
            )
        ) << "." << endl;

	return 0;
}
