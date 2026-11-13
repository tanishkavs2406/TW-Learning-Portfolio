# 3. Doxygen

## What I learned

Doxygen is a documentation-generation tool. It reads source-code files and specially formatted comments, then generates documentation. I learned that it can be used to document functions, classes, files, parameters, and return values, making source code easier for other people to understand.

## 3.1 Basic workflow

The basic workflow I learned is:

1. Write specially formatted documentation comments in the source code.
2. Generate a configuration file using `doxygen -g Doxyfile`.
3. Edit the configuration file to select input files and output options.
4. Run Doxygen using `doxygen Doxyfile`.
5. Open the generated documentation, commonly from `html/index.html`.

```bash
doxygen -g Doxyfile
doxygen Doxyfile
```

## 3.2 Documentation comments

Doxygen recognises specially formatted comments placed near the code being documented. In C++, a comment can describe a function and its parameters and return value.

```cpp
/**
 * @brief Adds two integers.
 * @param a First integer.
 * @param b Second integer.
 * @return Sum of the two integers.
 */
int add(int a, int b);
```

Commands I learned include:

- `@brief` — gives a short description.
- `@param` — describes a function parameter.
- `@return` — describes the returned value.
- `@author` — identifies the author.
- `@file` — describes a source file.
- `@see` — refers to related documentation.

## 3.3 Configuration file

The Doxyfile controls which files Doxygen reads and which output formats it generates. Some settings I practised are:

```text
INPUT                  = .
RECURSIVE              = YES
GENERATE_HTML          = YES
GENERATE_LATEX         = YES
```

The values can be adjusted according to the structure and documentation needs of a project.

## 3.4 Output formats

I learned that Doxygen can generate HTML documentation for browsing and LaTeX/PDF documentation for printable manuals. Other available formats include RTF, XML, DocBook, and man pages, depending on the configuration.

## Examples

The [`Examples/`](Examples/) folder contains:

- `calculator.cpp` — a small C++ program with Doxygen-style comments.
- `Doxyfile` — a sample configuration file.

Run the Doxygen commands from this folder after installing Doxygen. The generated HTML documentation can be opened from the configured output directory.

## My learning outcome

I learned how to write structured comments in source code, generate and edit a Doxyfile, run Doxygen, and produce HTML or printable documentation from code comments.

## Source material

Based on the Technical Writing lecture, *Introduction to Documentation Tools: Doxygen and Google Docs*.
