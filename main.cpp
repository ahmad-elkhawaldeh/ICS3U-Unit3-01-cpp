// Copyright (c) 2020 Ahmad el-khawaldeh All rights reserved.
//
// Created by Ahmad el-khawaldeh
// Created on Nov 2020
// This program will add two numbers togather

#include <iostream>
using namespace std;

int main() {
    // Input
    int firstNumber;
    int secondNumber;
    int sumOfTwoNumbers;
    
    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;

    // process
    sumOfTwoNumbers = firstNumber + secondNumber;

    // Output
    cout << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers;     

    return 0;
}