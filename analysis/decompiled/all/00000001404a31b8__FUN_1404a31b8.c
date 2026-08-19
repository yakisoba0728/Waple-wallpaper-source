// Function: FUN_1404a31b8
// Addr: 1404a31b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a31b8(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  uint uVar2;
  longlong in_RAX;
  char unaff_BL;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  param_1[unaff_RDI] = param_1[unaff_RDI] + (char)((ulonglong)param_2 >> 8);
  *(char *)(in_RAX + -0x48) = *(char *)(in_RAX + -0x48) + (char)((ulonglong)in_RAX >> 8);
  uVar2 = (int)in_RAX + 0x5b86e00;
  pcVar1 = (char *)((ulonglong)uVar2 + 0x4a + unaff_RSI);
  *pcVar1 = *pcVar1 + unaff_BL;
  *param_1 = *param_1 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

