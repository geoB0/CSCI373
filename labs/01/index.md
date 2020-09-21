# Lab 1 : ArrayList Mutators

## Task
Implement `insert` and `erase` methods for the **ArrayList ADT**.

The **Array List ADT** extends the notion of array by storing a sequence of objects. It uses an array to store the elements of linear list.

![](../../img/arraylist.png)

### Runtime:

The run time of each member function is specified in parentheses at the end of the description.

## Class Specifications

### UML Class Diagram

<p></p><table cellpadding="3" border="0">
	<tbody><tr><th>ArrayList</th></tr>
	<tr>
		<td>
			<tt>-</tt> entry_count:Integer<br>
			<tt>-</tt> array_capacity:Integer<br>
			<tt>-</tt> elements:Type[]
		</td>
	</tr>
	<tr>
		<td>
			<u><tt>+</tt> ArrayList(in size:Integer)</u><br>
			<u><tt>+</tt> ~ArrayList()</u><br>
			<tt>+</tt> size():Integer<br>
            <tt>+</tt> max_size():Integer<br>
			<tt>+</tt> empty():Boolean<br>
            <tt>+</tt> at(in idx:Integer):Type<br>
            <tt>+</tt> set(in idx:Integer, in obj:Type )<br>
			<tt>+</tt> insert(in idx:Integer, in obj:Type )<br>
			<tt>+</tt> erase( in idx:Integer )<br>
		</td>
	</tr>
</tbody></table><p></p>

A skeleton for this class is provided in the [source directory](https://github.com/wildart/CSCI373/tree/main/labs/01/) in the file [ArrayList.h](https://github.com/wildart/CSCI373/tree/main/labs/01/ArrayList.h).

### Description

This class stores a finite list of `n` (zero or more) elements stored in a static array. The following are properties of this class:

- If there are zero elements in the list, the list is said to be empty.
- The maximum number of elements in the list is `N`.

### Member Variables

The class has at three suggested member variables:

- A pointer to an instance of `Type`, `Type *elements`, to be used as a storage array,
- An element counter `int entry_count`, and
- The capacity of the list, `int array_capacity`.

You may chose to use these or use whatever other member variables you want.

### Member Functions

#### Constructors

`ArrayList( int n = 10 )`

- The constructor takes as an argument the capacity of the array and allocates memory for the storage array. If the argument is either 0 or a negative integer, set the initial capacity of the array to 1. The default initial capacity is 10. Other member variables are assigned as appropriate.

#### Destructor

`~ArrayList()`

- The destructor deletes the memory allocated for the storage array.


#### Accessors

This class has four accessors:

`Type& at( int i ) const`

- Return the object at the position `i` of the list, with bounds checking. If `i` is not within the range of the container, an exception of type `std::out_of_range` is thrown. (Θ(1))

`int size() const`

- Returns the number of objects currently stored in the list. (Θ(1))

`bool empty() const`

- Returns `true` if the list is empty, `false` otherwise. (Θ(1))

`int max_size() const`

- Returns the capacity of the list (the capacity of the storage array). (Θ(1))

#### Mutators

This class has three mutators:

`void set( int i, const Type& obj )`

- Set the element `obj` in the position `i` in the list. If position is not within the range of the container, an exception of type `std::out_of_range` is thrown. (Θ(1))

`void insert( int i, const Type& obj )`

- Insert the element `obj` in the position `i` in the list. You need to make room for the new element in the `i`th position by shifting forward the `n-i` elements `A[i], ..., A[n - 1]`. (O(n))
    - If the index parameter `i` is out of bounds, negative or larger the number of the elements in the array, you need to raise `std::out_of_range` exception.
    - If the list is full before the element is inserted into the list, an `std::overflow_error` exception is thrown.

![](../../img/arraylist-insert.png)

`void erase(int i)`

- Removes the element at in the position `i`  from the list. You need to fill the hole left by the removed element by shifting backward the `n - i - 1` elements `A[i + 1], ..., A[n - 1]`. (O(n))
    - If the index parameter `i` is out of bounds, negative or larger the number of the elements in the array, you need to raise `std::out_of_range` exception.

![](../../img/arraylist-erase.png)


## Test Driver Program

### Compilation

#### Local Development

For local development you are required to have a C++ compiler installed on your local machine.

- In order to compile test driver program `ArrayListDriver`, you will need to place following files in the local folder on your computer:
    - `ArrayList.h`
    - `ArrayListDriver.cpp`
    - `ArrayListTester.h`
    - `Tester.h`
    - `csci373.h`
    - Optional files:
        - `testfile.txt` contains test commands
        - `Makefile` is the build configuration file

- All files located in [`labs/01` folder](https://github.com/wildart/CSCI373/tree/main/labs/01) of the course repository [https://github.com/wildart/CSCI373](https://github.com/wildart/CSCI373). You can download whole repository as a zip archive.

- Copy all files is the local folder, and run the following command in the command line inside the folder to compile the test driver program:
    - `g++ -std=c++11 -o ArrayListDriver ArrayListDriver.cpp`

- Or if the `make` program is installed:
    - `make`

- Run `ArrayListDriver` executable file from the command line, see the test driver commands below.

- To execute a set of recorder tests, run in the command line following command `./ArrayListDriver < testfile.txt`.
    - Fix your program so all the test report `Okay`.


#### Repl.it

You can use [repl.it](https://repl.it) service as the development environment while working on this lab.

- Go to [repl.it](https://repl.it) website, press the `Start coding` button.
- Select `Import from Github` tab and paste the course repository URL
    - `https://github.com/wildart/CSCI373`
- Inside the `labs/01` folder, open `ArrayList.h` and start coding.
- Find file `.replit` in the root of the project and change the `run` parameter to
  - `run = "make -C labs/01"`
- Press **Run** button to compile and run the test driver program with provided collection of test.
    - Fix your program so all the test report `Okay`.

### Tests

Test your solution by running series of provided tests, see file `testfile.txt`.


#### Test Driver Commands

| Command               | Tests
|-----------------------|-----------------------------------------------------------
| new                   | create an object with the default constructor
| new n                 | create an object with the constructor with an argument `n`
| delete                | destroy an object
| empty b               | `empty() == b`
| size n                | `size() == n`
| at i n                | `at( i ) == n`
| at-exception i        | `at( i )` throws an exception
| print                 | print the elements in order separated by dashes
| insert i n            | `insert( i, n )` succeeds
| insert-exception i n  | `insert( i, n )` throws an exception
| erase i               | `erase( n )` succeeds
| erase-exception i     | `erase( n )` throws an exception
| exit                  | terminate program
| !!                    | run the last command
| summary               | short summary of memory usage
| details               | detailed list of memory (de)allocations
| memory n              | test if `n` bytes is allocated

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

For Lab #1, submit the following files:

- `ArrayList.h`
