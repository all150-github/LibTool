#include "..\include\ToolEncoding.h"
#include <codecvt>

// 数据返回 charset=utf-8

//windows平台下的实现
//#define WIN32_LEAN_AND_MEAN
//#include <Windows.h>
//static std::string Encoding_WToB(const std::wstring& ws, int codePage)
//{
//	using namespace std;
//
//	string r;
//	int n = ::WideCharToMultiByte(codePage, 0, ws.c_str(), ws.size(), NULL, 0, NULL, NULL);
//	if (n > 0) {
//		char* p = NULL;
//		try {
//			p = new char[n];
//		}
//		catch (...) {
//			throw;
//		}
//		::WideCharToMultiByte(codePage, 0, ws.c_str(), ws.size(), p, n, NULL, NULL);
//		r = string(p, n);
//		delete[] p;
//	}
//	return r;
//}
//
//static std::wstring Encoding_BToW(const std::string& s, int codePage)
//{
//	using namespace std;
//
//	wstring ws;
//	int n = ::MultiByteToWideChar(codePage, 0, s.c_str(), s.size(), NULL, 0);
//	if (n > 0) {
//		wchar_t* pw = NULL;
//		try {
//			pw = new wchar_t[n];
//		}
//		catch (...) {
//			throw;
//		}
//		::MultiByteToWideChar(codePage, 0, s.c_str(), s.size(), pw, n);
//		ws = wstring(pw, n);
//		delete[] pw;
//	}
//	return ws;
//}
//
//std::wstring tool::ANSIToUnicode(const std::string& s)
//{
//	return Encoding_BToW(s, CP_ACP);
//}
//
//std::string tool::UnicodeToANSI(const std::wstring& ws)
//{
//	return Encoding_WToB(ws, CP_ACP);
//}
//
//std::string tool::UnicodeToUTF8(const std::wstring& ws)
//{
//	return Encoding_WToB(ws, CP_UTF8);
//}
//
//std::wstring tool::UTF8ToUnicode(const std::string& s)
//{
//	return Encoding_BToW(s, CP_UTF8);
//}
//
//std::string tool::UTF8ToANSI(const std::string& s)
//{
//	return UnicodeToANSI(UTF8ToUnicode(s));
//}
//
//std::string tool::ANSIToUTF8(const std::string& s)
//{
//	return UnicodeToUTF8(ANSIToUnicode(s));
//}

// C++11标准实现
std::wstring tool::ANSIToUnicode(const std::string& s)
{
	using namespace std;

	// 由wstring_convert负责析构
	wstring_convert<codecvt_byname<wchar_t, char, mbstate_t>> cv(new codecvt_byname<wchar_t, char, mbstate_t>(""));
	return cv.from_bytes(s);
}

std::string tool::UnicodeToANSI(const std::wstring& s)
{
	using namespace std;

	// 由wstring_convert负责析构
	wstring_convert<codecvt_byname<wchar_t, char, mbstate_t>> cv(new codecvt_byname<wchar_t, char, mbstate_t>(""));
	return cv.to_bytes(s);
}

std::string tool::UnicodeToUTF8(const std::wstring& s)
{
	using namespace std;

	wstring_convert<codecvt_utf8<wchar_t>> cv;
	return cv.to_bytes(s);
}

std::wstring tool::UTF8ToUnicode(const std::string& s)
{
	using namespace std;

	wstring_convert<codecvt_utf8<wchar_t>> cv;
	return cv.from_bytes(s);
}

std::string tool::ANSIToUTF8(const std::string& s)
{
	return UnicodeToUTF8(ANSIToUnicode(s));
}

std::string tool::UTF8ToANSI(const std::string& s)
{
	return UnicodeToANSI(UTF8ToUnicode(s));
}
