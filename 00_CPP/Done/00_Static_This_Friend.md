# Static Keyword in C++



The `static` keyword is used to give a variable or function a **special lifetime or ownership behavior**.

In classes, `static` members belong to the **class itself**, rather than to individual objects.

There are mainly two uses relevant here:

* Static local variable
* Static member variable/function of a class

---

## Syntax / Structure

### 1. Static Local Variable

A local variable normally gets created every time the function is called and is destroyed when the function finishes.

A `static` local variable is created only once and **retains its value between function calls**.

```cpp
void fun() {
    static int count = 0;
    count++;

    cout << count << endl;
}
```

---

### 2. Static Member Variable

A normal data member belongs to each object.

```cpp
class Student {
public:
    int marks;
    int roll;
};
```

If we create three objects:

```cpp
Student s1, s2, s3;
```

then there are **three separate `marks` variables**.

A static member variable, however, belongs to the **class**, so there is only **one shared copy**.

```cpp
class Student {
public:
    static int count;
    int marks;
    int roll;
};
```

For a non-`inline` static data member, the class declaration is not its complete definition. It must be defined outside the class:

```cpp
int Student::count = 0;
```

example:

```cpp
#include <iostream>
using namespace std;

class Student {
    public:
    static int count;
    int marks;
    int roll;
};

int Student::count = 0;

int main() {

    Student s1;
    Student s2;

    s1.count++;
    s2.count++;

    cout << s1.count << endl;
    return 0;
}
```

Output:

```text
2
```

There is only **one `count`**, shared by `s1` and `s2`.

It can also be accessed using the class name:

```cpp
Student::count
```

```cpp
class Student {
    public:
    static int count;
    int marks;
    int roll;
};

int Student::count = 0;

int main() {

    Student s1;
    Student s2;

    s1.count++;
    s2.count++;

    cout << Student::count << endl;
    
    return 0;
}
```

So `count` belongs to the class rather than to a particular object.

---

### 3. Static Member Function

A member function can also be declared `static`.

```cpp
class Student {
public:
    static void show() {
        cout << "Hello Student";
    }
};
```

It can be called without creating an object:

```cpp
Student::show();
```

A static member function does **not have a calling object**, so it cannot directly access non-static data members.

```cpp
class Student {
public:
    int marks;

    static void show() {
        cout << marks;   // Error
    }
};
```

A static member function can directly access static members:

```cpp
class Student {
    static int count;
public:

    static void showCount() {
        cout << count;
    }
};

int Student::count = 10;

int main() {
    Student::showCount();
}
```

Output:

```text
10
```

---

## Examples

### Example 1: Static Local Variable

```cpp
#include <iostream>
using namespace std;

void fun() {

    static int x = 0;

    x++;

    cout << x << endl;
}

int main() {

    fun();
    fun();
    fun();

    return 0;
}
```

Output:

```text
1
2
3
```

Without `static`:

```cpp
void fun() {

    int x = 0;

    x++;

    cout << x << endl;
}
```

Output:

```text
1
1
1
```

Because a normal local variable is created again with `0` on every function call.

With `static`, the variable is initialized only once:

```text
First call:
x = 0 → 1

Second call:
x = 1 → 2

Third call:
x = 2 → 3
```

---

### Example 2: Counting Objects Using Static Member Variable

```cpp
#include <iostream>
using namespace std;

class Student {

public:
    static int count;

    Student() {
        count++;
    }
};

int Student::count = 0;

int main() {

    Student s1;
    Student s2;
    Student s3;

    cout << Student::count << endl;

    return 0;
}
```

Output:

```text
3
```

Here, `count` is shared by all objects.

```text
Student
   |
   └── count = 3
       ↑
       |
   ┌───┼───┐
   s1  s2  s3
```

---

### Example 3: Static Member vs Normal Member

