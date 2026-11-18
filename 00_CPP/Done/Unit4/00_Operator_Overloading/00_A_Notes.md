## Operator overloading lets us define how existing C++ operators behave when they are used with objects of our own classes.


## 1 Operators that can be overloaded

Many existing C++ operators can be overloaded.

| Category | Operators |
|---|---|
| Arithmetic | +, -, *, /, % |
| Unary | +, -, !, ~ |
| Increment/decrement | ++, -- |
| Comparison | ==, !=, <, >, <=, >= |
| Logical | &&, ||, ! |
| Bitwise | &, |, ^, ~, <<, >> |
| Assignment | =, +=, -=, *=, /=, %= |
| Other | [], ()
| Memory management | new, delete, new[], delete[] |


## 2 Operators that cannot be overloaded

These operators cannot be overloaded in C++:

| Operator   | Meaning                                                |
| ---------- | ------------------------------------------------------ |
| `::`       | Scope resolution                                       |
| `.`        | Direct member access                                   |
| `.*`       | Pointer-to-member access                               |
| `?:`       | Conditional operator                                   |
| `sizeof`   | Size of an object or type                              |
| `typeid`   | Runtime type information operator                      |
| `alignof`  | Alignment requirement                                  |
| `decltype` | Type-specifier construct, not an overloadable operator |


## 3 Rules and restrictions

1. At least one operand must be a user-defined type for an overloaded operator function. You cannot redefine the built-in meaning of `int + int`.
2. You cannot create a completely new operator such as `**` for exponentiation.
3. You cannot change an operator's precedence or associativity.
4. You cannot change the number of operands an operator takes.
5. You cannot change the fundamental syntax of an operator.
6. An overloaded operator can have a return type of your choice, subject to the intended operation and language rules.
7. Overloading should preserve the expected meaning of an operator. For example, `+` normally produces a combined value rather than unexpectedly deleting data.
