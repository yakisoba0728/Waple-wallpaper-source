// Function: FUN_1404bec98
// Addr: 1404bec98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bec98(char param_1)

{
  undefined8 in_RAX;
  char in_CF;
  
  (&stack0x00000000)
  [(ulonglong)
   ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),((char)in_RAX + '\f') - in_CF) + 0xd12be800) * 8] =
       (&stack0x00000000)
       [(ulonglong)
        ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),((char)in_RAX + '\f') - in_CF) + 0xd12be800) *
        8] + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

