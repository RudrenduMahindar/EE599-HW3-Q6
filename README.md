# EE599-HW3-Q6
Write a program that takes a vector as a parameter, print it, and then depending upon the user input, it performs various operations on a vector using an iterator and iterator functions. ● Your code should have a variable to track the current location which will be pointing at the first element of the vector as soon as you start execution of your code and changes as the program runs. ● You should print a menu to the user to perform the following operations: Example input vector: [10, 20, 30, 40, 50, 60, 70, 80, 90, 100]  
Menu:
1. What is the first element?
a. (Once this is selected, the first element should be printed and the current
location should be set to the first element.)

2. What is the last element?
a. (Once this is selected, the last element should be printed and the current location
should be set to the last element.)

3. What is the current element?
a. (This should print the value at the current location. See examples below.)
4. What is the i(th) element from the current location?
a. (Once this is selected, the code should print the value at the current location.)
b. If the value of i is negative then you should prompt an appropriate message to
the user and should prompt the menu options again. (Eg: “Value of i cannot be
negative”)
c. If the value of i is greater than the size of your vector then you should prompt an
appropriate message to the user and should prompt the menu options again.
(Eg: “Value of i cannot be greater than the size of vector”)

5. Exit.
