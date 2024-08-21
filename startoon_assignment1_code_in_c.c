#include <stdio.h>


void find_peaks(double signal[], int length, int maxima[], int minima[], int *max_count, int *min_count) {
    *max_count = 0;
    *min_count = 0;

    for (int i = 1; i < length - 1; i++) {
        if (signal[i] > signal[i - 1] && signal[i] > signal[i + 1]) {
            maxima[*max_count] = i;
            (*max_count)++;
        }
        if (signal[i] < signal[i - 1] && signal[i] < signal[i + 1]) {
            minima[*min_count] = i;
            (*min_count)++;
        }
    }
}

int main() {
   
    double signal_data_1[] = { /* your data here */ };
    int length_1 = sizeof(signal_data_1) / sizeof(signal_data_1[0]);

    int maxima_1[length_1], minima_1[length_1];
    int max_count_1, min_count_1;

    find_peaks(signal_data_1, length_1, maxima_1, minima_1, &max_count_1, &min_count_1);

   
    printf("Maxima for Data_1: ");
    for (int i = 0; i < max_count_1; i++) {
        printf("%d ", maxima_1[i]);
    }
    printf("\nMinima for Data_1: ");
    for (int i = 0; i < min_count_1; i++) {
        printf("%d ", minima_1[i]);
    }
   
    return 0;
}