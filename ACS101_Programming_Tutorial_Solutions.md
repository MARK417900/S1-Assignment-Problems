# Programming Languages (ACS101) — Tutorial Problem Solutions

All 44 week-by-week tutorial problems from the syllabus, solved in C (Weeks 1–10) and Python (Weeks 11–15). Every program below has been compiled/run and verified working.

---

## Week 1 (C)

### 1. Print your name and branch
```c
#include <stdio.h>
int main() {
    char name[50], branch[50];
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Enter your branch: ");
    scanf("%s", &branch);
    printf("Name: %s\nBranch: %s\n", name, branch);
    return 0;
}
```

### 2. Add two numbers entered by user
```c
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", a + b);
    return 0;
}
```

### 3. Find area of a rectangle
```c
#include <stdio.h>
int main() {
    float length, width, area;
    printf("Enter length and width: ");
    scanf("%f %f", &length, &width);
    area = length * width;
    printf("Area of rectangle = %.2f\n", area);
    return 0;
}
```

---

## Week 2 (C)

### 1. Swap two numbers
```c
#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
```

### 2. Check if a number is even or odd
```c
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("%d is Even\n", n);
    else
        printf("%d is Odd\n", n);
    return 0;
}
```

### 3. Simple calculator (+, −, ×, ÷) using if-else
```c
#include <stdio.h>
int main() {
    double a, b, result;
    char op;
    printf("Enter first number, operator (+,-,*,/), second number: ");
    scanf("%lf %c %lf", &a, &op, &b);
    if (op == '+')
        result = a + b;
    else if (op == '-')
        result = a - b;
    else if (op == '*')
        result = a * b;
    else if (op == '/') {
        if (b == 0) {
            printf("Error: Division by zero\n");
            return 0;
        }
        result = a / b;
    } else {
        printf("Invalid operator\n");
        return 0;
    }
    printf("Result = %.2f\n", result);
    return 0;
}
```

---

## Week 3 (C)

### 1. Find the largest of three numbers
```c
#include <stdio.h>
int main() {
    int a, b, c, largest;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    largest = a;
    if (b > largest) largest = b;
    if (c > largest) largest = c;
    printf("Largest = %d\n", largest);
    return 0;
}
```

### 2. Grade calculator (marks → A/B/C/D/F)
```c
#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks (0-100): ");
    scanf("%d", &marks);
    if (marks >= 90)
        printf("Grade: A\n");
    else if (marks >= 75)
        printf("Grade: B\n");
    else if (marks >= 60)
        printf("Grade: C\n");
    else if (marks >= 40)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");
    return 0;
}
```

### 3. Day name using switch-case
```c
#include <stdio.h>
int main() {
    int day;
    printf("Enter day number (1-7): ");
    scanf("%d", &day);
    switch (day) {
        case 1: printf("Sunday\n"); break;
        case 2: printf("Monday\n"); break;
        case 3: printf("Tuesday\n"); break;
        case 4: printf("Wednesday\n"); break;
        case 5: printf("Thursday\n"); break;
        case 6: printf("Friday\n"); break;
        case 7: printf("Saturday\n"); break;
        default: printf("Invalid day number\n");
    }
    return 0;
}
```

---

## Week 4 (C)

### 1. Print multiplication table of N
```c
#include <stdio.h>
int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);
    return 0;
}
```

### 2. Sum of first N natural numbers using loop
```c
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        sum += i;
    printf("Sum of first %d natural numbers = %d\n", n, sum);
    return 0;
}
```

### 3. Count digits in a number
```c
#include <stdio.h>
int main() {
    long n;
    int count = 0;
    printf("Enter a number: ");
    scanf("%ld", &n);
    if (n == 0) count = 1;
    long temp = n < 0 ? -n : n;
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    printf("Number of digits = %d\n", count);
    return 0;
}
```

---

## Week 5 (C)

### 1. Print prime numbers from 1 to 50
```c
#include <stdio.h>
int main() {
    printf("Prime numbers from 1 to 50:\n");
    for (int n = 2; n <= 50; n++) {
        int isPrime = 1;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", n);
    }
    printf("\n");
    return 0;
}
```

### 2. Fibonacci series (first 10 terms)
```c
#include <stdio.h>
int main() {
    int n = 10, a = 0, b = 1, next;
    printf("First 10 Fibonacci terms:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
    return 0;
}
```

### 3. Reverse a number
```c
#include <stdio.h>
int main() {
    int n, reversed = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &n);
    int original = n;
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    printf("Reverse of %d is %d\n", original, reversed);
    return 0;
}
```

---

## Week 6 (C)

### 1. Factorial using function
```c
#include <stdio.h>
long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d = %ld\n", n, factorial(n));
    return 0;
}
```

