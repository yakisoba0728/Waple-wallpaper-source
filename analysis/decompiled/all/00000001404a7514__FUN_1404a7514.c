// Function: FUN_1404a7514
// Addr: 1404a7514
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a75a2) */

void FUN_1404a7514(char *param_1,uint *param_2)

{
  undefined3 uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  byte bVar5;
  uint *in_RAX;
  char *pcVar6;
  undefined7 uVar9;
  byte bVar10;
  char *pcVar12;
  char cVar13;
  char unaff_BL;
  byte unaff_BH;
  longlong unaff_RSI;
  longlong lVar7;
  char cVar8;
  byte *pbVar11;
  
  cVar13 = (char)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(byte *)in_RAX = (char)*in_RAX + (byte)in_RAX;
  bVar3 = (byte)in_RAX | (byte)*in_RAX;
  *param_2 = *param_2 | (uint)param_1;
  bVar5 = (byte)((ulonglong)in_RAX >> 8);
  bVar10 = (byte)param_1;
  cVar8 = bVar5 + bVar10;
  pcVar6 = (char *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(cVar8,bVar3));
  if (CARRY1(bVar5,bVar10)) {
    *param_1 = *param_1 + cVar8;
    uVar1 = (undefined3)((uint)((int)pcVar6 + 0x34050002) >> 8);
    bVar3 = in(10);
    bVar3 = bVar3 | *(byte *)(ulonglong)CONCAT31(uVar1,bVar3);
    pcVar6 = (char *)(ulonglong)CONCAT31(uVar1,bVar3);
    bVar5 = (byte)&stack0xfffffffffffffff8;
    *param_1 = *param_1 + bVar5;
    *pcVar6 = *pcVar6 + bVar3;
    pcVar6[-0x1bfff5f6] = pcVar6[-0x1bfff5f6] + cVar13;
    bVar10 = bVar10 | (byte)*param_2;
    pbVar11 = (byte *)CONCAT71((int7)((ulonglong)param_1 >> 8),bVar10);
    pcVar6[0x6c] = pcVar6[0x6c] + cVar13;
    bVar3 = *pbVar11;
    *pbVar11 = *pbVar11 + bVar5;
    *(byte *)param_2 = ((char)*param_2 - bVar10) - CARRY1(bVar3,bVar5);
    *pcVar6 = *pcVar6 + unaff_BL;
    uVar4 = in(0);
    uVar2 = CONCAT31(uVar1,uVar4);
    (&stack0xfffffffffffffff8)[unaff_RSI * 2] =
         (&stack0xfffffffffffffff8)[unaff_RSI * 2] + (byte)param_2;
    *(int *)(ulonglong)uVar2 = *(int *)(ulonglong)uVar2 + uVar2;
    *(byte *)param_2 = (char)*param_2 + bVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar6 = *pcVar6 + bVar3;
  pcVar6[-0x2cfff5f5] = pcVar6[-0x2cfff5f5] + cVar8;
  pcVar12 = (char *)(ulonglong)((uint)param_1 | *param_2);
  uVar9 = (undefined7)((ulonglong)pcVar6 >> 8);
  bVar5 = bVar3 + unaff_BH;
  lVar7 = CONCAT71(uVar9,bVar5);
  if (CARRY1(bVar3,unaff_BH)) {
    pcVar6 = (char *)((CONCAT71(uVar9,bVar5) ^ 4) - 0x20fff5f1);
    *pcVar6 = *pcVar6 + cVar13;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar12 = *pcVar12 + bVar5;
  pbVar11 = (byte *)(lVar7 * 2);
  *pbVar11 = *pbVar11 | bVar5;
  pbVar11 = (byte *)(unaff_RSI + lVar7);
  *pbVar11 = *pbVar11 | (byte)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

