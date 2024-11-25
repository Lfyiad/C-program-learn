#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// ����ѧ���ṹ��
typedef struct Student {
    char id[20];  // ѧ��
    char name[50];  // ����
    int age;    // ����
    float totalScore;  // �ܳɼ�
} Student;

// ȫ���������ڴ洢���100��ѧ����Ϣ
Student students[100];
int studentCount = 0;  // ��¼��ǰ�Ѵ洢��ѧ������

// ����ѧ����Ϣ�ĺ���
void inputStudent() {
    if (studentCount < 100) {
        printf("������ѧ��: ");
        scanf("%s", students[studentCount].id);
        while (getchar() != '\n');  // ������뻺����

        printf("����������: ");
        scanf("%s", students[studentCount].name);
        while (getchar() != '\n');

        printf("����������: ");
        scanf("%d", &(students[studentCount].age));
        while (getchar() != '\n');

        printf("�������ܳɼ�: ");
        scanf("%f", &(students[studentCount].totalScore));
        while (getchar() != '\n');

        studentCount++;
    }
    else {
        printf("�Ѵﵽ���洢�������޷������ѧ����Ϣ��\n");
    }
}

// �������ѧ����Ϣ�ĺ���
void outputStudents() {
    for (int i = 0; i < studentCount; i++) {
        printf("------------------------\n");
        printf("ѧ��: %s\n", students[i].id);
        printf("����: %s\n", students[i].name);
        printf("����: %d\n", students[i].age);
        printf("�ܳɼ�: %.2f\n", students[i].totalScore);
    }
}

// �޸�ѧ����Ϣ�ĺ���
void modifyStudent() {
    char id[20];
    printf("������Ҫ�޸���Ϣ��ѧ��ѧ��: ");
    scanf("%s", id);
    for (int i = 0; i < studentCount; i++) {
        if (strcmp(students[i].id, id) == 0) {
            int choice;
            printf("��ѡ��Ҫ�޸ĵ���Ϣ:\n");
            printf("1. ѧ��\n");
            printf("2. ����\n");
            printf("3. ����\n");
            printf("4. �ܳɼ�\n");
            scanf("%d", &choice);

            switch (choice) {
            case 1:
                printf("�������µ�ѧ��: ");
                scanf("%s", students[i].id);
                while (getchar() != '\n');
                break;
            case 2:
                printf("�������µ�����: ");
                scanf("%s", students[i].name);
                while (getchar() != '\n');
                break;
            case 3:
                printf("�������µ�����: ");
                scanf("%d", &(students[i].age));
                while (getchar() != '\n');
                break;
            case 4:
                printf("�������µ��ܳɼ�: ");
                scanf("%f", &(students[i].totalScore));
                while (getchar() != '\n');
                break;
            default:
                printf("��Ч��ѡ��\n");
            }
            return;  // �޸���ɺ�ֱ�ӷ���
        }
    }
    printf("δ�ҵ���Ӧѧ�ŵ�ѧ��\n");
}

int main() {
    int option;

    // ���˵�ѭ��
    while (1) {
        printf("=====ѧ����Ϣ����ϵͳ=====\n");
        printf("1. ����ѧ����Ϣ\n");
        printf("2. ���ѧ����Ϣ\n");
        printf("3. �޸�ѧ����Ϣ\n");
        printf("4. �˳�ϵͳ\n");
        printf("��ѡ�����: ");
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
            printf("�˳�ϵͳ�ɹ�\n");
            exit(0);
        default:
            printf("��Ч�Ĳ���ѡ�������ѡ��\n");
        }
    }

    return 0;
}