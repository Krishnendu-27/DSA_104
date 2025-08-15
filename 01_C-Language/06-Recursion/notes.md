# Recursion — C Examples & Notes

> Cleaned, Obsidian-ready notes for recursion examples in C. This document merges each function's implementation with its explanation so you can read code + notes together.

---

## 1) Factorial (recursive)

**What it does**

- Computes `n!` using recursion: `fact(n) = n * fact(n-1)`.
    
- Requires a base case to stop recursion.
    
- ![[image1.png]]
```c
// Factorial (recursive)
long long fact(int n) {
    if (n <= 1) return 1;        // base case
    return (long long)n * fact(n - 1);
}
```

**Notes**

- Base case: `n <= 1` returns `1`.
    
- Uses `long long` to reduce overflow risk for moderately large `n`.
    
- Dry-run: `fact(4)` → `4 * 3 * 2 * 1 = 24`.
    

---

## 2) Greet n times (recursive)

**What it does**

- Prints "Good Morning" `n` times using recursion.
    

```c
// Greet n times (recursive)
void greet(int n) {
    if (n <= 0) return;          // base case
    printf("Good Morning
");
    greet(n - 1);
}
```

**Notes**

- Simple example to show recursion with side-effects (I/O).
    
- Prints in top-down order: the first call prints first.
    

---

## 3) Print n→1 (recursive)

**What it does**

- Prints numbers from `n` down to `1` using recursion.
    

```c
// Print n to 1 (recursive)
void print_n_to_1(int n) {
    if (n <= 0) return;
    printf("%d
", n);
    print_n_to_1(n - 1);
}
```

**Notes**

- Execution order: current value prints before the recursive call, producing descending order.
    
- Contrast with the alternate version (see Dry Code) where the recursive call happens first to achieve ascending order.
    

---

## 4) Print 1→n (recursive)

**What it does**

- Prints numbers from `first` to `last` using recursion.
    

```c
// Print 1 to n (recursive)
void print_1_to_n(int first, int last) {
    if (first > last) return;
    printf("%d
", first);
    print_1_to_n(first + 1, last);
}
```

**Notes**

- Tail-recursive style: last action is the recursive call (some compilers can optimize tail recursion).
    
- image
	- ![[Pasted image 20250813181335.png]]

---

## 5) Sum of 1..n without a loop (tail-recursive style)

**What it does**

- Computes the sum `1 + 2 + ... + n` using an accumulator parameter to avoid extra work after returning.
    

```c
// Sum of 1..n without loop (tail-recursive)
int sum_of_n(int n, int acc) {
    if (n <= 0) return acc;      // when n reaches 0, accumulated sum is the answer
    return sum_of_n(n - 1, acc + n);
}
```

**Notes**

- Call `sum_of_n(5, 0)` to compute 15.
    
- This is tail-recursive: the recursive call is the last action, so it's suitable for tail-call optimization where available.
    
- You originally noted subtle behavior about the timing of `acc + n` — the expression is evaluated before making the recursive call, and the next invocation receives the updated accumulator.
    

---

## 6) Fibonacci (naive recursive)

**What it does**

- Computes the `n`th Fibonacci number using the recurrence `fibo(n) = fibo(n-1) + fibo(n-2)`.
    

```c
// Fibonacci (naive recursive)
int fibo(int n) {
    if (n <= 1) return n;        // fibo(0)=0, fibo(1)=1
    return fibo(n - 1) + fibo(n - 2);
}
```

**Notes**

- Naive recursion is exponential (many repeated subcalls).
    
- For `n >= 40` this becomes very slow; use memoization or DP for efficiency.
    
- Your dry-run example for `fibo(5)` is preserved in the Illustrative section below.
    

---

## 7) Staircase paths (steps of 1 or 2)

**What it does**

- Counts how many ways to climb `n` steps if you can take 1 or 2 steps at a time.
    

```c
// Staircase paths (steps of 1 or 2)
int stair_path_double(int n) {
    if (n == 0) return 1;        // one way to stand still
    if (n < 0) return 0;         // no way
    return stair_path_double(n - 1) + stair_path_double(n - 2);
}
```

