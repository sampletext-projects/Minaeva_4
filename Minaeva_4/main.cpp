#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Выполнила Минаева Полина Валерьевна УТН - 111\n";
	cout << "Программа для вычисления суммы\n";

	double sum1 = 0;
	int sign = 1;

	for (double k = 1; k <= 1000; k++)
	{
		sum1 += sign * 1 / k;
		sign *= -1;
	}

	cout << "При последовательном вычислении результат: \n" << setprecision(20) << sum1 << "\n";

	double sum_plus = 0, sum_minus = 0;

	for (double k = 1; k <= 1000; k += 2)
	{
		sum_plus += 1 / k;
	}

	for (double k = 2; k <= 1000; k += 2)
	{
		sum_minus += 1 / k;
	}

	double sum2 = sum_plus - sum_minus;

	cout << "При отдельном вычислении результат: \n" << setprecision(20) << sum2 << "\n";

	if (sum1 == sum2)
	{
		cout << "Результаты совпадают\n";
	}
	else
	{
		cout << "Результаты не совпадают\n";
	}

	system("pause");

	return 0;
}
