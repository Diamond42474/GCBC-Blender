#pragma once
#include<string>
#include<vector>
using namespace std;
class Drink
{
private:
	string type;
	vector<string> flavors;
public:
	Drink() {
		this->type = "";
		this->flavors = vector<string>();
	}
	
	string getType() {
		return this->type;
	}
	vector<string> getFlavors() {
		return this->flavors;
	}

	void setType(string type) {
		this->type = type;
	}
	void addFlavor(string flavor) {
		this->flavors.push_back(flavor);
	}
};

