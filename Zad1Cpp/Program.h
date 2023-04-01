#pragma once
#include "Functions.h"

class Program
{
	std::map<int, std::map<int, void (*)()>> tasksets;
	std::map<int, void (*)()> tasks1;
	std::map<int, void (*)()> tasks2;
	std::map<int, void (*)()> tasks3;

	int taskSetNumber = 1;
	int taskNumber = 1;

	void printMain();
	void increaseNum(int& num, int min, int max);
	void decreaseNum(int& num, int min, int max);

	int chooseTaskSet();
	int chooseTask();

	void initTask(int taskset, int task);

public:
	void init();

	Program();
	~Program();
};

