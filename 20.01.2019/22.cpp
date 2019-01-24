/*Дан набор из N целых положительных чисел. Необходимо выбрать из набора произвольное количество чисел так, чтобы их 
сумма была как можно больше и при этом не делилась на 6. В ответе нужно указать количество выбранных чисел и их сумму, 
сами числа выводить не надо. Если получить нужную сумму невозможно, считается, что выбрано 0 чисел и их сумма равна 0. 
Напишите эффективную по времени и по памяти программу для решения этой задачи.*/

#include <iostream>
using namespace std;
int main() {
	int d = 6;
	int MAX = 2147483646;
	int N, X, sum = 0, MIN_D, k;
	cin >> N;
	MIN_D = MAX + 1;
	for (int i = 0; i < N; i++) 
  {
		cin >> X;
		sum += X;
		if ((X % d != 0) && (X < MIN_D)) 
			MIN_D = X;
	}
	if (sum % d != 0)
		k = N;
	else if (MIN_D <= MAX) 
  {
		k = N - 1;
		sum -= MIN_D;
	}
	else 
  {
		k = 0;
		sum = 0;
	}
	cout << k << " " << sum;
	return 0;
}
