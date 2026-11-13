# 5. Git and GitHub

## What I learned

Git is a distributed version-control system used to track changes in files. GitHub is an online platform for hosting Git repositories and collaborating on projects. I learned how a local project can be tracked with Git and then shared through a remote GitHub repository.

## 5.1 Configuring Git

Git records a name and email address as the author information for commits.

```bash
git config --global user.name "Your Name"
git config --global user.email "you@example.com"
git config --global --list
```

These settings identify the commit author and are separate from GitHub sign-in authentication.

## 5.2 Creating a repository

A new repository can be created from a project folder using:

```bash
mkdir my-project
cd my-project
git init
```

I learned that `git init` creates the repository metadata needed for Git to track the folder.

## 5.3 Basic Git workflow

The basic workflow I practised is **edit → stage → commit → push**.

```bash
git status
git add .
git commit -m "Add project files"
git push
```

- `git status` shows the current state of the working tree.
- `git add` stages changes for the next commit.
- `git commit` records the staged changes.
- `git push` uploads local commits to a configured remote repository.

## 5.4 Viewing changes

I learned to inspect changes before committing them:

```bash
git diff
git diff --staged
git diff HEAD
```

These commands show unstaged changes, staged changes, and the overall difference from the current commit (`HEAD`).

## 5.5 Connecting to GitHub

After creating an empty repository on GitHub, the local repository can be connected to it. The remote URL must be replaced with the URL copied from the actual GitHub repository.

```bash
git remote add origin REPOSITORY_URL
git remote -v
git branch -M main
git push -u origin main
```

## 5.6 Clone, fetch, and pull

I learned that these commands are used to work with remote repositories:

```bash
git clone REPOSITORY_URL
git fetch origin
git pull origin main
```

`git clone` creates a local copy of a remote repository. `git fetch` downloads remote updates without integrating them into the current branch. `git pull` fetches and integrates updates into the current branch.

## 5.7 Branching and merging

Branches allow work to be developed separately from the main line of development.

```bash
git branch
git switch -c feature
git switch main
git merge feature
```

I learned how to list branches, create and switch to a branch, return to `main`, and merge completed work.

## 5.8 Merge conflicts, rebase, and revert

A merge conflict occurs when Git cannot automatically combine changes. The conflicting file must be reviewed, edited to keep the intended content, and staged after the conflict markers are removed.

Merge combines branch histories. Rebase replays commits on a new base and changes commit identities, so it should be used carefully when commits are shared.

```bash
git log --oneline
git revert COMMIT_ID
```

I learned that `git revert` creates a new commit that reverses the changes introduced by an earlier commit.

## 5.9 Pull request workflow

A common collaboration workflow is to create a feature branch, make and commit changes, push the branch to GitHub, open a pull request, request review, and merge the approved changes.

## Examples and practice

The [`Examples/`](Examples/) folder contains a sample `.gitignore` file and a small Git workflow script. The [`GIT-COMMAND-PRACTICE.md`](GIT-COMMAND-PRACTICE.md) file provides a command checklist. Practise potentially destructive commands only in a test repository.

## My learning outcome

I learned how to initialise and configure a repository, track and inspect changes, stage and commit files, connect a local project to GitHub, push and pull updates, clone repositories, create branches, merge work, resolve conflicts, revert commits, and understand pull requests.

## Source material

Based on the Technical Writing lecture, *Git and GitHub* (October 12, 2026).
