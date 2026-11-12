# 2. Beamer — Presentations using LaTeX

## 2.1 Introduction
Beamer is a LaTeX document class used to create slide-based presentations. It supports structured frames, themes, bullet points, columns, blocks, and overlays.

## 2.2 Basic Beamer document
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
  Welcome to my presentation.
\end{frame}

\end{document}
```

## 2.3 Frames
Each slide is generally created using a `frame` environment:
```latex
\begin{frame}{Slide Title}
  Slide content goes here.
\end{frame}
```

## 2.4 Lists
```latex
\begin{frame}{Main Points}
  \begin{itemize}
    \item First point
    \item Second point
  \end{itemize}
\end{frame}
```

## 2.5 Themes
A theme controls the overall appearance of slides:
```latex
\usetheme{Madrid}
```
Other themes can be selected to change the presentation's visual style.

## 2.6 Blocks
```latex
\begin{frame}{Important Concept}
  \begin{block}{Definition}
    A block highlights related information.
  \end{block}
\end{frame}
```

## 2.7 Columns
```latex
\begin{frame}{Two Columns}
  \begin{columns}
    \column{0.5\textwidth}
    Left column content

    \column{0.5\textwidth}
    Right column content
  \end{columns}
\end{frame}
```

## 2.8 Overlays
Overlays reveal content in stages:
```latex
\begin{frame}{Step by Step}
  \begin{itemize}
    \item<1-> First point
    \item<2-> Second point
    \item<3-> Third point
  \end{itemize}
\end{frame}
```

The `\pause` command can also reveal later content on a subsequent overlay.

## 2.9 What I learned
Beamer allows presentations to be written as LaTeX source. Frames organise slides, themes control appearance, and overlays help reveal information progressively.

## Source material
Based on the Beamer section in the uploaded LaTeX environments lecture. The uploaded notes show the `beamer` document class and a `frame` example.
