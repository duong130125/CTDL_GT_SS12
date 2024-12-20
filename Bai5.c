#include <stdio.h>

// Hàm tìm kiếm nhị phân bằng đệ quy
int binarySearchRecursive(int arr[], int left, int right, int target)
{
    if (left > right)
    {
        return -1; // Phần tử không tồn tại trong mảng
    }

    int mid = left + (right - left) / 2; // Tìm chỉ số giữa mảng

    if (arr[mid] == target)
    {
        return mid; // Tìm thấy phần tử
    }
    else if (arr[mid] > target)
    {
        return binarySearchRecursive(arr, left, mid - 1, target); // Tìm bên trái
    }
    else
    {
        return binarySearchRecursive(arr, mid + 1, right, target); // Tìm bên phải
    }
}

int main()
{
    int n;

    // Nhập kích thước mảng
    printf("Nhập số phần tử trong mảng: ");
    scanf("%d", &n);

    int arr[n];

    // Nhập các phần tử mảng đã sắp xếp tăng dần
    printf("Nhập các phần tử mảng đã sắp xếp tăng dần:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int target;

    // Nhập phần tử cần tìm
    printf("Nhập giá trị cần tìm: ");
    scanf("%d", &target);

    // Gọi hàm tìm kiếm nhị phân
    int result = binarySearchRecursive(arr, 0, n - 1, target);

    // In kết quả
    if (result != -1)
    {
        printf("Phần tử %d nằm ở vị trí: %d\n", target, result);
    }
    else
    {
        printf("Không tìm thấy phần tử trong mảng.\n");
    }

    return 0;
}
