#include <iterator>
#include <string>

using namespace std;

const std::string WHITESPACE = " \n";

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
        }
        // more conditions
    }
}

int main(int argc, char* argv[]) {
    return 0;
}