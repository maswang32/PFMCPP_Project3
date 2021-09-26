/*
Project 3 - Part 1c / 5
Video:  Chapter 2 Part 5
User-Defined Types

Continue your work on branch Part1

Purpose: The entire purpose of this 5-part project is to get you writing C++ code that compiles and to 
reinforce the syntax habits that C++ requires.  
What you create in this project will be used as the basis of Project 5 in the course.   

************************
Part1 purpose:  Learn to write UDTs

You are going to write 10 UDTs in project3.  
Part1 will be broken up into 5 separate steps
    Part 1a: you will learn to think about an object in terms of its sub-objects.
    Part 1b: you will write 4 un-related UDTs in plain english
    Part 1c: you will write 1 UDT in plain english that will be made of 5 related sub-objects
    Part 1d: you will write plain-english UDTs for the 5 sub-objects that form the UDT defined in Part 1c
    Part 1e: you will convert those 10 plain-english UDTs into code that runs.
************************

1) write the 10th UDT
    come up with an object that is made of 5 smaller parts.
    These parts will not be defined using Primitives, but instead will be their own UDTs you'll define in Part 1d
    
    Here is an example:
    Cell Phone

    A Cell Phone is made up of the following 5 properties:
        Display
        Memory
        CPU
        Radio
        Applications

    A Cell Phone has 3 things it can do:
        make a call
        send a text
        run an application.

    Notice that I did not use "has a display" or "Has memory" or "has a cpu" as one of the properties of the CellPhone
    
    Writing 'has a ___" checks whether or not your object **has the ability to do something**.
    Instead, I wrote "Display" or "CPU".  These are specific objects or amounts. 
    
    In C++ terms, this means to I want you to avoid using 'bool' (has a) as a member variable type.
    Instead, prefer the other primitive types.

    When you choose your 5 smaller parts, remember that each of these 5 Sub Objects will need 
    to be defined with 5 primitive properties and 3 actions EACH.  

2) write the name of the primitive type you'll be using after each property in UDTs 1-4:
    pick properties that can be represented with 'int float double bool char std::string'
    example: 
        Display:
            Number of Pixels (int)
            Amount of Power consumed (milliwatt-hours) (float)
            Brightness (double)
            area in cm2 (int)
            brand (std::string)

3) Move the Thing 10 pseudo-code to after your Thing1-4 in the project.
*/





/*
Thing 1) Animal
5 properties:
    1) Number of legs (int)
    2) Number of arms (int)
    3) Number of eyes (int)
    4) Weight (double)
    5) Height (double)
3 things it can do:
    1) Eat
    2) Sleep
    3) Die
 */

/*
Thing 2) Student
5 properties:
    1) Grade Level (int)
    2) Major (std::string)
    3) Shoe Size (int)
    4) Height (double)
    5) Age (int)
3 things it can do:
    1) Study
    2) Sleep
    3) Eat
 */

/*
Thing 3) Teacher
5 properties:
    1) Years Taught (int)
    2) Department (std::string)
    3) Official Position (std::string)
    4) School (std::string)
    5) Degree Level (std::string)
3 things it can do:
    1) Lecture
    2) Test
    3) Assign Homework
 */

/*
Thing 4) Vending Machine
5 properties:
    1) Number of Bags (int)
    2) Number of Bottles (int)
    3) Cost per Bag (double)
    4) Cost per Bottle (double)
    5) Weight (double)
3 things it can do:
    1) Dispense Bag
    2) Dispense Bottle
    3) Alarm
 */

/*
Thing 10) Car
5 properties:
    1) Steering Wheel
    2) Air Conditioner
    3) GPS
    4) Window
    5) Gear Shifter
3 things it can do:
    1) Start
    2) Shut off
    3) Drive to work
 */

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go!" << std::endl;
}
