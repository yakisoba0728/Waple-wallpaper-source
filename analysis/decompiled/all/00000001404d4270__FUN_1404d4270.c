// Function: FUN_1404d4270
// Addr: 1404d4270
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4270(int *param_1,undefined8 param_2)

{
  ulonglong in_RAX;
  char *pcVar1;
  char unaff_BL;
  char unaff_BH;
  int unaff_EBP;
  uint *unaff_RSI;
  char unaff_R14B;
  
  *(char *)(in_RAX + 0x68004d41) = *(char *)(in_RAX + 0x68004d41) + (char)((ulonglong)param_1 >> 8);
  *unaff_RSI = *unaff_RSI ^ (uint)param_1;
  *(char *)((longlong)param_1 + 0x4004d41) = *(char *)((longlong)param_1 + 0x4004d41) + unaff_R14B;
  pcVar1 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(0x2b,(char)param_2)) &
                   0xffffffff);
  pcVar1[in_RAX & 0xffffffff] = pcVar1[in_RAX & 0xffffffff] + unaff_BH;
  *pcVar1 = *pcVar1 + (char)pcVar1;
  *param_1 = *param_1 + unaff_EBP;
  *(int *)(pcVar1 + 4) = *(int *)(pcVar1 + 4) - unaff_EBP;
  *(char *)unaff_RSI = (char)*unaff_RSI + unaff_BL;
  *(char *)unaff_RSI = (char)*unaff_RSI + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

