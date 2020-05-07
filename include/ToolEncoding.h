/**
 *  ASNI,Unicode,UTF8 编码转换
 */

#pragma once

#ifndef LIB_TOOL_eNCODINg_H_
#define LIB_TOOL_eNCODINg_H_

#include <string>

namespace tool
{
    /**
     *  功能
     *      将ANSI编码转换为Unicode编码.
     *  参数
     *      @s          转换的字符串
     *  返回值
     *      与ANSI编码对应的Uncode编码
     */
    std::wstring ANSIToUnicode(const std::string& s);

    /**
     *  功能
     *      将Unicode编码转换为ANSI编码
     *  参数
     *      @ws          转换的字符串
     *  返回值
     *      与Unicode对应的ANSI编码
     */
    std::string UnicodeToANSI(const std::wstring& ws);

    /**
     *  功能
     *      将Unicode转换为UTF8编码
     *  参数
     *      @ws          转换的字符串
     *  返回值
     *      与Unicode编码对应的UTF8编码
     */
    std::string UnicodeToUTF8(const std::wstring& ws);

    /**
     *  功能
     *      将UTF8转换为Unicode编码
     *  参数
     *      @s      转换的字符串
     *  返回值
     *      与UTF8编码对应的Uncode编码
     */
    std::wstring UTF8ToUnicode(const std::string& s);

    /**
    *  功能
    *      将UTF8转换为ANSI编码
    *  参数
    *      @s      转换的字符串
    *  返回值
    *      与UTF8编码对应的ANSI编码
    */
    std::string UTF8ToANSI(const std::string& s);

    /**
     *  功能
     *      将ANSI编码转换为UTF8编码
     *  参数
     *      @s      转换的字符串
     *  返回值
     *      与ANSI编码对应的UTF8编码
     */
    std::string ANSIToUTF8(const std::string& s);

}

#endif  //LIB_TOOL_eNCODINg_H_