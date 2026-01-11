# Consecutive Even Pair Detector

This project implements a pattern recognition algorithm in C designed to analyze integer arrays. It focuses on identifying **Adjacency Correlations** based on number parity (Specifically: Even-Even pairs).

## ⚙️ Algorithm Logic

The algorithm processes a sequence $S = \{x_0, x_1, \dots, x_n\}$ and searches for indices $i$ such that:

$$x_i \equiv 0 \pmod 2 \quad \text{AND} \quad x_{i+1} \equiv 0 \pmod 2$$

### Operational Flow:
1.  **Dataset Initialization:** Loads the integer sequence.
2.  **Linear Traversal:** Iterates through the array from index $0$ to $n-1$.
3.  **Contextual Check:** Evaluates the current element ($i$) against its immediate successor ($i+1$).
4.  **Aggregation:**
    * If the condition is met, the pair is logged.
    * A counter increments to track the frequency of occurrences.

### Example Analysis
**Input:** `{... 20, 60, 45, 42, 23, 24, 26 ...}`

* Check `20, 60`: Both Even -> **Match** ✅
* Check `60, 45`: Even, Odd -> No Match ❌
* Check `24, 26`: Both Even -> **Match** ✅

## 🚀 Usage

1.  Compile the code:
    ```bash
    gcc main.c -o pair_detector
    ```
2.  Run the executable:
    ```bash
    ./pair_detector
    ```
3.  **Output:** Displays the identified pairs and the total count.

---
*This repository demonstrates array traversal and neighbor-checking logic in C.*
