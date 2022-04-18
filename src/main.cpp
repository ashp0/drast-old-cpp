#include "compiler/Lexer.h"
#include "compiler/Parser.h"
#include <iostream>

int main([[maybe_unused]] int argc, const char *argv[]) {
    std::string file_name = argv[1];

    Error error = {.file_name = argv[1], .buffer = file_name};
    Lexer lexer(file_name, error);
    lexer.lex();

    Parser parser(file_name, lexer, error);
    parser.parse();

    return 0;
}
