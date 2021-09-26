/*
Project 3 - Part 1e / 5
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

Convert your 10 Plain-english UDTs into code.

I recommend compiling after finishing each one and making sure it compiles 
without errors or warnings before moving on to writing the next UDT. 

1) define an empty struct below your plain-english UDT. i.e.:

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#if false //ignore these #if #endif lines. they're just here to prevent compiler errors.
struct CarWash
{

};
#endif
/*
    - Do this for all 10 UDTs

2) Below your plain-english UDT, Copy your 5 properties & 3 actions into the empty struct body.
    - comment them out.
    - Do this for all 10 UDTs
    
3) declare your member variables and member functions underneath each plain-english comment in your struct's body.
    - give the member variables relevant data types
    - Do this for all 10 UDTs
 
4) make the function parameter list for those member functions use some of your User-Defined Types
    - You'll write definitions/implementations for these functions in Project3 Part2
    - you'll call each of these functions in Project3 part3
    - Do this for all 10 UDTs
 
5) make 2 of the 10 user-defined types have a nested class.  
    - this nested class also needs 5 properties and 3 actions.
    - these nested classes are not considered one of your 10 UDTs.
    - this nested class must be related to the class it is nested inside
 
6) your 10th UDT's properties should be instances of your #5-#9 UDTs.   
    - No primitives allowed!
 
7) After you finish defining each type, click the [run] button.  
    Clear up any errors or warnings as best you can. 
    if your code produces a -Wpadded warning, add '-Wno-padded' to the .replit file with the other compiler flags (-Weverything -Wno-missing-prototypes etc etc)
 */

/*
 example:  

Thing: Car Wash   
    5 properties:
        - number of vacuum cleaners
        - number of eco-friendly cleaning supplies
        - stores the amount of water used per week.
        - stores amount of profit made per week
        - number of cars serviced per day
    3 things it can do:
        - wash and wax car
        - charge customer
        - detail the car interior
 */

#include <iostream>
#include <string>

struct CarWash //                                   1) define an empty struct for each of your 10 types.       
{
    //number of vacuum cleaners                     2) copied and commented-out plain-english property
    int numVacuumCleaners = 3; //                   3) member variables with relevant data types.
    //number of eco-friendly cleaning supplies      
    int numEcoFriendlyCleaningSupplies = 20;     
    //stores the amount of water used per week.     
    float waterUsedPerWeek = 200.f;            
    //stores amount of profit made per week         
    float profitPerWeek = 495.95f;               
    //number of cars serviced per day               
    int numberOfCarsServiced = 10;               
    
    struct Car //5)                                 Note that the nested type 'Car' is related to the 'CarWash' 
    {
        //2) member variables with relevant data types.  the names are appropriate for the U.D.T.'s purpose.
        bool isAPickupTruck = false;
        float gasMileage = 26.2f;        
        int year = 1985;
        std::string manufacturer = "Toyota";
        std::string model = "Corolla";

        //3) a member function whose parameter has a default value.
        //the parameter name is related to the work the function will perform.
        void fillTank(double fuelAmountInGallons = 2.0);  
        void breakDown(std::string failureType, bool requiresTow = false);
        int getMilesTraveledAnnually(bool includeUberLyftTrips);
    };

    //wash and wax car
    void washAndWaxCar(Car car); //4) a member function whose parameter is a UDT.
    //charge customer
    float chargeCustomer(float discountPercentage);
    //detail the car interior
    void detailInterior(Car car);
    
    //5) a member variable whose type is a UDT.
    Car carBeingServiced;  
};







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
Thing 5) Steering Wheel
5 properties:
    1) Radius (double)
    2) Yaw (double)
    3) Resistance (double)
    4) Shape (int)
    5) Color (std::string)
3 things it can do:
    1) Turn Left
    2) Turn Right
    3) Honk
 */

/*
Thing 6) Air Conditioner
5 properties:
    1) Max Temp (double)
    2) Min Temp (double)
    3) Number of Settings (int)
    4) Recirculation (bool)
    5) Is Vent Open (bool)
3 things it can do:
    1) Cool Car
    2) Heat Car
    3) Increase Fan Speed
 */


/*
Thing 7) GPS
5 properties:
    1) Display Width (double)
    2) Display Height (double)
    3) Height Above Dashboard (double)
    4) Sleep Mode (bool)
    5) Direction (double)
3 things it can do:
    1) Recalculate
    2) Cancel Route
    3) Find Car Location
 */

/*
Thing 8) Window
5 properties:
    1) Window Width (double)
    2) Window Height (double)
    3) Window Material (std::string)
    4) Window Opacity (double)
    5) Window Tint (std::string)
3 things it can do:
    1) Open 
    2) Close
    3) DeFog
 */

/*
Thing 9) Gear Shifter
5 properties:
    1) Number of Gears (int)
    2) Current Position (int)
    3) Forward or Backward (bool)
    4) Neutral (bool)
    5) Is Automatic Gear Shift On (bool)
3 things it can do:
    1) Reverse
    2) Neutral
    3) Turn on Automatic Gear Shift
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
