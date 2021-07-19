//глава 6.2
#include <iostream>

struct Student {
	std::string name;
	int grade;
};

void students(Student* arr, int sum)
{
	for (int i = 0; i < sum; ++i) {
		std::cout << "имя №" << i + 1 << " : ";
		std::cin >> arr[i].name;
		std::cout << "оценка : ";
		std::cin >> arr[i].grade;
	}
}

int main()
{
	setlocale(0, "");
	std::cout << "Сколько учеников : ";
	int sum;
	std::cin >> sum;
	Student* array = new Student[sum];
	students(array, sum);
	
	for (int j = 0; j < sum - 1; ++j)
		for (int i = j + 1; i < sum; ++i)
			if (array[j].grade < array[i].grade)
				std::swap(array[j].grade, array[i].grade);
	for (int i = 0; i < sum; ++i)
		std::cout << array[i].name << " - " << array[i].grade << std::endl;
	delete[] array;
	return 0;
}
/*
Создайте структуру, содержащую имя и оценку учащегося (по шкале от 0 до 100). 
Спросите у пользователя, сколько учеников он хочет ввести. 
Динамически выделите массив для хранения всех студентов. 
Затем попросите пользователя ввести для каждого студента его имя и оценку. 
Как только пользователь ввел все имена и оценки, отсортируйте список оценок студентов по убыванию (сначала самый высокий бал). 
Затем выведите все имена и оценки в отсортированном виде.

Для следующего ввода:

Andre
74
Max
85
Anton
12
Josh
17
Sasha
90

Вывод должен быть следующим:

Sasha got a grade of 90
Max got a grade of 85
Andre got a grade of 74
Josh got a grade of 17
Anton got a grade of 12

Подсказка: Вы можете изменить алгоритм сортировки массива методом выбора из урока №77 для сортировки вашего динамического массива. 
Если вы напишете сортировку массива отдельной функцией, то массив должен передаваться по адресу (как указатель).
*/