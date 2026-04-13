#include <stdint.h>

uint32_t global_init = 1234;
uint32_t global_uninit;

int main(void)
{
    while (1)
    {
        global_uninit = global_init;
    }
}
