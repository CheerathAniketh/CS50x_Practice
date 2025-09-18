// Average of three numbers using an array, a constant, and a helper function

#include <stdio.h>
#include <cs50.h>

// Constant
const int N = 3;

//Prototype
float average(int lenght, int array[]);

int main(void)
{
    // Get scores
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");

    }

    //print average
    printf("Average: %f\n", average(N, scores));

}

float average(int lenght, int array[])
{
    //calculate average
    int sum = 0;
    for (int i = 0; i < lenght; i++)
    {
        sum += array[i];


    }
    return sum / (float) lenght;




}
