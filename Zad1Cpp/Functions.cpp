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

        float noSpaces = static_cast<float>(maxWidth - tempWidth + vecStr[i].size()) / static_cast<float>(noWords - 2);
        int modSpaces = (maxWidth - tempWidth + vecStr[i].size()) % (noWords - 2);

        for (int j = firstLineIndex; j < i - 1; j++)
        {
            std::cout << vecStr[j];
            if (modSpaces > 0)
            {
                printSpace(noSpaces + 1);
                --modSpaces;
            }
            else
                printSpace(noSpaces);
            
        }
        std::cout << vecStr[i - 1] << std::endl;

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
        if (!t)
        {
            std::cout << "File could not be opened!" << std::endl;
            return;
        }
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


// ==================================== ZESTAW III

// ZADANIE I

TString::TString(const char* s)
    : ptr(nullptr) , len(0)
{
    if (s != nullptr)
    {
        len = std::strlen(s);
        ptr = new char[len + 1];
        strcpy(ptr, s);
    }
    LOG("TString c-tor: [");
    LOG((ptr ? ptr : "pusty"));
    LOG("]\n");
}

TString::TString(const TString& s)
    : ptr(nullptr), len(s.len)
{
    if (len > 0)
    {
        ptr = new char[len + 1];
        strcpy(ptr, s.ptr);
    }
    LOG("TString cc-tor: [");
    LOG((ptr ? ptr : "pusty"));
    LOG("]\n");
}

TString::TString(TString&& s)
    : ptr(s.ptr), len(s.len)
{
    s.ptr = nullptr;
    s.len = 0;

    LOG("TString move c-tor: [");
    LOG((ptr ? ptr : "pusty"));
    LOG("]\n");
}

TString& TString::operator=(const TString& s)
{
    if (this != &s)
    {
        delete[] ptr;
        ptr = nullptr;
        len = s.len;
        if (len > 0)
        {
            ptr = new char[len + 1];
            strcpy(ptr, s.ptr);
        }
    }
    LOG("TString copy operator+: [");
    LOG((ptr ? ptr : "pusty"));
    LOG("]\n");
    return *this;
}

TString& TString::operator=(TString&& s)
{
    if (this != &s)
    {
        delete[] ptr;
        len = s.len;
        ptr = s.ptr;
        s.len = 0;
        s.ptr = nullptr;
    }
    LOG("TString move operator=: [");
    LOG((ptr ? ptr : "pusty"));
    LOG("]\n");
    return *this;
}

TString::~TString()
{
    LOG("TString d-tor: [");
    LOG((ptr ? ptr : "pusty"));
    LOG("]\n");
    delete[] ptr;
}

void z3z1()
{
    TString s1;
    TString s2{ "nikedunklow" };
    TString s3{ s2 };
    TString* p = new TString[3]{ "toyotasupra", s3, TString("Poland") };
    s1 = std::move(s2);
    delete[] p;
    std::cout << "===========" << std::endl;
}

// ZADANIE II

void BigInt::add(const BigInt& a)
{
    std::cout << *this << " + " << a << std::endl;
    std::vector<int> vecstr;
    for (auto x : *str)
        vecstr.push_back(int(x - '0'));

    std::vector<int> veca;
    for (auto x : *a.str)
        veca.push_back(int(x - '0'));

    if (vecstr.size() < veca.size())
    {
        auto temp = vecstr;
        vecstr = veca;
        veca = temp;
    }

    int j = vecstr.size() - 1;
    for (int i = veca.size() - 1; i >= 0; --i)
    {
        vecstr[j] += veca[i];
        --j;
    }

    for (int i = vecstr.size() - 1; i > 0; --i)
    {
        if (vecstr[i] > 9)
        {
            int t = vecstr[i];
            vecstr[i] = vecstr[i] % 10;
            t = (t - vecstr[i]) / 10;
            vecstr[i - 1] += t;
        }
    }
    while (vecstr[0] > 9)
    {
        int t = vecstr[0];
        vecstr[0] = vecstr[0] % 10;
        t = (t - vecstr[0]) / 10;
        vecstr.insert(vecstr.begin(), t);
    }

    std::stringstream res;
    std::copy(vecstr.begin(), vecstr.end(), std::ostream_iterator<int>(res));

    delete str;
    str = new std::string(res.str());
    std::cout << "\t= " << *this << std::endl;
}

