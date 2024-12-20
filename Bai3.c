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
        printf("Mảng không hợp lệ\n");
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

    // Kiểm tra các cặp phần tử đối xứng
    int hasSymmetry = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] == arr[n - i - 1])
        {
            printf("Cặp đối xứng: (%d, %d)\n", arr[i], arr[n - i - 1]);
            hasSymmetry = 1;
        }
    }

    // Nếu không có phần tử đối xứng nào
    if (!hasSymmetry)
    {
        printf("Không có phần tử đối xứng trong mảng.\n");
    }

    return 0;
}
