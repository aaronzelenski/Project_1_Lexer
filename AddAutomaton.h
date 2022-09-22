//
// Created by Aaron Zelenski on 9/19/22.
//

#ifndef PROJECT_1_LEXER_ADDAUTOMATON_H
#define PROJECT_1_LEXER_ADDAUTOMATON_H

#include "Automaton.h"

class AddAutomaton : public Automaton
{
public:
AddAutomaton() : Automaton(TokenType::ADD) {}  // Call the base constructor

void S0(const std::string& input);
};


#endif //PROJECT_1_LEXER_ADDAUTOMATON_H
