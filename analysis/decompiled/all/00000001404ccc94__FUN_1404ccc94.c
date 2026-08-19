// Function: FUN_1404ccc94
// Addr: 1404ccc94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ccc94(undefined8 param_1)

{
  char *pcVar1;
  undefined8 in_RAX;
  
  pcVar1 = (char *)((ulonglong)((uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),0x32) ^ 0x3532cd00) +
                   0x210049ed);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

