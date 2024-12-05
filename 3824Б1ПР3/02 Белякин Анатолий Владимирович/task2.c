// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include <stdio.h>
#include <locale.h> 
#include <limits.h> 
unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{ 
    if (b != 0 && a > UINT_MAX / b) {
        return UINT_MAX; 
    }
    return a * b;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    unsigned int a, b;
  
    printf("Введите два натуральных числа: ");
    scanf_s("%u %u", &a, &b);
    unsigned int result = product_of_two_numbers(a, b);
    if (result == UINT_MAX) {
        printf("Произведение чисел %u и %u превышает максимально допустимое значение UINT_MAX и равно %u\n", a, b, result);
    }
    else {
        printf("Произведение чисел %u и %u равно %u\n", a, b, result);
    }
    return 0;
}
