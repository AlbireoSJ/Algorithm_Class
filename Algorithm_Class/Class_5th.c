//
//  Class_5th.c
//  Algorithm_Class
//
//  Created by Albireo on 10/17/23.
//

#include <stdio.h>

//int main(int argc, const char * argv[])
//{
//    float Sum = 0;
//    float A = 1; // 첫번째 항의 분모값
//    float B = 1; // 첫번째 항의 초기값
//    
//    do {
//        B = 1/A; // 각 항의 값
//        Sum = Sum + B;
//        A++;
//    } while (A < 11);
//    
//    printf("%f\n", Sum);
//    
//    return 0;
//}

//int main(int argc, const char * argv[])
//{
//    float Sum = 0;
//    float A = 1;
//    float B = 2;
//    float C = 0;
//    
//    do {
//        C = A/B;
//        Sum = Sum + C;
//        A = B;
//        B++;
//    } while (B < 101);
//    
//    printf("%f\n", Sum);
//    
//    return 0;
//}


//int main(int argc, const char * argv[])
//{
//    int Prime_Num = 0;
//    int Flag = 1;
//    
//    printf("소수인지 판별할 정수를 입력하세요 : ");
//    scanf("%d", &Prime_Num);
//    
//    if (Prime_Num == 2) {
//        printf("소수입니다.\n");
//    }
//    else if (Prime_Num == 1 || Prime_Num == 0)
//    {
//        printf("0과 1은 소수도 아니고 합성수도 아닙니다.\n");
//    }
//    else
//    {
//        for(int i = 2;i < Prime_Num;i++)
//            if (Prime_Num % i == 0) {
//                Flag = 0;
//                break;
//            }
//        if (Flag == 1) {
//            printf("소수입니다.\n");
//        }
//        else
//        {
//            printf("소수가 아닙니다.\n");
//        }
//    }
//    
//    return 0;
//}

//int main(int argc, const char * argv[])
//{
//    int User_Input = 0;
//    int Flag;
//    int Sum = 0;
//    
//    printf("입력한 수까지의 모든 소수의 합을 구해드립니다 : ");
//    scanf("%d", &User_Input);
//    
//    if(User_Input == 2)
//    {
//        Sum = Sum + User_Input;
//    }
//    else if(User_Input == 1 || User_Input == 0)
//    {
//        printf("0과 1은 소수도 아니고 합성수도 아닙니다.\n");
//    }
//    else
//    {
//        for(int Prime_Num = 2; Prime_Num <= User_Input; Prime_Num++)
//        {
//            Flag = 1;
//            for(int i = 2; i < Prime_Num; i++)
//            {
//                if(Prime_Num % i == 0)
//                {
//                    Flag = 0;
//                    break;
//                }
//            }
//            if(Flag == 1)
//            {
//                Sum = Sum + Prime_Num;
//            }
//        }
//    }
//    printf("%d까지의 소수의 합 : %d\n", User_Input, Sum);
//    
//    return 0;
//}
