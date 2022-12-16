#include <stdio.h>
#define N 100

int max_homework(int money[], int deadline[], int n) {
    int indx[N];
    int i, j, k, i_min;
    int sum, max_m;


    for (i=0; i<n; i++) {
        indx[i] = i;
    }


    // for (i=0; i<n-1; i++) {
    //     i_min = i;
    //     for (j=i+1; j<n; j++) {
    //         if (deadline[i_min] > deadline[j]) {
    //             i_min = j;
    //         }
    //     }
    //     k = indx[i_min];
    //     indx[i_min] = indx[i];
    //     indx[i] = k;
    // }

    // optimize abobe implementation
    


    sum = 0;
    i = 1;
    max_m = money[indx[0]];
    while (i<n) {
        if (deadline[indx[i-1]] != deadline[indx[i]]) {
            sum += max_m;
            max_m = money[indx[i]];
        }
        else {
            if (money[indx[i]] > max_m) {
                max_m = money[indx[i]];
            }
        }
        i++;
    }
    sum += max_m;
    return sum;
}


int main() {
    int money[N];
    int deadline[N];
    int i, n, m;

    scanf("%d", &n);
    if (n > N) {
        fprintf(stderr, "N is too big\n");
        return 1;
    }
    for (i=0; i<n; i++) {
        scanf("%d", &money[i]);
    }
    for (i=0; i<n; i++) {
        scanf("%d", &deadline[i]);
    }

    m = max_homework(money, deadline, n);
    printf("%d", m);
}