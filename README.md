# Data Structures and Algortihms in C++

This repository holds C++ Code, including Data Structures and Algorithms. and OOP Concepts.

## Why C++ ?
- Powerful general-purpose programming language.
    -- Includes both procedural & OOP
- Complex, Scalable, Fast. A lot under control.
- Direct access to hardware resources and system functions.
- Most Usage: High Performance, Game Engines and many known apps.
- C++ is ranked among somewhere in top 3-6
- Evolution: Classical C++, C++11, C++14, C++17, C++20.

## C++ Program Life Cycle
1. Write the COde.
2. Compile it (lots of internal steps included here).
    -- Generates an executable(e.g. code.exe file on windows)
3. Run the executable.

## Basic C++ Syntax
- `cout` - This is a command to print(cout = console output).This is the same as `print()` in Python, `Console.writeline()`in C# and `console.log()` in JavaScript.
- `;` - this represents a signal to the end of an instruction.
- `iostream` - This is a header and it represents input/output stream. 
- `#include` - This is used to import libraries. In other words ready to use code to use in your program.
This is similar to `import` in Python.
- `main()` - When you try to run your program it is the first thing it runs.
- `{}` - The body of our code goes inside these curly braces.
- `endl` - This means endline or move to the next or new line. It is similar to `\n`.
- `<<` - In C++, the << operator is primarily used for outputting data to the standard output stream, such as the console. This operator is often associated with the std::cout object, which is used for outputting text and data.
e.g.
`#include <iostream>`

`int main() {`
    `int x = 10;`
    `std::cout << "The value of x is: " << x << std::endl;`
    `return 0;`
`}`

In this example:

`std::cout` is the standard output stream object.
`<<` is the insertion operator. It is used to insert (or stream) data into std::cout.
"The value of `x` is: " is a string literal that gets printed first.
`x` is the variable whose value will be inserted into the output stream.
`std::endl` is used to insert a newline character and flush the output buffer.`
`return` - This tells our compiler that we are done. Anything after the `return` will not run.

In C++, `std::cout` and `cout` refer to the same thing, but the difference lies in how you use them based on your coding practices.

### Using std::cout
- `std::cout` is the full name of the output stream object provided by the C++ Standard Library. It's located in the std namespace.

- When you use `std::cout`, you are explicitly indicating that cout is part of the `std` namespace.

- This is the recommended way to use cout in most cases, especially in larger programs or when working with libraries where naming conflicts can occur.

- If you have a using namespace std; declaration in your code, you can omit the `std::` prefix.
This is convenient for shorter, simpler programs or for quick prototyping.

- However, it's generally not recommended for larger programs because it can lead to naming conflicts if different libraries define the same names.

*** Note: For small programs `cout` works well but for larger programs it is best to use `std::cout` to avoid naming conflicts. ***




