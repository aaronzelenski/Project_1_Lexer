#include "Lexer.h"
#include "Token.h"
#include <cstring>
#include "ColonAutomaton.h"
#include "ColonDashAutomaton.h"
#include "AddAutomaton.h"
#include "CommaAutomaton.h"
#include "CommentAutomaton.h"
#include "EndOfFile.h"
#include "FactsAutomaton.h"
#include "IDAutomaton.h"
#include "LeftParenAutomaton.h"
#include "MultiplyAutomaton.h"
#include "PeriodAutomaton.h"
#include "QueriesAutomaton.h"
#include "QuestionMarkAutomaton.h"
#include "RightParenAutomaton.h"
#include "RulesAutomaton.h"
#include "SchemesAutomaton.h"
#include "StringAutomaton.h"
#include "UndefinedAutomaton.h"
#include <iostream>


using namespace std;


Lexer::Lexer() {
    CreateAutomata();

}

//Lexer::~Lexer() {
//   // TODO: need to clean up the memory in `automata` and `tokens`
//}

void Lexer::CreateAutomata() {
    automata.push_back(new CommaAutomaton());
    automata.push_back(new PeriodAutomaton());
    automata.push_back(new QuestionMarkAutomaton());
    automata.push_back(new LeftParenAutomaton());
    automata.push_back(new RightParenAutomaton());
    automata.push_back(new ColonAutomaton());
    automata.push_back(new ColonDashAutomaton());
    automata.push_back(new MultiplyAutomaton());
    automata.push_back(new AddAutomaton());
    automata.push_back(new SchemesAutomaton());
    automata.push_back(new FactsAutomaton());
    automata.push_back(new RulesAutomaton());
    automata.push_back(new QueriesAutomaton());
    automata.push_back(new IDAutomaton());
    automata.push_back(new StringAutomaton());
    automata.push_back(new CommentAutomaton());

}

void Lexer::Run(std::string& input) {
    int lineNumber = 1;
    while(!input.empty()) {
        int maxRead = 0;
        Automaton* maxAutomaton = automata[0];
        while(isspace(input[0])){
            if(input[0] == '\n'){
                lineNumber+= 1;
            }
            input = input.substr(1);
        }

        if (input.size() == 0){
            break;
        }


        // TODO: you need to handle whitespace inbetween tokens
        for(int i = 0; i < (int)automata.size(); i++) {
            int inputRead = automata[i]->Start(input);
            if (inputRead > maxRead) {
                maxRead = inputRead;
                maxAutomaton = automata[i];
            }
        }
        if (maxRead > 0) {
            Token* newToken = maxAutomaton->CreateToken(input.substr(0, maxRead), lineNumber);
            lineNumber += maxAutomaton->NewLinesRead();
            tokens.push_back(newToken);
        } else {

            if(input[0] == '#'){
                maxRead = input.size();

            }else {
                maxRead = 1;
            }
            auto *undefToken = new Token(TokenType::UNDEFINED, input, lineNumber);
            tokens.push_back(undefToken);
        }
        input = input.substr(maxRead);
    }
    auto *eofToken = new Token(TokenType::EOF_TYPE, "", lineNumber);
    tokens.push_back(eofToken);

    for( int i = 0; i < (int)tokens.size(); i++){
        cout << tokens.at(i)->toString();
        cout << endl;
    }
    cout << "Total Tokens = " << tokens.size();
}

