// Function: FUN_1404cc4d0
// Addr: 1404cc4d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc4d0(longlong param_1,undefined8 param_2)

{
  uint in_EAX;
  char *pcVar1;
  char unaff_BH;
  
  pcVar1 = (char *)((ulonglong)(in_EAX | 0x80009d4) ^ 0x13);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  in(0x34);
  *(char *)(param_1 + -0x1c) = *(char *)(param_1 + -0x1c) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

