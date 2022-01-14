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
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			default:
				cout << "That is not an option. Please try again..." << endl;
				mainLoop();
			}
			cin ;
		}
		cout << "Have a good day!";
	}
	void display(Drink drink) {
		cout << "Your drink:\n" << drink.getType() << "\nFlavors:\n";
		vector<string> flavors = drink.getFlavors();
		for (int i = 0; i < flavors.size(); i++) {
			cout << flavors.at(i) << endl;
		}
	}
};

