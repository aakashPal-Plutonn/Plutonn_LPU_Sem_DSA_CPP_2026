# Pointer to Data Member

A **pointer to data member** is a special pointer that stores the **location of a data member within a class**, rather than the address of a particular object.

For example, a normal pointer:

```cpp
int *p;
```

can store the address of an `int` variable.

A pointer to data member:

```cpp
int Student::*p;
```

can point to the `marks` data member of the `Student` class.

---

## Syntax / Structure

### Declaration

```cpp
dataType ClassName::*pointerName;
```

Example:

```cpp
int Student::*ptr;
```

Assigning a data member to the pointer:

```cpp
ptr = &Student::marks;
```

To access the member through an object:

```cpp
object.*ptr
```

Example:

```cpp
s1.*ptr
```

If we have a pointer to an object:

```cpp
Student *p = &s1;
```

then use:

```cpp
p->*ptr
```

---

## Examples

### Example 1: Basic Pointer to Data Member

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    int marks;
};

int main() {

    int Student::*ptr = &Student::marks;

    Student s1;

    s1.marks = 90;

    cout << s1.*ptr << endl;

    return 0;
}
```

Output:

```text
90
```

Here:

```cpp
int Student::*ptr = &Student::marks;
```

means `ptr` is a pointer to the `marks` data member of the `Student` class.

And:

```cpp
s1.*ptr
```

means access the member pointed to by `ptr` for object `s1`.

---

### Example 2: Same Pointer with Multiple Objects

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    int marks;
};

int main() {

    int Student::*ptr = &Student::marks;

    Student s1;
    Student s2;

    s1.marks = 80;
    s2.marks = 95;

    cout << s1.*ptr << endl;
    cout << s2.*ptr << endl;

    return 0;
}
```

Output:

```text
80
95
```

The pointer `ptr` points to the **data member `marks`**, not specifically to `s1.marks` or `s2.marks`.

---