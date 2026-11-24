# Practice 13 · Word tools and a final model

**Week 13 · Strings and structs**  
**Theme:** Text is data, then the struct your final needs  
**Due:** Monday night. This assignment is not due Sunday.


## Demo video (required)

Paste a link to a short video of you running this assignment (tool + code + run).
Work without a working video link is incomplete.

The video is half the grade. Run both programs, then explain why each helper takes `const &` and what your struct's fields hold.

**Your demo:** _https://youtu.be/z04zZ6cnaHY

## What to build

Two small programs.

**Part 1 · Word tools** (`main.cpp`). Two string helpers. Both take `const std::string&`.

| Function | Job |
|----------|-----|
| `std::string banner(const std::string& name)` | Return `"Hello, " + name + "!"` |
| `std::string initials(const std::string& first, const std::string& last)` | Return the first letter of each word. Check `size()` before reading index 0 |

**Part 2 · Final model** (`model.cpp`). Pick a track for the final project. Write the struct it needs and a print helper.

| Track | Example struct |
|-------|----------------|
| Student Records | `Student { name, id, gpa }` |
| Text Adventure / Quiz | `Question { prompt, answer, points }` |
| Personal Budget | `Expense { category, amount }` |
| Mini Bank | `Account { name, balance }` |

## Requirements

- Use the two Part 1 signatures above exactly
- `initials` uses `size()` in a real check, so an empty word does not crash
- Part 2: one `struct` with at least two fields, a print helper that takes `const T&`, and two records made with braces
- README: the Part 1 sample run, then your proposal: the track, the struct and its fields, and three features you will build in week 14
- No `char[]` needed

## Sample session

Part 1:

```
First: Sam
Last: Lee
Hello, Sam Lee!
Length: 7
Initials: SL
```

Part 2 (Mini Bank example):

```
Ada 50.25
Ben 120.5
```

Proposal (Mini Bank example):

```
Track: Mini Bank
Struct: Account { name, balance }
Features: list accounts, deposit, withdraw with a balance check
```

## Starter

`main.cpp` has the two Part 1 signatures and a `main` that reads the names. `model.cpp` has a sample `Account` struct to rename for your track. Put your name in both file-top comments.

## Environment

VS 2022 · **GitHub Codespaces** · Replit · library machines

## Deliverables

1. Course-visible GitHub repo
2. README with the Part 1 run and the proposal
3. Short demo video of both programs running
4. Canvas links

## Scope fence

No classes or inheritance. No GUI. Part 2 is a sketch, not the final. The final build is week 14. Demo day is week 16.

## Integrity

- AI = tutor, not ghostwriter
- Fake ownership → zero
- Due: Monday night (not Sunday)
- Discussions (every week): first post Friday, replies Sunday
- Late: course policy (−10%/day unless stated otherwise)

## Rubric (100)

| Criterion | Pts |
|-----------|----:|
| Code submitted that does the work | 50 |
| Video explanation | 50 |


## Getting started

1. Fork this repo on GitHub.
2. Clone your fork.
3. Compile and run:

```bash
g++ -std=c++17 -o words main.cpp && ./words
g++ -std=c++17 -o model model.cpp && ./model
```
## part 1 run
PS C:\Users\rinco\new ci5\CIS-5-Week-13-Homework> ./words
First: neoe
Last: zuniga
Hello, neoe zuniga!
Length: 11
Initials: nz

On Windows (Visual Studio), open the `.cpp` file and use **Local Windows Debugger**.
4. Record a short demo that shows your tool, your code, and a real run.
5. Paste the video link in the **Demo video** section above.
6. Submit your fork URL on Canvas.
