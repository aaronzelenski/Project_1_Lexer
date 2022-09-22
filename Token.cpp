#include "Token.h"
#include <string>

Token::Token(TokenType type, std::string description, int line) {
    this->aTokentype = type;
    this->aDescription = description;
    this->aLine = line;
}



std::string Token::tokenToString( TokenType type) {

    switch (type) {
        case TokenType::ADD:
            return "ADD";
            break;
        case TokenType::COMMA:
            return "COMMA";
            break;
        case TokenType::PERIOD:
            return "PERIOD";
            break;
        case TokenType::LEFT_PAREN:
            return "LEFT_PAREN";
            break;
        case TokenType::RIGHT_PAREN:
            return "RIGHT_PAREN";
            break;
        case TokenType::COLON:
            return "COLON";
            break;
        case TokenType::COLON_DASH:
            return "COLON_DASH";
            break;
        case TokenType::MULTIPLY:
            return "MULTIPLY";
            break;
        case TokenType::SCHEMES:
            return "SCHEMES";
            break;
        case TokenType::FACTS:
            return "FACTS";
            break;
        case TokenType::RULES:
            return "RULES";
            break;
        case TokenType::QUERIES:
            return "QUERIES";
            break;
        case TokenType::ID:
            return "ID";
            break;
        case TokenType::STRING:
            return "STRING";
            break;
        case TokenType::COMMENT:
            return "COMMENT";
            break;
        case TokenType::UNDEFINED:
            return "UNDEFINED";
            break;
        case TokenType::EOF_TYPE:
            return "EOF";
            break;
        default: return "UNDEFINED";

    }
}

std::string Token::toString() {
    TokenType myType = this->aTokentype;
    std::string myDescription = this->aDescription;
    int myLine = this->aLine;
    std::string tokenOutput = "(" + tokenToString(myType) + ",\"" + myDescription + "\"," + std::to_string(myLine) + ")";
    return tokenOutput;
}


