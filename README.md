# Object-Oriented Programming Using C++

## 📌 About This Repository

This repository contains my learning and implementation of **Object-Oriented Programming (OOP) using C++**.

The repository focuses on understanding how object-oriented principles are used to design structured, reusable, secure, and maintainable programs.

Each topic is documented with its **definition, purpose, working principle, important features, and real-world applications** to build both theoretical and practical understanding of C++ OOP.

---
# 🎓 Student Details
Field	Details
Name	Sneha Basavaraj Navalagund
Roll No.	622
Division	F
USN	01FE23BEC321
Semester	VII
University  KLE Technological University

---
## 🎯 Objectives

The main objectives of this repository are:

- To understand the fundamentals of Object-Oriented Programming.
- To learn how C++ supports object-oriented software development.
- To understand how classes and objects represent real-world entities.
- To learn how constructors and destructors manage objects.
- To understand encapsulation and data hiding.
- To understand different types of inheritance and code reusability.
- To learn the purpose of friend functions and static members.
- To connect theoretical OOP concepts with real-world software applications.

---

# 📚 Features of OOPs

The main features of Object-Oriented Programming (OOP) are:

1. Class – A blueprint/template used to create objects.
2. Object – An instance of a class that represents a real-world entity.
3. Encapsulation – Wrapping data and functions together into a single unit (class).
4. Abstraction – Hiding unnecessary implementation details and showing only essential information.
5. Inheritance – Acquiring properties and functions of an existing class into a new class.
6. Polymorphism – One name having many forms, such as function overloading and overriding.
7. Data Hiding – Restricting direct access to data using access specifiers like private.

---

# 1. Classes and Objects

## What is a Class?

A **class** is a user-defined data type that acts as a blueprint for creating objects.

A class combines:

- Data members
- Member functions

The data members represent the properties of an entity, while member functions represent the operations that can be performed on that entity.

### Why is a Class Used?

Classes are used to organize related data and functions into a single unit.

They help in:

- Organizing large programs
- Representing real-world entities
- Improving code reusability
- Supporting data hiding
- Building modular software

## What is an Object?

An **object** is an instance of a class.

When an object is created, memory is allocated for its data members.

For example, a `Student` class can represent the general structure of a student, while individual students can be represented as objects.

### Real-World Applications

Classes and objects are widely used in:

- Banking systems
- Student management systems
- Hospital management systems
- E-commerce applications
- Vehicle management systems
- Employee management systems
- Games and simulations

---

# 2. Constructors

## What is a Constructor?

A constructor is a special member function of a class that is automatically called when an object is created.

Its primary purpose is to **initialize an object**.

### Characteristics

- Constructor has the same name as the class.
- It does not have a return type.
- It is automatically called when an object is created.
- A class can have multiple constructors.
- Constructors can be overloaded.

### Types of Constructors

Common types include:

- Default Constructor
- Parameterized Constructor
- Copy Constructor

### Why are Constructors Used?

Constructors ensure that an object starts with a valid or meaningful initial state.

For example, when creating a bank account object, the constructor can initialize:

- Account holder name
- Account number
- Initial balance

### Real-World Applications

Constructors are commonly used when:

- Creating user accounts
- Initializing database objects
- Creating employee records
- Initializing configuration objects
- Creating objects representing hardware or system components

---

# 3. Destructors

## What is a Destructor?

A destructor is a special member function that is automatically called when an object is destroyed.

Its purpose is to perform **cleanup operations** before an object is removed from memory.

### Characteristics

- Destructor has the same name as the class preceded by `~`.
- It does not return a value.
- It does not take parameters.
- A class can have only one destructor.
- It is automatically invoked when the object goes out of scope.

### Why is a Destructor Used?

Destructors are useful for releasing resources acquired by an object.

These resources can include:

- Dynamically allocated memory
- Files
- Database connections
- Network resources
- Other system resources

### Real-World Applications

