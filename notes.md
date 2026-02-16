# CPP Notes
## basic hellow world code:
```C++
#include <iostream>
 int main(){
    // this is a comment

    std::cout << "Hello, World!" << "\n";
    return 0;
 }
```

 ## variables
- char --> stores a single character such as 'B'. Use single quotes for this.
- double --. used for floats (numbers including decimal)
- int --> whole numbers
- bool --> boolean variables (true/false). in C++, unlike python, the true/false are in lowercase
- string --> objects that represents a sequence of text, eg names/ (use double quotes). strings are defined by standard library such that we define a string as :

```C++
std::string name = "Kami"
```
## const keyword
- specifies that a variables value is constant. tells the compiler to prevent anything from modifying it.

## namespaces
- provides a solution for preventing name conflicts in large projects
- each entity needs a unique name. it allows for identically named entities as long as the namespaces are different.
- check variable/namespace.cpp code

## typedef
- reserved keyword used to create an additional name (alias) for another data type
- its a new identifier fior an existing type. helps with readabi;ity and reduces typos
- check data_types/typedef.cpp
- typedef has largely been replaced by using because using works better with templates

## arithmetic oeperators
- return the result of a specific arithmetic operations (+, -, *, /, %)

## type conversion
- converting a value of one datatype to a different datatype
   -implicit - automatic
   explici - precede a value with a new data type (int)

## conditionals (if else statements)
- do something if a conditional is true
- if not then dont do it
- switch - alternative to using many "else if" statements. compares one value against matching cases

## ternary operator (?)
- replacement to an if/else statement
- condition ? expression1 : expression2

## logical operators
- && - check if two conditions are true
- || - check if atleast one of the two conditions is true
- ! - reverses the logical state and its operand

## useful string methods
- .length() - length of a string
- .empty() - returns a true/false boolean if a string is empty or populated
- .clear() - clears a string
- .append() - join a string to another
- .at(idx) - returns a char at a given index
- .insert(isx 'char') - insert a character at a defined position in a string
- .find(char) - finds a specific character and returns its position in a string
- .erase(start idx, end idx) - erase a potion of a string