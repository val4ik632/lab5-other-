/*
    Студент: Чикин Валерий Сергеевич
    Группа: ПИ-11
    Назначение: консольный калькулятор
*/
#include <stdio.h>

int main(void) 
{
	double a, b, result;
	int command;
	
	printf("Введите два числа через пробел:\n ");
	// Исправлено: %lf вместо %1f, убрана строгая запятая
	scanf("%lf %lf", &a, &b); 
	
	printf("1 - сложение\n 2 - вычитание\n");
	printf("3 - умножение\n 4 - деление\n");
	printf("Выберете операцию: ");
	scanf("%d", &command);
	
	switch(command)
	{
	    case 1:
    	    result = a + b;
    	    printf("Результат: %.2f\n", result); // Исправлено: %.2f для 2 знаков после запятой
    	    break;
	    
	    case 2:
    	    result = a - b;
    	    printf("Результат: %.2f\n", result);
    	    break;
	    
	    case 3:
    	    result = a * b;
    	    printf("Результат: %.2f\n", result);
    	    break;
	    
	    case 4:
    	    if(b != 0)
    	    {
    	        result = a / b;
    	        printf("Результат: %.2f\n", result);
    	    }
    	    else
    	    {
    	        printf("Ошибка: деление на ноль\n");
    	    }
    	    break;
    	    
	    default:
	        printf("Ошибка: неизвестная операция\n");
	        break;
	}
	
    return 0;
}
