# CSE102 Introduction to Programming - Assignments

This repository contains university programming assignments and algorithmic solutions implemented in the C programming language during the Spring 2026 semester at Aydın Adnan Menderes University.

## 📂 Assignment 1: Core Algorithms & Structured Logic
All tasks are organized under the `Assignment-1` directory and focus on recursive structures, nested loops, conditional branches, and custom mathematical sorting logic.

### Covered Tasks & Concepts:
- **`pattern_hollow_cross_box.c` (Task 1 - Figure 1):** Generates a solid 11x11 square boundary containing an inner hollow "X" shape using precise coordinate mapping inside nested loops.
- **`pattern_split_triangles.c` (Task 1 - Figure 2):** Renders asymmetric split triangle structures leveraging stateful loop counters.
- **`pattern_inverted_pyramid.c` (Task 1 - Figure 3):** Renders a classic structural inverted pyramid layout based on blank spacing counters.
- **`number_matrix_rotation.c` (Task 2):** Takes a positive integer `n` and prints an `n x n` matrix with a single-position left-shift rotation rule on each consecutive line.
- **`prime_number_array_filter.c` (Task 3):** Evaluates an array of 10 user-provided integers to identify, print, and count prime numbers efficiently.
- **`blood_pressure_switch_case.c` (Task 4):** Prompts the user for a systolic blood pressure value and dynamically categorizes it using the `switch-case` range evaluation logic (`case low ... high:`).
- **`number_consecutive_compressor.c` (Task 5):** Processes a positive integer dynamically through mathematical loop iterations to strip away consecutive repeating digits while strictly preserving the original non-repeating digit sequence.

## 🛠️ Requirements & Compilation
To compile and run any of the `.c` scripts locally, utilize any standard C compiler (e.g., GCC, Clang) or IDEs like Dev-C++:

```bash
gcc filename.c -o output_name
./output_name
