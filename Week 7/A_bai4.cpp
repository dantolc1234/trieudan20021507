#include <iostream>

using namespace std;

int binarySearch(int A[], int n, int x)
{
    int left = 0;
    int right = n - 1;
    int mid;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (A[mid] == x)
            return mid; // tìm thấy x, trả về mid là vị trí của x trong mảng A
        if (A[mid] > x)
            right = mid - 1; // Giới hạn khoảng tìm kiếm lại là nửa khoảng trước
        else if (A[mid] < x)
            left = mid + 1; // Giới hạn khoảng tìm kiếm lại là nửa khoảng sau
    }
    return -1; // không tìm thấy x
}