```cpp
#include <iostream>
using namespace std;

class Student {

public:
    int marks;
    static int count;
};

int Student::count = 0;

int main() {

    Student s1;
    Student s2;

    s1.marks = 80;
    s2.marks = 90;

    // can be accessed using class name
    Student::count = 2;

    cout << s1.marks << endl;
    cout << s2.marks << endl;
    cout << Student::count << endl;

    return 0;
}
```

Output:

```text
80
90
2
```

---

# `this` Keyword in C++



`this` is a **pointer to the calling object**.

When a non-static member function is called using an object, `this` points to that object.

```cpp
Student s1;
s1.show();
```

Inside `show()`:

```cpp
this
```

refers to `s1`.

For another object:

```cpp
Student s2;
s2.show();
```

inside `show()`:

```cpp
this
```

refers to `s2`.

---

## Syntax / Structure

```cpp
this->member;
```

`this` is a pointer, so the `->` operator is used to access members.

Example:

```cpp
class Student {

public:
    int marks;

    void show() {
        cout << this->marks;
    }
};
```

If:

```cpp
Student s1;
s1.marks = 90;
s1.show();
```

then inside `show()`:

```cpp
this
```

points to `s1`.

Therefore:

```cpp
this->marks
```

means:

```cpp
s1.marks
```

---

## Examples

### Example 1: Calling Object

```cpp
#include <iostream>
using namespace std;

class Student {

public:
    int marks;

    Student(int marks){
        this->marks = marks;
    }

    void show() {
        cout << this->marks << endl;
    }
};

int main() {

    Student s1(90);

    s1.show();

    return 0;
}
```

Output:

```text
90
```

---


# Friend Function in C++



A **friend function** is a non-member function that is allowed to access the `private` and `protected` members of a class.

Normally, a function outside the class cannot access private data.

```cpp
class Student {

private:
    int marks;
};
```

This is not allowed:

```cpp
void show(Student s) {
    cout << s.marks;    // Error
}
```

A friend function gets special permission through the `friend` keyword.

---

## Syntax / Structure

Inside the class:

```cpp
class Student {

private:
    int marks;

public:
    friend void show(Student s);
};
```

The function is then defined outside the class:

```cpp
void show(Student s) {
    cout << s.marks;
}
```

Friend function is **not a member function** of the class.

Therefore, it is called like a normal function:

```cpp
show(s1);
```

not:

```cpp
s1.show();
```

---

### Example 1: Friend Function with Two Objects

```cpp
#include <iostream>
using namespace std;

class Student {

private:
    int marks;

public:
    Student(int m) {
        marks = m;
    }

    friend int totalMarks(Student s1, Student s2);
};

int totalMarks(Student s1, Student s2) {

    return s1.marks + s2.marks;
}

int main() {

    Student s1(80);
    Student s2(90);

    cout << totalMarks(s1, s2) << endl;

    return 0;
}
```

Output:

```text
170
```

`totalMarks()` is not a member of `Student`, but because it is declared as a friend, it can access:

```cpp
s1.marks
s2.marks
```

---

# Friend Class in C++



A **friend class** is a class that gets permission to access the `private` and `protected` members of another class.

If class `B` is declared as a friend of class `A`, then member functions of `B` can access private members of `A`.

---

## Syntax / Structure

```cpp
class A {

private:
    int x;

    friend class B;
};
```

Now class `B` can access the private members of `A`.

---

## Examples

### Example 1: Friend Class

```cpp
#include <iostream>
using namespace std;

class Student {

private:
    int marks = 95;

    friend class Teacher;
};

class Teacher {

public:
    void showMarks(Student s) {

        cout << s.marks << endl;
    }
};

int main() {

    Student s1;

    Teacher t1;

    t1.showMarks(s1);

    return 0;
}
```

Output:

```text
95
```

Normally:

```cpp
Student::marks
```

is private.

But:

```cpp
friend class Teacher;
```

gives the entire `Teacher` class permission to access `Student`'s private members.

So this is allowed:

```cpp
cout << s.marks;
```