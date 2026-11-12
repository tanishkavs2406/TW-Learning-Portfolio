# 5. Git and GitHub

## 5.1 Version control
Version control records changes to files over time so earlier versions can be inspected, compared, and recovered. It helps track modifications, identify who made a change and when, restore earlier versions, and support multiple contributors.

## 5.2 Git vs GitHub
- **Git** is a distributed version control system used to track changes locally.
- **GitHub** is a hosting platform for Git repositories and collaboration.

## 5.3 Git architecture
- Working directory: files currently being edited.
- Staging area: selected changes prepared for a commit.
- Local repository: committed project history.
- Remote repository: shared repository hosted on a service such as GitHub.

## 5.4 Initial configuration
```bash
git config --global user.name "Your Name"
git config --global user.email "you@example.com"
git config --global --list
```
These values identify the author of commits; they do not authenticate you to GitHub.

## 5.5 Create a repository
```bash
mkdir my-project
cd my-project
git init
```

## 5.6 Basic workflow
```bash
git status
git add .
git status
git commit -m "Add initial files"
git log --oneline
```
The workflow is: edit files → stage changes → commit changes → push to GitHub.

## 5.7 Inspect changes and history
```bash
git status
git diff
git diff --staged
git diff HEAD
git log
git log --oneline
git show
```
- `git diff` shows unstaged changes.
- `git diff --staged` shows staged changes.
- `git diff HEAD` compares tracked changes with the current commit.
- `git log` displays commit history.

## 5.8 Branches
Branches allow work to be developed separately.
```bash
git branch
git branch feature-login
git switch feature-login
git switch main
git branch -d feature-login
```

## 5.9 Merge
To merge a feature branch into main:
```bash
git switch main
git merge feature-login
```
Merge combines branch histories and may create a merge commit.

## 5.10 Merge conflicts
A conflict occurs when Git cannot automatically combine competing changes. Git may mark the conflicting region:
```text
<<<<<<< HEAD
version from current branch
=======
version from other branch
>>>>>>> feature-branch
```
Resolve the file manually, remove the markers, then stage and complete the merge:
```bash
git add filename
git commit
```

## 5.11 Remotes and GitHub
```bash
git remote add origin REPOSITORY_URL
git remote -v
git push -u origin main
```
A remote connects the local repository to a hosted repository. `origin` is a conventional remote name.

## 5.12 Clone, fetch, and pull
```bash
git clone REPOSITORY_URL
git fetch origin
git pull
```
- `clone` downloads a repository and its history.
- `fetch` downloads remote updates without integrating them into the current branch.
- `pull` fetches and integrates updates into the current branch.

## 5.13 Push a branch
```bash
git switch -c feature-subtraction
git add .
git commit -m "Add subtraction feature"
git push -u origin feature-subtraction
```
Then open GitHub, create a pull request, review the changes, and merge it. Afterwards:
```bash
git switch main
git pull origin main
```

## 5.14 Revert a commit
```bash
git log --oneline
git revert COMMIT_ID
```
`git revert` creates a new commit that reverses the changes introduced by an earlier commit while preserving existing history.

## 5.15 Merge vs rebase
```bash
git switch main
git merge feature
```
or
```bash
git switch feature
git rebase main
```
Merge combines branch histories. Rebase replays commits on a new base and rewrites commit identities. Avoid rebasing shared commits unless the team understands the consequences.

## 5.16 Common errors
| Problem | Possible response |
|---|---|
| Untracked files | Stage required files using `git add` |
| Push rejected | Fetch remote changes and integrate them |
| Merge conflict | Resolve the conflicting file and complete the merge |
| Wrong branch | Check using `git branch` |
| Nothing to commit | Inspect `git status` |
| Authentication failed | Check credentials and repository permissions |

## 5.17 What I learned
Git tracks project history, while GitHub hosts repositories and supports collaboration. Branches and pull requests help contributors work on features separately and review changes before merging.

## Source material
Based on the uploaded *Version Control Tools: Git and GitHub* lecture (76 slides, October 12, 2026).
