#include "String2.h"

String2::String2(const char* str)
{
	chars = (char *)str;
}

String2::String2(const String2& s)
{
	chars = s.chars;
}

String2::String2(String2&& s)
{
	chars = s.chars;
}

int String2::length() const {
	int size = 0;
	for (int i = 0; chars[i] != '\0'; ++i) {
		++size;
	}
	return size;
}

void String2::clear() {
	chars = (char *)"";
}