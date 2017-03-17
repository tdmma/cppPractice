// operator.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>

#include <string>

using namespace std;

string operator ++(string &str)
{
  return   str += "test";
}

int _tmain(int argc, _TCHAR* argv[])
{
    string str = "a";

    for (int i = 0; i < 10; ++i)
        cout << ++str<< endl;


	return 0;
}

