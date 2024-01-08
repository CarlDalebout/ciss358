#include <iostream>

struct max_sub
{
    int max_value;
    int start_index;
    int end_index;
};

int getsum(int x[], int start_index, int end_index)
{
    int sum = 0;
    for(int i = start_index; i < end_index; ++i)
    {
        sum += x[i];
    }
    return sum;
}

max_sub f(int x[], int n)
{
    if(n == 0)
    {
        max_sub ret = {0, 0, 0};
        return ret;
    }
    max_sub max = {x[0], 0, 0};
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            std::cout << i << ' ' << j << '\n';
            int sum = getsum(x,i, j);
            if(sum > max.max_value)
            {
                max.max_value = sum;
                max.start_index = i;
                max.end_index = j;
            }
        }
    }
    return max;
}

max_sub g(int x[], int n)
{
    if(n = 0)
    {
        max_sub ret = {0, 0, 0};
        return ret;
        
    }
}
int main()
{
    int x[] = {5, 2, -3, 1, 4, -5, 0, 3, -8};
    max_sub max = f(x, 9);
    std::cout << "the max sub is at starting index: " << max.start_index 
              << " and ending at: " << max.end_index 
              << " with a sum of: " << max.max_value << '\n';
    return 0;
}