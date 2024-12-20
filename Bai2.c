#include <stdio.h>

int main()
{
    int n;

    // Yêu cầu người dùng nhập số lượng phần tử của mảng
    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);

    // Nếu số lượng phần tử là 0 hoặc âm, thông báo và kết thúc chương trình
    if (n <= 0)
    {
        printf("Không có giá trị nhỏ nhất\n");
        return 0;
    }

    int arr[n];

    // Nhập các phần tử cho mảng
    printf("Nhập %d phần tử của mảng:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Phần tử %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Tìm phần tử nhỏ nhất trong mảng
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    // In ra phần tử nhỏ nhất
    printf("Phần tử nhỏ nhất trong mảng là: %d\n", min);

    return 0;
}
