#include <stdio.h>
#include <string.h>

// Prototypes -- ignore this it is just syntax
void one_to_n(int num);
void n_to_one(int num);
void alpha(void);
void even_to_100(void);
void power(int base, int exp);
void factors(int num);
void factorial(int num);
int is_prime(int num, int print_result);
void primes_to_n(int num);
void sum_primes_to_n(int num);
void draw_square(int size);
void draw_rhombus_right(int size);
void draw_rhombus_left(int size);
void draw_right_triangle_left(int size);
void draw_right_triangle_right(int size);
void draw_right_triangle_down_left(int size);
void draw_right_triangle_down_right(int size);
void draw_pyramid(int size);
void draw_inverted_pyramid(int size);
void draw_heart(char *prompt, int size);

int main(void) {
    // To test the functions, you can uncomment the ones you want to test change the numbers and run
    // one_to_n(10);
    // n_to_one(10);
    // alpha();
    // even_to_100();
    // power(2, 3);
    // factors(24);
    // factorial(5);
    // is_prime(17, 1);
    // primes_to_n(20);
    // sum_primes_to_n(20);
    // draw_square(5, 1);
    // draw_rhombus_right(5, 1);
    // draw_rhombus_left(5, 1);
    // draw_right_triangle_left(5, 1);
    // draw_right_triangle_right(5, 1);
    // draw_right_triangle_down_left(5, 1);
    // draw_right_triangle_down_right(5, 1);
    // draw_pyramid(5, 1);
    // draw_inverted_pyramid(5, 1);
    // draw_heart("Prep MU 2026", 4);
    return 0;
}

// C program to print the natural numbers from 1 to n with while loop
void one_to_n(int num) {
    int i = 1;
    while(i <= num) {
        printf("%d ", i++);
    }
    printf("\n");
}

// C program to print the natural numbers from n to 1 with while loop
void n_to_one(int num) {
    int i = num;
    while(i >= 1) {
        printf("%d ", i--);
    }
    printf("\n");
}

// C program to print the characters from a to z
void alpha(void) {
    char c = 'a';
    while(c <= 'z') {
        printf("%c ", c++);
    }
    printf("\n");
}

// C program to print the even numbers between 1 and 100 with while loop
void even_to_100(void) {
    int i = 2;
    while(i <= 100) {
        printf("%d ", i);
        i += 2;
    }
    printf("\n");
}

// C program to find the power of a number using while loop
void power(int base, int exp) {
    int result = 1;
    while(exp-- > 0) {
        result *= base;
    }

    printf("The result is: %d\n", result);
}

// C program to find all the factors of a number using while loop
void factors(int num) {
    int i = 1;
    printf("The factors of the number %d are: ", num);
    while(i <= num) {
        if (num % i == 0) {
            printf("%d ", i);
        }
        i++;
    }

    printf("\n");
}

// C program to calculate the factorial of a number using while loop
void factorial(int num) {
    int result = 1;
    while(num > 1) {
        result *= num--;
    }

    printf("The factorial is: %d\n", result);
}

// C program to check if a number is prime using while loop
int is_prime(int num, int print_result) {
    if(num <= 1) {
        if(print_result) {
            printf("%d is not a prime number (less than or equal to 1).\n", num);
        }
        return 0;
    }

    int i = 2;
    while(i <= num / 2) {
        if(num % i == 0) {
            if(print_result) {
                printf("%d is not a prime number (divisible by %d).\n", num, i);
            }
            return 0;
        }
        i++;
    }

    if(print_result) {
        printf("%d is a prime number.\n", num);
    }
    return 1;
}

// C program to print the prime numbers between 1 and n using while loop
void primes_to_n(int num) {
    printf("The prime numbers between 1 and %d are: ", num);
    int i = 2;
    while(i <= num) {
        if(is_prime(i, 0)) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");
}

// C program to find sum of prime numbers between 1 and n using while loop
void sum_primes_to_n(int num) {
    int sum = 0;
    int i = 2;
    while(i <= num) {
        if(is_prime(i, 0)) {
            sum += i;
        }
        i++;
    }
    printf("The sum of prime numbers between 1 and %d is: %d\n", num, sum);
}

// C program to draw a square
void draw_square(int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// C program to draw a rhombus shfited to the right
void draw_rhombus_right(int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            printf(" ");
        }
        for(int k = 0; k < size; k++) {
            printf("*");
        }
        printf("\n");
    }
}

// C program to draw a rhombus shfited to the left
void draw_rhombus_left(int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < i; j++) {
            printf(" ");
        }
        for(int k = 0; k < size; k++) {
            printf("*");
        }
        printf("\n");
    }
}

// C program to draw a right triangle shifted to the left
void draw_right_triangle_left(int size) {
    for(int i = 1; i <= size; i++) {
        for(int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// C program to draw a right triangle shifted to the right
void draw_right_triangle_right(int size) {
    for(int i = 1; i <= size; i++) {
        for(int j = 0; j < size - i; j++) {
            printf(" ");
        }
        for(int k = 0; k < i; k++) {
            printf("*");
        }
        printf("\n");
    }
}

// C program to draw right triangle faced down and shifted to the left
void draw_right_triangle_down_left(int size) {
    for(int i = size; i >= 1; i--) {
        for(int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// C program to draw right triangle faced down and shifted to the right
void draw_right_triangle_down_right(int size) {
    for(int i = size; i >= 1; i--) {
        for(int j = 0; j < size - i; j++) {
            printf(" ");
        }
        for(int k = 0; k < i; k++) {
            printf("*");
        }
        printf("\n");
    }
}

// C program to draw a pyramid
void draw_pyramid(int size) {
    for(int i = 1; i <= size; i++) {
        for(int j = 0; j < size - i; j++) {
            printf(" ");
        }
        for(int k = 0; k < 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
}

// C program to draw an inverted pyramid
void draw_inverted_pyramid(int size) {
    for(int i = size; i >= 1; i--) {
        for(int j = 0; j < size - i; j++) {
            printf(" ");
        }
        for(int k = 0; k < 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
}

// C program to draw a heart with text in it
void draw_heart(char *prompt, int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size - i - 1; j++) {printf("  ");}
        for(int j = 0; j <= size; j++) {printf("* ");}
        for(int j = 0; j < 2 * i + 1; j++) {printf("* ");}
        for(int j = 2 * (size - i - 1); j > 0; j--) {printf("  ");}
        for(int j = 0; j <= size; j++) {printf("* ");}
        for(int j = 0; j < 2 * i + 1; j++) {printf("* ");}
        printf("\n");
    }

    int pad = ((12 * size) - strlen(prompt)) / 4;
    for(int i = 0; i < pad; i++) {
        printf("* ");
    }
    if(strlen(prompt) % 2 == 0) {printf("%s", prompt);} else {printf("%s ", prompt);}

    for(int i = 0; i < pad; i++) {
        printf("* ");
    }

    printf("\n");
    
    for(int i = 3 * size ; i >= 1; i--) {
        for(int j = 0; j < 3 * size - i; j++) {printf("  ");}
        for(int j = 0; j < i; j++) {printf("* ");}
        for(int j = 0; j < i; j++) {printf("* ");}
        printf("\n");
    }

    for(int i = 0; i < 6 * size - 1; i++) {printf(" ");}
    printf("*");
}