void BigInt::subtract(const BigInt& a)
{
    std::cout << *this << " - " << a << std::endl;
    std::string result;
    int borrow = 0;

    std::string num1 = *str;
    std::string num2 = *a.str;

    // Pad the shorter string with leading zeros to make them of equal length
    int maxLength = std::max(num1.length(), num2.length());
    num1 = std::string(maxLength - num1.length(), '0') + num1;
    num2 = std::string(maxLength - num2.length(), '0') + num2;

    // Subtract digits starting from the least significant digit
    for (int i = maxLength - 1; i >= 0; i--) {
        int diff = (num1[i] - '0') - (num2[i] - '0') - borrow;

        if (diff < 0) {
            diff += 10;
            borrow = 1;
        }
        else {
            borrow = 0;
        }

        result.insert(0, std::to_string(diff));
    }

    // Remove any leading zeros in the result
    result.erase(0, std::min(result.find_first_not_of('0'), result.size() - 1));

    delete str;
    str = new std::string(result);
    std::cout << "\t= " << *this << std::endl;
}

BigInt::BigInt(const char *s)
    : str(nullptr)
{
    if (s != nullptr)
        str = new std::string(s);
    else
        str = new std::string("0");
    LOG("BigInt c-tor: [");
    LOG((s ? s : "empty"));
    LOG("]\n");
}

BigInt& BigInt::operator=(const BigInt& s)
{
    if (this != &s)
    {
        delete str;
        str = nullptr;
        str = new std::string{ " ", s.str->size() };
        *str = *s.str;
    }
    LOG("BigInt copy operetator=: [");
    LOG(str ? *str : std::string("empty"));
    LOG("]\n");
    return *this;
}

BigInt& BigInt::operator=(BigInt&& s)
{
    if (this != &s)
    {
        delete str;
        str = s.str;
        s.str = nullptr;
    }
    LOG("BigInt move operator=: [");
    LOG(str ? *str : std::string("empty"));
    LOG("]\n");
    return *this;
}

std::ostream& operator<<(std::ostream& os, const BigInt& b)
{
    os << *b.str;
    return os;
}

BigInt::~BigInt()
{
    LOG("BigInt d-tor: [");
    LOG((str ? *str : std::string("empty")));
    LOG("]\n");
    delete str;
}

void z3z2()
{
    BigInt a = "3124936129358215241";
    BigInt b{"541956320156320982316503196"};
    BigInt c("231596592651937");

    a.add(b);
    b.subtract(c);
    
}

// ZADANIE III

bool getMatrixFromFile(const std::string& filename, std::vector<std::vector<int>>& a)
{
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cout << "Cannot open " << filename << std::endl;
        return false;
    }

    a.clear();
    std::string line;
    while (std::getline(file, line) and not line.empty()) {
        std::vector<int> row;
        std::stringstream ss(line);
        int val;
        while (ss >> val) {
            row.push_back(val);
        }
        a.push_back(row);
    }

    int size = 0;
    for (int i = 0; i < a.size(); i++)
    {
        switch (i)
        {
        case 0:
            size = a[i].size();
            break;
        default:
            if (size != a[i].size())
            {
                a.clear();
                std::cout << "Incorrectly specified matrix: " << filename << std::endl;
                return false;
            }
            break;
        }
    }

    file.close();
    return true;
}

void multiMatrix(const std::vector<std::vector<int>>& a, const std::vector<std::vector<int>>& b, std::vector<std::vector<int>>& matrix)
{
    for (int i = 0; i < a.size(); ++i)
    {
        matrix.push_back({ 0 });
        for (int j = 0; j < b[0].size() - 1; ++j)
            matrix[i].push_back(0);
    }

    for (int i = 0; i < a.size(); i++)
        for (int j = 0; j < b[0].size(); j++)
        {
            int s = 0;
            for (int k = 0; k < b.size(); k++)
                s += (a[i][k] * b[k][j]);
            matrix[i][j] = s;
        }
}

std::ostream& operator<<(std::ostream& out, const std::vector<std::vector<int>>& matrix)
{
    for (auto& x : matrix)
    {
        for (auto i : x)
            out << i << " ";
        out << "\n";
    }
    return out;
}

