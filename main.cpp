/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Daniel Thew
 */
#include <iostream>

using namespace std;
//constant ints
const int f = 5;
const int t = 10;
//functions to perform the four basic operations on the const ints
void addConst(const int f, const int t);
void subConst(const int f, const int t);
void multConst(const int f, const int t);
void divConst(const int f, const int t);

int main() {
  //calls to four basic funtions
  addConst(f, t);
  subConst(f, t);
  multConst(f, t);
  divConst(f, t);
}
//prints the reuslts of the four basic operations on the const ints
//unnecessary to delve into the code here: pretty intuitive
void addConst(const int f, const int t){
  cout<<f+t<<"\n";
}

void subConst(const int f, const int t){
  cout<<f-t<<"\n";
}

void multConst(const int f, const int t){
  cout<<f*t<<"\n";
}

void divConst(const int f, const int t){
  cout<<t/f<<"\n";
}