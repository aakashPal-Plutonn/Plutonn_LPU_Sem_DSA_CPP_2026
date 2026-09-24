# Multidimensional Array


A **multidimensional array** is an array that contains elements in more than one dimension.

The most commonly used multidimensional array is a **2D array**, which represents data in the form of **rows and columns**.

Example:

```text
10  20  30
40  50  60
70  80  90
```

This is a `3 × 3` array:

* 3 rows
* 3 columns

---

## Syntax / Structure

### Declaration

```cpp
dataType arrayName[rows][columns];
```

Example:

```cpp
int arr[3][3];
```

### Initialization

```cpp
int arr[3][3] = {
    {10, 20, 30},
    {40, 50, 60},
    {70, 80, 90}
};
```

Elements are accessed using:

```cpp
arr[row][column]
```

For example:

```cpp
cout << arr[1][2];
```

Output:

```text
60
```

Because indexing starts from `0`:

```text
        Column
         0   1   2
       ┌───────────
Row 0  │ 10  20  30
Row 1  │ 40  50  60
Row 2  │ 70  80  90
```

So `arr[1][2]` means:

```text
Row 1 → 40 50 60
              ↑
           Column 2
```

---

## Examples

### Example 1: Traversing a 2D Array

A nested loop is used to traverse rows and columns.

```cpp
#include <iostream>
using namespace std;

int main() {

    int arr[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
```

Output:

```text
10 20 30
40 50 60
70 80 90
```

Here:

* Outer loop → handles rows
* Inner loop → handles columns

---

### Example 2: Taking Input

```cpp
#include <iostream>
using namespace std;

int main() {

    int arr[2][3];

    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    return 0;
}
```

For input:

```text
10 20 30
40 50 60
```

the array becomes:

```text
10 20 30
40 50 60
```

---

### Example 3: Sum of All Elements

```cpp
#include <iostream>
using namespace std;

int main() {

    int arr[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    int sum = 0;

    for (int i = 0; i < 2; i++) {

        for (int j = 0; j < 3; j++) {
            sum += arr[i][j];
        }
    }

    cout << sum << endl;

    return 0;
}
```

Output:

```text
210
```

---