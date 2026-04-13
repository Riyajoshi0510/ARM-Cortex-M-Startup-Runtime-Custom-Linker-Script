# ARM-Cortex-M-Startup-Runtime-Custom-Linker-Script
• Developed custom GNU linker script defining FLASH and SRAM memory regions; controlled placement of .text,
.data, .bss, stack, and heap; verified alignment via linker-generated map files.
• Implemented full startup routine: vector table definition, stack pointer init, .data Flash→SRAM relocation, .bss
zeroing — complete control over execution flow before main().
