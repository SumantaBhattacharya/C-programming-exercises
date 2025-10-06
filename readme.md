<!-- my first programming language which i leaned on the 1st year of my graduation -->

* ***C is a general purpose procedural programming language***. *good for memory management and internal tasks examples used in embedded system, OS, compiler, drivers, etc.*
* *C language is not generally used for software devlopment*
* *compiler based programming language are C, C++, Java, Python, etc.*
* *interpreter based programming language are Javascript, Ruby, PHP, etc.*

> i. procedural programming language(C programming language), ii. object oriented programming language, iii. functional programming language.

C is not object oriented programming language

`(Dennis Ritchie in 1972 at Bell Labs developed C).`
Here's your content restyled and formatted properly in **Markdown**:

---

### 🔑 Predefined Reserved Word (Keyword-32)

* C has **32 predefined reserved keywords**.
* These **keywords** are reserved and **cannot be used as variable names**.

---

### 🧮 Memory Allocation by Default

* **All variables** are stored in **stack memory** by default in C.

```c
int a;
```

* Here, variable `a`:

  * is **mutable**
  * gets memory allocated in the **stack** (unless `register` is used)

---

### ⚙️ `register` Keyword Example

```c
register int a;
```

* **`register`** suggests the compiler to **store variable `a` in a CPU register** instead of RAM (for faster access).
* `int` is 4 bytes = 32 bits (because 1 byte = 8 bits).
* Other data type sizes (may vary by system):

  * `double`: 8 bytes
  * `char`: 1 byte

---

### 🆔 Identifiers

* Identifiers are **names used to identify**:

  * Variables (`variable_name`)
  * Functions
  * Arrays, etc.
* Example: `int score;` → `score` is an **identifier**

---

### 🖨️ `printf()` Function

* `printf()` is defined in the **`<stdio.h>`** header file.
* `stdio.h` stands for **Standard Input/Output**.

```c
#include <stdio.h>

int main() {
    printf("Hello, world!\n");
    return 0;
}
```

---

### ⚙️ Compilation Flow of a C Program

1. **Preprocessing**
   `#include` directives and macros are handled by the **preprocessor**.
2. **Compilation**
   Preprocessed code is **converted to assembly code**.
3. **Assembly**
   Assembly code is translated into **object code** (`.obj` or `.o`).
4. **Linking**
   Linker combines the object file(s) and **library files** (e.g., standard library) to produce an executable (`.exe`).
5. **Loading & Execution**
   The **loader** loads the executable into **memory** and starts execution.

---


```
Preprocessing → Compilation → Assembly → Linking → Executable → [Loaded by OS for execution]
```

format specifier

```
%d - integer
%f - float
%c - char
%s - string
short int - %hd
long int - %ld
long long int - %lld
unsigned int - %u
unsigned long int - %lu
unsigned long long int - %llu
double - %lf
```


---

The **storage class** of a variable determines where the variable is stored—either in memory or CPU registers. It also defines the **scope** and **initial value** of the variable. In the C programming language, there are four storage classes: **automatic**, **register**, **static**, and **external**.

* **auto** — Automatic storage class: All variables defined within a function or block belong to the automatic storage class by default.
* **register** — Register storage class
* **static** — Static storage class
* **extern** — External storage class

### Automatic Storage Class

All variables defined within a function or block, either by default or with the `auto` specifier, belong to the automatic storage class. Automatic variables are local to the block in which they are defined, and their lifetime ends when the program exits the block.

### Register Storage Class

The `register` specifier declares a variable of the register storage class. Variables declared as `register` are local to the block in which they are defined and are destroyed upon exiting the block. Register variables are stored in CPU registers rather than memory, which can result in faster access.

### Static Storage Class

The `static` specifier declares a variable of the static storage class. Static variables are global to the program and persist across multiple function calls. However, static variables are not visible outside the function in which they are declared. These variables are stored in memory.

### External Storage Class

The `extern` specifier gives a variable the external storage class. No storage is allocated for an `extern` variable within the declaring file. It is assumed that the variable has already been defined elsewhere in the program. Because an `extern` variable is only declared and not defined, it cannot be initialized at the point of declaration.

---

In programming, **actual parameters** refer to the values passed to a function during a function call, whereas **formal parameters** are the variables defined in the function’s signature that receive these values.

---

# ***Theory of Computation***

## ***An introduction to the subject of Theory of Computation and Automata Theory***

