# 1. LaTeX

## 1.1 Introduction

LaTeX is a document preparation system based on the TeX typesetting system. It is useful for technical and academic documents, especially when mathematical notation, references, tables, and structured layouts are required.

### Advantages

- Portable and free.
- Produces professional document layouts.
- Convenient mathematical typesetting.
- Supports structured documents.
- Can generate tables of contents, footnotes, references, and bibliographies.

## 1.2 Basic Document Structure

A LaTeX source file is a plain-text file saved with the `.tex` extension. A basic document consists of a preamble and a document body.

```latex
\documentclass[12pt,a4paper]{article}

\begin{document}
Hello, LaTeX!
\end{document}
```

- `\documentclass` selects the document type and options.
- The preamble contains packages and document settings.
- `\begin{document}` starts the document body.
- `\end{document}` ends the document.

Common document classes include `article`, `report`, and `book`.

## 1.3 Packages and Page Layout

Packages add features to LaTeX. They are included in the preamble, before `\begin{document}`.

```latex
\usepackage{amsmath, amssymb}
\usepackage{graphicx}
\usepackage{xcolor}
\usepackage{geometry}

\geometry{
    left=2.5cm,
    right=2.5cm,
    top=2.5cm,
    bottom=2.5cm
}
```

Page styles include:

- `plain`: page number at the bottom.
- `empty`: no header, footer, or page number.
- `headings`: section or chapter information in the header.

```latex
\pagestyle{plain}
```

## 1.4 Text Formatting and Structure

LaTeX commands are case-sensitive and generally begin with a backslash.

```latex
\section{Introduction}
\subsection{Purpose}

\textbf{Bold text}
\textit{Italic text}
\underline{Underlined text}
\emph{Emphasized text}
```

### Unordered List

```latex
\begin{itemize}
    \item First point
    \item Second point
\end{itemize}
```

### Ordered List

```latex
\begin{enumerate}
    \item First step
    \item Second step
\end{enumerate}
```

## 1.5 Mathematical Notation

LaTeX supports inline and displayed mathematical expressions.

**Inline mathematics**

```latex
\(x+y=10\)
```

**Displayed equation**

```latex
\[
x+y=10
\]
```

### Common Expressions

```latex
$a_i^2 + b_j^3$

$\alpha,\beta,\gamma,\delta,\lambda,\pi$

$\frac{a+b}{c}$

$\sqrt{x}$ and $\sqrt[3]{y}$

$\sum_{i=1}^{n} i$
```

### Matrices

The `bmatrix` environment creates a matrix enclosed in square brackets.

```latex
\[
A =
\begin{bmatrix}
1 & 2 \\
3 & 4
\end{bmatrix}
\]
```

- `&` separates columns.
- `\\` separates rows.

### Aligned Equations

The `align` environment from the `amsmath` package aligns equations, often at the `&` symbol.

```latex
\begin{align}
x + y &= 10 \\
2x + y &= 15
\end{align}
```

## 1.6 Tables

The `tabular` environment is used to create tables.

```latex
\begin{center}
\begin{tabular}{|c|c|c|}
\hline
Name & Subject & Marks \\
\hline
Asha & Maths & 90 \\
Ravi & Science & 85 \\
\hline
\end{tabular}
\end{center}
```

### Important Table Commands

- `&` separates columns.
- `\\` ends a row.
- `\hline` draws a horizontal line.
- `c`, `l`, and `r` mean centred, left-aligned, and right-aligned columns.
- `p{width}` creates a paragraph column.
- `\multicolumn` combines columns.
- `\multirow` combines rows when the `multirow` package is loaded.

### Table Placement

Common float placement options include `h` (here), `t` (top), `b` (bottom), and `p` (float page). `!` asks LaTeX to relax certain placement restrictions. `H` is provided by the `float` package and requests placement at that exact point.

## 1.7 Figures, Pictures, and Colours

### Including an External Image

The `graphicx` package is used to include external images.

```latex
\usepackage{graphicx}

\begin{figure}[h]
    \centering
    \includegraphics[width=0.5\textwidth]{sample.png}
    \caption{Sample figure}
    \label{fig:sample}
\end{figure}
```

### Colours

The `xcolor` package provides colour support.

```latex
\usepackage{xcolor}

\textcolor{blue}{Blue text}

\definecolor{myblue}{RGB}{10,60,200}
\textcolor{myblue}{Custom coloured text}
```

## 1.8 Compiling a LaTeX Document

A `.tex` file is processed by a LaTeX compiler to generate the final document.

**PDFLaTeX**

```bash
pdflatex filename.tex
```

**Traditional LaTeX workflow**

```bash
latex filename.tex
```

The traditional command generates a DVI file. Editors such as Overleaf and TeXstudio can compile documents through their interfaces.

## 1.9 Examples

The [`Examples/`](Examples/) folder contains small source files that demonstrate document structure, equations, tables, and figures/colours. Open each `.tex` file in a LaTeX editor and compile it to inspect the output.

## 1.10 What I Learned

LaTeX separates document content from formatting and provides precise control over technical documents. I practised document structure, text formatting, mathematical equations, lists, matrices, tables, figures, and colours.

## Source Material

Based on the Technical Writing lecture material on Introduction to LaTeX, environments, mathematical notations/equations/arrays/matrices/lists, table styles, and colours/figures/picture environment.
