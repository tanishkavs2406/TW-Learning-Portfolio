# Git Command Practice

Use a test folder to practise these commands. Replace example names and URLs with your own values.

## 1. Configure Git

```bash
git config --global user.name "Your Name"
git config --global user.email "you@example.com"
git config --global --list
```

## 2. Initialise a Repository

```bash
mkdir git-practice
cd git-practice
git init
```

## 3. Check, Stage, and Commit

```bash
git status
git add .
git diff --staged
git commit -m "Initial commit"
git log --oneline
```

## 4. Connect a Remote

```bash
git remote add origin REPOSITORY_URL
git remote -v
git branch -M main
git push -u origin main
```

## 5. Work with Remote Changes

```bash
git fetch origin
git pull origin main
git push
```

## 6. Branches and Merge

```bash
git branch
git switch -c feature
git switch main
git merge feature
```

## 7. Revert

```bash
git log --oneline
git revert COMMIT_ID
```

## Caution

Commands that rewrite history or discard changes can affect work. Understand the effect before using them on a shared or important repository.
