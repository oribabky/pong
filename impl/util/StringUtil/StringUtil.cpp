#include <string>

using namespace std;

string replaceForwardSlashes(const string& source) {
    string res = source;
    for(string::size_type i = 0; i < res.size(); ++i) {
        if(res.at(i) == '/') {
            res.replace(i, 1, "\\");
        }
    }
    return res;
}