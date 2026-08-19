// Function: FUN_1404d6924
// Addr: 1404d6924
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6924(longlong param_1,int *param_2)

{
  byte *pbVar1;
  char cVar2;
  char *in_RAX;
  char unaff_BH;
  byte *unaff_RSI;
  longlong unaff_RDI;
  char in_ZF;
  
  if (param_1 != 1 && in_ZF != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX + unaff_BH;
  *in_RAX = *in_RAX + (char)in_RAX;
  cVar2 = *in_RAX;
  *(undefined1 *)(unaff_RDI + 0x36) = *(undefined1 *)(unaff_RDI + 0x36);
  if (param_1 + -2 == 0 || cVar2 != '\0') {
    *in_RAX = *in_RAX + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *unaff_RSI = *unaff_RSI >> 1;
  *in_RAX = *in_RAX + (char)param_2;
  *in_RAX = *in_RAX + (char)in_RAX;
  *param_2 = *param_2 + (int)(param_1 + -2);
  pbVar1 = (byte *)((ulonglong)((int)in_RAX + 0x6420a00) + (longlong)unaff_RSI * 2);
  *pbVar1 = *pbVar1 << 3 | *pbVar1 >> 5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

