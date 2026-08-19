// Function: FUN_1404a8464
// Addr: 1404a8464
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8464(char *param_1,char *param_2)

{
  undefined1 uVar1;
  char *pcVar2;
  uint uVar3;
  uint *in_RAX;
  char unaff_SPL;
  longlong unaff_RSI;
  undefined1 *unaff_RDI;
  bool bVar5;
  char *pcVar4;
  
  param_2[0xb50c000] = param_2[0xb50c000] | (byte)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RSI + 0x51) = *(char *)(unaff_RSI + 0x51) + (char)param_2;
  pcVar2 = pcRam0000000000000000;
  uVar3 = (uint)in_RAX | *in_RAX;
  pcVar4 = (char *)(ulonglong)uVar3;
  if (uVar3 != 0) {
    *param_1 = *param_1 + unaff_SPL;
    *pcVar4 = *pcVar4 + (char)param_1;
    *pcVar4 = *pcVar4 + (char)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar5 = (longlong)pcRam0000000000000000 < 0;
  uVar1 = in((short)param_2);
  *unaff_RDI = uVar1;
  if (bVar5) {
    *param_1 = *param_1 + (char)((ulonglong)pcVar2 >> 8);
    *pcVar2 = *pcVar2 + (char)pcVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

