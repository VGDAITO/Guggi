#include <iostream>

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
//	std::cout << "������� 1\n";
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
//	std:: << "������� 2\n"
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


int main()
{
	setlocale(LC_ALL, "ru");


	/*for (int i = 0; i < 5; i++)
	{
		std::cout << i;
	}*/


	/*
	���_������ ���_������[������_�������];
	
	
	*/
	//const int size = 5; // const �.� ������ 5 ����� ����������, � � const ����� ��������
	//int arr[5]{ 1,3,5,6,7 }; //{ 1,3,5,6,7 } - ��������� ������ , {} - ��� ������ ���� ������� �� ������� ������� ����� 0
	//arr[0] = 10;
	//arr[1] = 20;

	//std::cout << arr[1] << " " << arr[2] << arr[size - 1]; // size - 1 ����� ���������� � ��������� ������ 

	double rub = 0;
	int cur = 0;
	double com = 0;
	char proverka = 'y';

	std::cout << "��������� ����� - �� DAITO\n";
	std::cout << "������� ���-�� ���: \t"; std::cin >> rub;
	

	com = rub * 0.05;

	/*while (proverka == 'y' || proverka == 'Y')
	{
	std::cout << "����� ������ ������ �������: ������(1) ����(2) ����(3) �����(4) ����(5) "; std::cin >> cur;


		if (cur == 1)
		{
			double dollar = (rub - com) / 83.65;
			std::cout << "�� �������� � ��������: " << dollar << "\n";
		}
		else if (cur == 2)
		{
			double evro = (rub - com) / 1.02;
			std::cout << "�� �������� � ����: " << evro << "\n";
		}
		else if (cur == 3)
		{
			double juan = (rub - com) / 8.53;
			std::cout << "�� �������� � ����: " << juan << "\n";
		}
		else if (cur == 4)
		{
			double farit = (rub - com) / 34;
			std::cout << "�� �������� � �������: " << farit << "\n";
		}
		else if (cur == 5)
		{
			double ean = (rub - com) / 177.79;
			std::cout << "�� �������� � � �����: " << ean << "\n";
		}
		else
		{
			std::cout << "�� ������ ����! \n";
		}
		std::cout << "������ ���������? y/n "; std::cin >> proverka;

	}*/



	/*for (char proverka = 'y'; proverka == 'y';)
	{
		std::cout << "����� ������ ������ �������: ������(1) ����(2) ����(3) �����(4) ����(5) "; std::cin >> cur;


		if (cur == 1)
		{
			double dollar = (rub - com) / 83.65;
			std::cout << "�� �������� � ��������: " << dollar << "\n";
		}
		else if (cur == 2)
		{
			double evro = (rub - com) / 1.02;
			std::cout << "�� �������� � ����: " << evro << "\n";
		}
		else if (cur == 3)
		{
			double juan = (rub - com) / 8.53;
			std::cout << "�� �������� � ����: " << juan << "\n";
		}
		else if (cur == 4)
		{
			double farit = (rub - com) / 34;
			std::cout << "�� �������� � �������: " << farit << "\n";
		}
		else if (cur == 5)
		{
			double ean = (rub - com) / 177.79;
			std::cout << "�� �������� � � �����: " << ean << "\n";
		}
		else
		{
			std::cout << "�� ������ ����! \n";
		}
		std::cout << "������ ���������? y/n "; std::cin >> proverka;
	}*/

	return 0;
}

