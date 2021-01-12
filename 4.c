#include <stdio.h>
void inputArray(double a[], int n);
void outputArray(double a[], int n);
double aveArray(double a[], int n);
double maxArray(double a[], int n);
double minArray(double a[], int n);

int main()
{
    int n;
    double ave, max, min;
    scanf("%d", &n);
    double score[n];

    //call the function"inputArray",input the scores of students
    inputArray();

    //call the function "outputArray",output the sores of sturdents
    outputArray();

    //call the function "aveArray",catch the average of the scores
    ave = aveArray();

    max = maxArray(score, n);
    min = minArray(score, n);
    printf("average=%.2f\nmax=%.2f\nmin=%.2f\n", ave, max, min);

    return 0;
}
void inputArray(double a[], int n)
{ //function: make data from keyboard to a double array
    for (int i = 0; i < n; i++)
        scanf("%lf", &a[i]);
}
void outputArray(double a[], int n)
{ //function: make the data of a double array to the screen
    for (int i = 0; i < n; i++)
        printf("%7.2f", a[i]);
}
double aveArray(double a[], int n)
{ //function:calculate the average of a double array and return it
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];
    sum /= n;
}
double minArray(double a[], int n)
{ //function:calculate the minmum of a double array and return it
    double min = a[0];
    for (int i = 1; i < n; i++)
        if (min > a[i])
            min = a[i];
    return min;
}
double maxArray(double a[], int n)
{ //function:calculate the maxmum of a double array and return it
    double min = a[0];
    for (int i = 1; i < n; i++)
        if (min < a[i])
            min = a[i];
    return min;
}
