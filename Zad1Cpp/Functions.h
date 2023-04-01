#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>
#include <vector>
#include <map>
#include <filesystem>
#include <fstream>
#include <streambuf>
#include <sstream>

#define CHARMAX 100

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_ENTER 13
#define KEY_ESC 27

#ifdef _DEBUG
#define LOG(x) std::cout << x
#else
#define LOG(x)
#endif

// ==================================== ZESTAW I
int checkz1z1(int a, int b);
void z1z1();

void z1z2();

void z1z3();

unsigned long long fibite(unsigned long long a);
unsigned long long fibrec(unsigned long long a);
void z1z4();

inline std::vector<unsigned long long> z1z5vec;
void z1z5();

// ==================================== ZESTAW II
void printSpace(int a);
void justing(std::vector<std::string>& vecStr, int maxWidth);
void z2z1();

int fromtoRandom(int a, int b);
int partition(std::vector<int>& vec, int start, int end);
void quickSort(std::vector<int>& vec, int start, int end);
void z2z2();

auto sum(const auto& arg);
void z2z3();

void z2z4();

void ArtoRz(int c, std::map<int, std::string>& map);
void z2z5();

// ==================================== ZESTAW II

// ZADANIE I
class TString
{
private:
	char* ptr = nullptr;
	size_t len = 0;

public:
    TString(const char* s = nullptr); // c-tor
    TString(const TString& s); // cc-tor
    TString(TString&& s); // move c-tor
    TString& operator=(const TString& s); // copy operator=
    TString& operator=(TString&& s); // move operator=
    ~TString(); // d-tor
};
void z3z1();

// ZADANIE II

class BigInt
{
private:
    std::string *str = nullptr;

public:
    BigInt(const char *s = nullptr);
    BigInt(const BigInt& s);
    BigInt(BigInt&& s);
    BigInt& operator=(const BigInt& s);
    BigInt& operator=(BigInt&& s);
    ~BigInt();
};

void z3z2();
void z3z3();
void z3z4();
void z3z5();