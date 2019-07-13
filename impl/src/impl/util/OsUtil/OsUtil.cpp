#include <string>

using namespace std;

namespace util::os {

    bool isWindowsSystem() {
#if defined(_WIN32)
        return true;
#else
        return false;
#endif
    }
}


