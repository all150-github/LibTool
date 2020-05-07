#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include "../include/ToolConsoleWindow.h"

/**
 *	GetConsoleWindow	    获取控制台窗口句柄
 *  ShowWindow              设置指定窗口的显示状态(SW_HIDE 隐藏, SW_SHOW 显示)
 *  IsWindowVisible         获得指定窗口的可视状态(可见TURE,隐藏FALSE)
 */

int tool::HideConsoleWindow(void)
{
	return ::ShowWindow(::GetConsoleWindow(), SW_HIDE);
}

int tool::ShowConsoleWindow(void)
{
	return ::ShowWindow(::GetConsoleWindow(), SW_SHOW);
}

int tool::NegateConsoleWindowVisible(void)
{
    HWND hDos = ::GetConsoleWindow();
    return ::IsWindowVisible(hDos) ? ::ShowWindow(hDos, SW_HIDE) : ::ShowWindow(hDos, SW_SHOW);
}

int tool::IsConsoleWindowVisible(void)
{
    return ::IsWindowVisible(::GetConsoleWindow());
}
