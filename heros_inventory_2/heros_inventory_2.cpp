// Demonstrates the usage of vectors

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

  vector<string> inventory;
  inventory.push_back("sword");
  inventory.push_back("armor");
  inventory.push_back("shield");

  cout << "You have " << inventory.size() << " items " << endl;

  cout << "\nYour items: \n";
  for (unsigned int i = 0; i < inventory.size(); i++) {
    cout << inventory[i] << endl;
  }

  cout << "You trade your sword for a battle axe." << endl;
  inventory[0] = "battle axe";

  cout << endl << "Your items" << endl;
  for (unsigned int i = 0; i < inventory.size(); i++) {
    cout << inventory[i] << endl;
  }

  cout << "The item " << inventory[0] << " has " << inventory[0].size() << " letters in it" << endl;

  cout << "Your shield is destroyed in a fierce battle" << endl;
  inventory.pop_back();

  cout << endl << "Your items: " << endl;
  for (unsigned int i = 0; i < inventory.size(); i++) {
    cout << inventory[i] << endl;
  }

  cout << "You have been robbed and you have left with no items in your inventory" << endl;
  inventory.clear();

  if (inventory.empty()) {
    cout << "You have nothing" << endl;
  }
  else {
    cout << "You have at least one item in your inventory" << endl;
  }
	return 0;
}