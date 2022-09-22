//
// Created by Aaron Zelenski on 9/17/22.
//

#ifndef PROJECT_1_LEXER_QUESTIONMARK_H
#define PROJECT_1_LEXER_QUESTIONMARK_H

#include "Automaton.h"

class QuestionMarkAutomaton : public Automaton
{
public:
    QuestionMarkAutomaton() : Automaton(TokenType::Q_MARK) {}  // Call the base constructor

    void S0(const std::string& input);
};


#endif //PROJECT_1_LEXER_QUESTIONMARK_H
