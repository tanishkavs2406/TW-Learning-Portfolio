# 3. Doxygen

## 3.1 Introduction
Doxygen is an open-source documentation generator for programming languages such as C, C++, Python, and Java. It extracts information from specially formatted comments in source code and generates reference documentation such as HTML, LaTeX, and PDF.

## 3.2 Why use Doxygen?
- Documents functions, classes, and modules.
- Helps developers understand and maintain code.
- Generates cross-references and diagrams.
- Supports Markdown, LaTeX formulas, diagrams, and code examples.

## 3.3 Common documentation tags

| Tag | Purpose |
|---|---|
| `\\brief` | Short summary of a function, class, or module |
| `\\param` | Describes a parameter |
| `\\return` | Describes the return value |
| `\\author` | Author information |
| `\\version` | Version information |
| `\\see` | Reference to related items |
| `\\note` | Additional note |

## 3.4 Example of documented C++ code
```cpp
/**
 * \\brief Adds two integers.
 * \\param a First integer.
 * \\param b Second integer.
 * \\return Sum of a and b.
 */
int add(int a, int b) {
    return a + b;
}
```

Doxygen-style comments can also document files, classes, and members.

## 3.5 Basic workflow
1. Write specially formatted comments in source code.
2. Generate a configuration file:
   ```bash
   doxygen -g Doxyfile
   ```
3. Edit the configuration file as required.
4. Generate documentation:
   ```bash
   doxygen Doxyfile
   ```
5. Browse the generated HTML documentation, commonly at `html/index.html`.

## 3.6 Output
Doxygen can generate HTML and LaTeX output. A PDF workflow can be created from the generated LaTeX output when the required LaTeX tools are installed.

## 3.7 What I learned
Doxygen turns structured comments in source code into navigable reference documentation. It is useful for documenting APIs, functions, classes, and software libraries.

## Source material
Based on the uploaded lecture, *Introduction to Documentation Tools: Doxygen & Google Docs*.
