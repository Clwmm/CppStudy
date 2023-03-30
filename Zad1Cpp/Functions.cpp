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

// ==================================== ZESTAW II

// ZADANIE I

void printSpace(int a)
{
    for (int i = 0; i < a; i++)
        std::cout << " ";
}

void justing(std::vector<std::string>& vecStr, int maxWidth)
{
    int tempWidth = 0;
    int firstLineIndex = -1;
    int noWords = 0;
    for (int i = 0; i < vecStr.size(); ++i)
    {
        if (tempWidth == 0)
        {
            firstLineIndex = i;
            if (vecStr[i].size() >= maxWidth)
            {
                std::cout << vecStr[i] << std::endl;
                continue;
            }
        }

        tempWidth += vecStr[i].size();
        ++noWords;
        
        if (tempWidth + noWords - 1 <= maxWidth)
            continue;
        float a = static_cast<float>(maxWidth - tempWidth + vecStr[i].size());
        float b = static_cast<float>(noWords - 2);
        float noSpaces = a/b;

        //std::cout << "a: " << a << "\tb:" << b << "\tnospaces: " << noSpaces << std::endl;

        int tempsize = 0;
        for (int j = firstLineIndex; j < i - 1; j++)
        {
            tempsize += vecStr[j].size();
            std::cout << vecStr[j];
            printSpace(noSpaces);
        }
        tempsize += vecStr[i - 1].size();
        std::cout << vecStr[i - 1] << std::endl;

        //std::cout << "NoSpa: " << noSpaces << "\tWords size: " << tempsize << std::endl;

        tempWidth = 0;
        noWords = 0;
        --i;
        continue;
    }

}

void z2z1()
{
    const int maxWidth = 21;
    std::vector<std::string> vecStr;

    {
        std::ifstream t("z2z1.txt");
        std::stringstream buffer;
        buffer << t.rdbuf();
        t.close();

        std::string word;
        std::istringstream iss(buffer.str());
        while (std::getline(iss, word, ' '))
            vecStr.push_back(word);
    }

    justing(vecStr, maxWidth);
}


// ZADANIE II
int fromtoRandom(int a, int b)
{
    return (rand() % (b - a + 1)) + a;
}

int partition(std::vector<int>& vec, int start, int end)
{
    int pivot = end;
    int j = start;
    for (int i = start; i < end; ++i)
    {
        if (vec[i] < vec[pivot])
        {
            std::swap(vec[i], vec[j]);
            ++j;
        }
    }
    std::swap(vec[j], vec[pivot]);
    return j;
}

void quickSort(std::vector<int>& vec, int start, int end)
{
    if (start < end)
    {
        int p = partition(vec, start, end);
        quickSort(vec, start, p - 1);
        quickSort(vec, p + 1, end);
    }
}

void z2z2()
{
    srand(time(NULL));
    std::vector<int> vec;

    for (int i = 0; i < 10000; ++i)
    {
        int temp = fromtoRandom(1, 10000);
        switch (i%4)
        {
        case 3:
            std::cout << i << ":\t" << temp << "\n";
            break;
        default:
            std::cout << i << ":\t" << temp << "\t";
            break;
        }
        vec.push_back(temp);
    }

    std::cout << "\n\tPress any key to sort vector using QuickSort\n";
    _getch();

    quickSort(vec, 0, vec.size()-1);

    for (int i = 0; i < vec.size(); ++i)
    {
        switch (i % 4)
        {
        case 3:
            std::cout << i << ": " << vec[i] << "\n";
            break;
        default:
            std::cout << i << ":   " << vec[i] << "\t";
            break;
        }
    }
        
}

// ZADANIE III
auto sum(const auto& arg)
{
    float c = 0;
    for (auto i = arg.begin(); i != arg.end(); ++i)
        c += *i;
    return c;
}

void z2z3()
{
    std::initializer_list<float> list = 
    { 
        1.0f, 2.0f, 3.5f, 15.0f, 45.32f, 128.67f
    };
    std::cout << sum(list) << std::endl;
}

// ZADANIE IV
void z2z4()
{
    std::string path;
    std::cout << "Eneter path to directory: ";
    std::getline(std::cin, path);

    if (!std::filesystem::is_directory(path))
    {
        std::cout << "Path is not a directory" << std::endl;
        return;
    }

    bool empty = true;
    for (const auto& entry : std::filesystem::directory_iterator(path))
        if (!entry.is_directory())
        {
            empty = false;
            std::cout << entry.path().filename() << "\n\t" << "Size: " << entry.file_size() << "B" << std::endl << std::endl;
        }

    if (empty)
        std::cout << "This directory is empty" << std::endl;

}

// ZADANIE V
void ArtoRz(int c, std::map<int, std::string>& map)
{
    for (auto i = map.rbegin(); i != map.rend(); ++i)
    {
        while (c >= i->first)
        {
            c -= i->first;
            std::cout << i->second;
        }
    }
    std::cout << std::endl;
}

void z2z5()
{
    std::map<int, std::string> map
    {
        {1, "I"},
        {4, "IV"},
        {5, "V"},
        {9, "IX"},
        {10, "X"},
        {40, "XL"},
        {50, "L"},
        {90, "XC"},
        {100, "C"},
        {400, "CD"},
        {500, "D"},
        {900, "CM"},
        {1000, "M"},
    };

    int cini;
    std::cout << "Give Arabic number to convert to Roman numeral: ";
    std::cin >> cini;

    ArtoRz(cini, map);

}