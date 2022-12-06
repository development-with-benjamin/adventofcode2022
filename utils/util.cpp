#include "util.h"
#include <bits/stdc++.h>

template <typename T>
void util::reverse(std::vector<T> &vec)
{
    std::vector<T> temp;
    for(size_t i = vec.size() - 1; i >= 0; --i) {
        temp.push_back(vec.at(i));
    }
    vec = temp;
}

void util::tokenize(const std::string &str, const char delim, std::vector<std::string> &out)
{
    size_t start;
    size_t end = 0;

    while ((start = str.find_first_not_of(delim, end)) != std::string::npos)
    {
        end = str.find(delim, start);
        out.push_back(str.substr(start, end - start));
    }
}

bool util::is_unique(const std::string& string)
{
    std::set<char> characters;
    for(char c : string) {
        characters.insert(c);
    }
    return characters.size() == string.size();
}

bool util::is_unique_ascii(const char* string, const size_t n)
{
    const static size_t MAX_ASCII_CHAR = 256;
    bool ascii_char[MAX_ASCII_CHAR] = {0};
    for(size_t i = 0; i < n; ++i) {
        if(ascii_char[(size_t)string[i]] == true) {
            return false;
        }
        ascii_char[(size_t)string[i]] = true;
    }
    return true;
}