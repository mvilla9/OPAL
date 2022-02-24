#pragma once

#include <iterator>
#include <string>

using namespace std;

class LexerStream {
    public:
        string::iterator iterativeStream;
        string::iterator nextStreamReference;

        LexerStream(string inputStream) {}
        string::iterator incrementForward();
    private:
        void fill();
};

void lex(string inputStream);
