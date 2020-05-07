#include "../include/ToolTime.h"
#include <cassert>
#include <sstream>
#include <iomanip>	// put_time
#include <chrono>	// C11 time lib

std::string tool::GetLocalTimeToStr(const char* form)
{
	using namespace std;

	assert(form != NULL);
	stringstream tmp;
	std::tm m;

	__time64_t t = chrono::system_clock::to_time_t(chrono::system_clock::now());
	// MSVC提示更加安全的函数
	localtime_s(&m, &t);
	tmp << put_time(&m, form);

	return tmp.str();
}
