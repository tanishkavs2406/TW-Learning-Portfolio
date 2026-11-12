# 5. Git and GitHub

## 5.1 Introduction

Git is a distributed version-control system used to track changes in files and coordinate work. GitHub is an online platform for hosting Git repositories and collaborating on projects.

## 5.2 Configure Git

Set the name and email that Git records in commits:

```bash
git config --global user.name "Your Name"
git config --global user.email "you@example.com"
git config --global --list
```

These settings identify the commit author. They are separate from GitHub sign-in authentication.

## 5.3 Create a Repository

```bash
mkdir my-project
cd my-project
git init
```

`git init` initialises a Git repository in the current folder.

## 5.4 Basic Git Workflow

The common workflow is:

**Edit → Stage → Commit → Push**

```bash
git status
git add .
git commit -m "Add project files"
git push
```

- `git status` displays the current repository state.
- `git add .` stages changes in the current directory.
- `git commit -m "message"` records staged changes.
- `git push` uploads local commits to a configured remote.

## 5.5 View Changes

```bash
git diff
git diff --staged
git diff HEAD
```

These commands show unstaged changes, staged changes, and the overall difference from `HEAD`, respectively.

## 5.6 Connect to GitHub

Create an empty repository on GitHub, then connect the local repository:

```bash
git remote add origin REPOSITORY_URL
git remote -v
git branch -M main
git push -u origin main
```

Replace `REPOSITORY_URL` with the URL copied from the GitHub repository.

## 5.7 Clone, Fetch, and Pull

```bash
git clone REPOSITORY_URL
git fetch origin
git pull origin main
```

- `git clone` creates a local copy of a remote repository.
- `git fetch` downloads remote updates without integrating them into the current branch.
- `git pull` fetches and integrates updates into the current branch.

## 5.8 Branching

Branches allow work to be developed separately.

```bash
git branch
git switch -c feature
git switch main
```

To merge a feature branch into `main`:

```bash
git switch main
git merge feature
```

## 5.9 Merge Conflicts

A merge conflict occurs when Git cannot automatically combine changes. Open the conflicted file, decide which content should remain, remove conflict markers, save the file, then stage and commit the resolution.

## 5.10 Merge and Rebase

Merge combines branch histories and may create a merge commit:

```bash
git switch main
git merge feature
```

Rebase replays commits on a new base:

```bash
git switch feature
git rebase main
```

Rebase rewrites commit identities. Avoid rebasing shared commits unless the team understands the consequences.

## 5.11 Reverting a Commit

Inspect commit history and revert a selected commit:

```bash
git log --oneline
git revert COMMIT_ID
```

`git revert` creates a new commit that reverses the changes introduced by the selected commit.

## 5.12 Pull Request Workflow

A typical collaborative workflow is:

1. Create or clone a repository.
2. Create a branch for a new feature.
3. Modify files and test the changes.
4. Stage and commit the changes.
5. Push the branch to GitHub.
6. Open a pull request and request review.
7. Merge the approved changes.

## 5.13 Examples

The [`Examples/`](Examples/) folder contains a Git command practice script and a sample `.gitignore` file. Run the commands in a test repository rather than experimenting on important project files.

## 5.14 What I Learned

I learned how to initialise repositories, track file changes, stage and commit work, connect a local repository to GitHub, push and pull updates, create branches, merge changes, and understand collaboration through pull requests.

## Source Material

Based on the Technical Writing lecture on Git and GitHub (October 12, 2026).