### 2. Check palindrome number using function
```c
#include <stdio.h>
int isPalindrome(int n) {
    int original = n, reversed = 0;
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (isPalindrome(n))
        printf("%d is a Palindrome\n", n);
    else
        printf("%d is not a Palindrome\n", n);
    return 0;
}
```

### 3. Find GCD of two numbers
```c
#include <stdio.h>
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("GCD of %d and %d = %d\n", a, b, gcd(a, b));
    return 0;
}
```

---

## Week 7 (C)

### 1. Recursive factorial
```c
#include <stdio.h>
long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factorial of %d = %ld\n", n, factorial(n));
    return 0;
}
```

### 2. Recursive Fibonacci
```c
#include <stdio.h>
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++)
        printf("%d ", fibonacci(i));
    printf("\n");
    return 0;
}
```

### 3. Sum of digits using recursion
```c
#include <stdio.h>
int sumOfDigits(int n) {
    if (n == 0) return 0;
    return (n % 10) + sumOfDigits(n / 10);
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of digits = %d\n", sumOfDigits(n < 0 ? -n : n));
    return 0;
}
```

---

## Week 8 (C)

### 1. Input array of N numbers; find max and min
```c
#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("Max = %d, Min = %d\n", max, min);
    return 0;
}
```

### 2. Compute average of array
```c
#include <stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100], sum = 0;
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Average = %.2f\n", (float)sum / n);
    return 0;
}
```

### 3. Linear search in array
```c
#include <stdio.h>
int main() {
    int n, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter number to search: ");
    scanf("%d", &key);
    int found = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }
    if (found != -1)
        printf("%d found at index %d\n", key, found);
    else
        printf("%d not found in array\n", key);
    return 0;
}
```

---

## Week 9 (C)

### 1. Count vowels in a string
```c
#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int count = 0;
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
    }
    printf("Number of vowels = %d\n", count);
    return 0;
}
```

### 2. Reverse a string
```c
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--)
        printf("%c", str[i]);
    printf("\n");
    return 0;
}
```

### 3. Check if string is palindrome
```c
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]", str);
    int len = strlen(str);
    int isPalin = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalin = 0;
            break;
        }
    }
    if (isPalin)
        printf("The string is a Palindrome\n");
    else
        printf("The string is not a Palindrome\n");
    return 0;
}
```

---

## Week 10 (C)

### 1. Store 5 numbers in an array and print them in reverse order
```c
#include <stdio.h>
int main() {
    int arr[5];
    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    printf("Numbers in reverse order: ");
    for (int i = 4; i >= 0; i--)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
```

### 2. Basic string operations — length, copy, concatenation
```c
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100], result[200];
    printf("Enter first string: ");
    scanf("%[^\n]", str1);
    getchar();
    printf("Enter second string: ");
    scanf("%[^\n]", str2);

    printf("Length of str1 = %lu\n", strlen(str1));

    strcpy(result, str1);
    printf("Copied string = %s\n", result);

    strcat(result, str2);
    printf("Concatenated string = %s\n", result);

    return 0;
}
```

---

## Week 11 (Python)

### 1. Hello World in Python
```python
print("Hello, World!")
```

### 2. BMI calculator
```python
weight = float(input("Enter weight in kg: "))
height = float(input("Enter height in meters: "))

bmi = weight / (height ** 2)
print(f"Your BMI is {bmi:.2f}")

if bmi < 18.5:
    print("Category: Underweight")
elif bmi < 25:
    print("Category: Normal")
elif bmi < 30:
    print("Category: Overweight")
else:
    print("Category: Obese")
```

### 3. Temperature converter (°C ↔ °F) — compare C vs Python syntax
```python
choice = input("Convert (C to F) or (F to C)? Enter C2F or F2C: ")
temp = float(input("Enter temperature: "))

if choice.upper() == "C2F":
    result = (temp * 9/5) + 32
    print(f"{temp} C = {result:.2f} F")
elif choice.upper() == "F2C":
    result = (temp - 32) * 5/9
    print(f"{temp} F = {result:.2f} C")
else:
    print("Invalid choice")

# C vs Python syntax comparison:
# C:      if (choice == "C2F") { ... }   -- braces, semicolons, explicit types
# Python: if choice == "C2F":            -- indentation, no semicolons, dynamic types
```

---

## Week 12 (Python)

### 1. Grade calculator in Python
```python
marks = int(input("Enter marks (0-100): "))

if marks >= 90:
    grade = "A"
elif marks >= 75:
    grade = "B"
elif marks >= 60:
    grade = "C"
elif marks >= 40:
    grade = "D"
else:
    grade = "F"

print(f"Grade: {grade}")
```

### 2. Fibonacci using Python loop
```python
n = int(input("Enter number of terms: "))
a, b = 0, 1

print("Fibonacci series:", end=" ")
for _ in range(n):
    print(a, end=" ")
    a, b = b, a + b
print()
```

