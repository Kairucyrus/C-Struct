# C-Struct
Basics of C++ structures.
C++ structures are similar to classes only that member elements of classes are private while those of struct type are global.
They are user-defined types which allow the user to add dissimilar member element types. In versions below C++ 11, it is illegal to initialize members on declaration.
The struct.cpp is a simpler program than the point_struct.cpp that does not illustrate much.
In the point_struct.cpp, we create a struct db, with members as details of employees, create a constructor for the struct and a method to display the employee information, when called. After creating instances of struct db in main function, we then create pointers for every instance of our db struct that we use to print the details of our employees, by invoking the display_details function. We use the <iomanip> header file which provides the setw() that sets the width of each column in the table(We print the employees' details in a table).
