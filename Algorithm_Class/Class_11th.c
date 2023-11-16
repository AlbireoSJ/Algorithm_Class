//
//  Class_11th.c
//  Algorithm_Class
//
//  Created by Albireo on 11/13/23.
//

#include <stdio.h>

//int main(int argc, const char * argv[]) // 삽입 정렬 for문
//{
//    int A[10] = {};
//    int key = 0;
//    
//    for (int i = 0; i < 10; i++) {
//        printf("정수를 입력하세요 : ");
//        scanf("%d", &A[i]);
//    }
//    
//    
//    for (int i = 1; i < 10; i++) {
//        key = A[i];
//        for (int j = i - 1; j >= 0; j--) {
//            if (A[j] > key) {
//                A[j+1] = A[j];
//            }
//            else{
//                j = j + 1;
//                break;
//            }
//            A[j] = key;
//        }
//    }
//    
//    printf("정렬 후 : ");
//    for (int i = 0; i < 10; i++) {
//        printf("%d, ", A[i]);
//    }
//    
//    return 0;
//}


//int main(int argc, const char * argv[]) // 삽입 정렬 while문
//{
//    int A[10] = {};
//    int key = 0;
//    int h = 0;
//    int i = 1;
//    int j = 0;
//    int k = 0;
//    
//    do {
//        printf("정수를 입력하세요 : ");
//        scanf("%d", &A[h]);
//        h++;
//    } while (h < 10);
//    
//    do {
//        key = A[i];
//        j = i - 1;
//        do {
//            if (key < A[j]) {
//                A[j+1] = A[j];
//                j--;
//            }
//            else
//                break;
//        } while (j <= 1);
//        A[j+1] = key;
//        i++;
//    } while (i < 10);
//    
//    printf("정렬 후 : ");
//    do {
//        printf("%d, ", A[k]);
//        k++;
//    } while (k < 10);
//    
//    return 0;
//}

//int main(int argc, const char * argv[]) // 석차구하기
//{
//    int A[10] = {90, 100, 50, 55, 60, 70, 80, 85, 65, 75};
//    int Rank[10];
//    int i, j;
//    
//    for (i = 0; i < 10; i++) {
//        Rank[i] = 1;
//    }
//    i = 0;
//    do {
//        j = 0;
//        do {
//            if (A[i] < A[j]) {
//                Rank[i] = Rank[i] + 1;
//            }
//            j++;
//        } while (j < 10);
//        i++;
//    } while (i < 10);
//    
//    for (int i = 0; i < 10; i++) {
//        printf("%d점 : %d등\n", A[i], Rank[i]);
//    }
//    
//    return 0;
//}

//int main(int argc, const char * argv[]) // 석차구하기 공동 등수
//{
//    int A[10] = {1, 1, 1, 2, 2, 2, 3, 3, 3, 3};
//    int Rank[10];
//    int i, j;
//    
//    for (i = 0; i < 10; i++) {
//        Rank[i] = 1;
//    }
//    i = 0;
//    do {
//        j = 0;
//        do {
//            if (A[i] < A[j]) {
//                Rank[i] = Rank[i] + 1;
//            }
//            j++;
//        } while (j < 10);
//        i++;
//    } while (i < 10);
//    
//    for (int i = 0; i < 10; i++) {
//        printf("%d점 : %d등\n", A[i], Rank[i]);
//    }
//    
//    return 0;
//}

//int main(int argc, const char * argv[]) // 문제. 배열 1
//{
//    int A[5][5] = {};
//    int num = 1;
//    
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j < 5; j++) {
//            A[i][j] = num;
//            num++;
//        }
//    }
//    
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j < 5; j++) {
//            printf("%2d " , A[i][j]);
//        }
//        printf("\n");
//    }
//    
//    return 0;
//}

//int main(int argc, const char * argv[]) // 문제. 배열 2 #1
//{
//    int A[5][5] = {};
//    int num = 1;
//    
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j <= i; j++) {
//            A[i][j] = num;
//            num++;
//        }
//    }
//    
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j <= i; j++) {
//            printf("%2d " , A[i][j]);
//        }
//        printf("\n");
//    }
//    
//    return 0;
//}

//int main(int argc, const char * argv[]) // 문제. 배열 2 #2
//{
//    int A[6][6] = {};
//    A[0][1] = 1;
//
//    for (int i = 1; i < 6; i++) {
//        for (int j = 1; j <= i; j++) {
//            A[i][j] = A[i-1][1] + (i-1) + (j-1);
//            printf("%2d ", A[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//int main(int argc, const char * argv[]) // 문제. 배열 3
//{
//    int A[5][5] = {};
//    int num = 1;
//    
//    for (int i = 0; i < 5; i++) {
//        for (int j = i; j >= 0; j--) {
//            A[i][j] = num++;
//        }
//    }
//    
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j < 5; j++) {
//            printf("%2d ", A[i][j]);
//        }
//        printf("\n");
//    }
//    
//    return 0;
//}

int main(int argc, const char * argv[]) // 문제. 평균 석차 구하기
{
    int num[3] = {1, 2, 3};
    int kor[3] = {80, 60, 90};
    int eng[3] = {70, 80, 60};
    int math[3] = {50, 80, 100};
    int sum[3] = {};
    float avg[3] = {};
    int rank[3] = {1, 1, 1};

    for (int i = 0; i < 3; i++) {
        sum[i] = kor[i] + eng[i] + math[i];
        avg[i] = (float)(sum[i]) / 3;  // 정확한 부동 소수점 평균 계산
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (avg[i] < avg[j]) {
                rank[i] = rank[i] + 1;
            }
        }
    }
    // 출력
    printf("번호\t국어\t영어\t수학\t합계\t평균\t   석차\n");
    for (int k = 0; k < 3; k++) {
        printf("%d\t%d\t%d\t%d\t%d\t%.2f\t%d\n", num[k], kor[k], eng[k], math[k], sum[k], avg[k], rank[k]);
    }
}

