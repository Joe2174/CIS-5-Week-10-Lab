# Lab 10 · Mutate via reference

**Week 10 · References & pointers**  
**Theme:** A nickname, or an address  
**Type:** Lesson week


## Demo video (required)

Paste a link to a short video of you running this assignment (tool + code + run).
Work without a working video link is incomplete.

The video is half the grade. Show `x` and `y` before and after the swap, explain why the `&` lets `swap_values` change `main`'s variables, then show the pointer read.

**Your demo:** https://drive.google.com/drive/folders/1N62AFJYA8rzJyPQyfFl9ido2PISL0GjP?usp=sharing


## Scenario

Pass by value copies the argument. Pass by reference lets the function edit the original variable. A pointer stores that variable’s address.

## Goals

- A function that edits through `int&` (swap, or normalize a score)
- Print before and after in `main` — the caller’s box changed
- One pointer read: `int* p = &x;` then print `*p`
- No `new` / `delete`
- Push + short demo + Canvas

## Starter

Use `main.cpp`. Put your name in the file-top comment. `swap_values` is sketched.

## Environment

VS 2022 · **GitHub Codespaces** · Replit · library machines

## Procedure

1. Finish `swap_values` with a temp
2. Call it. Print `x` and `y` after — they should have traded
3. Point `p` at `x`. Print `*p`
4. Optional: comment out the `&` in the parameters, rebuild, watch swap fail
5. Commit, push, short demo, Canvas

## Sample output

```
Before: 3 7
After: 7 3
x via pointer: 7
```

## Definition of done

- Reference mutation proven
- Pointer read (not ownership)
- Repo + short demo + Canvas

## Rubric (100)

| Criterion | Pts |
|-----------|----:|
| Code submitted that does the work | 50 |
| Video explanation | 50 |

## Scope fence

Stack boxes only. No `new` / `delete`. No pointer arithmetic.

## Tips

- `int& r = x` — `r` is `x`
- `&x` is the address. `*p` follows it
- If swap takes `int a, int b`, nothing changes in `main`

## Help (`/ring`)

After a real try, include: goal · what you tried · exact error · screenshot/repo · OS + tool.

## Getting started

1. Fork this repo on GitHub.
2. Clone your fork.
3. Compile and run:

```bash
g++ -std=c++17 -o program main.cpp && ./program
```

On Windows (Visual Studio), open `main.cpp` and use **Local Windows Debugger**.
4. Record a short demo that shows your tool, your code, and a real run.
5. Paste the video link in the **Demo video** section above.
6. Submit your fork URL on Canvas.
