// Function: FUN_1404a2fe0
// Addr: 1404a2fe0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2fe0(char *param_1,char *param_2)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  char *in_RAX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  *(char *)(unaff_RSI + -0x5120fffb) = *(char *)(unaff_RSI + -0x5120fffb) + -5;
  pcVar1 = (char *)(unaff_RDI + 0x49 + unaff_RBP * 8);
  *pcVar1 = *pcVar1 + (char)param_1;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  *in_RAX = *in_RAX + (char)in_RAX;
  in_RAX[-0x20fffa52] = in_RAX[-0x20fffa52] + (char)in_RAX;
  uVar2 = (int)in_RAX + 0x49ef4c00;
  cVar3 = (char)(uVar2 >> 8);
  *param_1 = *param_1 + cVar3;
  *param_2 = *param_2 + (char)uVar2;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
  *(char *)(unaff_RSI + -0x5120fffb) = *(char *)(unaff_RSI + -0x5120fffb) + -5;
  pcVar1 = (char *)(unaff_RDI + 0x4a + unaff_RBP * 8);
  *pcVar1 = *pcVar1 + (char)param_1;
  *param_1 = *param_1 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

