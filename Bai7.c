#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 100

// Hàm băm đơn giản
int hashFunction(int key)
{
    return key % TABLE_SIZE;
}

// Hàm thêm phần tử vào bảng băm
void insert(int hashTable[], int key)
{
    int index = hashFunction(key);
    while (hashTable[index] != -1)
    {
        index = (index + 1) % TABLE_SIZE; // Xử lý va chạm bằng phương pháp linear probing
    }
    hashTable[index] = key;
}

// Hàm tìm kiếm trong bảng băm
int search(int hashTable[], int key)
{
    int index = hashFunction(key);
    while (hashTable[index] != -1)
    {
        if (hashTable[index] == key)
        {
            return 1; // Tìm thấy
        }
        index = (index + 1) % TABLE_SIZE;
    }
    return 0; // Không tìm thấy
}

int main()
{
    int n;

    // Nhập số phần tử trong mảng
    printf("Nhập số phần tử trong mảng: ");
    scanf("%d", &n);

    int arr[n];

    // Nhập các phần tử của mảng
    printf("Nhập các phần tử của mảng:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Khởi tạo bảng băm
    int hashTable[TABLE_SIZE];
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        hashTable[i] = -1; // -1 biểu thị ô trống
    }

    // Thêm các phần tử vào bảng băm
    for (int i = 0; i < n; i++)
    {
        insert(hashTable, arr[i]);
    }

    // Nhập số cần tìm
    int x;
    printf("Nhập số cần tìm: ");
    scanf("%d", &x);

    // Tìm kiếm số trong bảng băm
    if (search(hashTable, x))
    {
        printf("Số %d đã được tìm thấy trong mảng.\n", x);
    }
    else
    {
        printf("Số %d không có trong mảng.\n", x);
    }

    return 0;
}
