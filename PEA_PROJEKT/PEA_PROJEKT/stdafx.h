#ifndef HEADERS_STDAFX_H_
#define HEADERS_STDAFX_H_

typedef unsigned int uint;
typedef unsigned long ulong;
typedef uint pair[2];

#include <algorithm>
#include <random>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
//#include <cmath>
//#include <locale>
#include <thread>
#include <limits>
#include <queue>
#include <cstring>
#include "rapidxml.hpp"
//#include "rapidxml_iterators.hpp"
//#include "rapidxml_print.hpp"
#include  "rapidxml_utils.hpp"

#ifdef _WIN32
	#define WIN32_LEAN_AND_MEAN
	#define NOMINMAX
	#include <windows.h>
#endif

using namespace std;
using namespace rapidxml;

#endif
