#include "Functions.h"

// ==================================== ZESTAW I

// ZADANIE I
int checkz1z1(int a, int b)
{
    if (b == -1)
    {
        if (a < 2)
        {
            std::cout << "The number cannot be less than 2\n";
            return 2;
        }
        else
            return a;
    }
    else
    {
        if (b != 0)
        {
            if (a == 2)
            {
                std::cout << "If first number = 2, second number must be equal to 0\n";
                return 0;
            }
            if (b >= a)
            {
                std::cout << "Second number cannot be grater than first number\n";
                return 0;
            }
            if (a % 2 == b % 2)
                return b;
            else
            {
                std::cout << "The second number has been changed to have the same evenness characteristic as the first one\n";
                return b - 1;
            }
        }
        else
            return b;
    }
}

void z1z1()
{
    int a = 0, b = -1;
    

    std::cout << "Specify the size of the outer square: ";
    std::cin >> a;
    a = checkz1z1(a, -1);
    std::cout << "Specify the size of the inner square : ";
    std::cin >> b;
    b = checkz1z1(a, b);

    std::cout << std::endl;

    int c = (a - b) / 2;

    if (b == 0)
    {
        for (int i = 0; i < a; i++)
            std::cout << std::setw(a + 1) << std::setfill('*') << "\n";
    }
    else
    {
        for (int i = 1; i <= a; ++i)
        {
            if (i <= c || i > (a - c))
            {
                std::cout << std::setw(a + 1) << std::setfill('*') << "\n";
            }
            else
            {
                std::cout << std::setfill('*') << std::setw(c) << "";
                std::cout << std::setfill(' ') << std::setw(b) << "";
                std::cout << std::setfill('*') << std::setw(c) << "" << std::endl;
            }
        }
    }
}

// ZADANIE II
void z1z2()
{
    char c1[CHARMAX];
    char word1[CHARMAX];
    char c2[CHARMAX];
    char word2[CHARMAX];

    std::cout << "Enter two words [separated by space]: ";
    std::cin >> c1;
    std::cin >> c2;

    for (int i = 0; i < strlen(c1); i++)
        word1[i] = tolower(c1[i]);
    for (int i = 0; i < strlen(c2); i++)
        word2[i] = tolower(c2[i]);

    bool thesame = true;

    for (int i = 0; i < CHARMAX; i++)
        if (word1[i] != word2[i])
        {
            thesame = false;
            break;
        }

    if (thesame)
        std::wcout << "This words are the same\n";
    else
        std::wcout << "This words are not the same\n";
}

// ZADANIE III
void z1z3()
{
    std::cout << "Enter a text: " << std::endl;
    std::string cinline;

    std::getline(std::cin, cinline);
    std::string txt = cinline;

    for (int i = 0; i < cinline.size(); i++)
            txt[i] = tolower(cinline[i]);

    txt.erase(std::remove_if(txt.begin(), txt.end(), ::isspace), txt.end());
    std::string reversetxt = txt;
    std::reverse(reversetxt.begin(), reversetxt.end());

    if (txt == reversetxt)
    {
        std::cout << "\nText is a palindrome\n";
        std::cout << txt << " == " << reversetxt << std::endl;
    }
    else
    {
        std::cout << "\nText is not a palindrome\n";
        std::cout << txt << " != " << reversetxt << std::endl;
    }
}

// ZADANIE IV

unsigned long long fibite(unsigned long long a)
{
    unsigned long long x = 0, y = 1, z = 0;
    if (a == 0)
        return a;
    for (unsigned long long i = 1; i < a; i++)
    {
        z = x + y;
        x = y;
        y = z;
    }
    return y;
}

unsigned long long fibrec(unsigned long long a)
{
    if (a <= 1)
        return a;
    else
        return fibrec(a - 1) + fibrec(a - 2);
}

void z1z4()
{
    bool ite = true;
    bool end = false;
    int cgetch = 0;
    
    while (!end)
    {
        system("cls");
        std::cout << "Fibonacci sequence:" << std::endl;
        switch (ite)
        {
        case true:
            std::cout << "Iteration <--" << std::endl;
            std::cout << "Recurrence" << std::endl;
            break;
            
        case false:
            std::cout << "Iteration" << std::endl;
            std::cout << "Recurrence <--" << std::endl;
            break;
        default:
            break;
        }
        std::cout << "\nChoose version using arrows and enter." << std::endl;

        cgetch = 0;
        switch (cgetch = _getch())
        {
        case KEY_UP:
            ite = !ite;
            break;
        case KEY_DOWN:
            ite = !ite;
            break;
        case KEY_ENTER:
            end = true;
        default:
            break;
        }
    }

    unsigned long long FibeMAX = 0;
    system("cls");
    std::cout << "Specify the Fibonacci number: ";
    std::cin >> FibeMAX;

    if (ite)
    {
        std::cout << "Iteration" << std::endl;
        for (unsigned long long i = 0; i < FibeMAX; i++)
            std::cout << i + 1 << ":\t" << fibite(i) << std::endl;
    }
    else
    {
        std::cout << "Recurrence" << std::endl;
        for (unsigned long long i = 0; i < FibeMAX; i++)
            std::cout << i + 1 << ":\t" << fibrec(i) << std::endl;
    }
       

    

}

// ZADANIE V
void z1z5()
{
    bool ite = true;
    bool end = false;
    int cgetch = 0;

    while (!end)
    {
        system("cls");
        std::cout << "Fibonacci sequence:" << std::endl;
        switch (ite)
        {
        case true:
            std::cout << "Iteration <--" << std::endl;
            std::cout << "Recurrence" << std::endl;
            break;

        case false:
            std::cout << "Iteration" << std::endl;
            std::cout << "Recurrence <--" << std::endl;
            break;
        default:
            break;
        }
        std::cout << "\nChoose version using arrows and enter." << std::endl;

        cgetch = 0;
        switch (cgetch = _getch())
        {
        case KEY_UP:
            ite = !ite;
            break;
        case KEY_DOWN:
            ite = !ite;
            break;
        case KEY_ENTER:
            end = true;
        default:
            break;
        }
    }

    unsigned long long FibeMAX = 0;
    system("cls");
    std::cout << "Specify the Fibonacci number: ";
    std::cin >> FibeMAX;

    if (ite)
    {
        std::cout << "Iteration" << std::endl;
        for (unsigned long long i = 0; i < FibeMAX; i++)
        {
            if (i < z1z5vec.size())
                std::cout << i + 1 << ": \t" << z1z5vec[i] << std::endl;
            else
            {
                std::cout << i + 1 << ": \t";
                unsigned long long temp = fibite(i);
                std::cout << temp << std::endl;
                z1z5vec.push_back(temp);
            }
        }
            
    }
    else
    {
        std::cout << "Recurrence" << std::endl;
        for (unsigned long long i = 0; i < FibeMAX; i++)
        {
            if (i < z1z5vec.size())
                std::cout << i + 1 << ": \t" << z1z5vec[i] << std::endl;
            else
            {
                std::cout << i + 1 << ":\t";
                unsigned long long temp = fibrec(i);
                std::cout << temp << std::endl;
                z1z5vec.push_back(temp);
            }
        }
            
    }

}