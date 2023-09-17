#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#include <locale.h> 
#include <Windows.h>

struct student 
{ 
char famil[20]; 
char name[20]; 
char facult[20]; 
int Nomzach; 
}; 
struct student findStudent(struct student* stud, int size, const char* queryFamil, const char* queryName, const char* queryFacult)
{ 
	for (int i = 0; i < size; i++) { 
		if (strcmp(stud[i].famil, queryFamil) == 0 && strcmp(stud[i].name, queryName) == 0 && strcmp(stud[i].facult, queryFacult) == 0)
		{ 
			return stud[i]; } } 
	struct student notFoundStudent; 
	strcpy(notFoundStudent.famil, "Not Found"); 
	strcpy(notFoundStudent.name, "Not Found"); 
	strcpy(notFoundStudent.facult, "Not Found"); 
	notFoundStudent.Nomzach = -1; 
	return notFoundStudent; } 
int main() 
{ 
setlocale(LC_ALL, "Russian");
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
const int size = 3; 
struct student students[size]; 
for (int i = 0; i < size; i++) 
{ 
	printf("Введите фамилию студента %d: ", i + 1); 
	scanf("%s", students[i].famil); 
	printf("Введите имя студента %d: ", i + 1); 
	scanf("%s", students[i].name); 
	printf("Введите факультет студента %d: ", i + 1); 
	scanf("%s", students[i].facult); 
	printf("Введите номер зачетки студента %d: ", i + 1); 
	scanf("%d", &students[i].Nomzach); } 
		char queryFamil[20]; 
		char queryName[20]; 
		char queryFacult[20]; 
	printf("\nВведите фамилию для поиска: "); 
	scanf("%s", queryFamil); 
	printf("Введите имя для поиска: "); 
	scanf("%s", queryName); 
	printf("Введите факультет для поиска: "); 
	scanf("%s", queryFacult); 
struct student foundStudent = findStudent(students, size, queryFamil, queryName, queryFacult);
if (strcmp(foundStudent.famil, "Not Found") == 0) 
{ 
	   printf("Студент не найден\n"); 
} 
else { 
	   printf("\nНайден студент:\n"); 
       printf("Фамилия: %s\n", foundStudent.famil); 
	   printf("Имя: %s\n", foundStudent.name); 
	   printf("Факультет: %s\n", foundStudent.facult); 
	   printf("Номер зачетки: %d\n", foundStudent.Nomzach); 
} 
return 0; 
}