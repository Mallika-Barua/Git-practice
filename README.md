# Git Assignment – My Work

## Repository Overview
In this repository I practiced different Git commands starting from basic to advanced level.  
I have tried branching, merging, rebase, squash, cherry-pick, revert, reset and stash.


## 1. Repository Setup
- Created a new repository on GitHub named **Git-practice**
- Cloned it into my local system


## 2. Initial Commit
- Created file: `basic_program.cpp`
- Wrote a simple **Hello World** program
- Did the initial commit


## 3. Branching and Merging
- Created a new branch called `feature-branch`
- Added a program to calculate factorial of a number
- Committed the changes
- Merged `feature-branch` into `main`
- Resolved conflicts if any


## 4. Rebasing
- Created another branch `experimental-branch`
- Added a Fibonacci sequence program
- Rebasing the branch onto `main`
- Used **interactive rebase** to squash commits and keep history clean


## 5. Advanced Git Tasks

### A. Cherry-pick
- Selected an important commit from `feature-branch`
- Cherry-picked it into `main`
- Along with that, added a new program to find the **Nth Prime Number**

### B. Revert Changes
- Reverted a commit that introduced an error
- Restored the correct version of the program
- Later created an intentional faulty commit (wrong Fibonacci)

### C. Reset
- Practiced three types of reset:
  - `git reset --soft`
  - `git reset --mixed`
  - `git reset --hard`
- Wrote down the differences between them

### D. Squash Commits
- Squashed multiple commits into a single commit
- This makes the commit history easier to read and more organized


## 6. Deleting Files
- Planned to delete `basic_program.cpp`
- This step was optional and left incomplete due to time


## 7. Stashing Changes
- Made some temporary changes in the program
- Used commands:
  ```bash
  git stash save "Temporary changes"
  git stash list
  git stash apply stash@{0}
