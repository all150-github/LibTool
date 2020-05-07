/**
 *  Windowsƽ̨�µĲ��ݴ��ڵĺ���.
 */

#pragma once

#ifndef LIB_TOOL_CONSOLE_wINDOw_H_
#define LIB_TOOL_CONSOLE_wINDOw_H_

namespace tool
{

    /**
     *  ����
     *      ���ؿ���̨����
     *  ����ֵ
     *      �������֮ǰ�ǿɼ���,����ֵΪ����.�������֮ǰ�ǲ��ɼ���,����ֵΪ��.
     */
    int HideConsoleWindow(void);

    /**
     *  ����
     *      ��ʾ����̨����
     *  ����ֵ
     *      �������֮ǰ�ǿɼ���,����ֵΪ����.�������֮ǰ�ǲ��ɼ���,����ֵΪ��.
     */
    int ShowConsoleWindow(void);

    /**
     *  ����
     *      �Ե�ǰ�Ŀ���̨����״̬ȡ��
     *  ����ֵ
     *      ���ش���֮ǰ��״̬,�ɼ�����1,���ط���0
     */
    int NegateConsoleWindowVisible(void);

    /**
     *  ����
     *      ��ȡ�ص�ǰ��̨���ڿɼ�״̬
     *  ����ֵ
     *      ���ش��ڵ�״̬,�ɼ�����1,���ط���0
     */
    int IsConsoleWindowVisible(void);
}

#endif  //  LIB_TOOL_CONSOLE_wINDOw_H_