<!-- my first programming language which i leaned on the 1st year of my graduation -->

* ***C is a general purpose procedural programming language***. *good for memory management and internal tasks examples used in embedded system, OS, compiler, drivers, etc.*
* *C language is not generally used for software devlopment*
* *compiler based programming language are C, C++, Java, Python, etc.*
* *interpreter based programming language are Javascript, Ruby, PHP, etc.*

> i. procedural programming language(C programming language), ii. object oriented programming language, iii. functional programming language.

C is not object oriented programming language

`(Dennis Ritchie in 1972 at Bell Labs developed C).`

pre-defined reserved word - keyword-32

by deafault all variable are stored in stack memory

reg int(4 byte(32 bits because 1 byte is equal to 8 bits(8 byte is reserved for double, char memory is 1 byte))) a(variable-mutable) will allocate memory in register

identifies-variable_name

printf is capacited in stdio.h(standard input/output) header file

#include is file inclusion pre processor is pre processed during compilation then it generate assembly code then object code then The linker combines the object file(s) with libraries (like the standard library) to produce a single executable file (.exe) and ultimately then When you run the executable, the loader loads it into memory and executes it.

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

the storage class of a variable determines where a variable is stored in memory or CPU registers. It also determines the scope and initial value of the variable. There are four storage classes in C: automatic, register, static and external.

auto - automatic storage class - all variables defined within a function or block belong to automatic storage 
register - register storage class - 
static - static storage class
extern - external storage class

Automatic: All variables defined within a function or block by default (or with auto specification) belong to the automatic storage class. The automatic variables are local to the block in which they are defined, and get destroyed on exit from the block.

(b) Register: The register specifier declares a variable of the register storage class. Variables declared as register are local to the block in which they are defined, and get destroyed on exit from the block. Register variables are placed in CPU registers, not in memory.

(c) Static: The static specifier declares a variable of the static storage class. Static variables are global to the program, and persist across function calls. Static variable are not visible outside their function, Static variables are placed in memory.

(d) External: The extern specifier gives the declared variable external storage class. No storage is allocated to an extern variable. It is assumed that the variable has already been defined elsewhere in the program. When we use an extern specifier the variable cannot be initialized because an extern variable is only declared, not defined.

In programming, actual parameters are the values passed to a function, while formal parameters are the values defined in the function's definition.

# ***Theory of Computation***

## ***An introduction to the subject of Theory of Computation and Automata Theory***

[![An introduction to the subject of Theory of Computation and Automata Theory](https://img.youtube.com/vi/58N2N7zJGrQ/maxresdefault.jpg)](https://youtu.be/58N2N7zJGrQ?si=1Ao_uwyVAoQjp58H)

Topics discussed:  
1. What is Theory of Computation?  
2. What is the main concept behind the subject Theory of Computation?  
3. Some simple examples explaining the scope of TOC.  
4. A brief overview of the topics in Theory of Computation.

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

## ***Deterministic Finite Automata (Example 1)***

[![Deterministic Finite Automata (Example 1)](https://img.youtube.com/vi/40i4PKpM0cI/maxresdefault.jpg)](https://youtu.be/40i4PKpM0cI?si=A1Y8IbtywQy_LEm3)

**Deterministic Finite Automata (Example 1)**  
TOC: An example of DFA that accepts all binary strings starting with `'0'`.  
This lecture demonstrates how to construct a DFA that accepts such strings and rejects all others.

## ***Deterministic Finite Automata (Example 2)***

[![Deterministic Finite Automata (Example 2)](https://img.youtube.com/vi/2KindKcLjos/maxresdefault.jpg)](https://youtu.be/2KindKcLjos?si=pivmA4YjGFd1iMUk)

**Deterministic Finite Automata (Example 2)**  
TOC: An example of a DFA that accepts all strings over `{0,1}` of length 2.  
This lecture shows how to construct a DFA that accepts binary strings of exactly two characters and rejects all others.

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

![alt text](image.png)

[![Finding the input sequence](https://img.youtube.com/vi/vIwxS-sG8-4/maxresdefault.jpg)](https://youtu.be/vIwxS-sG8-4?si=tPgB-Rm-Cl8eiflH)


<!-- 
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
