#include <string>

using namespace std;

bool isWindowsSystem() {
#if defined(_WIN32)
    return true;
#else
    return false;
#endif
}

bool test() {
    return true;
}


