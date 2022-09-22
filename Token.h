#ifndef TOKEN_H
#define TOKEN_H
#include <string>

enum class TokenType {
    COLON,
    COLON_DASH,
    COMMA,
    PERIOD,
    Q_MARK,
    LEFT_PAREN,
    RIGHT_PAREN,
    MULTIPLY,
    ADD,
    SCHEMES,
    FACTS,
    RULES,
    QUERIES,
    ID,
    STRING,
    COMMENT,
    UNDEFINED,
    EOF_TYPE
};

class Token{
public:

    Token(TokenType type, std::string description, int line);

    std::string tokenToString(TokenType type);
    std:: string toString();


private:
    TokenType aTokentype;
    std:: string aDescription;
    int aLine;
};

#endif // TOKEN_H

