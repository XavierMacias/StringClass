#pragma once

class String2
{
	public:

		String2(const char* str);
		String2(const String2& s);
		String2(String2&& s);

		int length() const;
		void clear();
		const char* getChar() { return chars; }
		String2 GetMeAString() { return String2("another string"); }

		String2 operator + (const String2& obj) {
			int len = this->length();
			char* concat = new char[len + obj.length() + 1];
			for (int i = 0; i < len; ++i) {
				concat[i] = chars[i];
			}

			for (int i = 0; i < obj.length() + 1; ++i) {
				concat[i + len] = obj.chars[i];
			}
			return String2(concat);
			delete concat;
		}

		bool operator == (const String2& obj) {

			return chars == obj.chars;
		}

	private:
		char* chars;
};

