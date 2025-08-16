# Arrays in C — Notes & Examples

---
## Overview — Why arrays?

- Arrays store collections of **same-typed** elements in contiguous memory.
    
- Use arrays when you have many values of the same kind (marks, prices, friend IDs) and you need indexed access.
    
- Arrays give O(1) access by index because elements are stored in contiguous locations.
    

---

## 1) Reverse array traversal

**What it does**

- Prints an array from the last element to the first (useful for reversing view-only traversal).
    

```c
#include <stdio.h>

void arrayTraversalReverse(int numbers[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}
```

**Notes**\n- C arrays are 0-indexed: last index = `size - 1`.

---

## 2) Ways to declare and initialize arrays

```c
// 1. Provide size and values
int arr[5] = {1, 2, 3, 4, 5};

// 2. Provide values, let compiler infer size
int arr2[] = {1, 2, 3, 4, 5}; // size = 5

// 3. Only reserve space (local automatic array is uninitialized)
int arr3[5]; // contains indeterminate values (not guaranteed 0)

// 4. Use a constant for size (C89/C90 requires constant expression)
const int A = 5;
int arr4[A]; // allowed in many compilers; VLAs are C99 feature
```

**Notes**

- Local (automatic) arrays are **not** zero-initialized. Only static/global arrays or explicitly initialized arrays get zeros.
    
- Variable Length Arrays (VLAs) — `int n; scanf("%d", &n); int a[n];` — are supported in C99 and later (and by many compilers), but not in strict older standards.
    

---

## 3) Getting array length with `sizeof` (only for compile-time arrays)

```c
int arr5[9] = {10, 20, 20, 20, 90, 7, 5, 55, 10};
int length = sizeof(arr5) / sizeof(arr5[0]);
```

**Notes**

- `sizeof(arr5)` returns total bytes occupied by `arr5`.
    
- `sizeof(arr5) / sizeof(arr5[0])` gives the number of elements — works only when `arr5` is an actual array (not a pointer).
    

---

## 4) Count unique elements (simple O(n²) approach)

**What it does**

- Counts how many distinct values are present in an array.
    

```c
#include <stdio.h>

int count_unique(int a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        int is_new = 1;
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) { is_new = 0; break; }
        }
        if (is_new) count++;
    }
    return count;
}
```

**Notes**

- Your original loop was close; this version sets `is_new` then scans previous indices to see if the value already appeared.
    
- Complexity: O(n²). For large arrays use sorting or a hash set (not part of C standard library) to improve performance.
    

---

## 5) Average of non-negative elements (skip negatives)

**What it does**

- Sums only non-negative elements and computes average safely (handles all-negative case).
    

```c
#include <stdio.h>

int average_nonneg(int a[], int n) {
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= 0) { sum += a[i]; count++; }
    }
    if (count == 0) return 0; // or handle specially (e.g., return INT_MIN / print message)
    return sum / count; // integer average
}
```

**Notes**

- Avoid division by zero by checking `count`.
    
- Use `double` or cast to `double` if you want fractional averages.
    

---

## 6) How arrays are stored in memory (pointer arithmetic)

**Concept**

- Elements are stored contiguously. If `arr` is the base address, then `arr[i]` is at address `arr + i * sizeof(element)`.
    

**Example**

```c
int arr[4] = {50, 40, 10, 30};
// addresses (example): &arr[0] = 0x7ffeea.., &arr[1] = &arr[0] + 4, &arr[2] = &arr[0] + 8, ...
```

**Notes**

- The expression `arr + i` (pointer arithmetic) yields the address of `arr[i]`.
    
- Internally the compiler computes `*(arr + i)` as `arr[i]`.
    

(Include your diagram in the vault: `![[Pasted image 20250815134740.png]]`)

---

## 7) Indexing and address calculation

**Rule**

- `arr` (without index) decays to a pointer to the first element when passed to functions.
    
- Address formula: `address_of(arr[i]) = arr + i * sizeof(element)` (conceptually; pointer arithmetic handles the `sizeof`).
    

**Example**

```c
int arr[] = {10, 20, 30, 40};
printf("%p\n", (void*)arr);   // base address
printf("%d\n", arr[2]);      // prints 30
```

---

## 8) Out-of-bounds access — undefined behavior

- C does **not** perform bounds checking. Accessing `arr[5]` when `arr` has size 4 is undefined behaviour (could print garbage, crash, or appear to "work").
    
- Always ensure an index is in `[0, n-1]` before accessing.
    

---

## 9) Practice snippet: Check if array is sorted (increasing)

```c
#include <stdio.h>

int sorted(int a[], int n) {
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i-1]) return 0;
    }
    return 1;
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int a[n]; // VLA (C99)
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    if (sorted(a, n)) printf("Sorted\n");
    else printf("Not Sorted\n");
    return 0;
}
```

**Notes**

- Uses a simple linear scan, O(n) time.
    
- The `int a[n];` is a Variable Length Array — supported in C99 and later by many compilers.
    

---

## 10) Common pitfalls & best practices

- **Uninitialized local arrays** contain indeterminate values. Initialize if you need zeros.
    
- **Do not rely on `sizeof` inside functions** where the parameter is declared as `int a[]` — it decays to a pointer. Use an explicit `n` parameter and pass the length.
    
- **Watch integer division**: `sum / count` truncates toward zero. Cast to `double` for fractional average.
    
- **Avoid out-of-bounds** access — always check indexes.
    
- For large arrays or performance-sensitive tasks prefer efficient algorithms (sorting, hashing, DP) over naive O(n²) loops.
    

---
