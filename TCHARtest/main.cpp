//
//  main.cpp
//  TCHARtest
//
//  Created by Juraj Antas on 6/6/18.
//  Copyright © 2018 Juraj Antas. All rights reserved.
//

#include <iostream>
#include <string>

typedef char16_t TCHAR;

//pretend for a moment that this is portable c++ code
//that internaly uses TCHAR (16 bit char strings ending with 0)
//How do I force LLDB in Xcode to display such string in debug view
//without resorting to see memory of the given variable?

int main(int argc, const char * argv[]) {
    // insert code here...
    //ok, this is displayed
    char16_t str1[] = u"1234567";
    //how do I do same trick for this?
    TCHAR str2[] = u"1234567890";
    //and this?
    TCHAR* pointerToStr1 = str1;

    std::cout << "Put breakpoint here and check values of str1, str2 and pointerToStr1\n";
    return 0;
}
