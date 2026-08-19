// Function: FUN_1404a3b90
// Addr: 1404a3b90
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3b90(char *param_1,byte *param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  char cVar5;
  longlong in_RAX;
  int unaff_EBX;
  longlong unaff_RSI;
  char *pcVar4;
  
  piVar1 = (int *)(unaff_RSI + 0x4a3a3c00 + in_RAX);
  *piVar1 = *piVar1 + unaff_EBX;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
  uVar3 = (int)in_RAX + 0xe4050002;
  bVar2 = (byte)uVar3 | *(byte *)(ulonglong)uVar3;
  pcVar4 = (char *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar2);
  param_1 = param_1 + -1;
  if (param_1 == (char *)0x0 || bVar2 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar5 = (char)(uVar3 >> 8);
  *param_1 = *param_1 + cVar5;
  *param_2 = *param_2 | bVar2;
  *pcVar4 = *pcVar4 + (char)param_1;
  if (*pcVar4 != '\0') {
    *pcVar4 = *pcVar4 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

