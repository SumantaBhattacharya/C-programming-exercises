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

[![An introduction to the subject of Theory of Computation and Automata Theory](https://img.youtube.com/vi/58N2N7zJGrQ/maxresdefault.jpg)](https://youtu.be/58N2N7zJGrQ?si=1Ao_uwyVAoQjp58H)

Topics discussed:  
1. What is Theory of Computation?  
2. What is the main concept behind the subject Theory of Computation?  
3. Some simple examples explaining the scope of TOC.  
4. A brief overview of the topics in Theory of Computation.

[![TOC: The prerequisites of Finite State Machine (FSM) in Theory of Computation](https://img.youtube.com/vi/TpIBUeyOuv8/maxresdefault.jpg)](https://youtu.be/TpIBUeyOuv8?si=gIlJdYwQJTTMKSDi)

Topics discussed:  
1. Symbols in FSM  
2. Alphabets in FSM  
3. Strings in FSM  
4. Languages in FSM  
5. Powers of sigma in FSM  
6. Cardinality in FSM

[![TOC: Finite State Machine (Finite Automata) in Theory of Computation](https://img.youtube.com/vi/Qa6csfkK7_I/maxresdefault.jpg)](https://youtu.be/Qa6csfkK7_I?si=_ga1j8v5rHdQt1Fm)


**TOC: Finite State Machine (Finite Automata) in Theory of Computation**  
Topics discussed:  
1. The Basics of Finite State Machine  
2. Finite Automata  
3. Types of Finite Automata  
4. Deterministic Finite Automata (DFA)  
5. The formal definition of Deterministic Finite Automata (DFA)


![alt text](image.png)

[![Finding the input sequence](https://img.youtube.com/vi/vIwxS-sG8-4/maxresdefault.jpg)](https://youtu.be/vIwxS-sG8-4?si=tPgB-Rm-Cl8eiflH)


<!-- 

![WhatsApp Image 2025-05-11 at 09.38.39_8dcc5db4.jpg](<WhatsApp Image 2025-05-11 at 09.38.39_8dcc5db4.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.39_15e793cb.jpg](<WhatsApp Image 2025-05-11 at 09.38.39_15e793cb.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.40_07bd3828.jpg](<WhatsApp Image 2025-05-11 at 09.38.40_07bd3828.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.40_ad0c4b0d.jpg](<WhatsApp Image 2025-05-11 at 09.38.40_ad0c4b0d.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.40_6d51ec0a.jpg](<WhatsApp Image 2025-05-11 at 09.38.40_6d51ec0a.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.41_dd3114b6.jpg](<WhatsApp Image 2025-05-11 at 09.38.41_dd3114b6.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.41_9844318d.jpg](<WhatsApp Image 2025-05-11 at 09.38.41_9844318d.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.41_747a5464.jpg](<WhatsApp Image 2025-05-11 at 09.38.41_747a5464.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.42_618a2c03.jpg](<WhatsApp Image 2025-05-11 at 09.38.42_618a2c03.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.42_7f18ce4e.jpg](<WhatsApp Image 2025-05-11 at 09.38.42_7f18ce4e.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.42_1842a389.jpg](<WhatsApp Image 2025-05-11 at 09.38.42_1842a389.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.43_8bdd03f7.jpg](<WhatsApp Image 2025-05-11 at 09.38.43_8bdd03f7.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.43_224c6c9b.jpg](<WhatsApp Image 2025-05-11 at 09.38.43_224c6c9b.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.43_1a8bf023.jpg](<WhatsApp Image 2025-05-11 at 09.38.43_1a8bf023.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.44_703f899f.jpg](<WhatsApp Image 2025-05-11 at 09.38.44_703f899f.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.44_fec0e700.jpg](<WhatsApp Image 2025-05-11 at 09.38.44_fec0e700.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.45_d344327d.jpg](<WhatsApp Image 2025-05-11 at 09.38.45_d344327d.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.45_278e3c46.jpg](<WhatsApp Image 2025-05-11 at 09.38.45_278e3c46.jpg>)

![WhatsApp Image 2025-05-11 at 09.38.45_8e356df9.jpg](<WhatsApp Image 2025-05-11 at 09.38.45_8e356df9.jpg>)

-->
