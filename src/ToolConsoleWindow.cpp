#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include "../include/ToolConsoleWindow.h"

/**
 *	GetConsoleWindow	    ��ȡ����̨���ھ��
 *  ShowWindow              ����ָ�����ڵ���ʾ״̬(SW_HIDE ����, SW_SHOW ��ʾ)
 *  IsWindowVisible         ���ָ�����ڵĿ���״̬(�ɼ�TURE,����FALSE)
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
