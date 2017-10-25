#include <cs50.h>
#include <stdio.h>

#include "helpers.h"

bool linear_search(int value, int values[], int n)
{
    int boolnum = 0;
    
    if (n < 1)
        return false;
        
    for (int i = 0; i < n; i++) {
        if (values[i] == value) {
            boolnum = 1;
            break;
        }
    }
    
    if (boolnum == 1)
        return true;
    else
        return false;
}

bool binary_search(int value, int values[], int n)
{
    int start_index = 0;
    int end_index = n-1;
    
    while (start_index <= end_index) {
        int mid_index = (start_index + end_index) / 2;
        if (value == values[mid_index]) {
            printf("FOUND IT!");
            return true;
        }
        else if (value < values[mid_index]) {
            end_index = mid_index - 1;
        }
        else {
            start_index = mid_index + 1;
        }
    }

    return false;
}

void sort(int values[], int n)
{
    for (int i = 0; i < n; i++) {
        int smallest_index = i;
        for (int j = i+1; j < n; j++) {
            if (values[j] < values[smallest_index])
                smallest_index = j;
        }

        int temp = values[i];
        values[i] = values[smallest_index];
        values[smallest_index] = temp;
    }

    return;
}

bool search(int value, int values[], int n)
{
    return binary_search(value, values, n);
}