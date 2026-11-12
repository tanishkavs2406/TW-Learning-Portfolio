# 1. LaTeX

## 1.1 Introduction
LaTeX is a document preparation system based on the TeX typesetting system. It is useful for technical and academic documents, especially when mathematical notation, references, tables, and structured layouts are required.

### Advantages
- Portable and free.
- Professional document layouts.
- Convenient mathematical typesetting.
- Supports multiple output formats.
- Can generate tables of contents, footnotes, references, and bibliographies.

## 1.2 Basic document structure
A LaTeX source file is a plain-text file saved with the `.tex` extension. A basic document has a preamble and a document body.

```latex
\documentclass[12pt,a4paper]{article}

\begin{document}
Hello, LaTeX!
\end{document}
```

- `\documentclass` selects the document type and options.
- The preamble contains packages and settings.
- `\begin{document}` starts the document body.
- `\end{document}` ends it.

Common classes include `article`, `report`, and `book`.

## 1.3 Packages and page layout
Packages add features to LaTeX.

```latex
\usepackage{amsmath, amssymb}
\usepackage{graphicx}
\usepackage{xcolor}
\usepackage{geometry}
\geometry{left=2.5cm,right=2.5cm,top=2.5cm,bottom=2.5cm}
```

Page styles include:
- `plain`: page number at the bottom.
- `empty`: no header, footer, or page number.
- `headings`: section or chapter information in the header.

## 1.4 Text formatting and structure
```latex
\section{Introduction}
\subsection{Purpose}
\textbf{Bold text}
\textit{Italic text}
\underline{Underlined text}
```

Lists:
```latex
\begin{itemize}
  \item First point
  \item Second point
\end{itemize}

\begin{enumerate}
  \item First step
  \item Second step
\end{enumerate}
```

## 1.5 Mathematical notation
Inline mathematics: `\(x+y=10\)`

Displayed equation:
```latex
\[
x+y=10
\]
```

Examples:
```latex
$a_i^2 + b_j^3$
$\alpha,\beta,\gamma,\delta,\lambda,\pi$
$\frac{a+b}{c}$
$\sqrt{x}$ and $\sqrt[3]{y}$
$\sum_{i=1}^{n} i$
```

Matrices:
```latex
\[
A = \begin{bmatrix}
1 & 2 \\
3 & 4
\end{bmatrix}
\]
```

For aligned equations, the `align` environment from `amsmath` is useful.

## 1.6 Tables
A simple table:
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

- `&` separates columns.
- `\\` ends a row.
- `\hline` draws a horizontal line.
- `c`, `l`, and `r` mean centred, left-aligned, and right-aligned columns.
- `p{width}` creates a paragraph column.
- `\multicolumn` combines columns.
- `\multirow` combines rows when the `multirow` package is loaded.

Table placement options include `h`, `t`, `b`, `p`, and `!`. The `H` option is available through the `float` package.

## 1.7 Figures, pictures, and colours
Include an external image:
```latex
\usepackage{graphicx}

\begin{figure}[h]
  \centering
  \includegraphics[width=0.5\textwidth]{sample.png}
  \caption{Sample figure}
  \label{fig:sample}
\end{figure}
```

Colour support:
```latex
\usepackage{xcolor}
\textcolor{blue}{Blue text}
\definecolor{myblue}{RGB}{10,60,200}
```

## 1.8 Compiling
A `.tex` file can be compiled to PDF using:
```bash
pdflatex filename.tex
```
Online editors such as Overleaf can compile documents automatically.

## 1.9 What I learned
LaTeX separates content from formatting and provides precise control over technical documents. I practised document structure, formatting, equations, lists, tables, figures, and colours.

## Source material
Based on the TW LaTeX lecture PDFs: Introduction to LaTeX, LaTeX (continued), mathematical notations/equations/arrays/matrices/lists, table styles, and colours/figures/picture environment.
