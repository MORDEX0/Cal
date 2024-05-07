#include <Windows.h>
#include <iostream>
#include <cmath>

class twooper
{
public:
    void plus();
    void minus();
    void mnosh();
    void delit();
    void stepen();
};

class oneoper
{
public:
    void koren();
    void procent();
    void voskl();
};

class interface1
{
public:
    void vibor()
    {
        SetConsoleCP(1251);
        setlocale(LC_ALL, "Rus");
        int c = 1;
        while (c==1)
        {
            std::cout << "\nВыберите действие путем ввода соответствующей цифры: \n1)Сложение \n2)Вычитание ";
            std::cout << "\n3)Умножение \n4)Деление \n5)Возведение в степень \n6)Нахождение квадратного корня";
            std::cout << "\n7)Нахождение 1 процента от числа \n8)Нахождение факториала\n9)Выход\nВведите ваш выбор: ";
            char x;
            std::cin >> x;
            switch (x)
            {
            case '1':
                twooper plus_obj;
                plus_obj.plus();
                break;
            case '2':
                twooper minus_obj;
                minus_obj.minus();
                break;
            case '3':
                twooper mnosh_obj;
                mnosh_obj.mnosh();
                break;
            case '4':
                twooper delit_obj;
                delit_obj.delit();
                break;
            case '5':
                twooper stepen_obj;
                stepen_obj.stepen();
                break;
            case '6':
                oneoper koren_obj;
                koren_obj.koren();
                break;
            case '7':
                oneoper procent_obj;
                procent_obj.procent();
                break;
            case '8':
                oneoper voskl_obj;
                voskl_obj.voskl();
                break;
            case '9':
                c = 0;
                break;
            default:
                std::cout << "\nдействие не найдено";
            }
        }
    }
};

void twooper::plus()
{
    double a, s;
    std::cout << "введите первое слогаемое ";
    std::cin >> a;
    std::cout << "введите второе слогаемое ";
    std::cin >> s;
    int d = a + s;
    std::cout << "ответ: " << d;
}

void twooper::minus()
{
    double a, s;
    std::cout << "введите уменьшаемое ";
    std::cin >> a;
    std::cout << "введите вычитаемое ";
    std::cin >> s;
    int d = a - s;
    std::cout << "ответ: " << d;
}

void twooper::mnosh()
{
    double a, s;
    std::cout << "введите первый множитель ";
    std::cin >> a;
    std::cout << "введите второй множитель ";
    std::cin >> s;
    int d = a * s;
    std::cout << "ответ: " << d;
}

void twooper::delit()
{
    double a, s;
    std::cout << "введите делимое ";
    std::cin >> a;
    std::cout << "введите делитель ";
    std::cin >> s;
    double d = a / s;
    std::cout << "ответ: " << d;
}

void twooper::stepen()
{
    double a, s;
    std::cout << "введите число ";
    std::cin >> a;
    std::cout << "введите степень ";
    std::cin >> s;
    double d = pow(a, s);
    std::cout << "ответ: " << d;
}

void oneoper::koren()
{
    float a;
    std::cout << "введите число ";
    std::cin >> a;
    double d = sqrt(a);
    std::cout << "ответ: " << d;
}

void oneoper::procent()
{
    double a;
    std::cout << "введите число ";
    std::cin >> a;
    double d = a / 100;
    std::cout << "ответ: " << d;
}

void oneoper::voskl()
{
    double a;
    std::cout << "введите число: ";
    std::cin >> a;
    int g = a - 1;
    for (int i = g; i > 1; i--)
    {
        a = a * i;
    }
    std::cout << "Ответ: " << a;
}

int main()
{
    interface1 obj_interface1;
    obj_interface1.vibor();

    return 0;
}