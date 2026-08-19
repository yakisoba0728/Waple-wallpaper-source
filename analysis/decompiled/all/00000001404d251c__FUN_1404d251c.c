// Function: FUN_1404d251c
// Addr: 1404d251c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d251c(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  uint3 uVar2;
  char cVar3;
  char cVar7;
  int in_EAX;
  uint uVar4;
  uint *puVar6;
  char cVar8;
  char cVar9;
  undefined6 uVar10;
  undefined1 uVar11;
  byte bVar12;
  undefined6 uVar13;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_R12;
  undefined1 auStack_30 [48];
  char *pcVar5;
  
  uVar13 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar11 = (undefined1)param_2;
  uVar10 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar8 = (char)param_1;
  cVar9 = (char)((ulonglong)param_1 >> 8) + cVar8;
  pcVar5 = (char *)((ulonglong)(in_EAX + 0xb0000954U) + 0xa210049 + unaff_RSI * 8);
  *pcVar5 = *pcVar5 + cVar8;
  bVar12 = (byte)((ulonglong)param_2 >> 8) |
           *(byte *)(unaff_RBP + (ulonglong)(in_EAX + 0xb0000954U));
  uVar4 = in_EAX + 0x7d0013b8;
  pcVar5 = (char *)(ulonglong)uVar4;
  cVar7 = (char)(uVar4 >> 8);
  *(char *)(unaff_RBX + 0x6b) = *(char *)(unaff_RBX + 0x6b) + cVar7;
  cVar3 = (char)uVar4;
  *(char *)(unaff_R12 + 0x4d) = *(char *)(unaff_R12 + 0x4d) + cVar3;
  *(char *)CONCAT62(uVar10,CONCAT11(cVar9,cVar8)) =
       *(char *)CONCAT62(uVar10,CONCAT11(cVar9,cVar8)) + cVar7;
  *pcVar5 = *pcVar5 + cVar3;
  *(char *)(unaff_RBX + 0x6b) = *(char *)(unaff_RBX + 0x6b) + cVar7;
  *(char *)(unaff_R12 + 0x4d) = *(char *)(unaff_R12 + 0x4d) + cVar3;
  *(char *)CONCAT62(uVar10,CONCAT11(cVar9 + cVar8,cVar8)) =
       *(char *)CONCAT62(uVar10,CONCAT11(cVar9 + cVar8,cVar8)) + cVar7;
  *(char *)CONCAT62(uVar13,CONCAT11(bVar12,uVar11)) =
       *(char *)CONCAT62(uVar13,CONCAT11(bVar12,uVar11)) + cVar3;
  *pcVar5 = *pcVar5 + cVar3;
  uVar2 = (uint3)(uVar4 >> 8);
  cVar3 = in(4);
  pcVar5 = (char *)(ulonglong)CONCAT31(uVar2,cVar3);
  pcVar5[-0x32ffbe96] = pcVar5[-0x32ffbe96] + bVar12;
  pcVar5[unaff_RSI * 8 + 0x210049] = pcVar5[unaff_RSI * 8 + 0x210049] + cVar8;
  *pcVar5 = *pcVar5 + cVar3;
  puVar6 = (uint *)CONCAT71((uint7)uVar2,0x6a);
  pcVar5 = (char *)((longlong)puVar6 + unaff_RSI * 8 + 0x11110049);
  *pcVar5 = *pcVar5 + cVar8;
  *puVar6 = *puVar6 | (uint)puVar6;
  piVar1 = (int *)(CONCAT62(uVar13,CONCAT11(bVar12,uVar11)) + 0xd);
  *piVar1 = *piVar1 + (int)auStack_30;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

