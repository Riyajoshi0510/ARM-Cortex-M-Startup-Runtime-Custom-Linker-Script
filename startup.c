#include <stdint.h>

/* Linker symbols */
extern uint32_t _estack;
extern uint32_t _sidata;
extern uint32_t _sdata;
extern uint32_t _edata;
extern uint32_t _sbss;
extern uint32_t _ebss;

/* Forward declarations */
void Reset_Handler(void);
void Default_Handler(void);

/* Weak aliases */
void NMI_Handler(void)        __attribute__((weak, alias("Default_Handler")));
void HardFault_Handler(void)  __attribute__((weak, alias("Default_Handler")));

/* Vector table */
__attribute__((section(".isr_vector")))
uint32_t vector_table[] =
{
    (uint32_t)&_estack,      // Initial MSP
    (uint32_t)Reset_Handler, // Reset
    (uint32_t)NMI_Handler,
    (uint32_t)HardFault_Handler,
};
