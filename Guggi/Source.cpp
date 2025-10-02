#include <iostream>


/*
тип_данных Имя функции(аргументы_функции)
{
	тело_функции
}

*/


//int main()
//{
//	setlocale(LC_ALL, "ru");
//
//	int c = 0;
//	int i = 0;
//	char star = '*';
//	char n = '\n';
//	char t = '\t';
//	int row = 1;
//
//	/*
//	std::cout << "Задание 1\n";
//	while (c < 8)
//	{
//		i = 0;
//		while (i < 5)
//		{
//			std::cout << star;
//			i++;
//		}
//		std::cout << "\n";
//		c++;
//
//	}
//	*/
//	std:: << "Задание 2\n"
//	while (row < 7)
//	{
//		i = 0;
//		while (i < row)
//		{
//			
//			std::cout << star;
//			i++;
//		}
//		std::cout << "\n";
//		row++;
//	}
//
//
//	return 0;
//}

void PrintHelloWorld()
{
	std::cout << "Hello world\n";
}
void PrintNumber(int number)
{
	std::cout << number << "\n";
}
void AppNumber(int a)
{
	a++;
}
int ReturnNumber(int a)
{
	a++;
	return a;
}

double Sum(double one, double two)
{

	return one + two;
}
double Dif(double one, double two)
{
	return one - two;
}
double Proiz(double one, double two)
{
	return one * two;
}
double Del(double one, double two)
{
	return one / two;
}

void ReturnCal()
{
	double one = 0;
	double two = 0;
	char action = 0;

	std::cout << "Введите первое число:\t"; std::cin >> one;

	std::cout << "Введите второе число:\t"; std::cin >> two;

	std::cout << "Введите действие:(+,-,*,/)\t"; std::cin >> action;

	if (action == '+')
	{
		std::cout << "Сумма: " << Sum(one,two) << "\n";
	}
	else if (action == '-')
	{
		std::cout << "Разность: " << Dif(one,two) << "\n";
	}
	else if (action == '*')
	{
		std::cout << "Произведение: " << Proiz(one,two) << "\n";
	}
	else if (action == '/')
	{

		if (two > 0)
		{
			std::cout << "Частное: " << Del(one,two) << "\n";
		}
		else
		{
			std::cout << "Субо братик нельзя делить на 0";
		}
	}
	else
	{
		std::cout << "неккоректный ввод";
	}
	
}


void setArray1(int array[], int size);

void setArray2(int array[], int size);

void PrintArray1(int array[], int size);

void PrintArray2(int array[], int size);


void SwitchArray(int array1[], int array2[], int size);



