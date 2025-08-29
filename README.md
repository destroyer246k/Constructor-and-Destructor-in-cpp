# Constructor-and-Destructor-in-cpp
**Aim:**  
To study constructors (default, parameterized, copy) and destructors*in C++.

**Tools:**  
GNU g++ compiler locally or an online C++ compiler.

# Theory  
In Object-Oriented Programming (OOP), constructors and destructors are special functions of a class that are called automatically during the lifecycle of an object. where as methods need precise calling.  
- **Constructor**: Called automatically when an object is created, unlike normal methods that need to be called manually.  
  - **Default Constructor** – No parameters, used to set default values or take input.  
  - **Parameterized Constructor** – Takes parameters to set values at the time of object creation.  
  - **Copy Constructor** – Creates a new object by copying the data of an existing object.  
### **Synatx**  
```cpp
class ClassName {
public:
    ClassName() {
        // code to run when object is created
    }
};
```
### Outside Class
```cpp
class ClassName {
public:
    ClassName();  // declaration
};

ClassName::ClassName() {
    // code to run when object is created
}
```
<br>

- **Destructor**: Called automatically when the object goes out of scope or is deleted, no need to call it manually.  
  It is mainly used to release memory, close files, or clean up resources used by the object.

### Synatx
```cpp
class ClassName {
public:
    ~ClassName() {
        // code to run when object is destroyed
    }
};
```

## **Program 1: Default Constructor (In-class)**
### Logic:
The class Employee has its default constructor defined inside the class. When an object is created, it prompts the user for details and stores them. Demonstrates how in-class constructors handle initialization.
### Algorithm:
1. Start  
2. Define a class Employee with private members: E_ID, Name, Department, Salary.  
3. Inside the class, define a default constructor to take input for all members.  
4. In `main()`, create an object of Employee.  
5. End  
## **Program 2: Default Constructor (Out-class)**
### Logic:
The default constructor is declared inside the class but defined outsid using the scope resolution operator `::`. When the object is created, it accepts employee details. A separate `display()` function shows stored information, illustrating separation of declaration and definition.
## **Program 3: Parameterized Constructor**
### Logic:
Demonstrates parameterized constructors where arguments are passed during object creation. The class Product accepts P_ID, Name, Category, and Price as parameters and stores them. A `display()` function prints the product details.
### Algorithm:
1. Start  
2. Define a class Product with members: P_ID, Name, Category, Price.  
3. Define a parameterized constructor to assign passed arguments to data members.  
4. Define a display() function to show details.  
5. In `main()`, create an object using arguments and call display().  
6. End  
## **Program 4: Copy Constructor (First Example)**
### Logic:
This program explains how a copy constructor works. Class Car initializes its data members with a parameterized constructor. A copy constructor duplicates data of an existing object, demonstrating object copying during creation.
### Algorithm:
1. Start  
2. Define class Car with members: Car_ID, Model, Manufacturer, Price.  
3. Define a parameterized constructor to initialize original object data.  
4. Define a copy constructor that copies data from another object of the same class.  
5. Create and display original object data.  
6. Create a copy object and display the copied details.  
7. End  
## **Program 5: Copy Constructor (Second Example)**

### Logic:
Similar to Program 4 but applied to a Book class. The program takes user input for the first object. A copy constructor then creates a second object with the same data. Demonstrates object cloning with real-time input
## **Program 6: Destructor (First Example)**

### Logic:
Demonstrates the use of destructors to track object lifecycle. A global counter keeps count of objects created and destroyed. When objects go out of scope, the destructor is invoked automatically

### Algorithm:
1. Start  
2. Initialize a global variable count = 0.  
3. Create a class House with:  
   - Constructor → increments count and prints message.  
   - Destructor → decrements count and prints message.  
4. In `main()`, create multiple objects, including one inside a local block.  
5. Observe creation and destruction messages in sequence.  
6. End  

## **Program 7: Destructor (Second Example)**
### Logic:
- This program illustrates multiple destructor calls on automatic variables.  
- Class Date has a destructor that prints a message each time an object is destroyed.  
- Demonstrates the destructor being called for objects created inside loops and going out of scope automatically.


# **Conclusion**
Learned the use of default, parameterized and copy constructors to initialize objects in various ways. Observed the role of destructors in object cleanup and tracking object lifecycle. These concepts are fundamental in managing resources effectively in object-oriented programming.  
