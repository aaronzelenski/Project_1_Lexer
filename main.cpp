#include "Automaton.h"
#include "Lexer.h"
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv) {


    ifstream inputFile(argv[1]);
    string myFile;
    myFile = string((istreambuf_iterator<char>(inputFile)), istreambuf_iterator<char>());


 Lexer* myLexer = new Lexer();
 myLexer->Run(myFile);
 delete myLexer;

}