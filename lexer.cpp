#include "lexer.h"

#include <iterator>
#include <string>
#include <regex>

using namespace std;

const string WHITESPACE = " \n";
const string SPECIAL_CHARS = ":;(){},=";
const string OPERATORS = "+-*/";
const string STRING = "\'\"";
const regex NUMBERS("[.0-9]");
const regex SYMBOLS("[_a-zA-Z]");


class LexerStream {
    public:

        string::iterator iterativeStream;
        string::iterator nextStreamReference;

        LexerStream(string inputStream) {
            iterativeStream = inputStream.begin();
            fill();
        }

        string::iterator incrementForward() {
            string::iterator ret = nextStreamReference;
            fill();
            return ret;
        }
    private:
        void fill() {
            nextStreamReference = std::next(iterativeStream);
        }
};

void lex(string inputStream) {
    LexerStream lexerStream = LexerStream(inputStream);
    while (lexerStream.nextStreamReference != inputStream.end()) {
        string current(1, lexerStream.incrementForward()[0]);
        if (WHITESPACE.find(current) != string::npos) {
            continue;
        } else if (SPECIAL_CHARS.find(current) != string::npos) {

        } else if (OPERATORS.find(current) != string::npos) {

        } else if (STRING.find(current) != string::npos) {

        } else if (regex_match(current, NUMBERS)) {

        } else if (regex_match(current, SYMBOLS)) {

        } else {
            throw invalid_argument("Character not supported.");
        }
    }
}

int main(int argc, char* argv[]) {
    return 0;
}