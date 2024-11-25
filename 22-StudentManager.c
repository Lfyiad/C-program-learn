#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// 定义学生结构体
typedef struct Student {
    char id[20];  // 学号
    char name[50];  // 姓名
    int age;    // 年龄
    float totalScore;  // 总成绩
} Student;

// 全局数组用于存储最多100名学生信息
Student students[100];
int studentCount = 0;  // 记录当前已存储的学生数量

// 输入学生信息的函数
void inputStudent() {
    if (studentCount < 100) {
        printf("请输入学号: ");
        scanf("%s", students[studentCount].id);
        while (getchar() != '\n');  // 清空输入缓冲区

        printf("请输入姓名: ");
        scanf("%s", students[studentCount].name);
        while (getchar() != '\n');

        printf("请输入年龄: ");
        scanf("%d", &(students[studentCount].age));
        while (getchar() != '\n');

        printf("请输入总成绩: ");
        scanf("%f", &(students[studentCount].totalScore));
        while (getchar() != '\n');

        studentCount++;
    }
    else {
        printf("已达到最大存储数量，无法再添加学生信息！\n");
    }
}

// 输出所有学生信息的函数
void outputStudents() {
    for (int i = 0; i < studentCount; i++) {
        printf("------------------------\n");
        printf("学号: %s\n", students[i].id);
        printf("姓名: %s\n", students[i].name);
        printf("年龄: %d\n", students[i].age);
        printf("总成绩: %.2f\n", students[i].totalScore);
    }
}

// 修改学生信息的函数
void modifyStudent() {
    char id[20];
    printf("请输入要修改信息的学生学号: ");
    scanf("%s", id);
    for (int i = 0; i < studentCount; i++) {
        if (strcmp(students[i].id, id) == 0) {
            int choice;
            printf("请选择要修改的信息:\n");
            printf("1. 学号\n");
            printf("2. 姓名\n");
            printf("3. 年龄\n");
            printf("4. 总成绩\n");
            scanf("%d", &choice);

            switch (choice) {
            case 1:
                printf("请输入新的学号: ");
                scanf("%s", students[i].id);
                while (getchar() != '\n');
                break;
            case 2:
                printf("请输入新的姓名: ");
                scanf("%s", students[i].name);
                while (getchar() != '\n');
                break;
            case 3:
                printf("请输入新的年龄: ");
                scanf("%d", &(students[i].age));
                while (getchar() != '\n');
                break;
            case 4:
                printf("请输入新的总成绩: ");
                scanf("%f", &(students[i].totalScore));
                while (getchar() != '\n');
                break;
            default:
                printf("无效的选择\n");
            }
            return;  // 修改完成后直接返回
        }
    }
    printf("未找到对应学号的学生\n");
}

int main() {
    int option;

    // 主菜单循环
    while (1) {
        printf("=====学生信息管理系统=====\n");
        printf("1. 输入学生信息\n");
        printf("2. 输出学生信息\n");
        printf("3. 修改学生信息\n");
        printf("4. 退出系统\n");
        printf("请选择操作: ");
        scanf("%d", &option);

        switch (option) {
        case 1:
            inputStudent();
            break;
        case 2:
            outputStudents();
            break;
        case 3:
            modifyStudent();
            break;
        case 4:
            printf("退出系统成功\n");
            exit(0);
        default:
            printf("无效的操作选项，请重新选择\n");
        }
    }

    return 0;
}