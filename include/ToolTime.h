/**
 *  ʱ�乤�ߺ���
 */

#pragma once

#ifndef LIB_TOOL_tIMe_H_
#define LIB_TOOL_tIMe_H_

#include <string>

namespace tool
{
    /**
     *  ����
     *      ��ȡ����ʱ��,����ʽ��Ϊ�ַ���
     *  ����
     *      @form   ��ʽ������
                ������ʽ: %F(%Y-%m-%d), %T(%H:%M:%S)
                https://zh.cppreference.com/w/cpp/io/manip/put_time
     *  ����ֵ
     *      ��ʽ�����ʱ���ַ���
     */
    std::string GetLocalTimeToStr(const char* form);
}

#endif  //  LIB_TOOL_tIMe_H_