//Hayden Smith CS303
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#pragma once
#include <string>
#include <map>
#include <queue>
using namespace std;

void move_to_rear(queue<int>& my_queue);

bool isPalindrome(string ustring);

void printMap(map<string, string> map);

void giveStateReturnCapital(map<string, string> map);

#endif
