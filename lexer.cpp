#include "lexer.h"

#include <iterator>
#include <string>

using namespace std;

const string WHITESPACE = " \n";
const string SPECIAL_CHARS = ":;(){},=";
const string OPERATORS = "+-*/";
const string STRING = "\'\"";
const string NUMBERS = "[.0-9]";
const string SYMBOLS = "[_a-zA-Z]";


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
        char current = lexerStream.incrementForward()[0];
        if (WHITESPACE.find(current) != string::npos) {
            continue;
        } else if (SPECIAL_CHARS.find(current) != string::npos) {

        } else if (OPERATORS.find(current) != string::npos) {

        } else if (STRING.find(current) != string::npos) {

        }
    }
}

int main(int argc, char* argv[]) {
    return 0;
}