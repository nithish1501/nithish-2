#include <cstdlib>
#include <cstring>
#include <iostream>


void sort(char** names, int n)
{
    int i, j;
    
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (strcmp(names[j], names[j + 1]) > 0) {
                char* temp;
                temp = (char*)calloc(30, sizeof(char));
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
}

int main()
{
    char** names;
    int n, i;
    std::cout
        << "Enter the number of names to be printed: ";
    std::cin >> n;

    names = (char**)calloc(n, sizeof(char*));

    for (i = 0; i < n; i++)
    
    {
        names[i] = (char*)calloc(30, sizeof(char));
        std::cin >> names[i];
    }
    sort(names, n);

    std::cout << "\nArray after sorting:\n";
    for (i = 0; i < n; i++)
        std::cout << names[i] << std::endl;

    return 0;
}

