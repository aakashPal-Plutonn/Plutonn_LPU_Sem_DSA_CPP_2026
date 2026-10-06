# Union in C++

A `union` is a user-defined data type similar to a `struct`, but all its members **share the same memory location**.

In a `struct`, every member gets separate memory.

In a `union`, all members use the **same memory**.

Only **one member should be used at a time**.

---

## Syntax / Structure

```cpp
union Data {
    int x;
    float y;
    char z;
};
```

Creating a union variable:

```cpp
Data d;
```

Accessing members:

```cpp
d.x = 10;
cout << d.x;
```

---

## Examples

### Example 1: Basic Union

```cpp
#include <iostream>
using namespace std;

union Data {
    int x;
    float y;
    char z;
};

int main() {

    Data d;

    d.x = 10;

    cout << d.x << endl;

    return 0;
}
```

Output:

```text
10
```

Here, `x`, `y`, and `z` share the same memory location.

---

### Example 2: Union Members Share Memory

```cpp
#include <iostream>
using namespace std;

union Data {
    int x;
    float y;
};

int main() {

    Data d;

    cout << &d.x << endl;
    cout << &d.y << endl;

    return 0;
}
```

The addresses will be the same because both members occupy the same memory location.

Conceptually:

```text
Union Data

       Same Memory
      ┌───────────┐
      │           │
      │    x      │
      │    y      │
      │           │
      └───────────┘
```

---

### Example 3: Changing One Member Affects the Stored Value

```cpp
#include <iostream>
using namespace std;

union Data {
    int x;
    float y;
};

int main() {

    Data d;

    d.x = 10;

    cout << d.x << endl;

    d.y = 20.5;

    cout << d.y << endl;

    return 0;
}
```

Output:

```text
10
20.5
```

When:

```cpp
d.y = 20.5;
```

the same memory previously used for `x` is overwritten with the representation of the `float`.

Therefore, a union does **not** store independent values for all its members.

---

### Example 4: Size of Union

```cpp
#include <iostream>
using namespace std;

union Data {
    int x;
    double y;
    char z;
};

int main() {

    cout << sizeof(Data) << endl;

    return 0;
}
```

The size of a union is generally based on its **largest member** (subject to alignment requirements).

If:

```text
int     → 4 bytes
double  → 8 bytes
char    → 1 byte
```

the union will typically occupy **8 bytes**.

Compare this with a structure:

```cpp
struct Data {
    int x;
    double y;
    char z;
};
```

A structure allocates separate storage for its members, while a union shares storage.

---

# Enum in C++


An `enum` (enumeration) is a user-defined type used to represent a set of **named constants**.

Instead of using numbers directly:

```cpp
int day = 1;
```

we can give meaningful names to those values:

```cpp
enum Day {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday
};
```

By default, the first enumerator gets the value `0`, and subsequent enumerators increase by `1`.

So:

```text
Monday     → 0
Tuesday    → 1
Wednesday  → 2
Thursday   → 3
Friday     → 4
```

---

## Syntax / Structure

```cpp
enum EnumName {
    value1,
    value2,
    value3
};
```

Example:

```cpp
enum Day {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday
};
```

Creating a variable:

```cpp
Day today = Monday;
```

---

## Examples

### Example 1: Basic Enum

```cpp
#include <iostream>
using namespace std;

enum Day {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday
};

int main() {

    Day today = Wednesday;

    cout << today << endl;

    return 0;
}
```

Output:

```text
2
```

Because:

```text
Monday     → 0
Tuesday    → 1
Wednesday  → 2
Thursday   → 3
Friday     → 4
```

The names are meaningful to the programmer, but the underlying values are integral values.

---

### Example 2: Enum with Custom Values

We can explicitly assign values.

```cpp
#include <iostream>
using namespace std;

enum Status {
    Success = 1,
    Failed = 2,
    Pending = 3
};

int main() {

    Status result = Success;

    cout << result << endl;

    return 0;
}
```

Output:

```text
1
```

---

### Example 3: Automatic Values After a Custom Value

```cpp
#include <iostream>
using namespace std;

enum Level {
    Low = 10,
    Medium,
    High
};

int main() {

    cout << Low << endl;
    cout << Medium << endl;
    cout << High << endl;

    return 0;
}
```

Output:

```text
10
11
12
```

Once `Low` is assigned `10`, the next values automatically continue from there.

---

### Example 4: Using Enum in `switch`

Enums are commonly useful with `switch`.

```cpp
#include <iostream>
using namespace std;

enum Day {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday
};

int main() {

    Day today = Wednesday;

    switch (today) {

        case Monday:
            cout << "Monday";
            break;

        case Tuesday:
            cout << "Tuesday";
            break;

        case Wednesday:
            cout << "Wednesday";
            break;

        case Thursday:
            cout << "Thursday";
            break;

        case Friday:
            cout << "Friday";
            break;
    }

    return 0;
}
```

Output:

```text
Wednesday
```

The enum makes the code easier to understand than using raw numbers such as:

```cpp
switch (day) {
    case 0:
    case 1:
    case 2:
}
```

---


### Example 5: Comparing Enum Values

```cpp
#include <iostream>
using namespace std;

enum Size {
    Small = 1,
    Medium = 2,
    Large = 3
};

int main() {

    Size size = Medium;

    if (size == Medium) {
        cout << "Medium size";
    }

    return 0;
}
```

Output:

```text
Medium size
```

---