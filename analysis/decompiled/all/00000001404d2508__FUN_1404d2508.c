// Function: FUN_1404d2508
// Addr: 1404d2508
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2508(undefined8 param_1,uint *param_2)

{
  int *piVar1;
  uint3 uVar2;
  char cVar3;
  uint uVar4;
  char cVar7;
  char *in_RAX;
  uint *puVar6;
  char cVar8;
  char cVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  byte bVar13;
  undefined6 uVar14;
  longlong unaff_RBX;
  longlong unaff_RBP;
  char *unaff_RSI;
  longlong unaff_R12;
  undefined1 auStack_30 [48];
  char *pcVar5;
  
  uVar14 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar13 = (byte)((ulonglong)param_2 >> 8);
  uVar12 = SUB81(param_2,0);
  uVar11 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar10 = (undefined2)((ulonglong)param_1 >> 0x10);
  cVar8 = (char)param_1;
  *unaff_RSI = *unaff_RSI + (char)in_RAX;
  *(char *)((longlong)param_2 + 0x2e02) = *(char *)((longlong)param_2 + 0x2e02) + bVar13;
  *in_RAX = *in_RAX + (char)in_RAX;
  *param_2 = *param_2 & CONCAT22(uVar10,CONCAT11(2,cVar8));
  uVar4 = (int)in_RAX + 0xb0000954;
  cVar9 = cVar8 + '\x02';
  pcVar5 = (char *)((ulonglong)uVar4 + 0xa210049 + (longlong)unaff_RSI * 8);
  *pcVar5 = *pcVar5 + cVar8;
  bVar13 = bVar13 | *(byte *)(unaff_RBP + (ulonglong)uVar4);
  uVar4 = (int)in_RAX + 0x7d0013b8;
  pcVar5 = (char *)(ulonglong)uVar4;
  cVar7 = (char)(uVar4 >> 8);
  *(char *)(unaff_RBX + 0x6b) = *(char *)(unaff_RBX + 0x6b) + cVar7;
  cVar3 = (char)uVar4;
  *(char *)(unaff_R12 + 0x4d) = *(char *)(unaff_R12 + 0x4d) + cVar3;
  *(char *)CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(cVar9,cVar8))) =
       *(char *)CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(cVar9,cVar8))) + cVar7;
  *pcVar5 = *pcVar5 + cVar3;
  *(char *)(unaff_RBX + 0x6b) = *(char *)(unaff_RBX + 0x6b) + cVar7;
  *(char *)(unaff_R12 + 0x4d) = *(char *)(unaff_R12 + 0x4d) + cVar3;
  *(char *)CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(cVar9 + cVar8,cVar8))) =
       *(char *)CONCAT44(uVar11,CONCAT22(uVar10,CONCAT11(cVar9 + cVar8,cVar8))) + cVar7;
  *(char *)CONCAT62(uVar14,CONCAT11(bVar13,uVar12)) =
       *(char *)CONCAT62(uVar14,CONCAT11(bVar13,uVar12)) + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  uVar2 = (uint3)(uVar4 >> 8);
  cVar3 = in(4);
  pcVar5 = (char *)(ulonglong)CONCAT31(uVar2,cVar3);
  pcVar5[-0x32ffbe96] = pcVar5[-0x32ffbe96] + bVar13;
  pcVar5[(longlong)unaff_RSI * 8 + 0x210049] = pcVar5[(longlong)unaff_RSI * 8 + 0x210049] + cVar8;
  *pcVar5 = *pcVar5 + cVar3;
  puVar6 = (uint *)CONCAT71((uint7)uVar2,0x6a);
  pcVar5 = (char *)((longlong)puVar6 + (longlong)unaff_RSI * 8 + 0x11110049);
  *pcVar5 = *pcVar5 + cVar8;
  *puVar6 = *puVar6 | (uint)puVar6;
  piVar1 = (int *)(CONCAT62(uVar14,CONCAT11(bVar13,uVar12)) + 0xd);
  *piVar1 = *piVar1 + (int)auStack_30;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

