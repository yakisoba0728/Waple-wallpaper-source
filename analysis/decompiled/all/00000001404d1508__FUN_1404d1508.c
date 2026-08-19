// Function: FUN_1404d1508
// Addr: 1404d1508
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1508(char *param_1,undefined2 param_2)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  char cVar8;
  uint uVar4;
  uint *puVar7;
  char cVar9;
  int unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RSI;
  byte *pbVar5;
  char *pcVar6;
  
  uVar4 = in(param_2);
  pbVar5 = (byte *)(ulonglong)uVar4;
  bVar1 = *pbVar5;
  *pbVar5 = *pbVar5 + (byte)param_1;
  cVar3 = (char)uVar4 + 'M' + CARRY1(bVar1,(byte)param_1);
  pcVar6 = (char *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),cVar3);
  cVar8 = (char)(uVar4 >> 8);
  *param_1 = *param_1 + cVar8;
  *pcVar6 = *pcVar6 + cVar3;
  pcVar6[-0x1affc4c7] = pcVar6[-0x1affc4c7] + (char)param_2;
  cVar9 = (char)((ushort)param_2 >> 8);
  uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11(cVar8 + cVar9,cVar3));
  puVar7 = (uint *)(ulonglong)uVar4;
  *puVar7 = *puVar7 & uVar4;
  uVar2 = *puVar7;
  (&stack0x00000000)[CONCAT44(unaff_0000001c,unaff_EBX)] =
       (&stack0x00000000)[CONCAT44(unaff_0000001c,unaff_EBX)] + cVar9;
  pcVar6 = (char *)((ulonglong)CONCAT31((int3)(uVar4 >> 8),cVar3 + (char)uVar2) - 0x1affc4c7);
  *pcVar6 = *pcVar6 + (char)param_2;
  *(int *)(unaff_RSI + 0x349e0008) = *(int *)(unaff_RSI + 0x349e0008) + unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

