#ifndef DLX_H_
#define DLX_H_

#include "cross_link.h"
#pragma once
class dlx
{
/**************************
*���ȵ���addRestrict������ӶԾ�������ƣ���������֪���֡�
*Ȼ�����find����Ѱ��N���ڵ�ǰ���������µ������⣬��������ܴﵽNʱ����true�����򷵻�false��
*������clearRestrict��������ǰ����������ա�
**************************/
public:
    typedef cross_link::Cross Cross;
    dlx();
    ~dlx();
    void addRestrict(int n, int(*rstr)[3]);
    // n��ʾ��ӵ����Ƶ�������
    // rstr��ά�����У�rstr[i][0]��ʾ��i������ֵ��rstr[i][1]��ʾ��i�������кţ�1-9����rstr[i][2]��ʾ��i�������кţ�1-9����
    void clearRestrict() { _restrict_point = 0; }
    // �����������
    bool find(int N, bool random, void ResDealing(const int *Res));
    // N��ʾ��Ҫ�õ��Ľ�ĸ�����
    // ����ֵrandom��ʾ�Ƿ��������ԡ���������ԻἫС��Ӱ�����ܡ�
    // ResDealing������ÿ�ҵ�һ����ʱ���ᱻ���ã��������dlxʮ��������к����飬��ת��Ϊ��������Ԫ�أ���81������������Ĳ���ΪNULLʱ��ʾ����������
    // ת����ʽ�������к�i����Ӧ�����к�(0-8)Ϊ(i - 1) / 9 / 9����Ӧ�����к�(0-8)Ϊ(i - 1) / 9 % 9����Ӧ��ֵΪ(i - 1) % 9 + 1��
    // ����������ܹ��ﵽNʱ����true�����򷵻�false��

private:
    cross_link *A;
    const int rownum = 81 * 9;
    const int colnum = 81 * 4;
    Cross  head;
    Cross *rows;
    Cross *cols;

    int result[81] = { 0 };
    int stack[81 * 9 + 81 * 4] = { 0 };

    int _restrict_point = 0;

    void _deleteRestrict(int &stack_top, int &result_pos);
    bool _find(int stack_top, int result_pos, int N, int &n, void ResDealing(const int *Res));
};
#endif // !DLX_H_