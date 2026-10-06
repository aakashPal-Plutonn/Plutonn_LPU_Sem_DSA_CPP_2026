### Manipulator Function

A **manipulator function** in C++ is a function used to **control or modify the formatting of input and output streams**.

| Manipulator | What it does | Example |
| --- | --- | --- |
| `endl` | Prints a newline and flushes the output buffer | `cout << "Hello" << endl;` |
| `setw(n)` | Sets the width of the **next** output field | `cout << setw(5) << 42;` → `___42` |
| `setprecision(n)` | Controls floating-point precision; with `fixed`, it means digits after decimal | `cout << fixed << setprecision(2) << 3.14159;` → `3.14` |
| `fixed` | Prints floating-point numbers in fixed decimal notation | `cout << fixed << 3.14;` → `3.140000` |
| `left` | Left-aligns output within the specified width | `cout << left << setw(10) << 42;` |
| `right` | Right-aligns output within the specified width | `cout << right << setw(10) << 42;` |
| `showpos` | Displays `+` before positive numbers | `cout << showpos << 42;` → `+42` |
| `boolalpha` | Prints `true`/`false` instead of `1`/`0` | `cout << boolalpha << true;` → `true` |
| `hex` | Prints integers in hexadecimal (base 16) | `cout << hex << 255;` → `ff` |
| `oct` | Prints integers in octal (base 8) | `cout << oct << 255;` → `377` |
| `dec` | Prints integers in decimal (base 10) | `cout << dec << 255;` → `255` |

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Hello" << endl;                         // newline
    cout << setw(10) << 42 << endl;                  // width
    cout << fixed << setprecision(2) << 3.14159;     // 3.14
    cout << hex << 255 << endl;                      // ff
    cout << dec << 255 << endl;                      // 255
}
```