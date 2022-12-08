//Hayden Smith CS303
#include <iostream>
#include <queue>
#include <string>
#include <map>
#include <iterator>
#include "functions.h"
using namespace std;

//function will take in a queue by reference and modify the positions within the queue
//function will not return anything
void move_to_rear(queue<int>& my_queue) {
  int val = my_queue.front();
  my_queue.pop();
  my_queue.push(val);
}

//function takes in a string
//function will return a boolean type denoting if passed string is a palindrome (reflective spelling from middle) using recursion
bool isPalindrome(string ustring) {
  //creating length value to make test cases more readable
  int length_of_string = ustring.length();
  //if length of string is one or zero, it is a palindrome
  if (length_of_string <= 1) return true;
  //if its more than length of one, then test the front and rear indecies for equality
  //create a new string without the front/rear indecies and call the function again with the substring
  else if (ustring.at(0) == ustring.at(length_of_string - 1)) 
  {
    string new_string = ustring.substr(1, (length_of_string - 2));
    isPalindrome(new_string);
  }
  //if indecies are checked and they are not equal, return false
  else {
    return false;
  }
}

//function takes in a map and using an iterator, outputs the data within the map.
//function is designed to work specifically for the 'stateDataMap' map (output formatting)
//FIXME
map<string, string>::iterator itr;
void printMap(map<string, string> map) {
  for(itr = map.begin(); itr != map.end(); ++itr) {
    cout << itr->first << "'s capital is: " << itr->second << "." << endl;
  }
}


//function will be passed a map, and will prompt user to input a state name
//function will output text to console displaying state capital associated with state name given
void giveStateReturnCapital(map<string, string> map) {
  string stateName;
  cout << "Enter a state you would like to find the capital of -> ";
  cin >> stateName;

  //auto iterator that will find the map data pair
  auto it = map.find(stateName);

  //dereferencing iterator to output state capital associated with stateName.
  cout << "The capital of " << it->first << " is " << it->second << "." << endl;
}