**Notes**

- This recurrence is identical to Fibonacci in structure.
    
- Use DP to avoid exponential blow-up for larger `n`.
    

---

## 8) Staircase paths (steps of 1, 2 or 3)

**What it does**

- Counts ways to climb `n` steps when allowed 1, 2, or 3 step moves.
    

```c
// Staircase paths (steps of 1, 2 or 3)
int stair_path_triple(int n) {
    if (n == 0) return 1;
    if (n < 0) return 0;
    return stair_path_triple(n - 1) + stair_path_triple(n - 2) + stair_path_triple(n - 3);
}
```

**Notes**

- Similar DP advice: memoize or tabulate for larger inputs.
    

---

## 9) Power using divide & conquer (fast exponentiation)

**What it does**

- Computes `num^pow` in O(log pow) time by recursive halving.
    

```c
// Power using divide & conquer (fast exponentiation)
long double power(int num, int pow) {
    if (pow == 0) return 1;
    if (pow == 1) return (long double)num;

    long double half = power(num, pow / 2);
    if (pow % 2 == 0) {
        return half * half;
    } else {
        return half * half * num;
    }
}
```

**Notes**

- For odd exponents we multiply by `num` one extra time after squaring the half result.
    
- This is a classic divide & conquer optimization vs the naive O(pow) loop.
    

---

## 10) Pre-In-Post traversal demo (recursive pattern)

**What it does**

- Demonstrates recursion order by printing pre, in, and post markers while recursing.
    

```c
// Pre-In-Post traversal demo
void pre_in_post(int n) {
    if (n == 0) return;
    printf("pre %d
", n);
    pre_in_post(n - 1);
    printf("in %d
", n);
    pre_in_post(n - 1);
    printf("post %d
", n);
}
```

**Notes**

- Useful to visualize call stack and ordering; the included images in your vault illustrate this well.
    
- in tree data structure 
	- ![[Pasted image 20250815112721.png]]
---

## Combined runnable example (main)

- You can keep the helper functions modular (as above). This `main` demonstrates calling them; keep it in a separate file or at the bottom of the same file depending on your project style.
    

```c
int main() {
    printf("factorial(5) = %lld
", fact(5));

    printf("greet 3 times:
");
    greet(3);

    printf("print_n_to_1(5):
");
    print_n_to_1(5);

    printf("print_1_to_n(1,5):
");
    print_1_to_n(1, 5);

    printf("sum_of_n(5) = %d
", sum_of_n(5, 0));

    printf("fibo(10) = %d
", fibo(10));

    printf("stair_path_double(5) = %d
", stair_path_double(5));
    printf("stair_path_triple(5) = %d
", stair_path_triple(5));

    printf("power(2,5) = %Lf
", power(2, 5));

    pre_in_post(2);

    return 0;
}
```

---

## Illustrative dry-run examples (call tree)

### Factorial of 4 (recursive expansion)

```
fact(4)
 -> 4 * fact(3)
    -> 3 * fact(2)
       -> 2 * fact(1)
          -> 1
 => 2 * 1 = 2
 => 3 * 2 = 6
 => 4 * 6 = 24
```

### Fibonacci(5) call tree (dry-run)

```
fibo(5)
 -> fibo(4)
    -> fibo(3)
       -> fibo(2) = 1
       -> fibo(1) = 1
    -> fibo(2) = 1
 -> fibo(3)
    -> fibo(2) = 1
    -> fibo(1) = 1
```

(You included diagrams — keep them in your vault: ``, ``, )

---

## Common pitfalls & tips

- Ensure **base cases** are correct to avoid infinite recursion.
    
- For functions with overlapping subproblems (like Fibonacci), prefer **memoization** or **tabulation**.
    
- Be mindful of stack depth — recursion depth is limited by available stack memory.
    
- When possible and clearer, convert to iterative solutions or use tail recursion (if your compiler optimizes it).
    

---
