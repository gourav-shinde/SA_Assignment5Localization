#include <boost/locale.hpp>
#include <iostream>

#include "..\LocalizationUtils\LocalizationUtils.h"

using namespace std;
using namespace boost::locale;

static void newfunction(int files)
{
    std::cout << Localize("program", "run") << std::endl;//execute

    std::cout << Localize("actionn", "run") << std::endl;//sprint
    std::cout << Localize("file", "open") << std::endl;

    std::cout << Localize("internet connection", "open") << std::endl;
}


