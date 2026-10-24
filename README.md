# C++ Programming Assignments

A collection of C++ practical assignments covering core programming and object-oriented programming concepts. Each assignment is self-contained and can be compiled independently.

## Requirements

- A C++ compiler with C++11 support or newer (for example, MinGW g++).
- A terminal such as PowerShell, Command Prompt, or a VS Code terminal.

## Build and Run

Open a terminal in the repository root and run the command for the assignment you want to execute. Folder names contain spaces, so they are enclosed in quotes.

```powershell
g++ -std=c++11 ".\01Class-constructor-destructor\main.cpp" -o ".\01Class-constructor-destructor\main.exe"
.\01Class-constructor-destructor\main.exe
```

Replace the folder and source-file path with the desired assignment. Assignment 4 uses `mai.cpp`; all other assignments use `main.cpp`.

## Assignment Index

| No. | Folder | Topic | Key concepts |
| --- | --- | --- | --- |
| 1 | `01Class-constructor-destructor` | Class, constructor, and destructor | Classes, objects, parameterized constructors, destructors, member functions |
| 2 | `02Various-Types-of-Constructors-and-Member-Functions` | Constructors and member functions | Default, parameterized, and copy constructors; encapsulation |
| 3 | `03Operator Overloading using Default and Parameterized Constructors` | Complex-number addition | Default and parameterized constructors, `operator+` overloading |
| 4 | `04References, Pointers and Dynamic Memory using new and delete` | References, pointers, and dynamic memory | Pass-by-reference, pointers, `new[]`, `delete[]` |
| 5 | `05Assigenment-5` | Student result | Static data members, inline functions, friend classes |
| 6 | `06Assigenment-6` | Inheritance | Single, multilevel, hierarchical, and multiple inheritance |
| 7 | `07Ass-7` | Polymorphism | Function overloading, virtual functions, runtime polymorphism |
| 8 | `08Ass-8` | Exception handling | `try`, `catch`, `invalid_argument`, `runtime_error` |
| 9 | `09Ass-9` | Move semantics | `std::move` and transfer of student-record data |
| 10 | `10Ass-10` | Templates | Function templates and class templates |
| 11 | `11Ass-11` | STL library management | `std::list`, `std::vector`, searching, deletion, averages |
| 12 | `12` | Type conversion | Implicit conversion, `static_cast`, and C-style casting |

## Example: Build Assignment 4

```powershell
g++ -std=c++11 ".\04References, Pointers and Dynamic Memory using new and delete\mai.cpp" -o ".\04References, Pointers and Dynamic Memory using new and delete\assignment4.exe"
.\04References, Pointers and Dynamic Memory using new and delete\assignment4.exe
```

## Project Structure

```text
CPP-Assigenment-1/
|-- 01Class-constructor-destructor/
|-- 02Various-Types-of-Constructors-and-Member-Functions/
|-- 03Operator Overloading using Default and Parameterized Constructors/
|-- 04References, Pointers and Dynamic Memory using new and delete/
|-- 05Assigenment-5/ through 11Ass-11/
`-- 12/
```

## Notes

- Run one program at a time; several programs request input interactively.
- Generated `.exe` files are build outputs and do not need to be committed to Git.
- The folder names are retained as submitted, including their original spelling.
