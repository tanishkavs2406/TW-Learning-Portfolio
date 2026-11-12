# 2. Beamer

## 2.1 Introduction

Beamer is a LaTeX document class used to create presentation slides. Instead of preparing slides with a graphical slide editor, the author writes LaTeX source and compiles it into a presentation PDF.

## 2.2 Basic Structure

A Beamer presentation uses the `beamer` document class. Each slide is usually created with a `frame` environment.

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

## 2.3 Important Commands and Environments

- `\documentclass{beamer}` selects the Beamer class.
- `\title{...}` sets the presentation title.
- `\author{...}` sets the author.
- `\institute{...}` sets the institution.
- `\date{...}` sets the date.
- `\titlepage` creates a title slide.
- `frame` defines an individual slide.
- `\section{...}` organises the presentation into sections.

## 2.4 Themes

A theme controls the overall appearance of the slides.

```latex
\usetheme{Madrid}
```

The theme command is placed in the preamble, before `\begin{document}`. The available themes depend on the installed Beamer distribution.

## 2.5 Lists and Blocks

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

## 2.6 Columns

The `columns` environment divides a slide into columns.

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

## 2.7 Compilation

Save the source with a `.tex` extension and compile it with a LaTeX engine that supports Beamer, for example:

```bash
pdflatex presentation.tex
```

## 2.8 Examples

See [`Examples/`](Examples/) for a complete sample presentation.

## 2.9 What I Learned

Beamer makes it possible to create structured slide presentations using LaTeX. I learned the basic presentation structure, frames, title slides, themes, lists, blocks, and columns.

## Source Material

This section records the Beamer concepts practised as part of the Technical Writing presentation work. The specific examples in the folder are practice samples.
