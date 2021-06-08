.global _start

.extern __g_main
.extern g_exit

_start:
    call __g_main

wait:
    hlt
    jmp wait