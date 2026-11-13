# 2. Beamer

## What I learned

Beamer is a LaTeX document class used to create presentation slides. I learned that presentations can be written as LaTeX source files and compiled into PDF slides, rather than arranging every slide manually in a graphical editor.

## 2.1 Basic presentation structure

A Beamer file begins with the `beamer` document class. Each slide is created inside a `frame` environment. Presentation details such as the title, author, institute, and date are set in the preamble.

```latex
\documentclass{beamer}
\title{My Presentation}
\author{Student Name}
\institute{MNIT Jaipur}
\date{\today}

\begin{document}
\begin{frame}
    \titlepage
\end{frame}
\begin{frame}{Introduction}
    This is my first slide.
\end{frame}
\end{document}
```

I learned the purpose of `\title`, `\author`, `\institute`, `\date`, and `\titlepage`, and how a `frame` represents an individual slide.

## 2.2 Themes

Themes control the overall appearance of a presentation. A theme is selected in the preamble, before `\begin{document}`.

```latex
\usetheme{Madrid}
```

The available themes depend on the installed Beamer distribution.

## 2.3 Lists and blocks

I learned that lists can organise information on a slide and blocks can visually highlight a definition or important point.

```latex
\begin{frame}{Key Points}
    \begin{itemize}
        \item First point
        \item Second point
    \end{itemize}

    \begin{block}{Definition}
        A block highlights related information.
    \end{block}
\end{frame}
```

## 2.4 Columns

The `columns` environment divides a frame into side-by-side areas. This is useful when two related sets of information need to be shown on one slide.

```latex
\begin{frame}{Two Columns}
    \begin{columns}
        \column{0.48\textwidth}
        Left-side content

        \column{0.48\textwidth}
        Right-side content
    \end{columns}
\end{frame}
```

## 2.5 Compilation

A Beamer source file is saved with the `.tex` extension and compiled using a LaTeX engine that supports Beamer. For example:

```bash
pdflatex presentation.tex
```

## Examples

[`Examples/sample-presentation.tex`](Examples/sample-presentation.tex) is a complete Beamer source file. It demonstrates a title slide, content frames, a list, a highlighted block, and a two-column layout. The example is written in LaTeX and can be compiled to produce a presentation PDF.

## My learning outcome

I learned how to create a slide presentation using LaTeX Beamer, define presentation details, create frames, apply a theme, organise content with lists and blocks, and arrange information in columns.

## Source material

This section records the Beamer concepts practised as part of the Technical Writing presentation work. The sample presentation is a practice example.
