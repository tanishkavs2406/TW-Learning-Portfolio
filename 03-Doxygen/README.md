# 3. Doxygen

## 3.1 Introduction

Doxygen is a documentation-generation tool. It reads source-code files and specially formatted comments, then generates documentation in formats such as HTML and LaTeX/PDF.

It is useful for documenting functions, classes, files, parameters, and return values.

## 3.2 Basic Doxygen Workflow

1. Write specially formatted comments in the source code.
2. Create a configuration file using `doxygen -g Doxyfile`.
3. Edit the configuration file as required.
4. Run `doxygen Doxyfile`.
5. Browse the generated output, commonly in the `html` directory.

```bash
doxygen -g Doxyfile
doxygen Doxyfile
```

## 3.3 Documentation Comments

Doxygen recognises specially formatted comments. A common C++ style is:

```cpp
/**
 * @brief Adds two integers.
 * @param a First integer.
 * @param b Second integer.
 * @return Sum of the two integers.
 */
int add(int a, int b);
```

Common commands include:

- `@brief`: short description.
- `@param`: describes a parameter.
- `@return`: describes the return value.
- `@author`: identifies the author.
- `@file`: describes a file.
- `@see`: refers to related documentation.

## 3.4 Configuration File

Generate a starter configuration file:

```bash
doxygen -g Doxyfile
```

The Doxyfile controls input files, output directories, and output formats. Some important settings include:

```text
INPUT                  = .
RECURSIVE              = YES
GENERATE_HTML          = YES
GENERATE_LATEX         = YES
```

The exact configuration can be changed to suit the project.

## 3.5 Output Formats

Doxygen can generate multiple output formats, including:

- HTML — useful for browsing documentation.
- LaTeX/PDF — useful for printable manuals.
- RTF, XML, DocBook, and man pages — depending on configuration.

The HTML output is commonly opened from `html/index.html`.

## 3.6 Examples

The [`Examples/`](Examples/) folder contains a documented C++ source file and a sample Doxyfile. Run the commands from that folder after installing Doxygen.

## 3.7 What I Learned

I learned how Doxygen extracts documentation from specially formatted source-code comments, how to generate and edit a Doxyfile, and how to produce browsable HTML or printable documentation.

## Source Material

Based on the Technical Writing lecture on Introduction to Documentation Tools: Doxygen and Google Docs.
