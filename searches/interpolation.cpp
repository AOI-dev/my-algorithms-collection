//
// Created by ���� �������� on 05.02.2021.
//

#include "..\libs.h"

template<typename T> T interpolation(T* a, int n, T key)
{
    int left = 0;  // ����� ������� ������ (����� �������, ��� �������� ������� ���������� � ����)
    int right = n - 1;  // ������ ������� ������

    while (a[left] < key && key < a[right]) {
        int mid = left + (key - a[left]) * (right - left) / (a[right] - a[left]);
        // ������ ��������, � ������� ����� ��������� ���������
        if (a[mid] < key)
            left = mid + 1;
        else if (a[mid] > key)
            right = mid - 1;
        else
        return mid;
    }

    if (a[left] == key)
        return left;
    else if (a[right] == key)
        return right;
    else
        return -1; // ���� ������ �������� � ������� ���
}