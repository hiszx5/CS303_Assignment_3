//Hayden Smith CS303
#include <iostream>
#include <queue>
#include <string>
#include <map>
#include <iterator>
using namespace std;
#include "functions.h"

int main() {
  //initializing the map
  map <string, string> stateDataMap;

  //adding data pairs to the map
  stateDataMap["Nebraska"] = "Lincoln";
  stateDataMap["New York"] = "Albany";
  stateDataMap["Ohio"] = "Columbus";  
  stateDataMap["California"] = "Sacramento";
  stateDataMap["Massachusetts"] = "Boston";
  stateDataMap["Texas"] = "Austin";

  //changing the capital of california to los angeles
  stateDataMap["California"] = "Los Angeles";

  //function call
  giveStateReturnCapital(stateDataMap);

  cout << endl;

  //function call
  printMap(stateDataMap);
}
