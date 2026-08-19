// Function: FUN_1404c7414
// Addr: 1404c7414
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c7429) overlaps instruction at (ram,0x0001404c7428)
    */

void FUN_1404c7414(char *param_1,longlong param_2,char param_3)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined8 in_RAX;
  undefined7 uVar8;
  longlong unaff_RBX;
  char unaff_SPL;
  undefined7 unaff_00000021;
  char unaff_BPL;
  byte *unaff_RSI;
  char *unaff_RDI;
  char in_R10B;
  undefined7 in_register_00000091;
  char in_R11B;
  char unaff_R12B;
  undefined7 unaff_000000a1;
  longlong in_FS_OFFSET;
  char *pcVar6;
  byte *pbVar7;
  
  uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
  cVar3 = (char)in_RAX + 's';
  pcVar6 = (char *)CONCAT71(uVar8,cVar3);
  *param_1 = *param_1 + unaff_R12B;
  *pcVar6 = *pcVar6 + (char)param_1;
  *pcVar6 = *pcVar6 + cVar3;
  if (*pcVar6 == '\0') {
    pcVar6 = (char *)(CONCAT71(uVar8,cVar3) ^ 0x11);
  }
  *pcVar6 = *pcVar6 + (char)pcVar6;
  uVar5 = (uint)pcVar6 | *(uint *)(pcVar6 + in_FS_OFFSET);
  pbVar7 = (byte *)(ulonglong)uVar5;
  *(char *)(param_2 * 2) = *(char *)(param_2 * 2) + (char)param_2;
  param_1[param_2] = param_1[param_2] + (char)((ulonglong)param_2 >> 8);
  pbVar1 = pbVar7 + -0x22ffd020;
  *pbVar1 = *pbVar1 + (char)param_2;
  param_1 = param_1 + -1;
  cVar3 = (char)(uVar5 >> 8);
  bVar4 = (byte)uVar5;
  if (param_1 == (char *)0x0 || *pbVar1 == 0) {
    pcVar6 = (char *)(unaff_RBX + (longlong)unaff_RSI * 2);
    *pcVar6 = *pcVar6 + bVar4;
    *param_1 = *param_1 + in_R11B;
    *unaff_RDI = *unaff_RDI + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  pbVar7[CONCAT71(unaff_000000a1,unaff_R12B) * 2] =
       pbVar7[CONCAT71(unaff_000000a1,unaff_R12B) * 2] + param_3;
  iVar2 = *(int *)(pbVar7 + 2);
  *pbVar7 = *pbVar7 ^ bVar4;
  *pbVar7 = *pbVar7 + cVar3;
  *unaff_RSI = *unaff_RSI >> 1;
  *pbVar7 = *pbVar7 + bVar4;
  *param_1 = *param_1 + cVar3;
  pcVar6 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + (longlong)unaff_RSI * 8);
  *pcVar6 = *pcVar6 + (char)((uint)((int)param_2 + iVar2) >> 8);
  pcVar6 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + CONCAT71(unaff_000000a1,unaff_R12B) * 8);
  *pcVar6 = *pcVar6 + unaff_BPL;
  pcVar6 = (char *)(CONCAT71(unaff_000000a1,unaff_R12B) + CONCAT71(in_register_00000091,in_R10B) * 8
                   );
  *pcVar6 = *pcVar6 + unaff_SPL;
  *unaff_RDI = *unaff_RDI + in_R10B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

