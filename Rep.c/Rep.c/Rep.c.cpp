﻿#include <iostream>
#include <string>
using namespace std;

int main()
{
    string original = "Welcome to Jordan, Jordan is a nice country";

    size_t pos = original.find("jordan");

    if (pos != string::npos)
    {
        original =
            original.substr(0, pos)
            + "the USA"
            + original.substr(pos + 6);
    }

    cout << original;
}
