// Function: FUN_1404d05a8
// Addr: 1404d05a8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d060f) overlaps instruction at (ram,0x0001404d060e)
    */

void FUN_1404d05a8(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar6;
  uint in_EAX;
  uint uVar3;
  uint *puVar4;
  byte *pbVar5;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  longlong unaff_RSI;
  longlong in_FS_OFFSET;
  
  bVar9 = (byte)param_2;
  uVar3 = in_EAX | 0x80003cf4;
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
  uVar3 = CONCAT31((int3)(uVar3 >> 8),(char)uVar3 + (char)((ulonglong)param_2 >> 8)) | 0x80003cf4;
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