void z3z3()
{
    bool w1 = false, w2 = false;
    std::vector<std::vector<int>> mA;
    std::vector<std::vector<int>> mB;
    std::vector<std::vector<int>> mC;

    w1 = getMatrixFromFile("z3z3a.txt", mA);
    w2 = getMatrixFromFile("z3z3b.txt", mB);

    if (!w1 || !w2)
        return;

    if (mA[0].size() != mB.size())
    {
        std::cout << "Incorrectly specified matrices:\nthe number of elements in a row \nof matrix A must be equal to the number\nof rows of matrix B\n\n";
        return;
    }

    multiMatrix(mA, mB, mC);


    std::cout << "A:\n" << mA << std::endl;
    std::cout << "B:\n" << mB << std::endl;
    std::cout << "AXB:\n" << mC << std::endl;

    std::ofstream outFile("z3z3c.txt");
    if (!outFile.is_open())
    {
        std::cout << "Cannot open z3z3c.txt" << std::endl;
        return;
    }
    outFile << mC;
}

// ZADANIE IV

int gcd(int a, int b)
{
    int t;
    while (true) 
    {
        t = a % b;
        if (t == 0)
            return b;
        a = b;
        b = t;
    }
}

void z3z4()
{
    double prime_1 = 13;
    double prime_2 = 17;
    double n = prime_1 * prime_2;
    double track;
    double phi = (prime_1 - 1) * (prime_2 - 1);

    double public_key = 7;
    
    while (public_key < phi) {
        track = gcd(public_key, phi);
        if (track == 1)
            break;
        else
            public_key++;
    }

    double private_key_ = 1 / public_key;
    double private_key = fmod(private_key_, phi);

    double data = 123;

    //encrypt & decrypt
    double encrypted = pow(data, public_key);
    double decrypted = pow(encrypted, private_key);
    encrypted = fmod(encrypted, n);
    decrypted = fmod(decrypted, n);

    std::cout << "Original integer: " << data << std::endl << std::endl;
    std::cout << "Encrypted integer: " << encrypted << std::endl;
    std::cout << "Decrypted integer: " << decrypted << std::endl;
}

// ZADANIE V

#define MAX_NONCE 100000000000

std::string mine(int block_number, std::string transactions, std::string previous_hash, int prefix_zeros)
{
    std::cout << "Start mining:\tDificulty: " << prefix_zeros << std::endl;
    SHA256 sha256;
    std::string prefix_str(prefix_zeros, '0');
    std::string new_hash("");

    for (int nonce = 0; nonce < MAX_NONCE; nonce++)
    {
        std::string text = std::to_string(block_number) + transactions + previous_hash + std::to_string(nonce);
        new_hash = sha256(text);
        if (new_hash.substr(0, prefix_zeros) == prefix_str)
        {
            std::cout << "Successfully mined bitcoins with nonce value: " << nonce << std::endl;
            return new_hash;
        }
    }

    std::cout << "Could not find correct hash after trying " << MAX_NONCE << " times" << std::endl;

    return "";
}

void z3z5()
{
    std::string transa[5] = 
    {
        "'''Dhaval->Bhavin->20\nMando->Cara->45'''",
        "'''Sarvesh->Prem->11\nIsha->Madhuri->21'''",
        "'''Abhishek->Rati->43\nNiraj->Dipa->87'''",
        "'''Manan->Mitra->36\nDarsh->Vijaya->18'''",
        "'''Amit->Pallav->39\nAadesh->Latika->13'''",
    };
    int dificulty = 2;

    std::string hash_succ = "0000000xa036944e29568d0cff17edbe038f81208fecf9a66be9a2b8321c6ec7";
    std::string hash;
    for (int i = 0; i < 5; i++)
    {
        auto time_s = std::chrono::high_resolution_clock::now();
        hash = mine(5, transa[i], hash_succ, dificulty+i);
        auto time_e = std::chrono::high_resolution_clock::now();

        std::cout << (hash.size() > 0 ? hash + "\n" : "");
        if (hash.size() > 0)
            hash_succ = hash;

        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(time_e - time_s);
        std::cout << "Time: " << duration.count() << "ms" << std::endl << std::endl;
    }
}