#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    if (argc > 1)
    {
        int i = 1;
        while (argv[i])
        {
            int j = 0;
            while (argv[i][j])
            {
                argv[i][j] = toupper(argv[i][j]);
                j++;
            }
            std::cout << argv[i];
            i++;
        }
        std::cout << "\n";
    }
    return 0;
}