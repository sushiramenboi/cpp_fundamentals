## C++ Notes: Errors and Warnings

Programmers make mistakes all the time, especially when learning. In C++, errors usually happen when the code breaks the language rules or when the code runs but gives the wrong answer.

### Syntax Errors

A **syntax error** happens when the code is written in a way C++ does not understand.

Examples:

```cpp
cout << "Hello"
```

This is missing a semicolon:

```cpp
cout << "Hello";
```

Syntax errors are caught by the compiler before the program runs.

Common syntax errors:

- Missing semicolon `;`
- Missing `<<` in a `cout` statement
- Using single quotes instead of double quotes for text
- Misspelling variable names
- Forgetting closing quotation marks
- Using `>>` instead of `<<` with `cout`

### Compiler Error Messages

Compiler messages are not always perfectly clear. Sometimes the compiler points to a line, but the real mistake is on an earlier line.

Best rule:

**Check the line the compiler gives you, then check the lines above it.**

The compiler is basically saying, “I got confused here,” but that does not always mean the mistake started there.

### Fix the First Error First

When there are many errors, do not try to fix everything at once.

Fix the **first error message**, then run the program again.

A lot of later errors might only happen because the first error confused the compiler.

### Logic Errors

A **logic error** happens when the program runs, but the answer is wrong.

Example:

```cpp
totalBeans = numBeans + numJars;
```

This compiles, but it gives the wrong answer if you meant:

```cpp
totalBeans = numBeans * numJars;
```

Syntax error = code does not compile.
Logic error = code compiles, but the result is wrong.

### Bugs

A bug is an error in the program. It can be a syntax error, logic error, or runtime problem.

The important thing is to slow down and test your code step by step.

### Compile Often

Do not write a huge amount of code before testing it.

A good habit is:

**Write a few lines → run the code → fix errors → continue.**

This makes errors easier to find because you know the mistake is probably in the last few lines you wrote.

### Compiler Warnings

A warning is not the same as an error.

An error usually stops the program from compiling.
A warning means the program may still run, but something might be wrong.

Do not ignore warnings. They can point out possible bugs before they become bigger problems.

### Main Idea to Remember

When fixing C++ code:

1. Read the first error.
2. Check that line and the lines before it.
3. Fix one thing at a time.
4. Compile again.
5. Do not ignore warnings.
6. If the code runs but the answer is wrong, look for a logic error.

The goal is not to write perfect code immediately. The goal is to learn how to find and fix mistakes calmly.
