#include <stdio.h>
#include <math.h>
#define menu printf("+ Addition\n- Substraction\n* multiplication\n/ division\n^ power\n% Modulus\n# Square Root\n! factorial\nT trigonometric function\n")
float num1, num2;
#define print printf("Enter two numbers: ")
#define scan scanf("%f %f", &num1, &num2)

int main(){
    int num;
    char opt;
    menu;
    printf("Enter the option from above: ");
    scanf(" %c", &opt);  /* note the leading space to skip newline */

switch (opt) {
    case '+':
        print;
        scan;
        printf("The Addition is: %f\n", num1 + num2);
        break;
    case '-':
        print;
        scan;
        printf("The Substraction is: %f\n", num1 - num2);
        break;
    case '*':
        print;
        scan;
        printf("The Multiplication is: %f\n", num1 * num2);
        break;
    case '/':
        print;
        scan;                             /* read numbers first */
        if (num2 != 0.0f) {
            printf("The Division is: %f\n", num1 / num2);  /* use / not + */
        } else {
            printf("Undefined\n");
        }
        break;
    case '!': {
        int fact = 1;
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num < 0) {
            printf("Invalid input\n");
            break;
        }
        for (int i = 1; i <= num; ++i) fact *= i;
        printf("The factorial is: %d\n", fact);
    } break;
    case '%': {
        int n1, n2;
        int rem;
        print;
        scanf("%d %d", &n1, &n2);
        if (n2 <= 0) {
            printf("Invalid input\n");
            break;
        }
        rem = n1 % n2;
        printf("The Remainder is: %d\n", rem);
    } break;
    case '#':
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num < 0) {
            printf("Invalid input\n");
            break;
        }
        printf("The Square root is: %f\n", sqrt(num));
        break;
    case '^': {
        float power;
        int n1, n2;
        print;
        scanf("%d %d", &n1, &n2);
        if (n2 <= 0) {
            printf("Invalid input\n");
            break;
        }
        power = pow(n1 , n2);
        printf("The result is: %f\n", power);
    } break;
    case 'T': {
        char opt2;
        double ang, angle;
        printf("S sin\nC cos\nT tan\nSelect Option from above: ");
        scanf(" %c", &opt2);
        printf("Enter angle in Degree: ");
        scanf("%lf", &ang);
        angle = ang * ( 3.1415926535 / 180.0);
        switch (opt2) {
            case 'S': case 's':
                printf("The sine is: %f\n", sin(angle));
                break;
            case 'C': case 'c':
                printf("The cosine is: %f\n", cos(angle));
                break;
            case 'T': case 't':
                printf("The tangent is: %f\n", tan(angle));
                break;
            default:
                printf("Unknown trig option\n");
                break;
        }
    } break;
    default:
        printf("Unknown option\n");
        break;
}
return 0;
}