#include <stdio.h>

// Hàm tìm và in các phần tử lặp lại trong mảng
void findDuplicates(int arr[], int n)
{
    int visited[n]; // Mảng đánh dấu trạng thái đã kiểm tra phần tử

    for (int i = 0; i < n; i++)
    {
        visited[i] = 0; // Khởi tạo tất cả các phần tử chưa được kiểm tra
    }

    int hasDuplicates = 0; // Biến để kiểm tra có phần tử lặp lại hay không

    for (int i = 0; i < n; i++)
    {
        if (visited[i])
        {
            continue; // Nếu phần tử đã kiểm tra, bỏ qua
        }

        int count = 1; // Đếm số lần xuất hiện của phần tử hiện tại

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = 1; // Đánh dấu phần tử đã kiểm tra
            }
        }

        if (count > 1)
        {
            printf("Phần tử %d xuất hiện %d lần.\n", arr[i], count);
            hasDuplicates = 1;
        }
    }

    if (!hasDuplicates)
    {
        printf("Không có phần tử lặp lại.\n");
    }
}

int main()
{
    int n;

    // Nhập kích thước mảng
    printf("Nhập số phần tử trong mảng: ");
    scanf("%d", &n);

    int arr[n];

    // Nhập các phần tử của mảng
    printf("Nhập các phần tử của mảng:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Gọi hàm tìm phần tử lặp lại
    findDuplicates(arr, n);

    return 0;
}
