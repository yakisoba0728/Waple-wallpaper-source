// Function: FUN_1404cba1c
// Addr: 1404cba1c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cba1c(longlong param_1,undefined8 param_2)

{
  longlong in_RAX;
  char *pcVar1;
  uint unaff_ESI;
  
  *(uint *)(in_RAX + param_1) = *(uint *)(in_RAX + param_1) & unaff_ESI;
  pcVar1 = (char *)((ulonglong)((int)in_RAX + 0x5000764) ^ 6);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

