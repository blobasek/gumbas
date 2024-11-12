#include <iostream>

#define print(x) std::cout << #x " = " << x << std::endl;
#define P(x) print(x)

using namespace std;

void start(const int& i , char * t[]);
int end(void);


int main(const int i, char * t[])
{
    start(i, t);

    end();
}

void start(const int& i , char * t[])
{
    std::cout << "Start with : ";
    for (int j = 0; j < i; j++)
    {
        std::cout << t[j] << ";";
    }
    std::cout << std::endl;
}

int end()
{
    std::cout << "\n\n...End." << std::endl;
    return 0;
}
