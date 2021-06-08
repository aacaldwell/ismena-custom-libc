.global _start

.extern __ismenaos_main
.extern ismenaos_exit

_start:
<<<<<<< HEAD
    call __ismenaos_main
=======
    call __ismenaos_mainn
>>>>>>> 1c5e7aa5dc0a48033a9f17febe4bac5dbaf797b2

wait:
    hlt
    jmp wait
