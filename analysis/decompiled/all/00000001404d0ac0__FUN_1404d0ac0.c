// Function: FUN_1404d0ac0
// Addr: 1404d0ac0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d0ae1) overlaps instruction at (ram,0x0001404d0ae0)
    */

void FUN_1404d0ac0(longlong param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char cVar4;
  undefined8 in_RAX;
  char *pcVar3;
  char cVar6;
  char cVar7;
  char *unaff_RSI;
  longlong in_FS_OFFSET;
  char in_CF;
  undefined7 uVar5;
  
  cVar7 = (char)param_2;
  cVar6 = (char)((ulonglong)param_1 >> 8);
  uVar2 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11((char)((ulonglong)in_RAX >> 8) + *(char *)(param_1 * 2) + in_CF,
                                 (char)in_RAX)) + 0xe0000834;
  pcVar3 = (char *)(ulonglong)uVar2;
  *param_2 = *param_2 + cVar7;
  pcVar3[0x210049ef] = pcVar3[0x210049ef] + cVar6;
  *unaff_RSI = *unaff_RSI + (char)uVar2;
  *pcVar3 = *pcVar3 + (char)uVar2;
  if (*pcVar3 == '\0') {
    pcVar3 = (char *)((ulonglong)uVar2 ^ 8);
  }
  *pcVar3 = *pcVar3 + (char)pcVar3;
  *(uint *)(pcVar3 + in_FS_OFFSET) = *(uint *)(pcVar3 + in_FS_OFFSET) | (uint)pcVar3;
  pcVar3[param_1] = pcVar3[param_1] + (char)((ulonglong)param_2 >> 8);
  cVar4 = (char)((ulonglong)pcVar3 >> 8);
  uVar5 = (undefined7)((ulonglong)pcVar3 >> 8);
  cVar1 = (char)pcVar3 + cVar4;
  pcVar3 = (char *)CONCAT71(uVar5,cVar1);
  *param_2 = *param_2 + cVar7;
  pcVar3[0x210049ef] = pcVar3[0x210049ef] + cVar6;
  *pcVar3 = *pcVar3 + cVar1;
  *param_2 = *param_2 + cVar7;
  pcVar3 = (char *)(CONCAT71(uVar5,cVar1 + cVar4) + 0x10049ef);
  *pcVar3 = *pcVar3 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

