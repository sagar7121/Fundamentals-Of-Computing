#include <stdio.h>

int main() {
    int n, i;
    float num, sum = 0, avg;
    
    printf("Enter the number of values to be entered: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        printf("Enter value %d: ", i+1);
        scanf("%f", &num);
        sum += num;
    }
    
    avg = sum / n;
    
    printf("The sum of the %d numbers is: %.2f\n", n, sum);
    printf("The average of the %d numbers is: %.2f", n, avg);
    
    return 0;
}