int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL)); // rand
	
	/*PrintHelloWorld();
	int a = 100;
	int number = 100;
	PrintNumber(a);
	number = ReturnNumber(number);
	std::cout << number;*/

	/*for (int i = 0; i < 5; i++)
	{
		std::cout << i;
	}*/

	/*
	тип_данных имя_масива[размер_массива];
	
	
	*/
	/*const int size = 5; // const т.к просто 5 может изменяться, а с const будет статично
	//int arr[5]{ 1,3,5,6,7 }; //{ 1,3,5,6,7 } - заполняет ячейки , {} - все ячейки даже которые за границы массива будут 0
	//arr[0] = 10;
	//arr[1] = 20;
	std::cout << arr[1] << " " << arr[2] << arr[size - 1]; // size - 1 чтобы обратиться к последней ячейки */

	/*double rub = 0;
	int cur = 0;
	double com = 0;
	char proverka = 'y';

	std::cout << "Конвертер валют - от DAITO\n";
	std::cout << "Введите кол-во руб: \t"; std::cin >> rub;
	

	com = rub * 0.05;
	*/

	/*while (proverka == 'y' || proverka == 'Y')
	{
	std::cout << "Какую валюту хотите выбрать: Доллар(1) Евро(2) Юань(3) Фарит(4) Йена(5) "; std::cin >> cur;


		if (cur == 1)
		{
			double dollar = (rub - com) / 83.65;
			std::cout << "Вы получите в долларах: " << dollar << "\n";
		}
		else if (cur == 2)
		{
			double evro = (rub - com) / 1.02;
			std::cout << "Вы получите в евро: " << evro << "\n";
		}
		else if (cur == 3)
		{
			double juan = (rub - com) / 8.53;
			std::cout << "Вы получите в юань: " << juan << "\n";
		}
		else if (cur == 4)
		{
			double farit = (rub - com) / 34;
			std::cout << "Вы получите в фаритах: " << farit << "\n";
		}
		else if (cur == 5)
		{
			double ean = (rub - com) / 177.79;
			std::cout << "Вы получите в в Йенах: " << ean << "\n";
		}
		else
		{
			std::cout << "Не верный ввод! \n";
		}
		std::cout << "Хотите повторить? y/n "; std::cin >> proverka;

	}*/

	/*for (char proverka = 'y'; proverka == 'y';)
	{
		std::cout << "Какую валюту хотите выбрать: Доллар(1) Евро(2) Юань(3) Фарит(4) Йена(5) "; std::cin >> cur;


		if (cur == 1)
		{
			double dollar = (rub - com) / 83.65;
			std::cout << "Вы получите в долларах: " << dollar << "\n";
		}
		else if (cur == 2)
		{
			double evro = (rub - com) / 1.02;
			std::cout << "Вы получите в евро: " << evro << "\n";
		}
		else if (cur == 3)
		{
			double juan = (rub - com) / 8.53;
			std::cout << "Вы получите в юань: " << juan << "\n";
		}
		else if (cur == 4)
		{
			double farit = (rub - com) / 34;
			std::cout << "Вы получите в фаритах: " << farit << "\n";
		}
		else if (cur == 5)
		{
			double ean = (rub - com) / 177.79;
			std::cout << "Вы получите в в Йенах: " << ean << "\n";
		}
		else
		{
			std::cout << "Не верный ввод! \n";
		}
		std::cout << "Хотите повторить? y/n "; std::cin >> proverka;
	}*/

	//int a;
	//int b;

	//a = rand() % 10 ; // до 9 
	//std::cout << a << "\n";
	//b = rand() % 10 + 1; // до 10
	//std::cout << b << "\n";

	/*const int size = 7;
	int arr[size];
	int sumPlus = 0;
	int sumMin = 0;
	int max = 0;

	for (int i = 0; i < 7; i++)
	{
		arr[i] = rand() % 19 - 9;
		std::cout << arr[i] << " "; 
		
	}
	std::cout << "\n" << "-------------------------------" << "\n";
	
	for (int i = 0; i < 7; i++)
	{
		if (arr[i] > 0)
		{
			std::cout << arr[i] << " ";
			sumPlus += arr[i];
		}
	}
	std::cout << "\n" << "-------------------------------" << "\n";

	for (int i = 0; i < 7; i++)
	{
		if (arr[i] < 0)
		{
			std::cout << arr[i] << " ";
			sumMin += arr[i];
		}
	}
	std::cout << "\n" << "-------------------------------" << "\n";
	std::cout << "Сумма положительных: " << sumPlus << "\n" << "Сумма отрицательных: " << sumMin;
	std::cout << "\n" << "-------------------------------" << "\n";*/

	/*const int row = 3, col = 4;
	int arr[row][col]{};
	int sum = 0;
	int sumEnd = 0;
	for (size_t i = 0; i < row; i++)
	{
		sum = 0;
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10 ;
			std::cout << arr[i][j] << ' ' ;
			sum += arr[i][j];

		}
		std::cout << "| " << sum  ;
		std::cout << "\n";
		
		

	}
	std::cout << "------------------\n";
	for (size_t i = 0; i < col; i++)
	{
		sumEnd = 0;
		for (size_t j = 0; j < row; j++)
		{
			sumEnd += arr[j][i];
		}
		std::cout << sumEnd << " ";
		
	}
	std::cout << "| ";*/

	/*
	int a = -5;
	if (a < 0)
	{

		std::cout << "hello";
	}
	else if (a < 100)
	{
		std::cout << "hello";
	}

	else
	{
		std::cout << "Error";
	}


	std::cout << "Введите первое число:\t"; std::cin >> one;

	std::cout << "Введите второе число:\t"; std::cin >> two;

	std::cout << "Введите действие:(+,-,*,/)\t"; std::cin >> action;

	if (action == '+')
	{
		std::cout << "Сумма: " << one + two << "\n";
	}
	else if (action == '-')
	{
		std::cout << "Разность: " << one - two << "\n";
	}
	else if (action == '*')
	{
		std::cout << "Произведение: " << one * two << "\n";
	}
	else if (action == '/')
	{

		if (two > 0)
		{
			std::cout << "Частное: " << one / two << "\n";
		}
		else
		{
			std::cout << "Субо братик нельзя делить на 0";
		}
	}
	else
	{
		std::cout << "неккоректный ввод";
	}
	*/

/*ReturnCal();
*/

const int size = 6;
int arr1[size];
int arr2[size];
int temp = 0;


setArray1(arr1, size);
setArray2(arr2, size);
PrintArray1(arr1, size);
PrintArray2(arr2, size);

SwitchArray(arr1, arr2, size);

std::cout << "\n";
PrintArray1(arr1, size);
PrintArray2(arr2, size);

	return 0;
}
void setArray1(int array[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		array[i] = rand() % 10;
	}
}
void setArray2(int array[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		array[i] = rand() % 10;
	}
}
void PrintArray1(int array[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}

	std::cout << "\n";

}
void PrintArray2(int array[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << "\n";

}

void SwitchArray(int array1[], int array2[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		int temp = array1[i];
		array1[i] = array2[i];
		array2[i] = temp;
	}
}
