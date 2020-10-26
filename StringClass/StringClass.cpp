// StringClass.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include "String2.h"
#include <iostream>

int main()
{
    //std::cout << "Hello World!\n";
    String2 str("pa loca");
    String2 a(" tu calva");
    String2 b(str);
    std::cout << b.getChar() << ", " << b.length() << std::endl;

    b.clear();
    std::cout << b.getChar() << ", " << b.length() << std::endl;
    
    /*String2 c = str + a;
    std::cout << c.getChar() << ", " << c.length() << std::endl;

    if (str == "pa loca") {
        std::cout << "TRUE" << std::endl;
    }
    else {
        std::cout << "FALSE" << std::endl;
    }*/

    String2 s = a.GetMeAString();
    std::cout << s.getChar() << ", " << s.length() << std::endl;

}
