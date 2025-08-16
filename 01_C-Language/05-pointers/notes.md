# Pointers in C — Notes & Examples

> Polished, Obsidian-ready documentation that merges code with explanations. Each code snippet is followed by notes and best-practices so you can copy them into your vault.

---

## Overview — What are pointers?

* **Pointers** are variables that store memory addresses of other variables.
* Pointers enable low-level memory access, efficient parameter passing, dynamic memory, and implementation of data structures (linked lists, trees, etc.).
* Two core operators used with pointers:

  * **Address-of**: `&` — yields the address of a variable.
  * **Dereference**: `*` — accesses the value stored at a pointer's address.

---

## 1) Basic pointer usage (declaration, initialization, dereference)

```c
#include <stdio.h>

void example_basic() {
    int x = 10;
    int *p = &x;            // p stores address of x

    printf("x = %d\n", x);
    printf("*p = %d\n", *p);         // dereference to get value
    printf("p (address of x) = %p\n", (void*)p);
    printf("&x (address) = %p\n", (void*)&x);
}
```

**Notes**

* Declaration: `type *ptr;` — the `*` here denotes pointer type.
* Initialization: `ptr = &var;` — store address of a same-typed variable.
* Dereference: `*ptr` reads/writes the value at the stored address.
* Use `%p` and cast to `(void*)` when printing addresses to be portable.

---

## 2) Pointer size (architecture dependent)

```c
#include <stdio.h>

void pointer_sizes() {
    int *pi;
    char *pc;
    double *pd;
    printf("sizeof(int*) = %zu\n", sizeof(pi));
    printf("sizeof(char*) = %zu\n", sizeof(pc));
    printf("sizeof(double*) = %zu\n", sizeof(pd));
}
```

**Notes**

* All data pointers typically have the same size on a given architecture (e.g., 8 bytes on 64-bit systems).
* `sizeof(pointer)` returns the size in bytes of the pointer itself, not the pointed-to type.

---

## 3) Pass by value vs pass by reference (using pointers)

**Pass by value** — the function receives a copy:

```c
void increment(int n) {
    n = n + 5; // modifies local copy only
}
```

**Pass by reference** — pass address and modify original value:

```c
void increment4(int *n) {
    *n = *n + 4; // modifies the caller's variable
}
```

**Caller example**

```c
int main() {
    int a = 5;
    increment(a);   // a remains 5
    increment4(&a); // a becomes 9
}
```

**Notes**

* C does not have references like C++; pointers are the standard way to allow functions to modify caller variables.
* Always ensure pointer arguments are valid (non-NULL) before dereferencing.

---

## 4) Pointer arithmetic (the 5 core operations)

**a) Increment / Decrement**

* `ptr++` advances to the next element of the pointed type (adds `sizeof(type)`).

```c
int a = 22;
int *p = &a;
printf("p = %p\n", (void*)p);
p++;
printf("p after ++ = %p\n", (void*)p); // moved by sizeof(int)

char c = 'a';
char *r = &c;
printf("r = %p\n", (void*)r);
r++;
printf("r after ++ = %p\n", (void*)r); // moved by sizeof(char) (1)
```

**b) Add/Subtract an integer**

* `ptr + k` moves `k` elements forward: `new_address = old + k * sizeof(type)`.

**c) Subtract two pointers**

* `ptr1 - ptr2` yields number of elements between them (only valid if both point into same array/object).

**d) Compare pointers**

* Use `==`, `!=`, `<`, `>`, `<=`, `>=` to compare addresses (useful for range checks inside arrays).

**Notes**

* You cannot meaningfully add two pointers.
* Pointer arithmetic is defined only within arrays or one-past-the-end — moving beyond that is undefined behavior.

---

## 5) Arrays and pointers (relationship)

```c
#include <stdio.h>

void traverse_with_pointers() {
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr; // arr decays to &arr[0]
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i)); // equivalent to arr[i]
    }
    printf("\n");
}
```

**Notes**

* Array name `arr` decays to pointer to first element when used in expressions/functions.
* You can use pointer arithmetic `*(arr + i)` instead of `arr[i]`.

---

## 6) 2D arrays via pointer arithmetic

```c
#include <stdio.h>

void print2D(int *arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *((arr + i * cols) + j));
        }
        printf("\n");
    }
}

// Call: int arr[][2] = {{1,2},{3,4},{5,6}}; print2D((int*)arr, 3, 2);
```

**Notes**

* Flattening a 2D array to a 1D pointer requires computing row offsets: `i*cols + j`.

---

## 7) Pointer subtraction example

```c
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40};
    int *p1 = &arr[3];
    int *p2 = &arr[0];
    int diff = p1 - p2; // diff == 3
    printf("Elements between p1 and p2: %d\n", diff);
    return 0;
}
```

**Notes**

* Result is number of elements (not bytes) because pointer arithmetic scales by `sizeof(type)`.

---

## 8) Common pitfalls & best practices

* **Always initialize pointers** before dereferencing.
* **Check for NULL** when pointer may be invalid.
* **Avoid out-of-bounds pointer arithmetic** — undefined behavior.
* **Prefer `size_t` for sizes** and `%zu` for `sizeof` prints.
* **Print addresses with `%p` and cast to `(void*)`** for portability.
* **Be careful mixing pointer types** — pointer arithmetic semantics differ by pointed type size.
* **When in doubt use array indexing** (`arr[i]`) for clarity unless pointer arithmetic is needed.

---

## 9) Practical examples (count even/odd using pointers)

```c
#include <stdio.h>

void count_even_odd(int *arr, int n) {
    int even = 0, odd = 0;
    int *ptr = arr;
    for (int i = 0; i < n; i++) {
        if (*(ptr + i) % 2 == 0) even++; else odd++;
    }
    printf("Even: %d, Odd: %d\n", even, odd);
}
```

---

## 10) Practical reminder about format specifiers

* Use `%p` for addresses: `printf("%p", (void*)ptr);`
* Use `%zu` for `sizeof` results.
* Avoid printing pointers as `%u` / `%d` (not portable on 64-bit).

---

## References

1. [https://www.geeksforgeeks.org/c/pointer-arithmetics-in-c-with-examples/](https://www.geeksforgeeks.org/c/pointer-arithmetics-in-c-with-examples/)

---

