//
//  Class_10th.c
//  Algorithm_Class
//
//  Created by Albireo on 11/8/23.
//

#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

//int main(int argc, const char * argv[]) // 1부터 100까지의 5의 배수의 개수와 합
//{
//    int CNT = 0;
//    int sum = 0;
//    int i = 0;
//    
//    do {
//        i++;
//        if (i % 5 == 0) {
//            CNT++;
//            sum += i;
//        }
//    } while (i < 100);
//    
//    printf("5의 배수 개수 : %d, 5의 배수의 합 : %d\n", CNT, sum);
//    return 0;
//}

//int main(int argc, const char * argv[]) // 7에 가장 가까운 자료를 찾는
//{
//    int A[10] = {};
//    int dif = 0;
//    int s_dif = INT_MAX;
//    int B = 0;
//    int i = 0;
//    int j = 0;
//    
//    do {
//        printf("정수를 입력하세요 : ");
//        scanf("%d", &A[j]);
//        j++;
//    } while (j < 10);
//    
//    do {
//        dif = 7 - A[i];
//        if (dif < 0) {
//            dif *= (-1);
//        }
//        if (s_dif > dif) {
//            s_dif = dif;
//            B = A[i];
//        }
//        i++;
//    } while (i < 10);
//    
//    printf("7에 가장 가까운 수는 %d\n", B);
//    return 0;
//}

//int main(int argc, const char * argv[]) // 7에 가장 가까운 자료를 찾는 중복된 것 포함 #1
//{
//    int A[10] = {};
//    int dif = 0;
//    int s_dif = INT_MAX;
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    
//    do {
//        printf("정수를 입력하세요 : ");
//        scanf("%d", &A[k]);
//        k++;
//    } while (k < 10);
//    
//    do {
//        dif = 7 - A[i];
//        if (dif < 0) {
//            dif *= (-1);
//        }
//        if (s_dif > dif) {
//            s_dif = dif;
//        }
//        i++;
//    } while (i < 10);
//    do {
//        if (abs(7 - A[j]) == s_dif) {
//            printf("7에 가장 가까운 수는 : %d\n", A[j]);
//        }
//        j++;
//    } while (j < 10);
//    
//    
//    return 0;
//}
//
//int main(int argc, const char * argv[]) // 7에 가장 가까운 자료를 찾는 중복된 것 포함 #2
//{
//    int A[10] = {};
//    int B[10] = {};
//    int dif = 0;
//    int s_dif = INT_MAX;
//    int i = 0;
//    int j = 0;
//    int k = 0;
//    int l = 0;
//    int cnt = 0;
//    
//    do {
//        printf("정수를 입력하세요 : ");
//        scanf("%d", &A[k]);
//        k++;
//    } while (k < 10);
//    
//    do {
//        dif = 7 - A[i];
//        if (dif < 0) {
//            dif *= (-1);
//        }
//        if (s_dif > dif) {
//            s_dif = dif;
//            j = 0;
//            cnt = 0;
//            B[j] = A[i];
//        }
//        if (s_dif == dif) {
//            B[j] = A[i];
//            cnt++;
//        }
//        i++;
//        j++;
//    } while (i < 10);
//    
//    printf("7에 가장 가까운 수는 : ");
//    do {
//        printf("%d, ", B[l]);
//        l++;
//    } while (l < cnt);
//    
//    
//    return 0;
//}

//int main(int argc, const char * argv[]) // 버블 정렬 do while
//{
//    int A[10] = {};
//    int i = 0;
//    int j = 0;
//    int tmp = 0;
//    int k = 0;
//    
//    do {
//        printf("정수를 입력하세요 : ");
//        scanf("%d", &A[k]);
//        k++;
//    } while (k < 10);
//    
//    do {
//        j = 0;
//        do {
//            if (A[j] > A[j+1]) {
//                tmp = A[j+1];
//                A[j+1] = A[j];
//                A[j] = tmp;
//            }
//            j++;
//        } while (j < 9-i);
//        i++;
//    } while (i < 9);
//    
//    printf("정렬된 배열 : ");
//    k = 0;
//    do {
//        printf("%d, ", A[k]);
//        k++;
//    } while (k < 10);
//    
//    return 0;
//}

//int main(int argc, const char * argv[]) // 선택 정렬 do while
//{
//    int A[10] = {};
//    int i = 0;
//    int j = 0;
//    int tmp = 0;
//    int k = 0;
//    
//    do {
//        printf("정수를 입력하세요 : ");
//        scanf("%d", &A[k]);
//        k++;
//    } while (k < 10);
//    
//    do {
//        j = i;
//        j++;
//        do {
//            if (A[i] > A[j]) {
//                tmp = A[i];
//                A[i] = A[j];
//                A[j] = tmp;
//            }
//            j++;
//        } while (j < 10);
//        i++;
//    } while (i < 9);
//    
//    printf("정렬된 배열 : ");
//    k = 0;
//    do {
//        printf("%d, ", A[k]);
//        k++;
//    } while (k < 10);
//    
//    return 0;
//}


//int main(int argc, const char * argv[]) // 선택 정렬 for문
//{
//    int A[10] = {};
//    int i = 0;
//    int j = 0;
//    int tmp = 0;
//    int k = 0;
//    
//    do {
//        printf("정수를 입력하세요 : ");
//        scanf("%d", &A[k]);
//        k++;
//    } while (k < 10);
//    
//    for(i = 0;i < 9;i++)
//    {
//        for(j = i+1;j < 10;j++)
//        {
//            if (A[i] > A[j]) {
//                tmp = A[i];
//                A[i] = A[j];
//                A[j] = tmp;
//            }
//        }
//    }
//    
//    printf("정렬된 배열 : ");
//    for(k = 0;k < 10;k++)
//    {
//        printf("%d, ", A[k]);
//    }
//    
//    return 0;
//}
