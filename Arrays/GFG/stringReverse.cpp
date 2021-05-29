/*
Geeks for Geeks
Write a program to reverse an array or string
Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}
*/
//Initial Template for C++

#include <iostream>
#include <string>
using namespace std;


string reverseWord(string str){
    
  //Your code here
  string ans;
  for(int i = str.size()-1; i >= 0; i--) {
    ans += str[i];
  }
  return ans;
}