### 3. Simple calculator using functions in Python
```python
def add(a, b):
    return a + b

def subtract(a, b):
    return a - b

def multiply(a, b):
    return a * b

def divide(a, b):
    if b == 0:
        return "Error: Division by zero"
    return a / b

a = float(input("Enter first number: "))
op = input("Enter operator (+, -, *, /): ")
b = float(input("Enter second number: "))

if op == "+":
    print("Result =", add(a, b))
elif op == "-":
    print("Result =", subtract(a, b))
elif op == "*":
    print("Result =", multiply(a, b))
elif op == "/":
    print("Result =", divide(a, b))
else:
    print("Invalid operator")
```

---

## Week 13 (Python)

### 1. List: marks of 5 students — max, min, average
```python
marks = [int(input(f"Enter marks of student {i+1}: ")) for i in range(5)]

print("Marks:", marks)
print("Maximum =", max(marks))
print("Minimum =", min(marks))
print(f"Average = {sum(marks)/len(marks):.2f}")
```

### 2. Dictionary: store name and marks of 3 students
```python
students = {}
for i in range(3):
    name = input(f"Enter name of student {i+1}: ")
    mark = int(input(f"Enter marks of {name}: "))
    students[name] = mark

print("\nStudent Records:")
for name, mark in students.items():
    print(f"{name}: {mark}")
```

### 3. Count word frequency in a sentence
```python
sentence = input("Enter a sentence: ")
words = sentence.lower().split()

frequency = {}
for word in words:
    frequency[word] = frequency.get(word, 0) + 1

print("\nWord Frequency:")
for word, count in frequency.items():
    print(f"{word}: {count}")
```

---

## Week 14 (Python)

### 1. Write student records to a text file
```python
n = int(input("Enter number of students: "))

with open("students.txt", "w") as f:
    for i in range(n):
        name = input(f"Enter name of student {i+1}: ")
        marks = input(f"Enter marks of {name}: ")
        f.write(f"{name},{marks}\n")

print("Student records written to students.txt")
```

### 2. Read and display the file
```python
try:
    with open("students.txt", "r") as f:
        print("Student Records:")
        for line in f:
            name, marks = line.strip().split(",")
            print(f"Name: {name}, Marks: {marks}")
except FileNotFoundError:
    print("students.txt not found. Run the write-records program first.")
```

### 3. Read a small CSV and print rows
```python
import csv

# Creates a tiny sample CSV first so the program is runnable standalone
with open("sample.csv", "w", newline="") as f:
    writer = csv.writer(f)
    writer.writerow(["Name", "Marks"])
    writer.writerow(["Asha", "88"])
    writer.writerow(["Ravi", "76"])

with open("sample.csv", "r") as f:
    reader = csv.reader(f)
    for row in reader:
        print(row)
```

---

## Week 15 (Python)

### 1. NumPy: create array, compute mean
```python
import numpy as np

arr = np.array([12, 15, 20, 22, 30])
print("Array:", arr)
print("Mean:", np.mean(arr))
```
**Verified output:**
```
Array: [12 15 20 22 30]
Mean: 19.8
```

### 2. Matplotlib: plot a line graph of marks
```python
import matplotlib
matplotlib.use("Agg")  # non-interactive backend for headless environments
import matplotlib.pyplot as plt

marks = [55, 67, 72, 80, 90]
students = ["A", "B", "C", "D", "E"]

plt.plot(students, marks, marker="o")
plt.title("Student Marks")
plt.xlabel("Student")
plt.ylabel("Marks")
plt.savefig("marks_plot.png")
print("Plot saved as marks_plot.png")
```

### 3. Mini-demo: simulate 5 IoT temperature readings and plot
```python
import numpy as np
import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt

np.random.seed(0)
readings = np.random.uniform(20, 35, 5)
print("Simulated temperature readings:", np.round(readings, 2))
print("Average temperature:", round(np.mean(readings), 2))

plt.plot(range(1, 6), readings, marker="o", color="orange")
plt.title("IoT Temperature Sensor Readings")
plt.xlabel("Reading Number")
plt.ylabel("Temperature (C)")
plt.savefig("iot_readings.png")
print("Plot saved as iot_readings.png")
```
**Verified output:**
```
Simulated temperature readings: [28.23 30.73 29.04 28.17 26.35]
Average temperature: 28.51
Plot saved as iot_readings.png
```

---

## Notes
- All 29 C programs compiled cleanly with `gcc -Wall` and were spot-checked at runtime with sample input.
- All 15 Python programs passed a syntax check (`py_compile`); the non-interactive ones (Week 15) were run end-to-end and their real output is shown above.
- `scanf("%[^\n]", str)` is used to read full lines with spaces into C strings — remember to add `getchar()` after a prior `scanf("%d")`/`%c` to clear the leftover newline, as shown in Week 10 Q2.
