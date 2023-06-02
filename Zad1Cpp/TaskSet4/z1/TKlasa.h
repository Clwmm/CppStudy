#pragma once
#include <string>
#include <compare>
#include <cstring>
#include <iostream>

class TKlasa
{
public:
	TKlasa(const char* c);

	const char* operator[](const char* s) const;
	std::strong_ordering operator<=>(const TKlasa& tk) const;

	friend std::ostream& operator<<(std::ostream& out, const TKlasa& tk);
private:
	std::string str;
};

