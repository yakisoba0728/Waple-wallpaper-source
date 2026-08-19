// Function: FUN_1404d14f8
// Addr: 1404d14f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d14f8(char *param_1,undefined2 param_2)

{
  byte bVar1;
  undefined3 uVar2;
  uint uVar3;
  char cVar4;
  char cVar9;
  uint uVar5;
  char *pcVar7;
  uint *puVar8;
  byte bVar10;
  char *pcVar11;
  char cVar12;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RSI;
  byte *pbVar6;
  
  uVar5 = in(param_2);
  pbVar6 = (byte *)(ulonglong)uVar5;
  bVar1 = *pbVar6;
  bVar10 = (byte)param_1;
  *pbVar6 = *pbVar6 + bVar10;
  uVar2 = (undefined3)(uVar5 >> 8);
  cVar4 = (char)uVar5 + 'M' + CARRY1(bVar1,bVar10);
  pbVar6 = (byte *)(ulonglong)CONCAT31(uVar2,cVar4);
  cVar9 = (char)(uVar5 >> 8);
  *param_1 = *param_1 + cVar9;
  *pbVar6 = *pbVar6 + cVar4;
  pcVar11 = (char *)CONCAT62((int6)((ulonglong)param_1 >> 0x10),
                             CONCAT11(((char)((ulonglong)param_1 >> 8) + cVar9) * '\x02',bVar10));
  bVar1 = *pbVar6;
  *pbVar6 = *pbVar6 + bVar10;
  cVar4 = cVar4 + 'M' + CARRY1(bVar1,bVar10);
  pcVar7 = (char *)(ulonglong)CONCAT31(uVar2,cVar4);
  *pcVar11 = *pcVar11 + cVar9;
  *pcVar7 = *pcVar7 + cVar4;
  pcVar7[-0x1affc4c7] = pcVar7[-0x1affc4c7] + (char)param_2;
  cVar12 = (char)((ushort)param_2 >> 8);
  uVar5 = CONCAT22((short)(uVar5 >> 0x10),CONCAT11(cVar9 + cVar12,cVar4));
  puVar8 = (uint *)(ulonglong)uVar5;
  *puVar8 = *puVar8 & uVar5;
  uVar3 = *puVar8;
  (&stack0x00000000)[CONCAT44(unaff_0000001c,unaff_EBX)] =
       (&stack0x00000000)[CONCAT44(unaff_0000001c,unaff_EBX)] + cVar12;
  pcVar7 = (char *)((ulonglong)CONCAT31((int3)(uVar5 >> 8),cVar4 + (char)uVar3) - 0x1affc4c7);
  *pcVar7 = *pcVar7 + (char)param_2;
  *(int *)(unaff_RSI + 0x349e0008) = *(int *)(unaff_RSI + 0x349e0008) + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

