## Inheritance

- Inheritance Basics – derived class and base class,
- Types (simple, multi-level, multiple and hierarchical),
- Modes (private, protected, public inheritance),
- Overriding member functions,
- Order of execution of constructors and destructors,
- Resolving ambiguities in inheritance,
- Virtual base class, Aggregation and Composition.

```
├── Inheritance Fundamentals
│   ├── Introduction to Inheritance
│   ├── Need and Advantages of Inheritance
│   ├── Base Class and Derived Class
│   ├── Syntax of Inheritance in C++
│   ├── Inheriting Data Members and Member Functions
│   ├── Accessing Base Class Members Through Derived Objects
│   └── Private, Protected, and Public Members in Inheritance
│
│
├── Modes of Inheritance
│   ├── Introduction to Inheritance Access Modes
│   ├── Public Inheritance
│   ├── Protected Inheritance
│   ├── Private Inheritance
│   ├── Effect of Inheritance Modes on Base Class Members
│   └── Comparison of Public, Protected, and Private Inheritance
│
│
├── Types of Inheritance
│   ├── Single Inheritance
│   ├── Multilevel Inheritance
│   ├── Multiple Inheritance
│   ├── Hierarchical Inheritance
│   └── Class Diagrams and Practical Examples
│
│
├── Member Function Overriding
│   ├── Introduction to Function Overriding
│   ├── Defining the Same Function in Base and Derived Classes
│   ├── Function Name and Parameter Matching
│   │   ├── When differ parameter => using Base::display;
│   ├── Use of virtual and override keyword
│   ├── Accessing Base Class Functions Using the Scope Resolution Operator => Base::display();
│
│
├── Constructors and Destructors in Inheritance
│   ├── Recap Constructors and Destructors
│   ├── Constructors in Base and Derived Classes
│   ├── Order of Constructor Execution
│   ├── Order of Destructor Execution
│   ├── Parameterized Base Class Constructors
│   ├── Calling Base Class Constructors from Derived Classes
│   ├── Constructor and Destructor Execution in Multilevel Inheritance
│   └── Constructor and Destructor Execution in Multiple Inheritance
│
│
├── Ambiguity Resolution in Inheritance
│   ├── Introduction to Ambiguity
│   ├── Ambiguity in Multiple Inheritance
│   ├── Same Member Name in Multiple Base Classes
│   ├── Resolving Ambiguity Using the Scope Resolution Operator
│   └── Resolving Ambiguity Through Explicit Base Class Access
│
```
```
Ambiguity occurs when the compiler cannot determine which member or function the programmer intends to use.

This often happens in multiple inheritance when two base classes contain members with the same name.
```
```
│
├── Virtual Base Classes
│   ├── Introduction to Virtual Base Classes
│   ├── The Diamond Inheritance Problem
│   ├── Duplicate Base Class Instances
│   ├── Syntax of Virtual Inheritance
│   ├── Resolving Diamond Problem Ambiguity
│   └── Constructors with virtual base classes
│
```
```
Virtual base classes address a specific problem in multiple inheritance: Diamond Problem : duplicate instances of a shared base class.
```
```cpp
// without virtual classes
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
};

class Student : public Person {
};

class Employee : public Person {
};

class TeachingAssistant : public Student, public Employee {
};

int main() {
    TeachingAssistant ta;

    // ta.name = "Aman"; // Error: ambiguous

    ta.Student::name = "Aman";
    ta.Employee::name = "Rahul";

    cout << ta.Student::name << '\n';
    cout << ta.Employee::name << '\n';

    return 0;
}
```

```cpp
// with virtual Base classes
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
};

class Student : virtual public Person {
};

class Employee : virtual public Person {
};

class TeachingAssistant : public Student, public Employee {
};

int main() {
    TeachingAssistant ta;

    ta.name = "Aman";

    cout << ta.name << '\n';

    return 0;
}

```

```
│
└── Aggregation and Composition
    ├── Introduction to Has-A Relationships
    ├── Aggregation
    │   ├── Meaning and Characteristics
    │   ├── Independent Object Lifetimes
    │   └── Practical Examples
    ├── Composition
    │   ├── Meaning and Characteristics
    │   ├── Dependent Object Lifetimes
    │   └── Practical Examples
    ├── Aggregation vs Composition
    └── Inheritance vs Aggregation vs Composition
```