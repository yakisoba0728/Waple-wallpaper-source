// Function: FUN_1404a7380
// Addr: 1404a7380
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a7432) */
/* WARNING: Removing unreachable block (ram,0x0001404a7422) */

void FUN_1404a7380(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  undefined3 uVar2;
  byte bVar3;
  uint uVar4;
  char cVar8;
  longlong in_RAX;
  byte *pbVar7;
  char cVar9;
  undefined3 uVar11;
  undefined4 uVar12;
  char cVar13;
  byte bVar14;
  undefined6 uVar15;
  longlong unaff_RBX;
  char unaff_SPL;
  longlong unaff_RSI;
  char *pcVar5;
  char *pcVar6;
  undefined4 uVar10;
  
  uVar15 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar13 = (char)param_2;
  uVar12 = (undefined4)((ulonglong)param_1 >> 0x20);
  bVar14 = (byte)((ulonglong)param_2 >> 8) | *(byte *)(unaff_RSI + in_RAX);
  uVar4 = (int)in_RAX + 0xf0000534;
  pcVar5 = (char *)(ulonglong)uVar4;
  cVar9 = (char)param_1;
  *(char *)CONCAT62(uVar15,CONCAT11(bVar14,cVar13)) =
       *(char *)CONCAT62(uVar15,CONCAT11(bVar14,cVar13)) + cVar9;
  cVar8 = (char)(uVar4 >> 8);
  *pcVar5 = *pcVar5 + cVar8;
  *(int *)CONCAT62(uVar15,CONCAT11(bVar14,cVar13)) =
       *(int *)CONCAT62(uVar15,CONCAT11(bVar14,cVar13)) + (int)param_1;
  pcVar6 = (char *)(param_1 + 0x21004a + unaff_RSI * 2);
  *pcVar6 = *pcVar6 + cVar8;
  *pcVar5 = *pcVar5 + (char)uVar4;
  LOCK();
  *(char *)CONCAT62(uVar15,CONCAT11(bVar14,cVar13)) =
       *(char *)CONCAT62(uVar15,CONCAT11(bVar14,cVar13)) + cVar9;
  UNLOCK();
  *pcVar5 = *pcVar5 + cVar8;
  *(int *)CONCAT62(uVar15,CONCAT11(bVar14,cVar13)) =
       *(int *)CONCAT62(uVar15,CONCAT11(bVar14,cVar13)) + (int)param_1;
  pcVar6 = (char *)(param_1 + 0x521004a + unaff_RSI * 2);
  *pcVar6 = *pcVar6 + cVar8;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + *pcVar5) + 0xd0000234;
  uVar11 = (undefined3)((ulonglong)param_1 >> 8);
  cVar9 = cVar9 + *(char *)CONCAT62(uVar15,CONCAT11(bVar14,cVar13));
  uVar10 = CONCAT31(uVar11,cVar9);
  pbVar1 = (byte *)(ulonglong)uVar4 + unaff_RBX;
  *pbVar1 = *pbVar1 + (byte)uVar4;
  uVar2 = (undefined3)(uVar4 >> 8);
  bVar3 = (byte)uVar4 | *(byte *)(ulonglong)uVar4;
  pcVar6 = (char *)(ulonglong)CONCAT31(uVar2,bVar3);
  *(char *)CONCAT44(uVar12,uVar10) = *(char *)CONCAT44(uVar12,uVar10) + unaff_SPL;
  *pcVar6 = *pcVar6 + bVar3;
  bVar3 = bVar3 + cVar13;
  pbVar7 = (byte *)(ulonglong)CONCAT31(uVar2,bVar3);
  uVar10 = CONCAT31(uVar11,cVar9 + *(char *)CONCAT62(uVar15,CONCAT11(bVar14,cVar13)));
  pbVar1 = pbVar7 + unaff_RBX;
  *pbVar1 = *pbVar1 + bVar3;
  *(byte *)CONCAT44(uVar12,uVar10) = *(char *)CONCAT44(uVar12,uVar10) + (bVar3 | *pbVar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

