// Function: FUN_1404d6914
// Addr: 1404d6914
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6914(longlong param_1,int *param_2)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  ulonglong in_RAX;
  char *pcVar4;
  char unaff_BH;
  byte *unaff_RSI;
  longlong unaff_RDI;
  
  pcVar4 = (char *)(in_RAX | 0xe0);
  *pcVar4 = *pcVar4 + (char)pcVar4;
  uRam0000000174526920 = uRam0000000174526920 & (uint)pcVar4;
  cVar3 = (char)pcVar4 + *pcVar4;
  pcVar4 = (char *)CONCAT71((int7)(in_RAX >> 8),cVar3);
  *(undefined1 *)(unaff_RDI + 0x36) = *(undefined1 *)(unaff_RDI + 0x36);
  if (param_1 != 1 && cVar3 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar4 = *pcVar4 + unaff_BH;
  *pcVar4 = *pcVar4 + cVar3;
  cVar2 = *pcVar4;
  *(undefined1 *)(unaff_RDI + 0x36) = *(undefined1 *)(unaff_RDI + 0x36);
  if (param_1 + -2 == 0 || cVar2 != '\0') {
    *pcVar4 = *pcVar4 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RSI = *unaff_RSI >> 1;
  *pcVar4 = *pcVar4 + (char)param_2;
  *pcVar4 = *pcVar4 + cVar3;
  *param_2 = *param_2 + (int)(param_1 + -2);
  pbVar1 = (byte *)((ulonglong)((int)pcVar4 + 0x6420a00) + (longlong)unaff_RSI * 2);
  *pbVar1 = *pbVar1 << 3 | *pbVar1 >> 5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

