#include <stdio.h>
#include <math.h>

// Prototypes -- ignore this its just syntax 
void one_to_n(int num);
void n_to_one(int num);
void alpha(void);
void even_to_100(void);
void odd_to_100(void);
void sum_to_n(int num);
void sum_even_to_n(int num);
void sum_odd_to_n(int num);
void multiplication_table(int num_start, int num_end);
void num_of_digits(int num);
void swap_first_and_last_digits(int num);
void sum_of_digits(int num);
void product_of_digits(int num);

int main(void) {
    // To test the functions, you can uncomment the ones you want to test change the numbers and run
    // one_to_n(10);
    // n_to_one(10);
    // alpha();
    // even_to_100();
    // odd_to_100();
    // sum_to_n(10);
    // sum_even_to_n(10);
    // sum_odd_to_n(10);
    // multiplication_table(5, 10);
    // num_of_digits(12345);
    // swap_first_and_last_digits(12345);
    // sum_of_digits(12345);
    // product_of_digits(12345);
    return 0;
}

// C program that prints all the number from 1 to n
void one_to_n(int num) {
    for(int i = 1; i <= num; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

// C program that prints all the number from n to 1
void n_to_one(int num) {
    for(int i = num; i > 0; i--) {
        printf("%d ", i);
    }
    printf("\n");
}

// C program that prints all the characters of the alphabet
void alpha(void) {
    for(char c = 'a'; c <= 'z'; ++c) {
        printf("%c ", c);
    }
    printf("\n");
}

// C program that prints the even numbers between 1 and 100
void even_to_100(void) {
    for(int i = 2; i <= 100; i +=2) {
        printf("%d ", i);
    }
    printf("\n");

    // Another way of doing it
    for(int i = 1; i <= 100; i++) {
        if( i % 2 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n"); 
}

// C program that prints the odd numbers between 1 and 100
void odd_to_100(void) {
    for(int i = 1; i < 100; i +=2) {
        printf("%d ", i);
    }
    printf("\n");

    // Another way of doing it
    for(int i = 1; i <= 100; i++) {
        if( i % 2 == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

// C program to find the sum of all natural numbers between 1 and n
void sum_to_n(int num) {
    int total = 0;
    for(int i = 0; i <= num; i++) {
        total += i;
    }

    printf("%d\n", total);
}

// C program to find the sum of all even numbers between 1 and n
void sum_even_to_n(int num) {
    int total = 0;
    for(int i = 0; i <= num; i++) {
        if(i % 2 == 0 ) {
            total += i;
        }
    }

    printf("%d\n", total);
}

// C program to find the sum of all odd numbers between 1 and n
void sum_odd_to_n(int num) {
    int total = 0;
    for(int i = 0; i <= num; i++) {
        if(i % 2 == 1) {
        total += i;
        }
    }

    printf("%d\n", total);
}

// C program to print mult table of num_start from 1 to num_end
void multiplication_table(int num_start, int num_end) {
    for(int i = 1; i <= num_end; i++) {
        printf("%d * %d = %d\n", num_start, i, num_start * i);
    }
}

// These are a bit more difficult
// C program to count the number of digits in a number
void num_of_digits(int num) {
    int count = 0;
    if(num == 0) {
        printf("There number of digit/s: 1\n");
    }

    while(num != 0) {
        num /= 10;
        count++;
    }

    printf("The number of digit/s: %d\n", count);
}

// C program to print first and last digits in a number
void first_and_last_digits(int num) {
    int first, last;
    
    last = num % 10;
    while(num >= 10) {
        num /= 10;
    }

    first = num;

    printf("The first number is: %d\n", first);
    printf("The last number is: %d\n", last);
}

// C program to print the sum of first and last digits in a number
void sum_first_and_last_digits(int num) {
    int first, last;
    
    last = num % 10;
    while(num >= 10) {
        num /= 10;
    }

    first = num;

    printf("The sum of the first and last number of %d is: %d\n", num, first + last);
}

// C program to swap first and last digits in a number
void swap_first_and_last_digits(int num) {
    int first, last, middle, digits = 0, temp, swapped;

    last = num % 10;
    temp = num;

    while(temp != 0) {
        temp /= 10;
        digits++;
    }

    first = (num - (num % (int)pow(10, digits - 1))) / (int)pow(10, digits - 1);
    middle = num - (first * (int)pow(10, digits - 1)) - last;
    swapped = (last * (int)pow(10, digits - 1)) + middle + first;

    printf("The number %d swapped the first and last digits is %d\n", num, swapped);
}

// C program to print sum of digits in a number
void sum_of_digits(int num) {
    int sum = 0;
    while(num != 0) {
        sum += num % 10;
        num /= 10;
    }

    printf("The sum of the digits is: %d\n", sum);
}

// C program to print product of digits in a number
void product_of_digits(int num) {
    int product = 1;
    while(num != 0) {
        product *= num % 10;
        num /= 10;
    }

    printf("The product of the digits is: %d\n", product);
}
