# 1. Aggregation and Composition

Inheritance describes an **IS-A relationship**.

For example:

- A dog is an animal.
- A student is a person.

But many relationships are different.

- A car has an engine.
- A department has teachers.
- A team has players.
- A university has departments.

These are examples of **HAS-A relationships**.

In C++, HAS-A relationships are commonly represented using member objects or references/pointers to other objects.

Two important forms of HAS-A relationships, are **aggregation** and **composition**.

## 1.1 Aggregation

Aggregation represents a whole-part relationship in which the contained object can exist independently of the containing object.

For example:

- A department has teachers.
- A teacher can exist even if the department is removed.
- A teacher may later be associated with another department.

The department does not necessarily own the teacher's lifetime.

### Example

```cpp
#include <iostream>
#include <string>
using namespace std;

class Teacher {
public:
    string name;

    Teacher(string n) : name(n) {
    }
};

class Department {
public:
    Teacher* teacher;

    Department(Teacher* t) : teacher(t) {
    }

    void display() const {
        cout << teacher->name << '\n';
    }
};

int main() {
    Teacher t("Aman");

    {
        Department d(&t);
        d.display();
    }

    cout << t.name << '\n';

    return 0;
}
```

Output:

```text
Aman
Aman
```

Here:

- `Teacher` is created independently.
- `Department` receives a pointer to the existing teacher.
- The department does not allocate or delete the teacher.
- When the `Department` object goes out of scope, the `Teacher` object remains alive.

## 1.2 Characteristics of aggregation

1. The contained object can exist independently.
2. The containing object does not necessarily own the contained object's lifetime.
3. Multiple containing objects may refer to the same contained object.
4. Removing the containing object does not necessarily destroy the contained object.

For example, a teacher can be associated with a department, but the teacher's existence need not depend on that department.

## 1.3 Composition

Composition represents a strong whole-part relationship in which the containing object owns the contained object as part of its own lifetime.

For example:

- A car contains an engine as one of its parts.

### Example

```cpp
#include <iostream>
using namespace std;

class Engine {
public:
    Engine() {
        cout << "Engine created\n";
    }

    ~Engine() {
        cout << "Engine destroyed\n";
    }

    void start() {
        cout << "Engine started\n";
    }
};

class Car {
private:
    Engine engine;

public:
    Car() {
        cout << "Car created\n";
    }

    ~Car() {
        cout << "Car destroyed\n";
    }

    void startCar() {
        engine.start();
    }
};

int main() {
    {
        Car car;
        car.startCar();
    }

    return 0;
}
```

Output:

```text
Engine created
Car created
Engine started
Car destroyed
Engine destroyed
```

## 1.4 Characteristics of composition

Typical characteristics include:

1. The containing object directly owns the contained object.
2. The contained object is constructed and destroyed as part of the containing object's lifetime.
3. The contained object is generally not independently owned by another containing object.
4. Construction and destruction order are managed through C++ object-lifetime rules.

A direct data member is a common way to express composition:

```cpp
class Car {
private:
    Engine engine;
};
```

## 1.5 Aggregation vs composition

| Feature | Aggregation | Composition |
|---|---|---|
| Relationship | Weak HAS-A | Strong ownership-based HAS-A |
| Part's independent existence | Usually possible | Usually tied to the whole's lifetime |
| Lifetime ownership | Not necessarily owned by the whole | Owned by the whole |
| Common implementation | Reference or non-owning pointer | Direct member |
| Part shared between multiple wholes | Possible | Usually not under exclusive ownership |
| Example | Department references a teacher | Car owns its engine object |
