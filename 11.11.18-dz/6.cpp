/*Известно, что у дракона может быть несколько голов, и его сила определяется числом голов. Но ка определить силу драконьей 
стаи, в которой несколько драконов и у каждого из них определенное число голов? Вероятно, вы считаете, что это значение 
вычисляется, как сумма сил драконов. Это далеко не так. Оказывается, что искомое значение равно произведению значений числа 
голов каждого из драконов. Например, сила стаи состоящей из трёхглавого, четырехглавого и пятиглавого драконов равна 60.
Напишите программу, вычисляющую наибольшую возможную силу стаи, если дано количество голов в стае./*

#include <iostream>
#include <cmath>
using namespace std;
 void Arr( int Arr[], int nSize)
    {
        for (int n=0; n< nSize; n++)
        {
            cout << n << " : " << Arr[n] << "\n";
            
            int i;
            double x=1, y, power;
            for (i =1 ; i< Arr[3];)
            {
                x = x * 3;
                y = 1;
            }
            for (i = 1; i< Arr[2];)
            {
                y = y * 2;
                power = x * y;
            }
        }
        

        int main ()
    {
            int n3, n2, P, max;
            double ost;
            //A [3] = 0;
            //A [2] = 0;
            n3 = N div 3;
            A [3] = n3;
            ost = N - 3 * n3;
            n2 = ost div 2;
            A [2] = n2;
           P = power (A);
            max = P;
            for (i = 1; i< n3;)
            {
                A [3] = n3;
                ost = N - n3 * 3;
                n2 = ost div 2;
                A [2] = n2;
                P = power (A);
                if P > max then
                    max := P;
        
            }
        }
    }
