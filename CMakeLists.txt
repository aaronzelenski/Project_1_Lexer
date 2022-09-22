cmake_minimum_required(VERSION 3.16.3)
project(.)

set(CMAKE_CXX_STANDARD 14)

add_executable(. main.cpp Lexer.cpp Lexer.h Token.h Token.cpp Automaton.h ColonDashAutomaton.cpp
        AddAutomaton.cpp Automaton.h ColonAutomaton.h ColonAutomaton.cpp CommaAutomaton.cpp CommaAutomaton.h
        CommentAutomaton.h CommentAutomaton.cpp ColonDashAutomaton.h EndOfFile.h EndOfFile.cpp FactsAutomaton.h
        FactsAutomaton.cpp IDAutomaton.h IDAutomaton.cpp LeftParenAutomaton.h LeftParenAutomaton.cpp MultiplyAutomaton.h
        MultiplyAutomaton.cpp PeriodAutomaton.h PeriodAutomaton.cpp QueriesAutomaton.h QueriesAutomaton.cpp QuestionMarkAutomaton.h
        QuestionMarkAutomaton.cpp RightParenAutomaton.h RightParenAutomaton.cpp RulesAutomaton.h RulesAutomaton.cpp SchemesAutomaton.h
        SchemesAutomaton.cpp StringAutomaton.h StringAutomaton.cpp UndefinedAutomaton.h UndefinedAutomaton.cpp AddAutomaton.h)