Destructors are useful in applications where objects manage external resources, such as:

- File management systems
- Database applications
- Network applications
- Memory-intensive applications
- Embedded and system-level software

---

# 4. Encapsulation

## What is Encapsulation?

**Encapsulation** is the process of combining data and the functions that operate on that data into a single unit.

In C++, a class provides the mechanism for implementing encapsulation.

### Why is Encapsulation Important?

Encapsulation helps protect an object's internal data from direct and unwanted access.

Instead of allowing external code to directly modify data, controlled functions can be provided to access or modify it.

### Advantages

- Data protection
- Better program organization
- Controlled access
- Easier maintenance
- Reduced complexity
- Improved reliability

### Real-World Example

Consider a bank account.

The account balance should not normally be modified directly by any part of the program.

Instead, operations such as:

- Deposit
- Withdraw
- Check Balance

can control how the balance is accessed and modified.

### Applications

Encapsulation is widely used in:

- Banking software
- User authentication systems
- Healthcare systems
- E-commerce systems
- Enterprise applications
- Security-sensitive software

---

# 5. Data Hiding

## What is Data Hiding?

Data hiding is the practice of restricting direct access to the internal data of an object.

It is commonly implemented using access specifiers such as `private`.

### Purpose

Data hiding prevents other parts of the program from directly changing sensitive internal information.

For example, an employee's salary or a bank account balance can be kept private.

### Benefits

- Protects sensitive information
- Prevents accidental modification
- Provides controlled access
- Improves software security
- Reduces dependencies between components

### Difference Between Encapsulation and Data Hiding

**Encapsulation** focuses on combining data and methods into one unit.

**Data hiding** focuses on restricting direct access to internal data.

Data hiding is therefore an important part of implementing encapsulation effectively.

---

# 6. Access Specifiers

C++ provides three major access specifiers:

## Public

Members declared as `public` can be accessed from outside the class.

They are generally used for operations that should be available to users of the class.

## Private

Members declared as `private` can only be accessed directly from within the class.

They are commonly used to protect internal data.

## Protected

Members declared as `protected` can be accessed within the class and by derived classes.

They are particularly useful when implementing inheritance.

### Importance

Access specifiers provide control over how different parts of a program interact with an object.

They help implement:

- Encapsulation
- Data hiding
- Controlled access
- Secure class design

---

# 7. Friend Functions

## What is a Friend Function?

A **friend function** is a function that is not a member of a class but is given permission to access the class's private and protected members.

It is declared inside the class using the `friend` keyword.

### Why is it Used?

Normally, private members can only be accessed by member functions of the class.

A friend function provides controlled access when an external function needs to work closely with the internal data of a class.

### Important Characteristics

- It is not a member of the class.
- It can access private and protected members.
- It is declared using the `friend` keyword.
- It is called like a normal function.
- Friendship is explicitly granted by the class.

### Applications

Friend functions can be useful when:

- Two classes need to cooperate closely.
- An external function needs access to private data.
- Operator overloading requires access to private members.
- Data needs to be shared between related classes.

### Important Consideration

Friend functions should be used carefully because excessive use can reduce data hiding and increase dependency between components.

---

# 8. Static Members

## What is a Static Member?

A static member belongs to the **class rather than to individual objects**.

Normally, every object has its own copy of non-static data members.

A static data member, however, is shared among all objects of that class.

### Why is it Used?

Static members are useful when some information needs to be common to every object.

For example, if we want to keep track of how many objects of a class have been created, a static variable can maintain that count.

### Static Data Member

A static data member has only one shared copy for the entire class.

### Static Member Function

A static member function belongs to the class and can be called without creating an object.

It can directly access static members.

### Applications

Static members are commonly used for:

- Counting objects
- Maintaining shared information
- Configuration values
- Utility functions
- Common counters
- Resource management

### Real-World Example

In a university management system, a static member could maintain the total number of student objects created.

