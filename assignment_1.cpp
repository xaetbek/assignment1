//  Copyright 2021 - Khayotbek Azimov
//  Email: kazimov@mail.sfsu.edu
//  This file is part of CSC 340 - Assignment 1

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// TODO: Write a C++ program that inputs a five-digit integer, separate the integer into its digits and print
// them separated by the three spaces each.

int main()
{
 int num;
 cout<<"Enter a 5-digit number:  ";
 cin>>num;
 
 cout<<num/10000<<"   ";
 num=num%10000;
 
 cout<<num/1000<<"   ";
 num=num%1000;
 
 cout<<num/100<<"   ";
 num=num%100;
 
 cout<<num/10<<"   ";
 num=num%10;
 
 cout<<num<<endl;
 
 return 0;
}