// Function: FUN_1404cd254
// Addr: 1404cd254
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd254(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 in_RAX;
  char *pcVar1;
  
  pcVar1 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),0x9b);
  *(char *)(param_3 + 0x210049e1) = *(char *)(param_3 + 0x210049e1) + -0x65;
  *pcVar1 = *pcVar1 + -0x65;
  pcVar1[-0x3effbe65] = pcVar1[-0x3effbe65] + (char)((ulonglong)param_2 >> 8);
  *(char *)(param_3 + 0x210049e1) = *(char *)(param_3 + 0x210049e1) + -0x65;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

