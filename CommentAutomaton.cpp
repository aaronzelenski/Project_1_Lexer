#include "CommentAutomaton.h"
#include <cctype>

void CommentAutomaton::S0(const std::string& input) {
    if (index == (int)input.size()){
        Serr();
    }
    if (input[index] == '#') {
        inputRead++;
        index++;

        if (input[index] == '|') {
            inputRead++;
            index++;
            S2(input);
        }
        else {
            S1(input);
        }
    }
    else {
        Serr();
    }
}

void CommentAutomaton::S1(const std::string& input) {
    if(input[index]!= '\n') {
        inputRead++;
        index++;

        S1(input);
    }
    else if (index == (int)input.size()){
        index++;
        newLines++;
        return;
    }
    else if(input[index] == '\n'){
        inputRead++;
        newLines++;
        index++;
        return;
    }
}
void CommentAutomaton::S2(const std::string& input) {
    if(input[index] == '|'){
        inputRead++;
        index++;

        if(input[index] == '#') {
            inputRead++;
            index++;
            return;
        }
    }
    if(index == (int)input.size()) {
        Serr();
    }
    else {
        inputRead++;
        index++;
        S2(input);
    }
}