#include <stdio.h>

int main() {
    int num1, num2;
    printf("Введіть перше число: ");
    scanf("%d", &num1);
    printf("Введіть друге число: ");
    scanf("%d", &num2);
    
    int sum = num1 + num2;
    int division = num1 / num2;
    int difference = num1 - num2;
    
    printf("Сума чисел: %d\n", sum);
    printf("Ціла частина від ділення першого на друге: %d\n", division);
    printf("Різниця першого і другого чисел: %d\n", difference);
    
    return 0;
}
