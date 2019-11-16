#include "util.h"

using namespace std;

string to_lower(string s)
{
    string newS;
    for (unsigned int i = 0; i < s.size(); i++)
        newS[i] = tolower(s[i]);

    return newS;
}
