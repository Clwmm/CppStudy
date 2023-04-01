#include "Program.h"

void Program::printMain()
{
    system("cls");
    std::cout << "======================\n";
    std::cout << "=     Jezyk  C++     =\n";
    std::cout << "======================\n";
    std::cout << "=   Kalwa   Mateusz  =\n";
    std::cout << "======================\n\n";
}

void Program::increaseNum(int& num, int min, int max)
{
    if (num == max)
        num = min;
    else
        ++num;
}


void Program::decreaseNum(int& num, int min, int max)
{
    if (num == min)
        num = max;
    else
        --num;
}

int Program::chooseTaskSet()
{
    int cgetch = 0;

    while (true)
    {
        printMain();
        std::cout << "Task sets: " << std::endl;

        for (int i = 1; i <= tasksets.size() + 1; i++)
        {
            if (i == tasksets.size() + 1)
            {
                if (i == taskSetNumber)
                    std::cout << "Exit <--" << std::endl;
                else
                    std::cout << "Exit" << std::endl;
            }
            else
            {
                if (i == taskSetNumber)
                    std::cout << i << " <--" << std::endl;
                else
                    std::cout << i << std::endl;
            }
        }

        std::cout << "\nChoose a set of task using arrows and enter." << std::endl;

        cgetch = 0;
        switch (cgetch = _getch())
        {
        case KEY_UP:
            decreaseNum(taskSetNumber, 1, tasksets.size() + 1);
            break;
        case KEY_DOWN:
            increaseNum(taskSetNumber, 1, tasksets.size() + 1);
            break;
        case KEY_ENTER:
            if (taskSetNumber == tasksets.size() + 1)
                return -1;
            else
                return taskSetNumber;
        case KEY_ESC:
            return -1;
        default:
            break;
        }
    }
}

int Program::chooseTask()
{
    auto tasksetit = tasksets.find(taskSetNumber);
    auto mapoftasks = (*tasksetit).second;
    int cgetch = 0;

    while (true)
    {
        printMain();
        std::cout << "Tasks:" << std::endl;

        for (int i = 1; i <= mapoftasks.size() + 1; i++)
        {
            if (i == mapoftasks.size() + 1)
            {
                if (i == taskNumber)
                    std::cout << "Back <--" << std::endl;
                else
                    std::cout << "Back" << std::endl;
            }
            else
            {
                if (i == taskNumber)
                    std::cout << i << " <--" << std::endl;
                else
                    std::cout << i << std::endl;
            }
        }

        std::cout << "\nChoose a task using arrows and enter." << std::endl;

        cgetch = 0;
        switch (cgetch = _getch())
        {
        case KEY_UP:
            decreaseNum(taskNumber, 1, mapoftasks.size() + 1);
            break;
        case KEY_DOWN:
            increaseNum(taskNumber, 1, mapoftasks.size() + 1);
            break;
        case KEY_ENTER:
            if (taskNumber == mapoftasks.size() + 1)
                return -1;
            else
                return taskNumber;
        case KEY_ESC:
            return -1;
        default:
            break;
        }
    }
}

void Program::initTask(int taskset, int task)
{
    system("cls");
    auto tasksetsit = tasksets.find(taskset);
    auto choosedtask = (*tasksetsit).second.find(task);
    (*choosedtask).second();
}

void Program::init()
{
    while (true)
    {
        if (chooseTaskSet() == -1)
            return;
        if (chooseTask() == -1)
            continue;

        initTask(taskSetNumber, taskNumber);
        std::cout << "\n\tPress any key to continue";
        _getch();
    }
}

Program::Program()
{
    tasks1[1] = &z1z1;
    tasks1[2] = &z1z2;
    tasks1[3] = &z1z3;
    tasks1[4] = &z1z4;
    tasks1[5] = &z1z5;

    tasksets[1] = tasks1;

    tasks2[1] = &z2z1;
    tasks2[2] = &z2z2;
    tasks2[3] = &z2z3;
    tasks2[4] = &z2z4;
    tasks2[5] = &z2z5;

    tasksets[2] = tasks2;

    tasks3[1] = &z3z1;
    tasks3[2] = &z3z2;
    tasks3[3] = &z3z3;
    tasks3[4] = &z3z4;
    tasks3[5] = &z3z5;

    tasksets[3] = tasks3;
}

Program::~Program()
{

}
