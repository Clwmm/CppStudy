#pragma once
#include <string>

class Task
{
	int id = 0;

public:
	void (*init)();
	int getId();

	Task(int _id, void (*foo)());
};

