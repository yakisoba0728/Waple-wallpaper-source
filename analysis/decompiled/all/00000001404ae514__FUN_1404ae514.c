// Function: FUN_1404ae514
// Addr: 1404ae514
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae514(char *param_1,char param_2)

{
  uint uVar1;
  int *in_RAX;
  byte *unaff_RBX;
  char unaff_SPL;
  longlong unaff_RSI;
  char *pcVar2;
  
  *(char *)((longlong)in_RAX + (longlong)param_1) =
       *(char *)((longlong)in_RAX + (longlong)param_1) + (char)((ulonglong)in_RAX >> 8);
  param_1[unaff_RSI] = param_1[unaff_RSI] + param_2;
  uVar1 = (uint)in_RAX + *in_RAX + (uint)((uint)in_RAX < 0x3dc30013);
  pcVar2 = (char *)(ulonglong)uVar1;
  *unaff_RBX = *unaff_RBX | (byte)param_1;
  *param_1 = *param_1 + unaff_SPL;
  *pcVar2 = *pcVar2 + (char)uVar1;
  pcVar2[-0x3cffecc3] = pcVar2[-0x3cffecc3] + param_2;
  *param_1 = *param_1 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

