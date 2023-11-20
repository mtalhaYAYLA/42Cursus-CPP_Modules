#include <iostream>
#include <string>

#define COUT std::cout

int main(int argc, char **argv) 
{
    int i = 1;
    int j;

    if (argc < 2)
        COUT << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (i < argc)
        {
            j = 0;
            while (argv[i][j])
            {
                if (argv[i][j] <= 'z' && argv[i][j] >= 'a')
                    COUT << (char)std::toupper(argv[i][j]);
                else
                    COUT << argv[i][j];
                j++;
            }
            i++;
        }
        COUT << std::endl;
    }
    return (0);
}
