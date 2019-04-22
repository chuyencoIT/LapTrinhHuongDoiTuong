#pragma once
#include <iostream>
#include <string>
using namespace std;

class CDaoQuan
{
protected:
	string code;
	float attack;
	float defend;
	string equipment;
	int strength;
public:
	void input_data();
	void output_data();
};

