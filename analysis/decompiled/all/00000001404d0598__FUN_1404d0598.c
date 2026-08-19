// Function: FUN_1404d0598
// Addr: 1404d0598
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d060f) overlaps instruction at (ram,0x0001404d060e)
    */

void FUN_1404d0598(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  char cVar6;
  longlong in_RAX;
  uint *puVar4;
  byte *pbVar5;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  char cVar10;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong in_FS_OFFSET;
  
  cVar10 = (char)((ulonglong)param_2 >> 8);
  bVar9 = (byte)param_2;
  *(char *)(in_RAX + param_1) = *(char *)(in_RAX + param_1) + (char)((ulonglong)in_RAX >> 8);
  *(char *)(unaff_RDI + in_RAX) = *(char *)(unaff_RDI + in_RAX) + bVar9;
  *(char *)(unaff_RSI + in_RAX) = *(char *)(unaff_RSI + in_RAX) + cVar10;
  uVar3 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + cVar10) | 0x80003cf4;
  pcVar8 = (char *)(ulonglong)uVar3;
  pcVar7 = (char *)(param_1 + -1);
  cVar6 = (char)(uVar3 >> 8);
  if (pcVar7 != (char *)0x0 && uVar3 == 0) {
    pbVar5 = (byte *)(param_2 * 2);
    *pbVar5 = *pbVar5 | bVar9;
    if (pcVar7 == (char *)0x1 || *pbVar5 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pcVar8 = *pcVar8 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar7 = *pcVar7 + cVar6;
  *pcVar8 = *pcVar8 + (char)uVar3;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),(char)uVar3 + cVar10) | 0x80003cf4;
  puVar4 = (uint *)(ulonglong)uVar3;
  pcVar8 = (char *)(param_1 + -2);
  if (pcVar8 == (char *)0x0 || uVar3 != 0) {
    *pcVar8 = *pcVar8 + (byte)uVar3;
    (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar4 = *puVar4 & uVar3;
  bVar2 = (byte)uVar3 | (byte)*puVar4;
  uVar3 = CONCAT22((short)(uVar3 >> 0x10),CONCAT11((char)(uVar3 >> 8) + bVar9 + bVar2,bVar2)) |
          0x14740000;
  pbVar5 = (byte *)(ulonglong)uVar3;
  bVar1 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar2;
  uVar3 = uVar3 + *(int *)(pbVar5 + in_FS_OFFSET) + (uint)CARRY1(bVar1,bVar2);
  pcVar7 = (char *)(param_2 * 2);
  *pcVar7 = *pcVar7 + bVar9;
  if (pcVar8 == (char *)0x1 || *pcVar7 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

