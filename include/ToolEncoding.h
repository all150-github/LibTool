/**
 *  ASNI,Unicode,UTF8 ����ת��
 */

#pragma once

#ifndef LIB_TOOL_eNCODINg_H_
#define LIB_TOOL_eNCODINg_H_

#include <string>

namespace tool
{
    /**
     *  ����
     *      ��ANSI����ת��ΪUnicode����.
     *  ����
     *      @s          ת�����ַ���
     *  ����ֵ
     *      ��ANSI�����Ӧ��Uncode����
     */
    std::wstring ANSIToUnicode(const std::string& s);

    /**
     *  ����
     *      ��Unicode����ת��ΪANSI����
     *  ����
     *      @ws          ת�����ַ���
     *  ����ֵ
     *      ��Unicode��Ӧ��ANSI����
     */
    std::string UnicodeToANSI(const std::wstring& ws);

    /**
     *  ����
     *      ��Unicodeת��ΪUTF8����
     *  ����
     *      @ws          ת�����ַ���
     *  ����ֵ
     *      ��Unicode�����Ӧ��UTF8����
     */
    std::string UnicodeToUTF8(const std::wstring& ws);

    /**
     *  ����
     *      ��UTF8ת��ΪUnicode����
     *  ����
     *      @s      ת�����ַ���
     *  ����ֵ
     *      ��UTF8�����Ӧ��Uncode����
     */
    std::wstring UTF8ToUnicode(const std::string& s);

    /**
    *  ����
    *      ��UTF8ת��ΪANSI����
    *  ����
    *      @s      ת�����ַ���
    *  ����ֵ
    *      ��UTF8�����Ӧ��ANSI����
    */
    std::string UTF8ToANSI(const std::string& s);

    /**
     *  ����
     *      ��ANSI����ת��ΪUTF8����
     *  ����
     *      @s      ת�����ַ���
     *  ����ֵ
     *      ��ANSI�����Ӧ��UTF8����
     */
    std::string ANSIToUTF8(const std::string& s);

}

#endif  //LIB_TOOL_eNCODINg_H_