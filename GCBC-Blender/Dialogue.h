#pragma once
#include<iostream>
#include "Drink.h"
#include "Blender.h"
#include <vector>

using namespace std;
class Dialogue
{
	Blender blender;
	bool isRunning;
public:
	Dialogue() {
		blender = Blender();
		isRunning = true;
	}
	void start() {
		cout << "Hello, welcome to the GCBC Blender!" << endl;
		mainLoop();
	}
	void mainLoop() {
		while (isRunning) {
			cout << "\n====================\n";
			cout << "Please enter in the type of drink that you would like:\n0: Exit\n1: Latte\n2: Tea\n3: Stampede\n4: Lemonade\n5: Chai\n6: Hot Cocoa" << endl;

			int category;
			cin >> category;

			switch (category) {
			case 0:
				isRunning = false;
				break;
			case 1:
				display(blender.latte());
				break;
			case 2:
				display(blender.fresh("Tea"));
				break;
			case 3:
				display(blender.fresh("Stampede"));
				break;
			case 4:
				display(blender.fresh("Lemonade"));
				break;
			case 5:
				display(blender.nonCoffee("Chai"));
				break;
			case 6:
				display(blender.nonCoffee("Hot Cocoa"));
				break;
			default:
				cout << "That is not an option. Please try again..." << endl;
				mainLoop();
			}
		}
		cout << "Have a good day!";
	}
	void display(Drink drink) {
		cout << "\n";
		cout << "Your drink:\n" << drink.getType() << "\nFlavors:\n";
		vector<string> flavors = drink.getFlavors();
		for (int i = 0; i < flavors.size(); i++) {
			cout << flavors.at(i) << endl;
		}
	}
};

