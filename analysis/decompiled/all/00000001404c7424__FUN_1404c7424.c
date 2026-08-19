// Function: FUN_1404c7424
// Addr: 1404c7424
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c7424(longlong param_1,longlong param_2,char param_3)

{
  byte *pbVar1;
  char *pcVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  byte *in_RAX;
  char *pcVar6;
  longlong unaff_RBX;
  char unaff_SPL;
  undefined7 unaff_00000021;
  char unaff_BPL;
  byte *unaff_RSI;
  char *unaff_RDI;
  char in_R10B;
  undefined7 in_register_00000091;
  char in_R11B;
  longlong unaff_R12;
  
  *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + (char)param_2;
  *(char *)(param_1 + param_2) = *(char *)(param_1 + param_2) + (char)((ulonglong)param_2 >> 8);
  pbVar1 = in_RAX + -0x22ffd020;
  *pbVar1 = *pbVar1 + (char)param_2;
  pcVar6 = (char *)(param_1 + -1);
  cVar5 = (char)((ulonglong)in_RAX >> 8);
  bVar4 = (byte)in_RAX;
  if (pcVar6 == (char *)0x0 || *pbVar1 == 0) {
    pcVar2 = (char *)(unaff_RBX + (longlong)unaff_RSI * 2);
    *pcVar2 = *pcVar2 + bVar4;
    *pcVar6 = *pcVar6 + in_R11B;
    *unaff_RDI = *unaff_RDI + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  in_RAX[unaff_R12 * 2] = in_RAX[unaff_R12 * 2] + param_3;
  iVar3 = *(int *)(in_RAX + 2);
  *in_RAX = *in_RAX ^ bVar4;
  *in_RAX = *in_RAX + cVar5;
  *unaff_RSI = *unaff_RSI >> 1;
  *in_RAX = *in_RAX + bVar4;
  *pcVar6 = *pcVar6 + cVar5;
  pcVar6 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + (longlong)unaff_RSI * 8);
  *pcVar6 = *pcVar6 + (char)((uint)((int)param_2 + iVar3) >> 8);
  pcVar6 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + unaff_R12 * 8);
  *pcVar6 = *pcVar6 + unaff_BPL;
  pcVar6 = (char *)(unaff_R12 + CONCAT71(in_register_00000091,in_R10B) * 8);
  *pcVar6 = *pcVar6 + unaff_SPL;
  *unaff_RDI = *unaff_RDI + in_R10B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

