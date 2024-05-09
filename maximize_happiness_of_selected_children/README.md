# Maximize Happiness of Selected Children

## Problem Statement

Given an array `happiness` representing the happiness values of `n` children standing in a queue, and a positive integer `k`, the task is to select `k` children from these `n` children in `k` turns to maximize the sum of the happiness values of the selected children.

In each turn, when a child is selected, the happiness value of all children that have not been selected decreases by 1, with the constraint that a happiness value cannot become negative.

## Objective

Return the maximum sum of the happiness values of the selected children.

## Examples

### Example 1:
- **Input:** `happiness = [1, 2, 3]`, `k = 2`
- **Output:** `4`
- **Explanation:**
  - Pick the child with happiness value `3`. Remaining children's happiness values become `[0, 1]`.
  - Pick the child with happiness value `1`. Remaining child's happiness value becomes `[0]`.
  - Total happiness sum is `3 + 1 = 4`.

### Example 2:
- **Input:** `happiness = [1, 1, 1, 1]`, `k = 2`
- **Output:** `1`
- **Explanation:**
  - Pick any child with happiness value `1`. Remaining children's happiness values become `[0, 0, 0]`.
  - Pick a child with happiness value `0`. Remaining children's happiness values stay `[0, 0]`.
  - Total happiness sum is `1 + 0 = 1`.

### Example 3:
- **Input:** `happiness = [2, 3, 4, 5]`, `k = 1`
- **Output:** `5`
- **Explanation:**
  - Pick the child with happiness value `5`. Remaining children's happiness values become `[1, 2, 3]`.
  - Total happiness sum is `5`.