Instead of each student having a separate count, one shared count can represent the total.

---

# 9. Inheritance

## What is Inheritance?

**Inheritance** is an OOP mechanism that allows a new class to acquire properties and behavior from an existing class.

The existing class is called the **base class**, while the new class is called the **derived class**.

### Why is Inheritance Used?

The main purpose of inheritance is **code reusability**.

Instead of writing the same functionality repeatedly, common functionality can be placed in a base class and reused by derived classes.

### Advantages

- Code reusability
- Reduced code duplication
- Easier maintenance
- Better organization
- Supports hierarchical relationships
- Provides a foundation for polymorphism

### Real-World Example

Consider a transportation system.

A general `Vehicle` class may contain common properties such as:

- Speed
- Number of wheels
- Start operation

Classes such as:

- Car
- Bike
- Bus

can inherit common characteristics from the `Vehicle` class while adding their own specific functionality.

---

# 10. Types of Inheritance

C++ supports different forms of inheritance.

## Single Inheritance

One derived class inherits from one base class.

### Structure

```text
Base Class
     ↓
Derived Class
```

### Application

Useful when a new class is a specialized version of an existing class.

Example:

```text
Vehicle → Car
```

---

## Multilevel Inheritance

A class is derived from another derived class, creating multiple levels.

### Structure

```text
Base Class
     ↓
Derived Class
     ↓
Further Derived Class
```

### Application

Useful when functionality needs to be extended gradually through multiple levels.

Example:

```text
Person → Employee → Manager
```

---

## Multiple Inheritance

A derived class inherits from more than one base class.

### Structure

```text
Base Class 1 ──┐
               ↓
          Derived Class
               ↑
Base Class 2 ──┘
```

### Application

Useful when a class needs functionality from multiple independent classes.

For example, a system component may require characteristics from two different functional categories.

---

## Hierarchical Inheritance

Multiple derived classes inherit from the same base class.

### Structure

```text
          Base Class
          /        \
         ↓          ↓
   Derived 1    Derived 2
```

### Application

Useful when several classes share common functionality.

Example:

```text
        Employee
        /       \
   Manager     Engineer
```

---

## Hybrid Inheritance

Hybrid inheritance is a combination of two or more types of inheritance.

It can be used to represent complex relationships between classes.

### Application

Hybrid inheritance can be useful in large systems where different types of relationships exist between classes.

However, complex inheritance structures should be designed carefully because they can make software harder to understand and maintain.

---

# 🔗 Relationship Between OOP Concepts

The concepts covered in this repository are interconnected and form the foundation of Object-Oriented Programming.

```text
                    C++ OOP
                       │
        ┌──────────────┼──────────────┐
        ↓              ↓              ↓
     Classes        Objects       Encapsulation
        │                              │
        ↓                              ↓
  Constructors                   Data Hiding
        │                              │
        ↓                              ↓
   Destructors                  Access Specifiers
                                       │
                         ┌─────────────┴─────────────┐
                         ↓                           ↓
                  Friend Functions             Static Members
                         │                           │
                         └─────────────┬─────────────┘
                                       ↓
                                  Inheritance
                                       │
                  ┌────────────┬───────┼──────────┐
                  ↓            ↓       ↓          ↓
               Single      Multilevel Multiple  Hierarchical
                                                     │
                                                     ↓
                                                  Hybrid
```

These concepts work together to provide a structured approach to designing software. **Classes and objects** form the basic building blocks, while **encapsulation and data hiding** help protect data. **Constructors and destructors** manage object initialization and cleanup. **Friend functions and static members** provide specialized ways of accessing and managing class-related data. **Inheritance** enables code reuse and establishes relationships between classes.

# ⭐ Conclusion

Object-Oriented Programming provides a structured approach to developing software by representing real-world entities as objects and defining relationships between them.

The concepts covered in this repository form the foundation for writing **modular, reusable, maintainable**, and organized C++ programs.
