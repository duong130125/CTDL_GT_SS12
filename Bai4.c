#include <stdio.h>
#include <string.h>

// Khai báo cấu trúc để lưu trữ thông tin sinh viên
typedef struct
{
    char name[50]; // Tên sinh viên
    int score;     // Điểm số
} Student;

int main()
{
    int n, found = 0;
    char searchName[50];

    // Nhập số lượng sinh viên
    printf("Nhập số lượng sinh viên: ");
    scanf("%d", &n);

    // Khởi tạo mảng cấu trúc Student
    Student students[n];

    // Nhập thông tin của từng sinh viên
    for (int i = 0; i < n; i++)
    {
        printf("Nhập tên và điểm của sinh viên %d: ", i + 1);
        scanf("%s %d", students[i].name, &students[i].score);
    }

    // Nhập tên sinh viên cần tìm
    printf("Nhập tên sinh viên cần tìm: ");
    scanf("%s", searchName);

    // Tìm kiếm sinh viên dựa trên tên
    for (int i = 0; i < n; i++)
    {
        if (strcmp(students[i].name, searchName) == 0)
        {
            printf("Điểm của %s là: %d\n", students[i].name, students[i].score);
            found = 1; // Đánh dấu đã tìm thấy
            break;
        }
    }

    // Nếu không tìm thấy, in thông báo
    if (!found)
    {
        printf("Không tìm thấy sinh viên.\n");
    }

    return 0;
}
