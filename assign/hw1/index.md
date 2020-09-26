# Assignment 1

## Task
Create a *templated* `PlatonicSolid` interface, see [Platonic solid](https://en.wikipedia.org/wiki/Platonic_solid), and several classes that implement various polyhedrons.
The classes, along with the their implementations should be written in the file `platonicsolids.h`.

## Details and Requirements

Write a C++ program that has following

- a `PlatonicSolid` interface that has abstract functions, `area()`, and `volume()`.
- Implement classes for `Tetrahedron`, `Cube`, `Octahedron`, `Dodecahedron`, and `Icosahedron`, which implement above interface, with the obvious meanings for the `area()` and `volume()` functions.
- Implement classes, (right square) `Pyramid`, see [Square pyramid](https://en.wikipedia.org/wiki/Square_pyramid), and (right) `Parallelepiped`, see [Parallelepiped](https://en.wikipedia.org/wiki/Parallelepiped), which have the appropriate inheritance relationships to `Tetrahedron` and `Cube`, respectively.
    - Hint: For the parallelepiped assume that all the angles are 90 degrees.
- Finally, write a simple user interface that allows users to create figures of
the various types, input their geometric properties, and then output their
area and perimeter.
    - A incomplete test driver for that functionality is provided below.


## Driver Program

The listing of unfinished [test driver](https://github.com/wildart/CSCI373/blob/main/assign/hw1/platonicsolids.cpp) is provided below.
Note, the file `platonicsolids.cpp` is not a complete program. It is just a some code to get you started, illustrating some calls.


```c++
#include <iostream>
#include "platonicsolids.h"
using namespace std;

template <class T>
PlatonicSolid<T>* createFigure(int figuretype);

template <class T>
void figureProperties(PlatonicSolid<T>* figure);

int main() {
    int figuretype = -1;

    // loop until type is -1
    do {
        // prompt user to enter type of the figure
        // add the user prompt here
        cout << "Enter the figure type: ";
        cin >> figuretype;
        // use `createFigure` function to create an object for a specified figure
        // use `figureProperties` function to show the figure properties
        // !!!Note: Do not forgate to handle your memory correctly!!!
    } while (figuretype != -1);
    cout << "Goodbye!" << endl;
    return 0;
}
```

## Driver Output Sample


```
$ ./platonicsolids
Select figure type:
 0) Tetrahedron
 1) Pyramid
 ....
-1) Exit
Enter the figure type: 0
Enter tetrahedron edge length: 10
Figure area is 173.205
Figure volume is 117.851

Select figure type:
 0) Tetrahedron
 1) Pyramid
 ....
-1) Exit
Enter the figure type: 1
Enter pyramid height: 10
Enter pyramid length: 10
Figure area is 273.205
Figure volume is 333.333

Select figure type:
 0) Tetrahedron
 1) Pyramid
 ....
-1) Exit
Enter the figure type: -1
Goodbye!
```


## Submission

### Coding Style

In any programming project, matching the existing coding style is important. Having different coding styles intermixed leads to confusion and bugs. Students are required to follow the particular existing coding style that maintains the indentation style in `.cpp` and `.h` files using spaces, not tabs.

In particular, pay close attention to function declarations and how the function name begins the line after the function return type. For helper functions which are limited in scope to a specific file, you must declare the function as `static` in the same file in which it is used.

*Indentation*: The indentation style for your work have to be 4 spaces. Many students are taught to use tabs for indentation, which can make code very hard to read, especially when there are several levels of indentation.

For additional information of C++ coding style see [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html).

### Before You Submit

You are required to test that your submission works properly before submission. Make sure that your program compiles without errors. Once you have verified that the submission is correct, you can submit your work.


### Your Submission

Program submissions should be done through the Blackboard.

For Assignment #1, submit the following files:

- `platonicsolids.h`
- `platonicsolids.cpp`
