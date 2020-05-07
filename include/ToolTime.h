/**
 *  时间工具函数
 */

#pragma once

#ifndef LIB_TOOL_tIMe_H_
#define LIB_TOOL_tIMe_H_

#include <string>

namespace tool
{
    /**
     *  功能
     *      获取本地时间,并格式化为字符串
     *  参数
     *      @form   格式化参数
                常见格式: %F(%Y-%m-%d), %T(%H:%M:%S)
                https://zh.cppreference.com/w/cpp/io/manip/put_time
     *  返回值
     *      格式化后的时间字符串
     */
    std::string GetLocalTimeToStr(const char* form);
}

#endif  //  LIB_TOOL_tIMe_H_