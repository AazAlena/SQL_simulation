#ifndef SQLSIM_HELLO_H
#define SQLSIM_HELLO_H

#include <string>

namespace sqlsim {

// Возвращает приветственную строку.
// Этот модуль — демонстрация разбиения на пару .h/.cpp; позже будет заменён
// реальными модулями генератора отчётов (lexer, parser, ast, ...).
std::string hello();

} // namespace sqlsim

#endif // SQLSIM_HELLO_H
