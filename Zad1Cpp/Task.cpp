#include "Task.h"

int Task::getId()
{
	return id;
}

Task::Task(int _id, void (*foo)())
	:id(_id)
{
	init = foo;
}
