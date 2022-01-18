#include <string>
#include "Drink.h"
#include "CookBook.h"
#include <random>
#include <time.h>
using namespace std;
static class Blender
{
public:
	Blender() {
		time_t t;
		srand((unsigned)time(&t));
	}
	static Drink latte() {
		Drink order = Drink();
		order.setType("latte");
		int numOfFlavors = rand() % 3 + 1;
		CookBook c = CookBook();
		for (int i = 0; i < numOfFlavors; i++) {
			order.addFlavor(c.coffeeFlavors[rand() % c.coffeFlavorsSize]);
		}
		return order;
	}
	static Drink nonCoffee(string type) {
		Drink order = Drink();
		order.setType(type);
		int numOfFlavors = rand() % 3 + 1;
		CookBook c = CookBook();
		for (int i = 0; i < numOfFlavors; i++) {
			order.addFlavor(c.coffeeFlavors[rand() % c.coffeFlavorsSize]);
		}
		return order;
	}
	static Drink fresh(string type) {
		Drink order = Drink();
		order.setType(type);
		int numOfFlavors = rand() % 3 + 1;
		CookBook c = CookBook();
		for (int i = 0; i < numOfFlavors; i++) {
			order.addFlavor(c.stampedeFlavors[rand() % c.stampedeFlavorsSize]);
		}
		return order;
	}
};

