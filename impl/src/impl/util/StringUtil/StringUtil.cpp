#include "StringUtil.h"

using namespace std;
namespace util::strings {
    string replaceForwardSlashes(const string &source) {
        string res = source;
        for (int i = 0; i < res.size(); ++i) {
            if (res.at(i) == '/') {
                res.replace(i, 1, "\\");
            }
        }
        return res;
    }
}