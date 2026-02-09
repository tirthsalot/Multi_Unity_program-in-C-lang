C Programming Examples

This repository contains three basic C programs that demonstrate simple calculations and user input using scanf() and printf().

1. Celsius to Fahrenheit Conversion
Description

This program converts a temperature entered in Celsius to Fahrenheit using the formula:

F = (9/5 × C) + 32

Features

Takes temperature in Celsius as input

Converts it to Fahrenheit

Displays the result with one decimal place

Sample Output
Enter temperature in Celsius: 25
Temperature in Fahrenheit: 77.0

2. Gross Salary Calculation
Description

This program calculates the Gross Salary based on:

Base Salary

HRA (House Rent Allowance) percentage

DA (Dearness Allowance) percentage

TA (Travel Allowance) percentage

Formula Used
Gross Salary = Base Salary + HRA + DA + TA


(each allowance is calculated as a percentage of base salary)

Sample Output
Enter Base Salary: 20000
Enter HRA percentage: 20
Enter DA percentage: 10
Enter TA percentage: 5
Gross Salary: Rs. 27000.00

3. Third Angle of a Triangle
Description

This program calculates the third angle of a triangle when the first two angles are given.

Formula Used
Third Angle = 180 − (First Angle + Second Angle)

Sample Output
Enter First Angle: 50
Enter Second Angle: 60
Third Angle Of Triangle = 70

How to Compile and Run

Use a C compiler like GCC.

gcc filename.c -o output
./output


⚠️ Note: Each program has its own main() function, so compile and run them separately.

Requirements

C Compiler (GCC recommended)

Basic knowledge of C programming

Author

Written as part of basic C programming practice.
