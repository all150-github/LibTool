/**
 *  Windows平台下的操纵窗口的函数.
 */

#pragma once

#ifndef LIB_TOOL_CONSOLE_wINDOw_H_
#define LIB_TOOL_CONSOLE_wINDOw_H_

namespace tool
{

    /**
     *  功能
     *      隐藏控制台窗口
     *  返回值
     *      如果窗口之前是可见的,返回值为非零.如果窗口之前是不可见的,返回值为零.
     */
    int HideConsoleWindow(void);

    /**
     *  功能
     *      显示控制台窗口
     *  返回值
     *      如果窗口之前是可见的,返回值为非零.如果窗口之前是不可见的,返回值为零.
     */
    int ShowConsoleWindow(void);

    /**
     *  功能
     *      对当前的控制台窗口状态取反
     *  返回值
     *      返回窗口之前的状态,可见返回1,隐藏返回0
     */
    int NegateConsoleWindowVisible(void);

    /**
     *  功能
     *      获取控当前制台窗口可见状态
     *  返回值
     *      返回窗口的状态,可见返回1,隐藏返回0
     */
    int IsConsoleWindowVisible(void);
}

#endif  //  LIB_TOOL_CONSOLE_wINDOw_H_