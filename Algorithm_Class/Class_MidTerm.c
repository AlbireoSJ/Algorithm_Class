//
//  Class_MidTerm.c
//  Algorithm_Class
//
//  Created by Albireo on 10/30/23.
//

#include <stdio.h>

//int main(int argc, const char * argv[])
//{
//    int Sum = 0;
//    int A = 1;
//    int B = 0;
//    
//    do {
//        A = A + B;
//        B = B + 1;
//        Sum += A;
//    } while (B < 20);
//    
//    printf("%d\n", Sum);
//    
//    return 0;
//}

//int main(int argc, const char * argv[])
//{
//    int Sum = 0;
//    int A = 1;
//    int B = 2;
//    
//    do {
//        Sum += A;
//        A = A + B;
//        B = B + 1;
//    } while (B < 12);
//
//    printf("%d\n", Sum);
//    
//    return 0;
//}

//int main(int argc, const char * argv[])
//{
//    int A = 1;
//    int B = 2;
//    
//    scanf("%d", &A);
//    
//    do {
//        B = B + 1;
//    } while (A % B != 0);
//    if(B == A)
//    {
//        printf("소수\n");
//    }
//    else
//    {
//        printf("소수아님\n");
//    }
//    
//    return 0;
//}

//int main(int argc, const char * argv[])
//{
//    int Sum = 0;
//    int A = 0;
//    int SW = 0;
//    
//    do {
//        A++;
//        if(SW == 0)
//        {
//            Sum += A;
//            SW = 1;
//        }
//        else
//        {
//            Sum -= A;
//            SW = 0;
//        }
//    } while (A < 100);
//    
//    printf("%d\n", Sum);
//    
//    return 0;
//}

//int main(int argc, const char * argv[])
//{
//    int Sum = 0;
//    int A = 1;
//    int B = 0;
//    int C = 0;
//    
//    do {
//        C++;
//        A = 1;
//        B = 0;
//        do {
//            B++;
//            A *= B;
//        } while (B < C);
//        Sum += A;
//    } while (C < 10);
//    
//    printf("%d\n", Sum);
//    
//    return 0;
//}

//int main(int argc, const char * argv[])
//{
//    int A, B, C, GCD, LCM, Temp, Remainder;
//    
//    scanf("%d", &A);
//    scanf("%d", &B);
//    
//    C = A * B;
//    
//    if(A < B)
//    {
//        Temp = A;
//        A = B;
//        B = Temp;
//    }
//    
//    Remainder = A % B;
//    
//    do {
//        A = B;
//        B = Remainder;
//        Remainder = A % B;
//    } while (Remainder != 0);
//    
//    GCD = B;
//    LCM = C / GCD;
//    
//    printf("GCD : %d, LCM : %d\n", GCD, LCM);
//    
//    return 0;
//}
