#include "TKlasa.h"

TKlasa::TKlasa(const char* c)
	: str(c)
{
}

const char* TKlasa::operator[](const char* s) const
{
	if (str.find(s) != std::string::npos)
		return str.c_str() + str.find(s);
	return nullptr;
}

std::strong_ordering TKlasa::operator<=>(const TKlasa& tk) const
{
	if (this->str < tk.str)
		return std::strong_ordering::less;
	if (this->str > tk.str)
		return std::strong_ordering::greater;

	return std::strong_ordering::equal;
}

std::ostream& operator<<(std::ostream& out, const TKlasa& tk)
{
	out << tk.str;
	return out;
}
