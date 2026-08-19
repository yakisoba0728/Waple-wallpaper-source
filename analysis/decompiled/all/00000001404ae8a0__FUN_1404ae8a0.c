// Function: FUN_1404ae8a0
// Addr: 1404ae8a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae8a0(undefined8 param_1)

{
  longlong in_RAX;
  
  *(char *)(in_RAX + 0x210049ed) = *(char *)(in_RAX + 0x210049ed) + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

