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