//
// Created by Aaron Zelenski on 9/17/22.
//
#include "Automaton.h"
#ifndef PROJECT_1_LEXER_COMMA_H
#define PROJECT_1_LEXER_COMMA_H


class CommaAutomaton: public Automaton{

public:
    CommaAutomaton() : Automaton(TokenType::COMMA) {}  // Call the base constructor
    void S0(const std::string& input);

};


#endif //PROJECT_1_LEXER_COMMA_H
