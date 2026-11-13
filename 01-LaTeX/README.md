# 1. LaTeX

## What I learned

LaTeX is a document preparation system based on TeX. I learned that it is especially useful for technical and academic writing because it can produce well-structured documents and handle mathematical notation, tables, figures, and references neatly.

## 1.1 Basic document structure

A LaTeX source file is saved with the `.tex` extension. A document has a preamble, where the document class and packages are declared, and a body, where the actual content is written.

```latex
\documentclass[12pt,a4paper]{article}

\begin{document}
Hello, LaTeX!
\end{document}
```

I learned that `\documentclass` selects the document type, while `\begin{document}` and `\end{document}` mark the start and end of the content. Common classes include `article`, `report`, and `book`.

## 1.2 Packages and page layout

Packages add extra features. For example, `amsmath` supports advanced mathematics, `graphicx` helps insert images, `xcolor` adds colour, and `geometry` controls page margins.

```latex
\usepackage{amsmath, amssymb}
\usepackage{graphicx}
\usepackage{xcolor}
\usepackage{geometry}
\geometry{left=2.5cm,right=2.5cm,top=2.5cm,bottom=2.5cm}
```

I also learned about page styles such as `plain`, `empty`, and `headings`.

## 1.3 Text formatting and lists

LaTeX uses commands for formatting and environments for grouped structures. I practised section headings, bold, italic, and underlined text, along with ordered and unordered lists.

```latex
\section{Introduction}
\textbf{Bold text}
\textit{Italic text}
\underline{Underlined text}

\begin{itemize}
    \item First point
    \item Second point
\end{itemize}
```

The `itemize` environment creates bullet points, while `enumerate` creates numbered points.

## 1.4 Mathematical notation

One of the main things I learned was how LaTeX handles mathematical expressions. Inline mathematics is written within `\(...\)`, while displayed equations use `\[...\]` or a suitable equation environment.

```latex
Inline: \(a^2+b^2=c^2\)

\[
\frac{a+b}{c} = \sqrt{x}
\]
```

I practised subscripts, superscripts, Greek letters, fractions, roots, summations, matrices, and aligned equations. The `amsmath` package provides environments such as `align`, and `bmatrix` creates a matrix with square brackets.

## 1.5 Tables

I learned to create tables using the `tabular` environment. The column specification determines alignment: `c` centres content, `l` aligns it to the left, and `r` aligns it to the right.

```latex
\begin{tabular}{|c|c|c|}
\hline
Name & Subject & Marks \\
\hline
Asha & Maths & 90 \\
Ravi & Science & 85 \\
\hline
\end{tabular}
```

I practised `&` to separate columns, `\\` to end rows, and `\hline` to draw horizontal lines. I also learned about paragraph columns (`p{width}`), `\multicolumn`, `\multirow`, and table placement options such as `h`, `t`, `b`, and `p`.

## 1.6 Figures, pictures, and colours

The `graphicx` package is used to include external images. The `xcolor` package provides named and custom colours.

```latex
\includegraphics[width=0.5\textwidth]{sample.png}

\textcolor{blue}{Blue text}
\definecolor{myblue}{RGB}{10,60,200}
\textcolor{myblue}{Custom coloured text}
```

I learned that figures can include captions and labels, and that the image file must be available at the path specified in `\includegraphics`.

## 1.7 Compiling

A `.tex` source file is compiled to create an output document, commonly a PDF. One command-line option is:

```bash
pdflatex filename.tex
```

Online editors such as Overleaf can also compile LaTeX documents.

## Examples

The [`Examples/`](Examples/) folder contains complete LaTeX source files. These examples are written in LaTeX (`.tex`) and cover:

- `01-basic-document.tex` — document structure, text formatting, and lists.
- `02-mathematics-and-matrices.tex` — equations, fractions, summations, matrices, and alignment.
- `03-table-figure-colour.tex` — tables, figures, and colours.

Open a `.tex` file in a LaTeX editor and compile it to see the resulting document. For the figure sample, add an image named `sample.png` to the same folder and uncomment the figure environment.

## My learning outcome

I learned how to prepare a structured document in LaTeX, format text, organise content with sections and lists, typeset mathematical expressions, create tables, include figures, apply colours, and compile a `.tex` file into a PDF.

## Source material

Based on the Technical Writing lecture material on Introduction to LaTeX, environments, mathematical notations/equations/arrays/matrices/lists, table styles, and colours/figures/picture environment.
