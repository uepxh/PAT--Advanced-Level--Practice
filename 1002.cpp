//
// Created by riyuu on 2024/4/19.
//
#include <cstdio>

using namespace std;
//double A[1010] = {0};
//double B[1010] = {0};
double ans[1010] = {0};

int main() {
    int num = 0;
    int exp = 0;
    double coe = 0;
    scanf("%d", &num);
    while (num--) {
        scanf("%d %lf", &exp, &coe);
        ans[exp] += coe;
    }
    scanf("%d", &num);
    while (num--) {
        scanf("%d %lf", &exp, &coe);
        ans[exp] += coe;
    }
//    for (int i = 0; i < 1000; i++) {
//        ans[i] = A[i] + B[i];
//    }
    int count = 0;
    for (int i = 0; i < 1005; i++) {
        if (ans[i] != 0.0) {
            count++;
        }
    }
    printf("%d", count);
    for (int i = 1005; i >= 0; i--) {
        if (ans[i] != 0.0) {
            printf(" %d %.1f", i, ans[i]);
        }
    }
    return 0;
}