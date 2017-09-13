//
// Created by Justin Chiu on 9/8/17.
//

// You have to complete the function void update(int *a,int *b),
// which reads two integers as argument, and sets a with the sum of them,
// and b with the absolute difference of them.

#include <cstdio>
#include <cmath>

void update(int *a,int *b) {
    // set: a = *a + *b
    //      b = abs(a-b)
    *a = *a + *b;
    *b = fabs(*a - *b - *b);   // *a = (*a - *b)
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b; // declare pointers
    scanf("%d %d", &a, &b);
    update(pa, pb); // pass pointers into update
    printf("%d\n%d", a, b);

    return 0;
}

