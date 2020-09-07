// ia ustal ((.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
double perimetr(int a)
{
    double p = 4 * a;
    return p;
}
void print_p(int a)
{
    double p = perimetr(a);
}
double square(int a)
{
    double s = a * a;
    return s;
}
double perimetr1(int a,int b)
{
    double p = 2 * (a + b);
    return p;
}
double square1(int a,int b)
{
    double s = a * b;
    return s;
}
double length(int a)
{
    double l = 3.14 * a;
    return l;
}
double volume(int a)
{
    double v = a * a * a;
    return v;
}
double square2(int a)
{
    double s = 6 * pow(a, 2);
    return s;
}
double volume1(int a, int b, int c)
{
    double v = a * b * c;
    return v;
}
double square3(int a, int b, int c)
{
    double s = 2 * (a * b + b * c + a * c);
    return s;
}
double length1(int a)
{
    double l = 2 * 3.14 * a;
    return l;
}
double square4(int a)
{
    double s = 3.14 * a * a;
    return s;
}
double sr_arifm(int a, int b)
{
    double s = (a + b) / 2;
    return s;
}
double sr_geom(int a, int b)
{
    double s = sqrt(a * b);
    return s;
}
double kvadr(int a, int b)
{
    double k = pow(a + b, 2);
    return k;
}
double kvadr1(int a, int b)
{
    double k = pow(a - b, 2);
    return k;
}
double kvadr2(int a, int b)
{
    double k = pow(a * b, 2);
    return k;
}
double kvadr3(int a, int b)
{
    double k = pow(a / b, 2);
    return k;
}
double modul(int a, int b)
{
    double m = abs(a + b);
    return m;
}
double modul1(int a, int b)
{
    double m = abs(a - b);
    return m;
}
double modul2(int a, int b)
{
    double m = abs(a * b);
    return m;
}
double modul3(int a, int b)
{
    double m = abs(a / b);
    return m;
}
double gipotenuza(int a, int b)
{
    double g = sqrt(a * a + b * b);
    return g;
}
double perimetr2(int a, int b, int c)
{
    double p = a + b + c;
    return p;
}
double square5(int a)
{
    double s = 3.14 * a * a;
    return s;
}
double square6(int a)
{
    double s = 3.14 * a * a;
    return s;
}
double square7(int a, int b)
{
    double s = a - b;
    return s;
}
double radius(int a)
{
    double r = a / (2 * 3.14);
    return r;
}
double square8(int a)
{
    double s = 3.14 * a * a;
    return s;
}
double diametr(int a)
{
    double d = (2 * sqrt(2 * 3.14))/3.14;
    return d;
}
double length2(int a)
{
    double l = 3.14 * a;
    return l;
}
double rasst(int a, int b)
{
    double r = abs(b - a);
    return r;
}
double length3(int a, int b)
{
    double l = b - a;
    return l;
}
double length4(int a, int b)
{
    double l = b - a;
    return l;
}
double summa(int a, int b)
{
    double s = a + b;
    return s;
}
double proizv(int a, int b)
{
    double p = a * b;
    return p;
}
double perimetr3(int a, int b)
{
    double p = (a + b) * 2;
    return p;
}
double square8(int a, int b)
{
    double s = a * b;
    return s;
}
double rasst1(int a, int b, int c, int d)
{
    return sqrt((pow(b - a, 2)) + (pow(d - c, 2)));;
}
double poluper(int a, int b, int c)
{
    return (a + b + c) / 2;
}
double square9(int a, int b, int c)
{
    double p = poluper(a, b, c);
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
double temp(int a)
{
    double t = (a - 32) * 5 / 9;
    return t;
}


int main()
{
    /*
    std::cout << perimetr(2) << std::endl;
    std::cout <<square(2) << std::endl;
    std::cout << perimetr1(2,3) << std::endl;
    std::cout << square1(2,3) << std::endl;
    std::cout << length(2) << std::endl;
    std::cout << volume(2) << std::endl;
    std::cout << square2(2)<< std::endl;
    std::cout << volume1(2,3,4) << std::endl;
    std::cout << square3(2,3,4) << std::endl;
    std::cout << length1(2) << std::endl;
    std::cout << square4(3) << std::endl;
    std::cout << sr_arifm(2,3) << std::endl;
    std::cout << sr_geom(2, 3) << std::endl;
    std::cout << kvadr(2, 3) << std::endl;
    std::cout << kvadr1(2, 3) << std::endl;
    std::cout << kvadr2(2, 3) << std::endl;
    std::cout << kvadr3(2, 3) << std::endl;
    std::cout << modul(2, 3) << std::endl;
    std::cout << modul1(2, 3) << std::endl;
    std::cout << modul2(2, 3) << std::endl;
    std::cout << modul3(2, 3) << std::endl;
    std::cout << gipotenuza(2, 3) << std::endl;
    std::cout << perimetr2(1, 2, 3) << std::endl;
    std::cout << square5(3) << std::endl;
    std::cout << square6(2) << std::endl;
    std::cout << square7(28.26, 12.56) << std::endl;
    std::cout << radius(2) << std::endl;
    std::cout << square8(4) << std::endl;
    std::cout << diametr(2) << std::endl;
    std::cout << length2(1.5957) << std::endl;
    std::cout << rasst(1,2) << std::endl;
    std::cout << length3(0,6) << std::endl;
    std::cout << length4(3,6) << std::endl;
    std::cout << summa(6,3) << std::endl;
    std::cout << proizv(4,4) << std::endl;
    std::cout << perimetr3(4, 8) << std::endl;
    std::cout << square8(4, 8) << std::endl;
    std::cout << rasst1(4,2,1,3) << std::endl;
    std::cout << temp(4) << std::endl;
    */
    return 0;
    }

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
