# Longest-Words-and-Custom-List-Class
Solutions to a C++ assignment involving string manipulation and creating a custom container class with dynamic array management.

Q1: Write a C++ function named longestWords that accepts a string parameter and 
returns the longest words of the given string in another string. For instance, the longest word in
"The young girl gave no clear response" is "response". However, if there are multiple words 
having the maximum length, you should return the concatenation of them. For instance, your 
function should return "cooked before" if the parameter is "The meal was cooked before the 
bell rang. ". You can also include punctuation as part of words. For instance, the longest word in 
"Split the log with a quick, sharp blow" is "quick," since it has 6 characters. Therefore, words are 
separated by spaces only. In your main function, read a file named “input.txt” and find the 
longest words in each line and print them into “output.txt” using longestWords function. An 
example “input.txt” and “output.txt” is given below:
              
              input.txt 
              
              The birch canoe      slid on the smooth planks.
              Glue the sheet to the dark      blue background.
              It’s easy to   tell the   depth of a well.
              These days a chicken leg is a rare dish.
              Rice is         often served in round bowls.
              The juice of lemons makes fine punch.
              The         box was thrown beside the parked truck.
              The hogs were     fed chopped corn and garbage.
              Four hours       of steady work faced us.
              A large     size in stockings is hard to sell.
              
              output.txt 
              
              planks.
              background.
              depth well.
              chicken 
              served bowls.
              lemons punch.
              thrown beside parked truck.
              garbage.
              steady
              stockings

Q2. In this question, you will write your own container class named MyList similar to 
vector class in C++. Your class must be a template class which will contain its elements in an 
array named myArray. Since this class will be a template class, you should include the function 
definitions at the end of the header file. You can also check the Stack example in Chapter 9. You 
should keep the size and capacity of your list in two separate attributes named mySize and 
myCapacity. Therefore, your class will have three data members: one generic dynamic array
(you should use pointer representation as given in the Stack example) and two integers. In the 
list, the first elements will always be the maximum element. As the function members of your 
class write the following functions:

      a. Write a constructor that accepts one integer parameter as the capacity of your 
      list, creates a new array with the given capacity, and stores new array in myArray. The 
      constructor should also set myCapacity to the parameter value and mySize to 0. If the 
      parameter is not a positive number, you should set the capacity as 10 and create the 
      array with 10 elements.

      b. Write getters for size (getSize) and capacity (getCapacity).

      c. Write add function that accepts an element having generic type and adds this 
      element as the first element if it is greater than the maximum element (first element) or 
      the last element if it is less than or equal to the maximum element. For instance, if the 
      list elements are [12, 7, 9, 3] and the parameter of add function is 13, it will be added as 
      the first element. The elements will be [13, 12, 7, 9, 3] after addition. If the list elements 
      are [12, 7, 9, 3] and the parameter of add function is 10, it will be added as the last
      element. The elements will be [12, 7, 9, 3, 10] after addition. You should also update the 
      size (mySize) accordingly. The function should return nothing. If the capacity is full, you 
      should 
              double the capacity by creating a new array, 
              copy existing elements into new array,
              add the element into appropriate place,
              destroy old array,
              store the new array in myArray,
              update myCapacity.

    d. Write a function getMax that returns the maximum element in the list. If there is 
    no element in the list, throw an exception.

    e.  Write removeMax function that does not accept any parameter and 
    removes the first element from the list. Note that, the list must have the maximum 
    element as the first element after removal. Therefore, you need to search the maximum 
    element in the list and move it to the first position in the array. You should shift the 
    remaining elements after removal. For instance, if the elements are [14, 3, 5, 12, 9, 7, 
    11], the list elements will be [12, 3, 5, 9, 7, 11] after calling removeMax function. You 
    should also update the size (mySize) accordingly. The function should return the 
    removed element (14 in the previous example).
    
    f. Write a function named display to print the elements in the list separated by a 
    comma. E.g., [13,11,8,9,12]. Note that you should not print all array content, you should 
    print the elements in the list. For instance, when you create an integer list with capacity 
    100, myArray will contain 100 zeros, but you should not display them. Therefore, you 
    should iterate your loop from 0 to mySize-1. The function should return nothing.
    
    g. Write a function named at that accepts an integer parameter index and returns
    the element at the given index. If there is no element at that index, throw an exception.
    
    h. Write a function named firstIndexOf that accepts an element having generic type 
    as a parameter and returns the index of first occurrence of it in the list. The function 
    should return -1 if the element is not included.
    
    i. Write a function named clear that does not accept any parameter and clears the 
    list by setting size as 0. The function should return nothing.
