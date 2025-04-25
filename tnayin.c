//1
// #include <stdio.h>
// int main() {
//     int a, b;
//     printf("enter nums");
//     scanf("%d %d", &a, &b);
//     printf("res is%d\n", a & b);
//     return 0;
// }
//2
// #include <stdio.h>
// int main() {
//     int a, b;
//     printf("Enter two number");
//     scanf("%d %d", &a, &b);
//     printf("result%d\n", a | b);
//     return 0;
// }
//3
// #include <stdio.h>
// int main() {
//     int a, b;
//     printf("numbers");
//     scanf("%d %d", &a, &b);
//     printf("result%d\n", a ^ b);
//     return 0;
// }
//4
// #include <stdio.h>
// int main() {
//     int a, b;
//     printf("a b | Result\n");
//     for (a = 0; b <= 1; a++) {
//         for (b = 0; b <= 1; b++) {
//             int result = (a && b) || !b || a;
//             printf("%d %d |   %d\n", a, b, result);
//         }
//     }
//     return 0;
// }
//5
// #include <stdio.h>
// int main() {
//     int a, b;
//     printf("a b| Result\n");
//     for (A = 0; A <= 1; A++) {
//         for (b = 0; b <= 1; b++) {
//             int result = a || (b && !(b || a));
//             printf("%d %d |   %d\n", a, b, result);
//         }
//     }
//     return 0;
// }
