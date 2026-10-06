# Pointer to Pointer

A **pointer to pointer** is a pointer that stores the **address of another pointer**.

```cpp
int x = 10;

int *p = &x;       // p stores address of x
int **q = &p;      // q stores address of p
```

So:

* `x` → actual value
* `p` → address of `x`
* `q` → address of `p`

---

## Syntax / Structure

```cpp
dataType **pointerName;
```

Example:

```cpp
int **q;
```

Assigning the address of another pointer:

```cpp
int x = 10;

int *p = &x;
int **q = &p;
```

### Accessing the Value

```cpp
cout << x << endl;       // 10
cout << *p << endl;      // 10
cout << **q << endl;     // 10
```

The number of `*` tells us how many levels of pointers we need to dereference.

```text
x       → 10
*p      → 10
**q     → 10
```

---

## Examples

### Example 1: Basic Pointer to Pointer

```cpp
#include <iostream>
using namespace std;

int main() {

    int x = 10;

    int *p = &x;

    int **q = &p;

    cout << x << endl;
    cout << *p << endl;
    cout << **q << endl;

    return 0;
}
```

Output:

```text
10
10
10
```

---

### Example 2: Understanding Addresses

```cpp
#include <iostream>
using namespace std;

int main() {

    int x = 10;

    int *p = &x;

    int **q = &p;

    cout << &x << endl;
    cout << p << endl;

    cout << &p << endl;
    cout << q << endl;

    return 0;
}
```

The addresses will conceptually be:

```text
x
┌─────────┐
│   10    │
└─────────┘
    ↑
    │
p ──┘
┌─────────────┐
│ address of x│
└─────────────┘
    ↑
    │
q ──┘
┌─────────────┐
│ address of p│
└─────────────┘
```

Therefore:

```cpp
p == &x
```

and

```cpp
q == &p
```

Also:

```cpp
*p == x
```

and:

```cpp
*q == p
```

and:

```cpp
**q == x
```

---

### Example 3: Changing the Original Value

```cpp
#include <iostream>
using namespace std;

int main() {

    int x = 10;

    int *p = &x;
    int **q = &p;

    **q = 50;

    cout << x << endl;

    return 0;
}
```

Output:

```text
50
```

Because:

```cpp
**q = 50;
```

---