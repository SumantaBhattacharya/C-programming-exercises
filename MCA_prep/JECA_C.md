# ***Solutions of Mock Test Results | C Programming | JECA Exam Preparation 2025***

[![Solutions of Mock Test Results | C Programming | JECA Exam Preparation 2025](https://img.youtube.com/vi/P3giFSZzfr4/0.jpg)](https://youtu.be/P3giFSZzfr4?si=ppCgSlsKuFTgj1UB)

## **1. What is the output?**
```c
int x = 5;
printf("%d", x++);
```
- A. *5*
- B. *6*
- C. *0*
- D. *Compiler Error*
    - `A. 5`

## **2. What is the output?**
```c
for(int i=0; i < 5; i++) {
    if(i == 3) break;
    printf("%d", i);
}
```
- A. *0 1 2*
- B. *0 1 2 3*
- C. *0 1 2 3 4*
- D. *1 2 3*
    - `A. 0 1 2`

## **3. What is the output?**
```c
int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
printf("%d", a[2][1]);
```
- A. *5*
- B. *6*
- C. *8*
- D. *7*
    - `C. 8`

## **4. What is the output?**
```c
char c = 'A';
printf("%d %c", c, c);
```
- A. *65 A*
- B. *A 65*
- C. *A A*
- D. *65 65*
    - `A. 65 A`

## **5. What is the output?**
```c
char str[] = "Hello";
printf("%zu", sizeof(str));
```
- A. *5*
- B. *6*
- C. *7*
- D. *8*
    - `B. 6`

## **6. What is the output?**
```c
char str[] = "Hello";
printf("%s", str + 2);
```
- A. *Hello*
- B. *llo*
- C. *lo*
- D. *Compiler Error*
    - `B. llo`

## **7. What is the value of i?**
```c
#define SQR(x) x * x
int i = 64 / SQR(4);
```
- A. *4*
- B. *16*
- C. *64*
- D. *256*
    - `C. 64`

## **8. What is the output?**
```c
int x = 1, y = 1, z;
z = ++y ? 2 : 3;
printf("%d", --z);
```
- A. *1*
- B. *2*
- C. *3*
- D. *0*
    - `A. 1`

## **9. What is the output?**
```c
int a = 1, b = 2;
a += b -= a;
printf("%d %d", a, b);
```
- A. *1 2*
- B. *2 1*
- C. *3 1*
- D. *2 2*
    - `C. 3 1`

## **10. How many times will "Hello" be printed?**
```c
for(int i=5; i; i--) {
    printf("Hello");
}
```
- A. *5 times*
- B. *4 times*
- C. *6 times*
- D. *Infinite times*
    - `A. 5 times`

## **11. Which describes the correct relationship for data type sizes?**
- A. *sizeof(char) < sizeof(int) < sizeof(double)*
- B. *sizeof(int) < sizeof(char) < sizeof(double)*
- C. *sizeof(double) < sizeof(int) < sizeof(char)*
- D. *All are equal*
    - `A. sizeof(char) < sizeof(int) < sizeof(double)`

## **12. What is the output?**
```c
#define FIVESQR(x) (x*x)
int x = 5; int y = 3;
printf("%d", FIVESQR(x+y));
```
- A. *64*
- B. *34*
- C. *23*
- D. *15*
    - `A. 64`

## **13. Where should #define statements be placed in a C program?**
- A. *Inside main()*
- B. *Outside main() (at the start)*
- C. *Anywhere in the program*
- D. *Only in header files*
    - `B. Outside main() (at the start)`

## **14. What is the output?**
```c
int a[5] = {1, 5, 8, 10, 12};
printf("%d", a[a + 2][3]);
```
- A. *8*
- B. *10*
- C. *12*
- D. *Compiler Error*
    - `C. 12`

## **15. What is the output?**
```c
char str[] = "ABCD\0EF";
char *p = str;
p += 2;
printf("%s", p);
```
- A. *ABCD*
- B. *CD*
- C. *CD\0EF*
- D. *EF*
    - `B. CD`

## **16. What is the output?**
```c
int i = 3;
printf("%d", (++i)++);
```
- A. *3*
- B. *4*
- C. *5*
- D. *Compiler Error*
    - `D. Compiler Error`

## **17. Which is true about return types in C?**
- A. *A function can return an entire array*
- B. *A function can return another function*
- C. *A function can return a pointer to an array*
- D. *A function can return multiple values*
    - `C. A function can return a pointer to an array`

## **18. What is the maximum size of this structure in bytes?**
```c
struct S {
    short a[5];
    union U {
        float y;
        long z;
    } u;
};
```
- A. *14*
- B. *18*
- C. *20*
- D. *22*
    - `B. 18`

## **19. Which is a storage class in C?**
- A. *extern*
- B. *global*
- C. *local*
- D. *public*
    - `A. extern`

## **20. What does `scanf("%4s", s);` mean?**
- A. *Read exactly 4 characters*
- B. *Read a maximum of 4 characters into string s*
- C. *Read until 4 spaces are encountered*
- D. *Read 4 strings*
    - `B. Read a maximum of 4 characters into string s`

## **21. Which looping construct executes at least once?**
- A. *for*
- B. *while*
- C. *do-while*
- D. *All of the above*
    - `C. do-while`

## **22. What is the output?**
```c
int num = 30;
int x = num > 30 ? 100 : 200;
printf("%d", x);
```
- A. *100*
- B. *200*
- C. *30*
- D. *0*
    - `B. 200`

## **23. Which cannot be used in a switch statement?**
- A. *int*
- B. *char*
- C. *float*
- D. *enum*
    - `C. float`

## **24. Where is memory allocated using malloc() stored?**
- A. *Stack*
- B. *Heap*
- C. *Data Segment*
- D. *Code Segment*
    - `B. Heap`

## **25. A user-defined integrity constraint is called a...**
- A. *Domain Type*
- B. *Entity Constraint*
- C. *Referential Constraint*
- D. *Key Constraint*
    - `A. Domain Type`