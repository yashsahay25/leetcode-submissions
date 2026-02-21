# LeetCode Submissions Archive

This repository is a personal archive of my accepted LeetCode submissions.
It is synced with [`glsync`](https://github.com/ahmed-e-abdulaziz/glsync) and keeps
the latest successful submission for each problem while preserving the original
submission timestamps.

## What this repository contains

- One folder per LeetCode problem.
- In each folder, the main accepted solution file (mostly C++).
- Commit history aligned with actual solve dates to reflect progression over time.

Current snapshot:

- **323** problem folders
- **321** C++ solution files (`.cpp`)
- **2** SQL solution files (`.sql`)

## Naming convention

Folders follow this pattern:

```text
<problem_number> <problem_title>/
```

Examples:

- `1 Two Sum/`
- `102 Binary Tree Level Order Traversal/`
- `176 Second Highest Salary/`

Files are named as:

```text
<problem_number><kebab-case-title>.<ext>
```

Examples:

- `1two-sum.cpp`
- `102binary-tree-level-order-traversal.cpp`
- `176second-highest-salary.sql`

## Why this repo exists

- Track long-term consistency and learning pace.
- Keep solutions easy to browse by problem number/title.
- Preserve a chronological record of solved problems.
- Provide a searchable personal reference for common patterns (DP, graphs, trees, etc.).

## How to navigate quickly

- Browse folders directly in numeric order.
- Use search to find topics or patterns:

```bash
rg "unordered_map|two pointers|dfs|dp" -g "*.cpp"
```

- Open a specific problem quickly:

```bash
cd "79 Word Search"
```

## Notes

- This is an archive of accepted submissions, not a polished library package.
- Solutions may vary in style because they reflect original submission context and date.
- For each problem, only the latest accepted submission is stored.
