# Odd or Even

## Problem Statement

You're given a positive integer `n`.

Your task is to determine whether the number is even or odd.

Return:

- `true` → if `n` is even
- `false` → if `n` is odd

---

## How to Determine Odd or Even

A number is even if it is divisible by 2 (i.e., `n % 2 == 0`).

If it is not divisible by 2, it's odd.

---

## Input

A single integer `n`.

## Output

A boolean value:

- `true` → even
- `false` → odd

---

## Examples

### Example 1

**Input**

```yaml
15
```

**Output**

```yaml
false
```

**Explanation**

15 is not divisible by 2 → it is odd.

---

### Example 2

**Input**

```yaml
44
```

**Output**

```yaml
true
```

**Explanation**

44 is divisible by 2 → it is even.

---

## Constraints

```yaml
1 ≤ n ≤ 10^4
```

---