[![An introduction to the subject of Theory of Computation and Automata Theory](https://img.youtube.com/vi/58N2N7zJGrQ/maxresdefault.jpg)](https://youtu.be/58N2N7zJGrQ?si=1Ao_uwyVAoQjp58H)

Topics discussed:  
1. What is Theory of Computation?  
2. What is the main concept behind the subject Theory of Computation?  
3. Some simple examples explaining the scope of TOC.  
4. A brief overview of the topics in Theory of Computation.

[![Theory of Computation - Introduction to Language, Alphabet, Symbol, String](https://img.youtube.com/vi/V19S3Mqfrzo/maxresdefault.jpg)](https://youtu.be/V19S3Mqfrzo?si=rlEFyLye04OLOwFz)

**Topics Discussed:**  
- Introduction to Theory of Computation  
- LAG (Language, Automata, Grammar)  
- Symbol  
- Alphabet  
- String  
- Language  
- Examples

[![Introduction to Automata and Language](https://img.youtube.com/vi/aoUEXRlvmxc/maxresdefault.jpg)](https://youtu.be/aoUEXRlvmxc?si=qszI_Fig5Le-TsCO)

**Topics Discussed:**  
- Introduction to Automata  
- Language  
- Example of Language  
- Automata  

[![Power of Σ (Sigma) in Automata Theory](https://img.youtube.com/vi/4Q2rE6R31GU/maxresdefault.jpg)](https://youtu.be/4Q2rE6R31GU?si=4Jw0DP3NSAGWMOqG)

**Topics Discussed:**  
- Introduction  
- Power of Σ (Sigma)  
- Sigma Star (Kleene Closure)  
- Positive Closure  

[![Grammar in Automata Theory](https://img.youtube.com/vi/5Jd54dxQ1_Q/maxresdefault.jpg)](https://youtu.be/5Jd54dxQ1_Q?si=GC10B5rdn3G8DoMn)

**Topics Discussed:**  
- Grammar and its importance in formal language theory  
- Examples of grammar rules  
- Checking strings using grammar  

## ***TOC: The prerequisites of Finite State Machine (FSM) in Theory of Computation***

[![TOC: The prerequisites of Finite State Machine (FSM) in Theory of Computation](https://img.youtube.com/vi/TpIBUeyOuv8/maxresdefault.jpg)](https://youtu.be/TpIBUeyOuv8?si=gIlJdYwQJTTMKSDi)

Topics discussed:  
1. Symbols in FSM  
2. Alphabets in FSM  
3. Strings in FSM  
4. Languages in FSM  
5. Powers of sigma in FSM  
6. Cardinality in FSM

## ***TOC: Finite State Machine (Finite Automata) in Theory of Computation***

[![TOC: Finite State Machine (Finite Automata) in Theory of Computation](https://img.youtube.com/vi/Qa6csfkK7_I/maxresdefault.jpg)](https://youtu.be/Qa6csfkK7_I?si=_ga1j8v5rHdQt1Fm)


**TOC: Finite State Machine (Finite Automata) in Theory of Computation**  
Topics discussed:  
1. The Basics of Finite State Machine  
2. Finite Automata  
3. Types of Finite Automata  
4. Deterministic Finite Automata (DFA)  
5. The formal definition of Deterministic Finite Automata (DFA)

[![What is DFA in TOC (Hindi)](https://img.youtube.com/vi/CiXJnosT0UE/maxresdefault.jpg)](https://youtu.be/CiXJnosT0UE?si=_-oSixlYjRNvL4kk)

**Lecture 6: What is DFA in TOC with Examples (in Hindi)**  
**Topics Discussed:**  
- Definition and components of DFA (Q, Σ, δ, q₀, F)  
- Determinism in DFA  
- Example and DFA design  
- DFA transition explanation

[![DFA Example 1 - Contains at least one 'a'](https://img.youtube.com/vi/vsEKN2f22bE/maxresdefault.jpg)](https://youtu.be/vsEKN2f22bE?si=V9OS2YkAXyavF9CG)

**Lecture 7: DFA Example 1 | How to Construct DFA in TOC**  
**Instructor:** Varun Sir  
**Problem Statement:**  
Solved designing a DFA over the alphabet **{a, b}** that recognizes the language consisting of **all strings containing at least one 'a'**.

**Topics Covered:**  
- Language analysis (strings containing 'a')  
- Step-by-step DFA construction  

## ***Deterministic Finite Automata (Example 1)***

[![Deterministic Finite Automata (Example 1)](https://img.youtube.com/vi/40i4PKpM0cI/maxresdefault.jpg)](https://youtu.be/40i4PKpM0cI?si=A1Y8IbtywQy_LEm3)

**Deterministic Finite Automata (Example 1)**  
TOC: An example of DFA that accepts all binary strings starting with `'0'`.  
This lecture demonstrates how to construct a DFA that accepts such strings and rejects all others.

[![DFA Example 2 - Strings ending with 'a'](https://img.youtube.com/vi/cEX7V3c2CWc/maxresdefault.jpg)](https://youtu.be/cEX7V3c2CWc?si=95AF-QlqpOCXIUCM)

**Lecture 8: DFA Example 2 | DFA of Language with All Strings Ending with 'a'**  
**Instructor:** Varun Sir  
**Problem Statement:**  
Solved designing a DFA over the alphabet **{a, b}** that recognizes the language consisting of **all strings that end with 'a'**.

**Topics Covered:**  
- Language analysis (strings ending in 'a')  
- Step-by-step DFA construction  

## ***Deterministic Finite Automata (Example 2)***

[![Deterministic Finite Automata (Example 2)](https://img.youtube.com/vi/2KindKcLjos/maxresdefault.jpg)](https://youtu.be/2KindKcLjos?si=pivmA4YjGFd1iMUk)

**Deterministic Finite Automata (Example 2)**  
TOC: An example of a DFA that accepts all strings over `{0,1}` of length 2.  
This lecture shows how to construct a DFA that accepts binary strings of exactly two characters and rejects all others.

[![DFA Example - Strings Starting with 'a' & Ending with 'b'](https://img.youtube.com/vi/v9IwDI0GtpE/maxresdefault.jpg)](https://youtu.be/v9IwDI0GtpE?si=vKnspVo5ZcX7an3f)

**Lecture 9: DFA of Language with All Strings Starting with 'a' & Ending with 'b'**  
**Problem Statement:**  
Design a DFA over the alphabet **{a, b}** that recognizes the language consisting of **all strings that start with 'a' and end with 'b'**.

**Topics Covered:**  
- Language analysis (strings starting with 'a' and ending with 'b')  
- Step-by-step DFA construction

[![DFA Example - Not Starting with 'a' OR Not Ending with 'b'](https://img.youtube.com/vi/gUeh54lmlik/maxresdefault.jpg)](https://youtu.be/gUeh54lmlik?si=CMzmmesLv03uH_Q8)

**Lecture 10: DFA of Language with All Strings Not Starting with 'a' OR Not Ending with 'b'**  

**Problem Statement:**  
Designing a DFA over the alphabet **{a, b}** that recognizes the language consisting of all strings **that do NOT start with 'a' OR do NOT end with 'b'**.

**Topics Covered:**  
- Language definition using **De Morgan's Theorem**  
- DFA for strings starting with 'a' & ending with 'b'  
- Complement of DFA to handle the negation case 

[![DFA vs NFA in TOC](https://img.youtube.com/vi/4BDz876IJBc/maxresdefault.jpg)](https://youtu.be/4BDz876IJBc?si=rQcuqs9su6CvxxWg)

**Lecture 14: DFA vs NFA in TOC**  

**Description:**  
**differences between DFA (Deterministic Finite Automaton)** and **NFA (Nondeterministic Finite Automaton)** in Hindi, with examples.  

**Topics Covered:**  
- Structural differences between DFA and NFA  
- Language recognition power of DFA vs NFA  
- Examples to highlight the contrast  

## ***Deterministic Finite Automata (Example 3)***  

[![Deterministic Finite Automata (Example 3)](https://img.youtube.com/vi/_2cKtLkdwnc/maxresdefault.jpg)](https://youtu.be/_2cKtLkdwnc?si=tpm0ZMAFlqsvH5kp)

TOC: An example of a DFA that accepts all strings over `{a, b}` that **do not** contain the substring `'aabb'`.  
This lecture shows how to construct such a DFA and reject only those strings that include `'aabb'`.

## ***Deterministic Finite Automata (Example 4)*** 

[![Deterministic Finite Automata (Example 4)](https://img.youtube.com/vi/Fpmr1nHqYrw/maxresdefault.jpg)](https://youtu.be/Fpmr1nHqYrw?si=VEL1BYhjhr7Y8VVG)

TOC: An example showing how to determine what a DFA recognizes.  
This lecture also explains how to **complete a DFA using a Dead State**, helping better understand how a given DFA processes input strings.

## ***Regular Languages | TOC*** 

[![Regular Languages](https://img.youtube.com/vi/WrzaPNj9OZ4/maxresdefault.jpg)](https://youtu.be/WrzaPNj9OZ4?si=0hnWgl8zijNixjEJ)

Topics Discussed:  
1. Regular Languages in Theory of Computation  
2. Non-Regular Languages in TOC  
3. Examples of Languages that are Not Regular 

[![Operations on Regular Languages](https://img.youtube.com/vi/6aRJQNYYz4s/maxresdefault.jpg)](https://youtu.be/6aRJQNYYz4s?si=zFjhTZm6nKqc7E4O)

**Operations on Regular Languages | TOC**  
Topics Discussed:  
1. Union Operation on Regular Languages  
2. Concatenation Operation on Regular Languages  
3. Star Operation on Regular Languages  
4. Theorems on Union and Concatenation  

[![Non-deterministic Finite Automata](https://img.youtube.com/vi/ehy0jGIYRtE/maxresdefault.jpg)](https://youtu.be/ehy0jGIYRtE?si=OU5xMTYtG1f-zwHX)

**TOC: Non-deterministic Finite Automata**  
Topics Discussed:  
1. Properties of Deterministic Finite Automata (DFA)  
2. Properties of Non-Deterministic Finite Automata (NFA)  
3. Difference between DFA and NFA  

[![The Formal Definition of NFA](https://img.youtube.com/vi/egXhe55dAIk/maxresdefault.jpg)](https://youtu.be/egXhe55dAIk?si=2l9LpOefvCkV3VGF)

**TOC: The Formal Definition of Non-deterministic Finite Automata**  
Topics Discussed:  
the formal definition of NFA and each of the tuples is explained with special focus on the transition function.

[![NFA Solved Problem 1](https://img.youtube.com/vi/4bjqVsoy6bA/maxresdefault.jpg)](https://youtu.be/4bjqVsoy6bA?si=hvQdnX7pFVJCFnTv)

**TOC: NFA Solved Problem 1**  
Topics Discussed:  
An example showing the behavior of NFA and showing in what conditions does an NFA accept or reject.

[![NFA Solved Example 2](https://img.youtube.com/vi/Bcen1W_uFEU/maxresdefault.jpg)](https://youtu.be/Bcen1W_uFEU?si=NnDJEFjB8-aHnayv)

**Non-Deterministic Finite Automata (Solved Example 2)**  
Topics Discussed:  
1. An example of NFA which accepts all strings that start with "0".  
2. An example of NFA which accepts all strings over {0,1} of length two.

[![NFA Solved Problem 3](https://img.youtube.com/vi/NGF-b3QVeJU/maxresdefault.jpg)](https://youtu.be/NGF-b3QVeJU?si=wCVvStu8o897Qr1E)

**TOC: NFA Solved Problem 3**  
Topics Discussed:  
1. NFA for: L1 = {Set of all strings that end with "1"}  
2. NFA for: L2 = {Set of all strings that contain "0"}  
3. NFA for: L3 = {Set of all strings that start with "10"}  
4. NFA for: L4 = {Set of all strings that contain "01"}  
5. NFA for: L5 = {Set of all strings that end with "11"}

[![Conversion of NFA to DFA](https://img.youtube.com/vi/--CSVsFIDng/maxresdefault.jpg)](https://youtu.be/--CSVsFIDng?si=gHl1EObwWsMSQFRp)

**TOC: Conversion of Non-deterministic Finite Automata (NFA) to Deterministic Finite Automata (DFA)**  
Topics Discussed:  
1. How NFA and DFA are equivalent and the process of converting NFA to DFA.  
2. Equivalence of NFA and DFA.  
3. Example: Converting the NFA for a language that accepts all strings that start with '0' to its equivalent DFA.

[![Problem 1 on NFA to DFA](https://img.youtube.com/vi/pnyXgIXpKnc/maxresdefault.jpg)](https://youtu.be/pnyXgIXpKnc?si=jjJasxxP_SKJzpYs)

**TOC: Problem Number 1 on Conversion of Non-deterministic Finite Automata (NFA) to Deterministic Finite Automata (DFA)**  
Topics Discussed:  
conversion of an NFA that accepts all binary strings over {0,1} that end with '1' to its equivalent DFA using the **Subset Construction Method**.

[![Problem 2 on NFA to DFA](https://img.youtube.com/vi/i-fk9o46oVY/maxresdefault.jpg)](https://youtu.be/i-fk9o46oVY?si=e3c2AjZ5yolF2oSR)

**TOC: Problem Number 2 on Conversion of Non-deterministic Finite Automata (NFA) to Deterministic Finite Automata (DFA)**  
Topics Discussed:  
conversion of a given NFA to its equivalent DFA using the **Subset Construction Method**, demonstrating the equivalence of NFA and DFA.

[![Problem 3 on NFA to DFA](https://img.youtube.com/vi/dY1bCC6syLI/maxresdefault.jpg)](https://youtu.be/dY1bCC6syLI?si=djR6Pi1IlKFsh9lg)

**TOC: Problem Number 3 on Conversion of Non-deterministic Finite Automata (NFA) to Deterministic Finite Automata (DFA)**  
Topics Discussed:  
Conversion of an NFA that accepts all strings over {0,1} ending with `"01"` into its equivalent DFA using the **Subset Construction Method**.

[![Problem 4 on NFA to DFA](https://img.youtube.com/vi/Y92dtMnarAU/maxresdefault.jpg)](https://youtu.be/Y92dtMnarAU?si=A7fYHDld18NKS121)

**TOC: Problem Number 4 on Conversion of Non-deterministic Finite Automata (NFA) to Deterministic Finite Automata (DFA)**  
Topics Discussed:  
Design an NFA that accepts all strings over {0,1} where the second last symbol is always `'1'`. After designing the NFA, Converting it to an equivalent DFA using the **Subset Construction Method**.

[![TOC: Epsilon NFA](https://img.youtube.com/vi/84oNUttWlN4/maxresdefault.jpg)](https://youtu.be/84oNUttWlN4?si=amZXPhxxll3qwiND)

**TOC: Epsilon NFA** 
Topics Discussed: 
Epsilon NFA, how it is defined, and how it differs from the normal NFA.

[![TOC: Conversion of Epsilon NFA to NFA](https://img.youtube.com/vi/WSGcmaHNBFM/maxresdefault.jpg)](https://youtu.be/WSGcmaHNBFM?si=ajjljEHeyChk5_Ou)

**TOC: Conversion of Epsilon NFA to NFA**  
Topics Discussed: Conversion of an Epsilon NFA to its equivalent NFA.

[![TOC: Conversion of Epsilon NFA to NFA - Examples (Part 1)](https://img.youtube.com/vi/I6GFKekMr7s/maxresdefault.jpg)](https://youtu.be/I6GFKekMr7s?si=25nBxWd-XjRkqjhM)

**TOC: Conversion of Epsilon NFA to NFA - Examples (Part 1)**  
Conversion of a given Epsilon NFA to its equivalent NFA.

[![TOC: Conversion of Epsilon NFA to NFA - Examples (Part 2)](https://img.youtube.com/vi/Jz4YQ09nOxA/maxresdefault.jpg)](https://youtu.be/Jz4YQ09nOxA?si=g83n3889SzC77Enj)

**TOC: Conversion of Epsilon NFA to NFA - Examples (Part 2)**  
Conversion given Epsilon NFA to its equivalent NFA using step-by-step examples.

[![TOC: Regular Expression – Introduction and Rules](https://img.youtube.com/vi/upu_TeZImN0/maxresdefault.jpg)](https://youtu.be/upu_TeZImN0?si=SVzNyMh-jZyjZaQ9)

**TOC: Regular Expression – Introduction and Rules**  
The basic **rules**, **symbols**, and **operations** used to define regular languages through regular expressions.

[![TOC: Regular Expression – Examples](https://img.youtube.com/vi/paOPoZyjzdg/maxresdefault.jpg)](https://youtu.be/paOPoZyjzdg?si=BRCV18EnVkKYuVnb)

**TOC: Regular Expression – Examples**  
**sets of strings** using **regular expressions**.

[![TOC: Identities of Regular Expression](https://img.youtube.com/vi/yp4pYgXfYD8/maxresdefault.jpg)](https://youtu.be/yp4pYgXfYD8?si=AEmz6S3wCYNlAat7)

**TOC: Identities of Regular Expression**  

[![TOC: Arden’s Theorem](https://img.youtube.com/vi/Idl_0mPzZjE/maxresdefault.jpg)](https://youtu.be/Idl_0mPzZjE?si=Y18VQWEd_-6QLchf)

**TOC: Arden’s Theorem**

> the proof of Arden’s Theorem which states that: If P and Q are two Regular Expressions over Σ and if P does not contain Є, then the equation given by R=Q+RP has a unique solution i.e. R=QP*

[![TOC: An Example Proof using Identities of Regular Expressions](https://img.youtube.com/vi/TkqcPh0BFUw/maxresdefault.jpg)](https://youtu.be/TkqcPh0BFUw?si=l14yFVegEIuHHC97)

**TOC: An Example Proof using Identities of Regular Expressions**

> Shows how to prove (1+00*1)+(1+00*1)(0+10*1)*(0+10*1) is equal to 0*1(0+10*1)* using Identities of Regular Expression.

[![TOC: Designing Regular Expressions](https://img.youtube.com/vi/FOhEmW_nMRs/maxresdefault.jpg)](https://youtu.be/FOhEmW_nMRs?si=9s9IQQE-6oOY0RRA)

**TOC: Designing Regular Expressions**  
Demonstrates how to design Regular Expressions for the following Languages:

1. Language accepting strings of **length exactly 2**  
2. Language accepting strings of **length at least 2**  
3. Language accepting strings of **length at most 2**

[![TOC: NFA to Regular Expression Conversion](https://img.youtube.com/vi/OKFrju0HB7k/maxresdefault.jpg)](https://youtu.be/OKFrju0HB7k?si=ZiKPgLdX61weMebc)

**TOC: NFA to Regular Expression Conversion**  
Topics Discussed:  
1. **Conversion process** of NFA (Non-deterministic Finite Automaton) to Regular Expression  
2. **Conversion process** of NFA (Non-deterministic Finite Automaton) to Regular Expression example 

[![TOC: Conversion of Regular Expression to Finite Automata](https://img.youtube.com/vi/RxfXyvfTsgQ/maxresdefault.jpg)](https://youtu.be/RxfXyvfTsgQ?si=DJIVNDxTsFlplxDR)

**TOC: Conversion of Regular Expression to Finite Automata**  
Shows how to convert Regular Expressions to their equivalent Finite Automata.

[![TOC: Conversion of Regular Expression to Finite Automata - Examples (Part 1)](https://img.youtube.com/vi/62JAy4oH6lU/maxresdefault.jpg)](https://youtu.be/62JAy4oH6lU?si=LkjplLcDbBW3QuUo)

**TOC: Conversion of Regular Expression to Finite Automata - Examples (Part 1)**  
Shows how to convert Regular Expressions to their equivalent Finite Automata.

[![TOC: Pumping Lemma (For Regular Languages)](https://img.youtube.com/vi/dikEDuepOtI/maxresdefault.jpg)](https://youtu.be/dikEDuepOtI?si=A4MmUu_e5t_pbhJ0)

**TOC: Pumping Lemma (For Regular Languages)**  
The concept of Pumping Lemma, which is used to prove that a language is **not regular**.

[![TOC: Pumping Lemma (For Regular Languages) | Example 1](https://img.youtube.com/vi/Ty9tpikilAo/maxresdefault.jpg)](https://youtu.be/Ty9tpikilAo?si=bO3huymbevOM1Bcx)

**TOC: Pumping Lemma (For Regular Languages) | Example 1**  
**Example** of how to prove that a given language is **Not Regular** using **Pumping Lemma**.

[![TOC: Pumping Lemma (For Regular Languages) | Example 2](https://img.youtube.com/vi/kZzH8E-s-9o/maxresdefault.jpg)](https://youtu.be/kZzH8E-s-9o?si=KsmiAmcEVb13FM_v)

**TOC: Pumping Lemma (For Regular Languages) | Example 2**  
**Example** of how to prove that a given language is **Not Regular** using the **Pumping Lemma**.

[![Types of Grammar according to Noam Chomsky](https://img.youtube.com/vi/WgEsPTAL55Q/maxresdefault.jpg)](https://youtu.be/WgEsPTAL55Q?si=1N9GeVmbqxQgHQOo)

**Topics Discussed:**  
1. Types of Grammar according to **Noam Chomsky**  
2. **Grammar**  
3. **Regular Grammar**  
4. Types of Regular Grammar: **Right Linear Grammar** & **Left Linear Grammar**

![alt text](image.png)

[![Finding the input sequence](https://img.youtube.com/vi/vIwxS-sG8-4/maxresdefault.jpg)](https://youtu.be/vIwxS-sG8-4?si=tPgB-Rm-Cl8eiflH)

# ***The description of Moore Machine in TOC with example — Finite set of states, input symbol, transition function, start state, output symbol, and output function.***

[![The description of Moore Machine in TOC](https://img.youtube.com/vi/_88FzOc9GzA/0.jpg)](https://youtu.be/_88FzOc9GzA?si=GSaHn829vQ7t2sTM)

# ***Lec-21: Mealy Machine in TOC | Formal Definition | Mealy Machine in Hindi***

[![Lec-21: Mealy Machine in TOC | Formal Definition | Mealy Machine in Hindi](https://img.youtube.com/vi/kikut5SJVTE/0.jpg)](https://youtu.be/kikut5SJVTE?si=uXFwi50XE7dmiotj)

# ***TOC: Minimization of Deterministic Finite Automata (DFA) in Theory of Computation — Minimization process, need for minimization, and equivalence of states.***

[![TOC: Minimization of Deterministic Finite Automata (DFA)](https://img.youtube.com/vi/hOzc4BUIXRk/0.jpg)](https://youtu.be/hOzc4BUIXRk?si=kCftEYuwh2y_feUm)

# ***TOC: Minimization of DFA - Examples (Part 1)***

[![TOC: Minimization of DFA - Examples (Part 1)](https://img.youtube.com/vi/0XaGAkY09Wc/0.jpg)](https://youtu.be/0XaGAkY09Wc?si=cVwsGwFroQ6mIphu)

# ***Basics of regular part | TOC | THEORY OF COMPUTATION | AUTOMATA | COMPUTER SCIENCE | part-10***

[![Basics of regular part | TOC | THEORY OF COMPUTATION | AUTOMATA | COMPUTER SCIENCE | part-10](https://img.youtube.com/vi/CFa2x8QOr-8/0.jpg)](https://youtu.be/CFa2x8QOr-8?si=ndy0l5JbP0c1_6h1)

# ***Lec-47: What is Context free grammar in TOC | Formal Definition***

[![Lec-47: What is Context free grammar in TOC | Formal Definition](https://img.youtube.com/vi/SlSA9vEXCm4/0.jpg)](https://youtu.be/SlSA9vEXCm4?si=y1VmhUv0tBwXdCjw)

# ***Lec-48: Convert Context free language to Context free grammar with examples | TOC***

[![Lec-48: Convert Context free language to Context free grammar with examples | TOC](https://img.youtube.com/vi/eDAOxyZkl68/0.jpg)](https://youtu.be/eDAOxyZkl68?si=vFAyQislg9lIFAEN)

# ***Pushdown Automata (Introduction)***

[![Pushdown Automata (Introduction)](https://img.youtube.com/vi/4ejIAmp_Atw/0.jpg)](https://youtu.be/4ejIAmp_Atw?si=BcJVryeOC4YCTFcD)

# ***Pushdown Automata (Formal Definition)***

[![Pushdown Automata (Formal Definition)](https://img.youtube.com/vi/JtRyd7Svlew/0.jpg)](https://youtu.be/JtRyd7Svlew?si=aBpxRvX2c5gkg88S)

# ***TOC: Pushdown Automata (Graphical Notation)***

[![TOC: Pushdown Automata (Graphical Notation)](https://img.youtube.com/vi/eY7fwj5jvC4/0.jpg)](https://youtu.be/eY7fwj5jvC4?si=TnaLdl3j3ONPAzhe)

**Topics Discussed:**
1. Graphical notation of pushdown automata  
2. Input symbol  
3. Pop and push symbols  
4. Example of PDA construction  

# ***TOC: Pushdown Automata Example – Even Palindrome (Part 1)***

[![TOC: Pushdown Automata Example – Even Palindrome (Part 1)](https://img.youtube.com/vi/TEQcJybMMFU/0.jpg)](https://youtu.be/TEQcJybMMFU?si=ceWxcJTeC4i-17eF)

**Topics Discussed:**
1. Construction of PDA that accepts even palindromes over the symbols {a, b}  
2. Palindromes  
3. Palindrome examples  
4. Even and odd palindromes  

# ***9.4 aⁿbⁿ example | Pushdown Automata | Design PDA in Theory Of Computation | Automata Theory***

[![9.4 aⁿbⁿ example | Pushdown Automata | Design PDA in Theory Of Computation | Automata Theory](https://img.youtube.com/vi/vClPjqb2rAY/0.jpg)](https://youtu.be/vClPjqb2rAY?si=Uqt-_P4s5dNX2Chh)

# ***Lec-51: Design PDA for 0ⁿ1²ⁿ CFL Language***

[![Lec-51: Design PDA for 0ⁿ1²ⁿ CFL Language](https://img.youtube.com/vi/fc7wLWiDNBM/0.jpg)](https://youtu.be/fc7wLWiDNBM?si=3YtH7A0MuGIKJYMY)

# ***Lec-51: Design PDA for 0ⁿ1²ⁿ CFL Language***

[![Lec-51: Design PDA for 0ⁿ1²ⁿ CFL Language](https://img.youtube.com/vi/fc7wLWiDNBM/0.jpg)](https://youtu.be/fc7wLWiDNBM?si=3YtH7A0MuGIKJYMY)

[![0OgKbFx3mH0](https://img.youtube.com/vi/0OgKbFx3mH0/0.jpg)](https://youtu.be/0OgKbFx3mH0?si=h-kJnXEIIwrtvgWT)

# ***Kleene Closure | TOC | THEORY OF COMPUTATION | AUTOMATA | COMPUTER SCIENCE | part-8***

[![Kleene Closure | TOC | THEORY OF COMPUTATION | AUTOMATA | COMPUTER SCIENCE | part-8](https://img.youtube.com/vi/Lp_FFsY5CLw/0.jpg)](https://youtu.be/Lp_FFsY5CLw?si=5vmcNSsJp0wbz6QD)

# ***Lec-4: Power of Sigma Σ in TOC | Kleene closure in TOC***

[![Lec-4: Power of Sigma Σ in TOC | Kleene closure in TOC](https://img.youtube.com/vi/4Q2rE6R31GU/0.jpg)](https://youtu.be/4Q2rE6R31GU?si=Plo-QIQh7CKf21u7)

**Description:**  
"Power of Σ" refers to the expressive capabilities or computational strength of the alphabet Σ and the languages that can be constructed over that alphabet.

**Topics Discussed:**
- Introduction  
- Power of Sigma  
- Sigma Star (Kleene closure)  
- Positive Closure  

# ***1.4 What is Kleene Closure ∑* and Positive Closure ∑+ | Theory of Computation | Automata Theory***

[![1.4 What is Kleene Closure ∑* and Positive Closure ∑+ | Theory of Computation | Automata Theory](https://img.youtube.com/vi/u9McYuXTYVY/0.jpg)](https://youtu.be/u9McYuXTYVY?si=GmXntuM2jik_LR9K)

# ***Derivation Tree (Left & Right Derivation Trees)***

[![Derivation Tree (Left & Right Derivation Trees)](https://img.youtube.com/vi/u4-rpIlV9NI/0.jpg)](https://youtu.be/u4-rpIlV9NI?si=VH4fYZ1ov5Iz_BZi)

# ***TOC: Ambiguous Grammar | Ambiguous Grammars and Example***

[![TOC: Ambiguous Grammar | Ambiguous Grammars and Example](https://img.youtube.com/vi/wQjppolFdas/0.jpg)](https://youtu.be/wQjppolFdas?si=pDC4cP9vFQkIMKdL)

# ***Ambiguous Grammar | Unambiguous Grammar***

[![Ambiguous Grammar | Unambiguous Grammar](https://img.youtube.com/vi/qw1PH2CX_f0/0.jpg)](https://youtu.be/qw1PH2CX_f0?si=3GNNMWd3WyXQC_h2)

# ***Check Whether Grammar is Ambiguous or Not***

[![Check Whether Grammar is Ambiguous or Not](https://img.youtube.com/vi/WYkALp7lnTs/0.jpg)](https://youtu.be/WYkALp7lnTs?si=G5vFD3AgrmiQjOnT)

# ***Check Whether the Given Grammar is Ambiguous or Not***

[![Check Whether the Given Grammar is Ambiguous or Not](https://img.youtube.com/vi/xkyCnzDCfGw/0.jpg)](https://youtu.be/xkyCnzDCfGw?si=ClRxnOxztLHioKH1)

# ***3.13 Practice Problem for NFA to DFA Conversion In Hindi | Practice Question for NFA to DFA | TOC***

[![3.13 Practice Problem for NFA to DFA Conversion In Hindi | Practice Question for NFA to DFA | TOC](https://img.youtube.com/vi/SKz4A4wUc68/0.jpg)](https://youtu.be/SKz4A4wUc68?si=w_qZcVg6Q3S9J803)

# ***TOC: Minimization of DFA - Examples (Part 2)***

[![TOC: Minimization of DFA - Examples (Part 2)](https://img.youtube.com/vi/ex9sPLq5CRg/0.jpg)](https://youtu.be/ex9sPLq5CRg?si=VkqK96IS7qXWAyiL)

# ***Pumping Lemma (For Regular Languages) | Example 2***

[![Pumping Lemma (For Regular Languages) | Example 2](https://img.youtube.com/vi/kZzH8E-s-9o/0.jpg)](https://youtu.be/kZzH8E-s-9o?si=19SJva32jyp2xcLV)

# ***6.8 Problem Solving on Regular Grammar | Important PYQs on Regular Grammar | Theory of Computation***

[![6.8 Problem Solving on Regular Grammar | Important PYQs on Regular Grammar | Theory of Computation](https://img.youtube.com/vi/9JtmTDrMUZU/0.jpg)](https://youtu.be/9JtmTDrMUZU?si=VMDPfgp0CKbSQqfu)

# ***Grammar Production Rules and Different Types | Theory of Computation***

[![Grammar Production Rules and Different Types | Theory of Computation](https://img.youtube.com/vi/8Th7KB0uEqs/0.jpg)](https://youtu.be/8Th7KB0uEqs?si=n-FH7ASpSm9Z1Bsh)

# ***2.2 How to Design Deterministic Finite Automata (DFA) | Theory of Computation | Automata Theory***

[![2.2 How to Design Deterministic Finite Automata (DFA) | Theory of Computation | Automata Theory](https://img.youtube.com/vi/00cXiux2Kjk/0.jpg)](https://youtu.be/00cXiux2Kjk?si=uachjn4yzoy3QgPZ)

# ***Lec-12: DFA of all binary strings divisible by 3 | DFA Example 5***

[![Lec-12: DFA of all binary strings divisible by 3 | DFA Example 5](https://img.youtube.com/vi/DNDQdd4VLR4/0.jpg)](https://youtu.be/DNDQdd4VLR4?si=wlsl9jXM-ncFAYUV)

# ***C Programming Most Important MCQ For JECA 2022 [PART-1] | MCQ For JECA 2022 | JECA Exam***

[![C Programming Most Important MCQ For JECA 2022 [PART-1] | MCQ For JECA 2022 | JECA Exam](https://img.youtube.com/vi/kIO31GoN_40/0.jpg)](https://youtu.be/kIO31GoN_40?si=hOSdUGxpzf2YJUVv)


# ***MCA***
 
- ***Can be two to three years***
- ***Going to be held on 30 june***
- ***Timing around 2hrs***

## ***Analysis of question***

- ***Total number of questions = 100***

- ***Total marks = 120***

- ***There are two categories***

### ***Category-1***

- 80 ***MCQ Questions***

- ***With 4 Options***

- ***Carries 1 mark each***

- ***Will be carrying Nagative marks***
  - 1/4 = 0.25 = 25%

- ***Only one could be correct***

### ***Category-2***

- 20 ***MCQ Questions***

- ***With 4 Options***

- ***Carries 2 mark each***

- ***Will be carrying no Nagative marking***

- ***Multiple options could be correct***

## ***Syllabus***

- ***C programming***
- ***OOPS***
- ***Computer Networks***
- ***OS***
- ***Computer Archetechture***
- ***DSA***
- ***DBMS***
- ***Software Engineering***
- ***Machine Learning***

# JECA-2023

 https://cdnbbsr.s3waas.gov.in/s3d2a27e83d429f0dcae6b937cf440aeb1/uploads/2023/11/2023110987-1.pdf

```markdown
## 1. What is the output of the following program ? 
```
```c
 #include <stdio.h> 
 void main ( ) 
 { 
  int a = 40; 
  float b; 
  b = ++a; 
  printf(“%d, %f”, a, ++b); 
 } 
```

```bash
 (A) 41, 42.000000 (B) 41, 42 
 (C) 41, 41.000000 (D) 41, 41
```

> `(A) 41, 42.000000`

```markdown
## 2. What is the output of the following program ? 
```
```c
 #include <stdio.h> 
 void main ( ) 
 { 
  int a = -7; 
  float b; 
  b = a++; 
  printf(“%d, %f”, a, ++b); 
 } 
```
```bash
 (A) -6, -7.000000 (B) -5, -6 
 (C) -6, -6.000000 (D) -6, -6
```

```
 a++ post-increments a. b = a++ assigns the current value of a (-7.0) to b, then increments a to -6.
 ++b pre-increments b to -6.0.
 printf prints a as -6 and ++b as -6.000000.
 ```

 > `(C) -6, -6.000000 ✔`

 ```markdown
 ## 3. What is the output of the following program ? 
 ```
 ```c
 #include <stdio.h> 
 void main ( ) 
 { 
  int i = -1; 
  printf(“sizeof(i) = %d”, sizeof(i)); 
 } 
 ```

 ```bash
 (A) Compiler Error (B) sizeof(i) = -1 
 (C) sizeof(i) = 1 (D) sizeof(i) = 4 
 ```

 ```
 sizeof Operator: The sizeof operator returns the size, in bytes, of its operand. In this case, the operand is the variable i, which is of type int.
 size of int: In most modern 32-bit and 64-bit C environments, the size of an int data type is 4 bytes. The value stored in the variable (-1) does not affect its size.

 sizeof returns the bytes on the basis of data type
 ```

 > `(D) sizeof(i) = 4`

```markdown
## 4. What is the output of the following program ?
```

 ```c
 #include <stdio.h> 
 void main( ) 
 { 
  int x = -1, y = 1, z = 0; 
  if(x && y++ && z) 
   ++x, y++, --z; 
  printf(“%d, %d, %d”, x++, y++, z++); 
 } 
 ```
 ```bash
 (A) 0, 3, 0 (B) Compiler Error 
 (C) -1, 2, 0 (D) 1..0
 ```
 ```
 The condition x && y++ && z evaluates to (-1 && (y++=1) && 0). Since z is 0 (false), the condition fails. However, y++ is evaluated, so y becomes 2.
 The if block is skipped.
 printf prints the current values: x=-1, y=2, z=0. Then, due to post-increment, the variables are updated after printing.
 ```
 > `(C) -1, 2, 0`

```markdown
## 5. What is the output of the following program ? 
```

 ```c
 #include <stdio.h> 
 enum colors{RED, BROWN, ORANGE}; 
 void main( ) 
 { 
  printf (“%ld..%f..%d”, RED, BROWN, ORANGE); 
 } 
 ```

 ```bash
 (A) Compiler Error (B) 0..0.000000..1 
 (C) 0..1.000000..2 (D) Runtime Error 
 ```
  > `(A) Compiler Error`
 
```markdown
## 6. What is the output of the following program ?
```

 ```c 
 #include <stdio.h> 
 void main ( ) 
 { 
  char M = ‘M’; 
  printf(“%d, %c”, M, M); 
 } 
 ```
 ```bash
 (A) Runtime Error (B) Compiler error 
 (C) 76, M (D) 77, M 
 ```

 > `(D) 77, M `
 
 ```markdown
 ## 7. What is the output of the following program ? 
 ```

 ```c
 #include <stdio.h> 
 void main( ) 
 { 
  int i = -9; 
  printf(“%d %d %d”, i++, ++i, ++i); 
 } 
 ```

 ```bash
 (A) Compiler error (B) -6 -7 -8 
 (C) -7 -7 -8 (D) -7 -6 -6 
 ```

 ```
 ++i → pre-increment (increments first, then returns new value).
 In C, the order of evaluation of function arguments is unspecified.
 i++, ++i, and ++i are all modifying i. But there is no sequence point between them. So the result depends on the order the compiler chooses to evaluate arguments.
 This means the program causes undefined behavior in C.
 ```
 
 > `(D) -7 -6 -6`

```markdown
## 8. What is the output of the following program ?
```

 ```c 
 #include<stdio.h> 
 void main( ) 
 { 
  int **ptr; // declares a double pointer. This pointer itself is uninitialized, meaning it holds a garbage address.
  int temp = 65; 
  ptr[0] = &temp; // The line ptr[0] = &temp; attempts to store the address of temp (which is 65) into the memory location pointed to by the uninitialized ptr. This causes a Segmentation Fault. Since ptr is uninitialized, trying to access the memory it points to (*ptr) will likely cause a runtime error.
  printf(“%d”, ptr[0][0]); 
 } 
```
 ```bash
 (A) Compiler error (B) 65 
 (C) Segmentation Fault (D) Runtime Error 
 ```
 ```
 The pointer ptr is declared but not initialized. It does not point to any valid memory location. The statement ptr[0] = &temp; tries to write to an arbitrary memory address, which causes a segmentation fault.
 ```
  
  > `Segmentation Fault` 

```markdown
## 9. What is the output of the following program ? 
```

 ```c
 #include <stdio.h> 
 #include <stdlib.h> 
 void main( ) 
 { 
  int *ptr; 
  ptr = (int*) calloc(3, sizeof(int)); 
  ptr[2] = 30; 
  printf(“%d”, *ptr); 
  free(ptr); 
 } 
 ```

 ```bash
 (A) 30 (B) 0 
 (C) calloc (D) Error 
 ```

 ```
  The calloc function initializes the allocated memory to zero.
  *ptr is the first element of this zero-initialized array, so it prints 0.
 ```

 > `(B) 0`
 
 ```markdown
 ## 10. ______________ interrupt may happen due to power failure.
 ```

 ```bash
 (A) I/O (B) Timer 
 (C) Hardware (D) Program 
 ```

  > `(C) Hardware ✔`

 ```markdown
## 11. Address of the next instruction to be executed is specified by ______________. 
 ```
 
 ```bash
 (A) MBR (B) MAR 
 (C) PSW (D) PC 
 ```

 ```
  The Program Counter (PC) register holds the address of the next instruction to be fetched and executed.
  ```

  > `(D) PC`

```markdown
## 12. Auxiliary memory is also known as ______________ memory. 
```

 ```bash
 (A) Primary (B) Secondary 
 (C) Binary (D) Quad 
 ```

 > `Secondary ✔`

 ```markdown
 ## 13. BIOS means ______________. 
 ```

 ```bash
 (A) basic input/output system (B) best input/output system 
 (C) basic input system (D) basic output system 
 ```
 
 > `basic input/output system ✔`

 ```markdown
 ## 14. _________ is the most appropriate scheduling in case of a time-shared operating system.
 ```

 ```bash
 (A) FCFS (B) RR 
 (C) SJF (D) SRTF 
 ```

 ```
  Round Robin (RR) scheduling is designed for time-sharing systems.
 ```

  (B) RR ✔
 
 ```markdown
 ## 15. If only one process can be able to access a particular resource at a time, then it is known as ______________. 
```

 ```bash
  (A) Mutual execution (B) Mutual exclusion 
  (C) Multiple execution (D) Multiple exclusion 
 ```

 ```
  The principle that ensures only one process can access a critical resource at a time is called Mutual Exclusion.
  ```

  > `(B) Mutual exclusion ✔`

   ```markdown
 ##  16. Resource allocation graph is used to represent ______________. 
 ```

 ```bash
  (A) deadlock (B) virtual memory 
  (C) main memory (D) scheduling 
 ```

 ```
  A Resource Allocation Graph (RAG) is a directed graph that visually represents the state of a system in terms of processes, resources, and allocations. It is primarily used to detect deadlocks.
  ```

  > `(A) deadlock` 

  ```markdown
 ##  17. Banker’s algorithm for resource allocation deals with ______________. 
 ```

 ```bash
  (A) mutual exclusion (B) mutual inclusion 
  (C) deadlock recovery (D) deadlock avoidance
 ```

  > `(D) deadlock avoidance ✔`
 
```markdown 
##  18. Page fault means ______________.
```
```bash 
  (A) required page is available in main memory 
  (B) required page is not available in main memory 
  (C) segment number 
  (D) reduce page I/O 
 ```

  > `(B) required page is not available in main memory ✔`
  
  ```markdown
## 19. ___________ is a technique to move a process from main memory to secondary memory.
```
``` bash
  (A) Deadlock (B) Synchronization 
  (C) Caching (D) Swapping 
 ```

  > `(D) Swapping ✔`

```markdown
## 20. Demand paging is considered as ______________.
```
```bash
    (A) fetching a page when not needed (B) switching between two processes 
    (C) fetching a page only when needed (D) switching between two threads 
 ```
 > `(C) fetching a page only when needed`

 ```markdown
 ## 21. Thrashing means a condition having ______________.
 ```
 ```bash
     (A) minimum paging (B) optimized paging 
     (C) synchronized paging (D) excessive paging
 ```
 > `(D) excessive paging ✔`
 
 ```markdown
 ## 22. A counting semaphore is initialized to 15. Then, 4 wait  operations and 2 signal operations are completed on this  semaphore. The resulting value of the semaphore is ____________.
 ```
 ```bash
     (A) 11 (B) 13 
     (C) 17 (D) 19 
 ```
 > `(B) 13 ✔`
 
 ```markdown
 ## 23. What do you mean by fork( ) ? Choose the correct option.
 ```
 ```bash
  (A) Starvation (B) Creation of new task 
  (C) Demand paging (D) Semaphore 
 ```

 > fork( ) means creation of a new task

 > `(B) Creation of new task ✔`
 
 ```markdown
 ## 24. In file management, FAT means ______________.
 ```
 ```bash
  (A) Feature Access Table (B) File Access Table 
  (C) Fault Allocation Table (D) File Allocation Table 
 ```
 > `(D) File Allocation Table`
 
 ```markdown
 ## 25. What is the output of the following program ?
 ```
 ```cpp
  #include <iostream> 
  using namespace std; 
  int addition (int a, int b) 
  { 
     return a+b; 
  } 
  double addition (double a, double b) 
  { 
     return a+b; 
  } 
  int main () 
  { 
     cout<< addition (35,20) << ";"; 
     cout<< addition (34.1,12.7); 
     return 0; 
  } 
 ```
 ```bash
  (A) 55;46.8 (B) Compile Error 
  (C) Runtime Error (D) Segmentation Fault 
 ```
 > `(A) 55;46.8`
 
 ```markdown
 ## 26. What is the output of the following program ?
 ```
 ```cpp
  #include <iostream> 
  using namespace std; 
  template <class C1, class C2> 
  bool is_equal (C1 var1, C2 var2) 
  { 
     return (var1 == var2); 
  } 
  int main () 
  { 
     if (is_equal(10,10.0)) 
      cout<< "Equal"; 
     else 
      cout<< "Not equal"; 
     return 0; 
  } 
 ```
 ```bash
  (A) Equal (B) Not equal 
  (C) Compile Error (D) Runtime Error 
 ```
 ```
  The function template is_equal compares an int (10) and a  double (10.0). The values are numerically equal, so the  function returns true.
 ```

 > `(A) Equal ✔`
 
 ```markdown
 ## 27. What is the output of the following program ?
 ```
 ```cpp
  #include <iostream> 
  using namespace std; 
  int main() 
  { 
     int var = 0; 
  
     while ( var< 10 ) 
     { 
      cout<< var << " "; 
      var++; 
     } 
     cout<< var; 
     return 0; 
  } 
 ```
 ```bash
  (A) 0 1 2 3 4 5 6 7 8 9 10 (B) 0 1 2 3 4 5 6 7 8 9 
  (C) 1 2 3 4 5 6 7 8 9 10 (D) 1 2 3 4 5 6 7 8 9 
 ```
 > `(A) 0 1 2 3 4 5 6 7 8 9 10 ✔`
 
 ```markdown
 ## 28. What is the output of the following program ?
 ```
 ```cpp
  #include <iostream> 
  using namespace std; 
  struct demo 
  { 
     int var; 
  }; 
  int main() 
  {   
     demo str; // Creates a variable 'str' of type struct demo
     demo *ptr;  // Creates a pointer 'ptr' that can point to a struct demo object
  
     str.var = 100; // Sets the 'var' member of the 'str' object to 100
     ptr = &str; // Assigns the address of 'str' to the pointer 'ptr'
     cout<<ptr->var; 
     return 0; 
  } 
 ```
 ```bash
  (A) 100 (B) Memory address of var 
  (C) Compile Error (D) L-value Error 
 ```
 > `(A) 100 ✔`
 
 ```markdown
 ## 29. What is the output of the following program ?
 ```
 ```cpp
  #include <iostream> 
  using namespace std; 
  int main () 
  { 
     int c1 = 10; 
     int c2 = 20; 
     { 
      int c1; // This declares a new c1 local to the inner block
      c1 = 50; 
      c2 = 50; // This doesnt declares a new c1 local to the  inner block
      cout<< "c1= " << c1 << ", c2= "<< c2; 
     } 
     cout<< "; c1= " << c1 << ", c2= "<< c2; 
     return 0; 
  } 
 ```
 ```bash
  (A) c1= 50, c2= 50; c1= 10, c2= 50 (B) c1= 10, c2= 20; c1= 10,  c2= 20 
  (C) c1= 50, c2= 50; c1= 10, c2= 20 (D) c1= 10, c2= 20; c1= 10,  c2= 50 
 ```
 > `(A) c1= 50, c2= 50; c1= 10, c2= 50 ✔`
 
 ```markdown
 ## 30. What is the output of the following program ?
 ```
 ```cpp
  #include <iostream> 
  using namespace std; 
  
  class Demo { 
  public: 
  static int count;  // Shared by ALL objects of class Demo
  Demo () {
   count++; // Increment the shared count every time a constructor runs
   } 
  }; 
  
  int Demo::count = 0; 
  
  int main () 
  { 
     Demo var1; //  calls the constructor once: count becomes 1.
     Demo var2[5];  // Creates an array of 5 Demo objects. Calls the constructor 5 times.
     cout<< var1.count; // var1.count accesses the shared static  member, which is 6.
     return 0; // Total increments: 1 + 5 = 6.
  } 
 ```
 ```bash
  (A) 6 (B) 1 
  (C) 2 (D) 5 
 ```

 > `(A) 6`
 
 ```markdown
 ## 31. What is the output of the following program ?
 ```
 ```cpp
  #include<iostream> 
  using namespace std; 
  
  void print(); // Function Declaration: Declared to return 'void' (it does not return a value).
  int main() // The main() function tries to assign the non-existent return value of print() to an integer variable var.
  { 
     int var = 0; 
     var = print(); // not assign anything to var because its not returning anything
     cout<< var; 
     return 0; 
  } 
  
  void print() 
  { 
     cout<< "Hi"; 
  } 
 ```
 ```bash
  (A) Compile Error (B) Hi 
  (C) 0 (D) Hi0 
 ```
 ```
  The statement var = print(); assign this void return value to  an int variable var. This is invalid and causes a compile-time  error.
 ```

 > `(A) Compile Error`
 
 ```markdown
 ## 32. What is the output of the following program ?
 ```
 ```cpp
  #include <iostream> 
  using namespace std; 
  
  int main() 
  { 
     int var = 2; 
     do 
     { 
      cout<<var; 
     }while(var--); 
 
     return 0;
 
  } 
 ```
 ```bash
  (A) 210 (B) 21 
  (C) 2 (D) 1 
 ```
 > `(A) 210 ✔`
 
 ```markdown
 ## 33. In shell script, which command is used to create a new  directory ?
 ```
 ```bash
     (A) vi (B) touch 
     (C) cd (D) mkdir
 ```
 > `(D) mkdir ✔`
 
 ```markdown
 ## 34. In shell script, which command is used to copy a file ?
 ```
 ```bash
     (A) copy (B) cpy 
     (C) cp (D) cy 
 ```
 > `cp ✔`
 
 ```markdown
 ## 35. In shell script, which command is used to delete a file ?
 ```
 ```bash
  (A) delete (B) del 
  (C) remove (D) rm 
 ```
 > `rm ✔`
 
 ```markdown
 ## 36. In Unix/Linux platform, which command is used to find  out the difference between two files ?
 ```
 ```bash
     (A) diff (B) comm 
     (C) du (D) whereis 
 ```
 > `diff ✔`
 
 ```markdown
 ## 37. In Unix/Linux platform, which command is used to create  a symbolic link ?
 ```
 ```bash
  (A) ls -s (B) ls -i 
  (C) ln -sym (D) ln -s 
 ```

 > In Unix/Linux platform, ls -i is the command which is used to create  a symbolic link.

 > `ls -i`
 
 ```markdown
 ## 38. In Unix/Linux platform, which command is used to view  the inode number of a file ?
 ```
 ```bash
  (A) ls -i (B) ls -a 
  (C) ls -l (D) ls -r 
 ```

 > `(A) ls -i`
 
 ```markdown
 ## 39. In Unix/Linux platform, which command is used to specify  the access mode for files ?
 ```
 ```bash
     (A) chmod (B) cm 
     (C) am (D) chacc 
 ```
 
 > `(A) chmod`
 
 ```markdown
 ## 40. In Unix/Linux platform, _________ command is used to  show current running processes.
 ```

 ```bash
     (A) ps (B) ls 
     (C) sh (D) du 
 ```

 > In Unix/Linux platform, ps is the command that is used to  show current running processes.

 > `(A) ps`
 
 ```markdown
 ## 41. In singly linked list, the time complexity for insertion  at a particular node is ___________.
 ```
 ```bash
     (A) O(1) (B) O(n2) 
     (C) O(n) (D) O(n logn) 
 ```
 ```
 To insert at a particular node in a singly linked list,  you must first traverse the list to find the insertion  point. This traversal has a worst-case time complexity of O (n).
 ```
 > `(C) O(n)`
 
 ```markdown
 ## 42. In stack data structure, ______________ operation is not  permitted.
 ```
 
 ```bash
     (A) Push (B) Pop 
     (C) Empty_Check (D) Enqueue
 ```

 > `(D) Enqueue ✔`
 
 ```markdown
 ## 43. In tree data structure, the in-degree of root node is  always ______________.
 ```
 ```bash
  (A) 0 (B) 1 
  (C) 2 (D) 3 
 ```

 ```
  The root node has no parent, so its in-degree is always 0.
 ```

 > `(A) 0`
 
 ```markdown
 ## 44. In binary tree data structure, using depth-first  approach, preorder traversal means _______.
 ```
 ```bash
     (A) Root → Left-Subtree → Right-Subtree 
     (B) Left-Subtree → Root → Right-Subtree 
     (C) Left-Subtree → Right-Subtree → Root 
     (D) Left-Subtree → Right-Subtree 
 ```
 ```
      Preorder Traversal visits nodes in the order: Root, then  Left Subtree, then Right Subtree.
 ```
 > `(A) Root → Left-Subtree → Right-Subtree ✔`
 
 ```markdown

 ## 45. Find out the wrong statement based on the  characteristics of AVL tree data structure.
 ```

 ```bash
     (A) AVL tree is a binary search tree in nature. 
     (B) AVL tree is known as height-balanced tree. 
     (C) AVL tree has O(log2 n) search time complexity  considering ‘n’ as number of nodes. 
     (D) AVL tree has O(n) search time complexity considering  ‘n’ as number of nodes. 
 ```
 > `(D) AVL tree has O(n) search time complexity considering  ‘n’ as number of nodes.`
 
 ```markdown
 ## 46. Example of non-linear data structure is ______________.
 ```
 ```bash
     (A) Linked-list (B) Graph 
     (C) Queue (D) Stack 
 ```

 > `(B) Graph ✔`
 
 ```markdown
 ## 47. Bubble sort algorithm has a worst-case time complexity  of ______________.
 ```
 ```bash
  (A) O(n) (B) O(n²)
  (C) O(n^3) (D) O(n^4) 
 ```
 > ` O(n²)`
 
 ```markdown
 ## 48. Insertion sort algorithm has a best-case time complexity  of ______________.
 ```
 ```bash
  (A) O(n) (B) O(n2) 
  (C) O(n3) (D) O(n4) 
 ```

 > `(A) O(n)`
 
 ```markdown
 ## 49. In machine learning, VC dimension is used to measure the  capacity of a set of functions. VC means ______________.
 ```
 ```bash
  (A) Vapnik–Chervonenkis (B) Vipnak–Charvonenkis 
  (C) Virtual Connectivity (D) Variable Connectivity 
 ```
 > `(A) Vapnik–Chervonenkis`
 
 ```markdown
 ## 50. Artificial Neural networks are ______________ algorithms.
 ```
 ```bash
  (A) computational (B) non-computational 
  (C) fictional (D) ready-made 
 ```
 > `(A) computational ✔`
 
 ```markdown
 ## 51. One-class SVM is ______________ algorithm.
 ```
 ```bash
  (A) unsupervised (B) supervised 
  (C) wrapper (D) filter 
 ```

 > `(A) unsupervised ✔`
 
 ```markdown
 ## 52. Time complexity of K-Means clustering is ______________.
 ```

 ```bash
  (A) O(kN) (B) O(kN2) 
  (C) O(k+N) (D) O(k+N2) 
 ```
 > `(A) O(kN)`
 
 ```markdown
 ## 53. ______________ algorithm is used to find out the  shortest path between two points in a connected weighted graph.
 ```
 ```bash
  (A) Kruskal (B) K-Means 
  (C) BIRCH (D) Ward 
 ```

 >  Dijkstra’s algorithm is used to find out the  shortest path between two points in a connected weighted graph.

 > `Dijkstra’s algorithm`
 
 ```markdown
 ## 54. Forward–backward algorithm is used in case of HMM to compute ______________ of all hidden state variables.
 ```

 ```bash
  (A) posterior marginal (B) posterior vacuum 
  (C) prior marginal (D) prior vacuum
 ```

```
 Hidden Markov Model (HMM): A statistical model where the system is assumed to be a Markov process with hidden (unobserved) states.

Posterior Marginal:

Posterior: A probability that is calculated after taking into account the observed evidence. 
Marginal: In this context, it refers to the probability for a single hidden state variable at a specific time
```

 > `Posterior Marginal`
 
 ```markdown
 ## 55. HMM is a specific instance of CRF which is known as  ______________.
 ```
 ```bash
  (A) conditional random fields (B) characterised routine fields 
  (C) characterised random fields (D) conditional routine fields 
 ```
 > `(A) conditional random fields ✔`
 
 ```markdown
 ## 56. In FP-Growth Algorithm, FP means ______________.
 ```

 ```bash
  (A) frequent pattern (B) first pattern 
  (C) favourite pattern (D) find pattern 
 ```
 
 > `(A) frequent pattern`
 
 ```markdown
 ## 57. In software engineering, what is the full form for PERT  chart ?
 ```
 ```bash
  (A) Project Evaluation and Review Technique 
  (B) Performance Evaluation and Review Technique 
  (C) Program Evaluation and Review Technique 
  (D) Part Evaluation and Review Technique
 ```

 > `(C) Program Evaluation and Review Technique is the full form for PERT`
 
 ```markdown
 ## 58. In software engineering, the testing performed by  development team is known as _______.
 ```

 ```bash
  (A) Acceptance testing (B) α testing 
  (C) β testing (D) validation testing 
 ```

 > `(B) α testing ✔`
 
 ```markdown
 ## 59. In software engineering, a prototyping model can be used  when ______________.
 ```
 ```bash
  (A) Technical solutions are unclear to the development team 
  (B) Technical solutions are clear to the development team 
  (C) Models are unclear to the development team 
  (D) Feasibility solutions are unclear to the development team 
 ```

 > `(A) Technical solutions are unclear to the development team`
 
 ```markdown
 ## 60. In classical waterfall model, which phase comes before the design phase ?
 ```
 ```bash
  (A) Maintenance 
  (B) Coding and unit testing 
  (C) Integration and system testing 
  (D) Requirements analysis and specification 
 ```
 
 > `(D) Requirements analysis and specification`
 
 ```markdown
 ## 61. In software engineering, which of the following is not a  type of cohesion ?
 ```

 ```bash
  (A) Projection (B) Procedural 
  (C) Logical (D) Temporal 
 ```

```
 🔹 Types of Cohesion
 Coincidental cohesion
 Logical cohesion
 Temporal cohesion 
 Procedural cohesion
 Communicational cohesion
 Sequential cohesion 
 Functional cohesion 
```

> Projection is not a type of cohesion

 > `Projection`
 
 ```markdown
 ## 62. In software engineering, which of the following is not a  type of coupling ?
 ```

 ```bash
  (A) Data (B) Connection 
  (C) Control (D) Stamp 
 ```

```
 Types of Coupling: 
 i. Data coupling 
 ii. Stamp coupling 
 iii. Control coupling 
 iv. Common coupling
 v. External coupling
 vi. Content coupling
 ```

 > Connection is not a type of coupling

 > `Connection`
 
 ```markdown
 ## 63. Choose the correct option as the activities of the first  quadrant of Spiral model.
 ```

 ```bash
  (A) Determine objectives, alternatives and constraints 
  (B) Evaluate alternatives 
  (C) A detailed analysis of each project task 
  (D) Develop and validate next level of the product 
 ```

 > `(A) Determine objectives, alternatives and constraints ✔`
 
 ```markdown
 ## 64. Choose the appropriate black-box testing technique in  software engineering.
 ```

 ```bash
     (A) Boundary value analysis (B) Verification testing 
     (C) Validation testing (D) Acceptance testing 
 ```

 > Boundary value analysis is a black box testing

 > `(A) Boundary value analysis`
 
 ```markdown
 ## 65. In User Datagram packet format, the size of the header  is ______________.
 ```

 ```bash
     (A) 8 bytes (B) 8 bits 
     (C) 4 bytes (D) 4 bits 
 ```

 > size of header is 8 bytes

 > `(A) 8 bytes`
 
 ```markdown
 ## 66. Transmission Control Protocol (TCP) offers  ______________ service in which data can flow in both  directions at the same time.
 ```

 ```bash
     (A) full-duplex (B) half-duplex 
     (C) bit-duplex (D) byte-duplex 
 ```

 > `(A) full-duplex ✔`
 
 ```markdown
 ## 67. Example of a two-layer switch is ______________.
 ```

 ```bash
  (A) bridge (B) router 
  (C) LAN (D) WAN 
 ```

 > bridge is a example of two layer switch

 > `(A) bridge`
 
 ```markdown
 ## 68. A ______________ routing table contains information entered manually.
 ```

 ```bash
  (A) static (B) dynamic 
  (C) RIP (D) OSPF 
 ```
 
 > `(A) static`
 
 ```markdown
 ## 69. BOOTP is ______________ layer protocol.
 ```

 ```bash
     (A) application (B) physical 
     (C) network (D) datalink 
 ```

 > BOOTP is a application layer

 > `(A) application ✔`
 
 ```markdown
 ## 70. ICMP always reports error messages to the original  ______________.
 ```

 ```bash
  (A) source (B) destination 
  (C) router (D) bridge 
 ```

 > `(A) source ✔`
 
 ```markdown
 ## 71. The ____________ program uses ICMP messages and TTL field in IP packet to find route.
 ```
 ```bash
  (A) traceroute (B) ftp 
  (C) trace (D) tftp 
 ```
 > `(A) traceroute ✔`
 
 ```markdown
 ## 72. SNMP is ______________ level protocol.
 ```

 ```bash
  (A) application (B) physical 
  (C) network (D) datalink 
 ```
 
 > SNMP is application level protocol 

 > `(A) application`
 
 ```markdown
 ## 73. Which key can be derived directly from a Super Key ?
 ```

 ```bash
     (A) Primary key (B) Foreign key 
     (C) Candidate key (D) Database key 

 ```
 > `(C) Candidate key ✔`
 
 ```markdown
 ## 74. Relational Algebra is ______________ query language.
 ```

 ```bash
     (A) Non-procedural (B) Schema 
     (C) Singleton (D) Procedural 
 ```

> Relational Algebra is Procedural query language.

 > `(D) Procedural`
 
 ```markdown
 ## 75. In case of union compatibility, ______________
 ```

 ```bash
     (A) two relations must have same set of attributes. 
     (B) relations can have any set of attributes. 
     (C) two relations must have different set of attributes. 
     (D) no relations are union compatible. 
 ```

 > `(A) two relations must have same set of attributes. ✔`
 
 ```markdown
 ## 76. Which option cannot be used with “ALTER table” command  in SQL ?
 ```

 ```bash
     (A) Modify (B) Drop 
     (C) Add (D) Delete 
 ```

 > Delete option cannot be used with “ALTER table” command in SQL

 > `(D) Delete`
 
 ```markdown
 ## 77. Third normal form (3NF) removes ______________ from a  relation.
 ```
 
 ```bash
     (A) MVD (B) Determinants 
     (C) Transitive dependency (D) Schemas 
 ```

 > `(C) Transitive dependency ✔`
 
 ```markdown
 ## 78. Which option is not a step for query processing ?
 ```

 ```bash
     (A) Scanning, parsing and semantic analysis (B) Query  optimization 
     (C) Query code generator (D) Meta data organizer 
 ```

 > (D) Meta data organizer is not a step for query processing. 

 > `(D) Meta data organizer `
 
 ```markdown
 ## 79. Which of the following option is not a transaction  state ?
 ```

 ```bash
  (A) Active (B) Partially committed 
  (C) Terminated (D) Updated 
 ```

 ```
 The states of a transaction are: Active, Partially Committed, Committed, Failed, and Terminated.
 ```

 >  Updated is not a transection state

 > `(D) Updated`
 
 ```markdown
 ## 80. Which of the following option does not have any partial functional dependencies ?
 ```

 ```bash
  (A) BCNF (B) 4NF 
  (C) 3NF (D) 2NF
 ```
 > `(D) 2NF ✔`
 
 ```markdown
 ## 81. In C programming, which file operations are valid ?
 ```
 ```bash
     (A) fopen (B) fclose 
     (C) fprintf (D) fscanf 
 ```

 > ` (A) fopen (B) fclose (C) fprintf (D) fscanf `
 
 ```markdown
 ## 82. Specify the functions mentioned in “string.h” header  file.
 ```

 ```bash
     (A) strcat (B) strcmp 
     (C) strlen (D) strpoly 
 ```
 
 > `(A) strcat (B) strcmp (C) strlen`
 
 ```markdown
 ## 83. Basic elements of a computer mean ______________.
 ```
 ```bash
     (A) Central Processing Unit (B) Centered Processing Unit 
     (C) Main Memory (D) Daemon Process 
 ```

 > `(A) Central Processing Unit (C) Main Memory`
 
 ```markdown
 ## 84. Select the correct I/O communication techniques from the  following options.
 ```

 ```bash
  (A) Direct Memory Access (B) Virtual Drum Access 
  (C) Programmed I/O (D) Interrupt Driven I/O 
 ```

 > Direct Memory Access a I/O communication technique.
 
 > `(A) Direct Memory Access`
 
 ```markdown
 ## 85. Select the correct buffering types in I/O management.
 ```

 ```bash
  (A) Single buffering (B) Multiple buffering 
  (C) Double buffering (D) Circular buffering 
 ```

 > `(C) Double buffering (D) Circular buffering are the correct buffering types in I/O management`
 
 ```markdown
 ## 86. Select the correct disk scheduling algorithms.
 ```

 ```bash
  (A) FCFS (B) SSTF 
  (C) SCAN (D) C-SCAN 
 ```

 > `(A) FCFS (B) SSTF (C) SCAN (D) C-SCAN`
 
 ```markdown
 ## 87. Choose the correct options from the following statements.
 ```

 ```bash
  (A) while loop is known as entry-controlled loop. 
  (B) do-while loop is known as entry-controlled loop. 
  (C) while loop is known as exit-controlled loop. 
  (D) do-while loop is known as exit-controlled loop. 
 ```

 > `(A) while loop is known as entry-controlled loop. (D) do-while loop is known as exit-controlled loop.`
 
 ```markdown
 ## 88. Choose the correct bitwise operators from the options.
 ```

 ```bash
  (A) != (B) % 
  (C) & (D) |
 ```
 
 > `(C) & (D) |`
 
 ```markdown
 ## 89. Select the correct UNIX wildcard characters from the  options.
 ```

 ```bash
  (A) * (B) ? 
  (C) [ ] (D) { } 
 ```

 * → Matches any number of characters
 ? → Matches exactly one character.
 [ ] → Matches any one character from the set inside the brackets.

 > `(A) * (B) ? (C) [ ]`
 
 ```markdown
 ## 90. In shell script, what is the command to show the list of files ?
 ```

 ```bash
  (A) ls (B) ls -l 
  (C) ps (D) pwd
 ```

 > `(A) ls (B) ls -l`
 
 ```markdown
 ## 91. Select the correct Linked list types from the options.
 ```

 ```bash
  (A) Linear linked list (B) Circular linked list 
  (C) Doubly linked list (D) Char linked list 
 ```

 > `(A) Linear linked list (B) Circular linked list (C) Doubly linked list`
 
 ```markdown
 ## 92. Select the correct Linked list operations from the  options.
 ```

 ```bash
  (A) Insertion of a node (B) Deletion of a node 
  (C) Search a node (D) Re-shaping a node 
 ```

 > `(D) Re-shaping a node`
 
 ```markdown
 ## 93. In machine learning, there are various types of  learning. Choose the correct options based on learning types.
 ```

 ```bash
  (A) Supervised (B) Unsupervised 
  (C) Reinforcement (D) HMM 
 ```

 > `(A) Supervised (B) Unsupervised (C) Reinforcement`
 
 ```markdown
 ## 94. Apriori algorithm was proposed by ______________ and  ______________ in 1994.
 ```

 ```bash
  (A) Agrawal (B) Srikant 
  (C) Ramesh (D) Roy 
 ```
 
 > `(A) Agrawal (B) Srikant`
 
 ```markdown
 ## 95. In software engineering, choose the correct activities  undertaken during maintenance in SDLC.
 ```

 ```bash
  (A) Corrective maintenance (B) Perfective maintenance 
  (C) Non-adaptive maintenance (D) Error ratio maintenance 
 ```

 > Corrective maintenance, Perfective maintenance are the activities undertaken during maintenance in SDLC
 
 > `(A) Corrective maintenance (B) Perfective maintenance`
 
 ```markdown
 ## 96. Select the appropriate properties of a good Software  Requirement Specification (SRS).
 ```

 ```bash
  (A) Correctness (B) Completeness 
  (C) Consistency (D) Risk 
 ```
 
 > `(A) Correctness (B) Completeness (C) Consistency`
 
 ```markdown
 ## 97. User Datagram Protocol (UDP) is ______________ transport  protocol.
 ```
 ```bash
  (A) reliable (B) unreliable 
  (C) connectionless (D) connection-oriented 
 ```
 
 > `(C) connectionless`
 
 ```markdown
 ## 98. Congestion in a network occurs because ______________  and ______________ have queues (buffers) to hold the packets  before and after processing.
 ```
 ```bash
  (A) routers (B) switches 
  (C) source (D) destination 
 ```
 > `(A) routers (B) switches`
 
 ```markdown
 ## 99. Select correct options as the levels of Data Abstraction  in architecture for Database system.
 ```
 ```bash
  (A) View level (B) Logical level 
  (C) Schema level (D) Structured level 
 ```

 >View level, Logical level are the options as the levels of Data Abstraction  in architecture for Database system.

 > `(A) View level (B) Logical level `
 
 ```markdown
 ## 100. Select correct options as the examples of multi-valued  attributes.
 ```
 ```bash
  (A) Address (B) Email ID 
  (C) PAN card number (D) Roll number
 ```

```
 Address: A person can have multiple addresses (home, work).
 Email ID: A person can have multiple email addresses.
 PAN card number: A person has only one (single-valued).
 Roll number: A student has only one (single-valued).
```

 > ` (A) Address, (B) Email ID`
 

# ***Certificate of Participation***

[![C Programming Exercises img](https://github.com/SumantaBhattacharya/C-programming-exercises/blob/main/f0baaf53-6424-43d5-8dcd-9a4cbc8a1fbe.jpg?raw=true)](https://github.com/SumantaBhattacharya/C-programming-exercises/blob/main/f0baaf53-6424-43d5-8dcd-9a4cbc8a1fbe.jpg?raw=true)

<!-- 
# ***Digital Image Processing***

[![What is Computer Vision? | Introduction](https://img.youtube.com/vi/wVE8SFMSBJ0/0.jpg)](https://youtu.be/wVE8SFMSBJ0?si=wO8unJOLaw6oBYdb)

[![What is Vision Used For? | Introduction](https://img.youtube.com/vi/qt1UfF0fn4w/0.jpg)](https://youtu.be/qt1UfF0fn4w?si=AzUJ8mKG0L-jG60_)

[![Overview | Image Formation](https://img.youtube.com/vi/_QjxbQKY4ds/0.jpg)](https://youtu.be/_QjxbQKY4ds?si=GZQf3Ip3QZHp57CF)

[![Overview | Edge Detection](https://img.youtube.com/vi/7AlwDYmjrcs/0.jpg)](https://youtu.be/7AlwDYmjrcs?si=7hJivf4q73-R4kcT)

[![What is an Edge? | Edge Detection](https://img.youtube.com/vi/G8yp6f9V_6c/0.jpg)](https://youtu.be/G8yp6f9V_6c?si=Zl9z8s3crce2NUuw)

[![Edge Detection Using Gradients | Edge Detection](https://img.youtube.com/vi/lOEBsQodtEQ/0.jpg)](https://youtu.be/lOEBsQodtEQ?si=edGDVk90q7SNv7hZ)

[![Edge Detection Using Laplacian | Edge Detection](https://img.youtube.com/vi/uNP6ZwQ3r6A/0.jpg)](https://youtu.be/uNP6ZwQ3r6A?si=eQpGsLmK5aE750vt)

[![Canny Edge Detector | Edge Detection](https://img.youtube.com/vi/hUC1uoigH6s/0.jpg)](https://youtu.be/hUC1uoigH6s?si=T97BKqeBVap6mjQG)

[![Hough Transform | Boundary Detection](https://img.youtube.com/vi/XRBc_xkZREg/0.jpg)](https://youtu.be/XRBc_xkZREg?si=hwpiRihl7EAhL7hb)

[![Hough's Transform in image processing in hindi](https://img.youtube.com/vi/fiDDn_F9U74/0.jpg)](https://youtu.be/fiDDn_F9U74?si=BFzxdEiB97TNdABN)

[![Hough Transform Explained with Example](https://img.youtube.com/vi/t1GXMvK9m84/0.jpg)](https://youtu.be/t1GXMvK9m84?si=vRKu8VBbBXzccjHe)

[![DIP#25 Introduction to image restoration in digital image processing || EC Academy](https://img.youtube.com/vi/hL1aHfrDFPs/0.jpg)](https://youtu.be/hL1aHfrDFPs?si=L5XbA63_qtLzdd3z)


[![Contrast Stretching in Image Processing | Contrast Stretching Point Processing Technique | DIP Unit 2](https://img.youtube.com/vi/jCznifrIkf0/0.jpg)](https://youtu.be/jCznifrIkf0?si=-elLmA_Ri5_QdI_J)

<<<<<<< HEAD
=======
[![Log Transformation in Image Processing | Image Processing Unit 2 | Image Processing | DIP](https://img.youtube.com/vi/eifdE-x85U4/0.jpg)](https://youtu.be/eifdE-x85U4?si=uf-73bK-afJE0WWr)


[![The fundamental steps in digital image processing](https://img.youtube.com/vi/8ekTeZD_lNY/0.jpg)](https://youtu.be/8ekTeZD_lNY?si=pV0cXddCtFNgtk67)

>>>>>>> c8fa0759db1ff9c0467690af60b4e251bbcb4d06

![WhatsApp Image 2025-05-11 at 09.38.39_8dcc5db4.jpg](<DIP_images/WhatsApp Image 2025-05-11 at 09.38.39_8dcc5db4.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.39_15e793cb.jpg](<DIP_images/WhatsApp Image 2025-05-11 at 09.38.39_15e793cb.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.40_07bd3828.jpg](<DIP_images/WhatsApp Image 2025-05-11 at 09.38.40_07bd3828.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.40_ad0c4b0d.jpg](<DIP_images/WhatsApp Image 2025-05-11 at 09.38.40_ad0c4b0d.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.40_6d51ec0a.jpg](<DIP_images/WhatsApp Image 2025-05-11 at 09.38.40_6d51ec0a.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.41_dd3114b6.jpg](<DIP_images/WhatsApp Image 2025-05-11 at 09.38.41_dd3114b6.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.41_9844318d.jpg](<DIP_images/WhatsApp Image 2025-05-11 at 09.38.41_9844318d.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.41_747a5464.jpg](<DIP_images/WhatsApp Image 2025-05-11 at 09.38.41_747a5464.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.42_618a2c03.jpg](<DIP_images/WhatsApp Image 2025-05-11 at 09.38.42_618a2c03.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.42_7f18ce4e.jpg](<DIP_images/WhatsApp Image 2025-05-11 at 09.38.42_7f18ce4e.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.42_1842a389.jpg](<DIP_images/WhatsApp Image 2025-05-11 at 09.38.42_1842a389.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.43_8bdd03f7.jpg](<DIP_images/WhatsApp Image 2025-05-11 at 09.38.43_8bdd03f7.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.43_224c6c9b.jpg](<DIP_images/WhatsApp Image 2025-05-11 at 09.38.43_224c6c9b.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.43_1a8bf023.jpg](<DIP_images/WhatsApp Image 2025-05-11 at 09.38.43_1a8bf023.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.44_703f899f.jpg](<DIP_images/WhatsApp Image 2025-05-11 at 09.38.44_703f899f.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.44_fec0e700.jpg](<DIP_images/WhatsApp Image 2025-05-11 at 09.38.44_fec0e700.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.45_d344327d.jpg](<DIP_images/WhatsApp Image 2025-05-11 at 09.38.45_d344327d.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.45_278e3c46.jpg](<DIP_images/WhatsApp Image 2025-05-11 at 09.38.45_278e3c46.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.45_8e356df9.jpg](<DIP_images/WhatsApp Image 2025-05-11 at 09.38.45_8e356df9.jpg>)

![WhatsApp Image 2025-05-23 at 19.42.01_8b09d68f.jpg.jpg](<DIP_images/WhatsApp Image 2025-05-23 at 19.42.01_8b09d68f.jpg>)

![WhatsApp Image 2025-05-23 at 19.42.02_ef4b7c47.jpg](<DIP_images/WhatsApp Image 2025-05-23 at 19.42.02_ef4b7c47.jpg>)

![WhatsApp Image 2025-05-23 at 19.42.02_4591a6c0.jpg](<DIP_images/WhatsApp Image 2025-05-23 at 19.42.02_4591a6c0.jpg>)

![WhatsApp Image 2025-05-23 at 19.42.02_72c28c33.jpg](<DIP_images/WhatsApp Image 2025-05-23 at 19.42.02_ef4b7c47.jpg>)

![WhatsApp Image 2025-05-23 at 19.42.03_3b32beea.jpg](<DIP_images/WhatsApp Image 2025-05-23 at 19.42.03_3b32beea.jpg>)

![WhatsApp Image 2025-05-23 at 19.42.03_a9a0f034.jpg](<DIP_images/WhatsApp Image 2025-05-23 at 19.42.03_a9a0f034.jpg>)

![WhatsApp Image 2025-05-23 at 19.42.03_24fe8588.jpg](<DIP_images/WhatsApp Image 2025-05-23 at 19.42.03_24fe8588.jpg>)

![WhatsApp Image 2025-05-23 at 19.42.04_81cfa4a2.jpg](<DIP_images/WhatsApp Image 2025-05-23 at 19.42.04_81cfa4a2.jpg>)

![WhatsApp Image 2025-05-23 at 19.42.04_b243ef03.jpg](<DIP_images/WhatsApp Image 2025-05-23 at 19.42.04_b243ef03.jpg>)

![WhatsApp Image 2025-05-23 at 19.42.04_8400a4a7.jpg](<DIP_images/WhatsApp Image 2025-05-23 at 19.42.04_8400a4a7.jpg>)

![WhatsApp Image 2025-05-23 at 19.42.06_55759075.jpg](<DIP_images/WhatsApp Image 2025-05-23 at 19.42.06_55759075.jpg>)

![WhatsApp Image 2025-05-23 at 19.42.06_13e718c9.jpg](<DIP_images/WhatsApp Image 2025-05-23 at 19.42.06_13e718c9.jpg>)

![WhatsApp Image 2025-05-23 at 19.42.06_fd5f3c08.jpg](<DIP_images/WhatsApp Image 2025-05-23 at 19.42.06_fd5f3c08.jpg>)

![WhatsApp Image 2025-05-23 at 19.42.07_871f42ae.jpg](<DIP_images/WhatsApp Image 2025-05-23 at 19.42.07_871f42ae.jpg>)

![WhatsApp Image 2025-05-23 at 19.42.07_4c57e124.jpg](<DIP_images/WhatsApp Image 2025-05-23 at 19.42.07_4c57e124.jpg>)

![WhatsApp Image 2025-05-23 at 19.42.07_57880a83.jpg](<DIP_images/WhatsApp Image 2025-05-23 at 19.42.07_57880a83.jpg>)

![WhatsApp Image 2025-05-23 at 19.42.08_4412b29f.jpg](<DIP_images/WhatsApp Image 2025-05-23 at 19.42.08_4412b29f.jpg>) -->
