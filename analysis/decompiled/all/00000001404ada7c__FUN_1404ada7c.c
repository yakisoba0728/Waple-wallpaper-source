// Function: FUN_1404ada7c
// Addr: 1404ada7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ada7c(byte *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar4;
  byte *pbVar5;
  byte bVar8;
  uint in_EAX;
  uint uVar6;
  char *pcVar7;
  byte bVar9;
  char unaff_SPL;
  byte bVar3;
  
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  uVar6 = in_EAX ^ 0x35d40012;
  bVar4 = (char)uVar6 + *(char *)(ulonglong)uVar6;
  pcVar7 = (char *)(ulonglong)CONCAT31((int3)(uVar6 >> 8),bVar4);
  if (!SCARRY1((char)uVar6,*(char *)(ulonglong)uVar6)) {
    *param_1 = *param_1 + unaff_SPL;
    *pcVar7 = *pcVar7 + bVar4;
    *pcVar7 = *pcVar7 + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = *param_1;
  bVar8 = (byte)(in_EAX >> 8);
  *param_1 = *param_1 + bVar8;
  pbVar5 = (byte *)((longlong)pcVar7 * 2);
  bVar2 = *pbVar5;
  bVar3 = *pbVar5;
  *pbVar5 = bVar3 + bVar4 + CARRY1(bVar1,bVar8);
  *(byte *)(param_2 * 2) = *(byte *)(param_2 * 2) | bVar9;
  pcVar7 = (char *)((ulonglong)
                    CONCAT31((int3)(CONCAT22((short)(uVar6 >> 0x10),
                                             CONCAT11(bVar8 + bVar9 +
                                                      (CARRY1(bVar2,bVar4) ||
                                                      CARRY1(bVar3 + bVar4,CARRY1(bVar1,bVar8))),
                                                      bVar4)) >> 8),bVar4) + 0x35);
  *pcVar7 = *pcVar7 + bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

