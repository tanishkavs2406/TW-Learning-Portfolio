# Git command practice checklist — aligned with the TW Git slides

Practise in a **separate test folder** first. Do not experiment with destructive commands in your only copy of important work. Replace placeholders such as `YOUR_REPOSITORY_URL`, `COMMIT_ID`, and names with your own values.

## 1. Installation and verification (macOS)
```bash
brew install git
git --version
```

## 2. Configure Git identity
```bash
git config --global user.name "Your Name"
git config --global user.email "you@example.com"
git config --global --list
```
These settings identify the author of commits. They do not authenticate you to GitHub.

## 3. Create and initialize a local repository
```bash
mkdir git-practice
cd git-practice
git init
```

## 4. Create a file, check status, stage, and commit
```bash
echo "First line" > notes.txt
git status
git add notes.txt
git status
git commit -m "Add notes file"
git log
git log --oneline
```

## 5. Stage different sets of files
```bash
git add .
git add file1.py file2.py
git add *.py
```
Check before committing:
```bash
git status
git diff --staged
```

## 6. Compare changes and inspect history
```bash
git diff
git diff --staged
git diff HEAD
git show
git ls-files
```
- `git diff`: unstaged tracked changes.
- `git diff --staged`: staged changes.
- `git diff HEAD`: tracked changes relative to the current commit.
- `git ls-files`: files known to Git's index.

## 7. Ignore files
Create a `.gitignore` file and add patterns such as:
```gitignore
__pycache__/
*.pyc
.env
*.log
data/
```
Then inspect:
```bash
git status
```

## 8. Rename/move and remove tracked files
```bash
git mv old.py new.py
git rm old.py
```
Use only on files in your practice repository.

## 9. Unstage or discard edits — understand the difference
Unstage while keeping working-directory edits:
```bash
git restore --staged notes.txt
```
Discard unstaged edits to a tracked file:
```bash
git diff
git restore notes.txt
```
**Warning:** `git restore notes.txt` can discard unstaged work. Inspect and save anything important first.

## 10. Revert a commit safely
```bash
git log --oneline
git revert COMMIT_ID
```
Use a real commit ID from your own log. Revert creates a new commit that reverses an earlier commit.

## 11. Connect to GitHub and push
Create an empty repository on GitHub, then:
```bash
git branch -M main
git remote add origin YOUR_REPOSITORY_URL
git remote -v
git push -u origin main
```
`-u` sets the upstream tracking relationship.

## 12. Clone, fetch, and pull
```bash
git clone YOUR_REPOSITORY_URL
git fetch origin
git pull
```
Fetch downloads remote updates without integrating them into the current branch. Pull fetches and integrates changes.

## 13. Create, list, and switch branches
```bash
git branch
git branch feature-demo
git branch
git switch feature-demo
git switch main
git switch -c feature-new
```
`git switch -c` creates and switches to a new branch.

## 14. Merge a branch
```bash
git switch main
git merge feature-demo
```
The branch currently checked out is the target branch.

## 15. Resolve a merge conflict
If Git reports a conflict:
1. Open the marked file.
2. Choose or combine the correct changes.
3. Remove `<<<<<<<`, `=======`, and `>>>>>>>` markers.
4. Stage the resolved file.
5. Complete the merge.

```bash
git status
git add filename
git commit
```

## 16. Merge versus rebase
Merge:
```bash
git switch main
git merge feature
```
Rebase:
```bash
git switch feature
git rebase main
```
Rebase replays commits on a new base and rewrites commit identities. Avoid rebasing shared commits unless the team understands the consequences.

## 17. Tags and releases
```bash
git tag
git tag -a v1.0.0 -m "Version 1.0.0"
git show v1.0.0
git push origin v1.0.0
```

## 18. Feature branch and pull request workflow
```bash
git switch -c feature-subtraction
# Edit a project file
git add .
git commit -m "Add subtraction feature"
git push -u origin feature-subtraction
```
On GitHub, create a pull request with `main` as the base and `feature-subtraction` as the compare branch. Review and merge it. Then:
```bash
git switch main
git pull origin main
```

## 19. Mini-project workflow from the lecture
```bash
mkdir calculator
cd calculator
git init
echo 'print("Calculator")' > main.py
git status
git add main.py
git commit -m "Add initial calculator"
git log --oneline
git branch -M main
git remote add origin YOUR_REPOSITORY_URL
git push -u origin main
git switch -c feature-subtraction
git add main.py
git commit -m "Add subtraction feature"
git push -u origin feature-subtraction
git switch main
git pull origin main
```
Between the feature push and final pull, create and merge the pull request on GitHub.

## 20. Before the class demonstration
- [ ] `git --version` works.
- [ ] Git name and email are configured.
- [ ] Repository is visible on GitHub.
- [ ] README and all five topic folders are present.
- [ ] At least two meaningful commits exist.
- [ ] You can explain working directory, staging area, local repository, and remote repository.
- [ ] You can demonstrate status → add → commit → log.
- [ ] You can demonstrate a branch, switch, merge, and a pull request.
- [ ] You can explain fetch versus pull and merge versus rebase.
- [ ] You understand the warning before `git restore`.
