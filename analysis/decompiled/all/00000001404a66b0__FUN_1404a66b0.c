// Function: FUN_1404a66b0
// Addr: 1404a66b0
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404a66c8) overlaps instruction at (ram,0x0001404a66c5)
    */

void FUN_1404a66b0(char *param_1,longlong param_2)

{
  byte *pbVar1;
  int *piVar2;
  char *pcVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  short in_AX;
  byte bVar8;
  uint *puVar7;
  char unaff_BL;
  undefined7 unaff_00000019;
  longlong unaff_RSI;
  longlong unaff_GS_OFFSET;
  
  puVar7 = (uint *)(ulonglong)(uint)(int)in_AX;
  param_1[unaff_GS_OFFSET] = param_1[unaff_GS_OFFSET];
  cVar6 = (char)in_AX;
  *(char *)puVar7 = (char)*puVar7 + cVar6;
  pbVar1 = (byte *)((longlong)puVar7 + -0x25fff687);
  bVar4 = *pbVar1;
  bVar8 = (byte)((ushort)in_AX >> 8);
  *pbVar1 = *pbVar1 + bVar8;
  if ((char)*pbVar1 < '\0') {
    *(char *)((longlong)puVar7 + 0x1004a65) = *(char *)((longlong)puVar7 + 0x1004a65) + unaff_BL;
    pcVar3 = (char *)((longlong)puVar7 + unaff_RSI * 2);
    *pcVar3 = *pcVar3 + cVar6;
  }
  else {
    *param_1 = *param_1 + cVar6 + CARRY1(bVar4,bVar8);
    pcVar3 = (char *)((longlong)puVar7 + unaff_RSI * 2);
    *pcVar3 = *pcVar3 + cVar6;
  }
  *(uint **)((ulonglong)(uint)((int)&stack0x00000000 + *(int *)((longlong)puVar7 + 2)) - 8) = puVar7
  ;
  *(char *)puVar7 = (char)*puVar7 + cVar6;
  *puVar7 = *puVar7 & (uint)param_1;
  uVar5 = CONCAT31((int3)(char)bVar8,cVar6 + (char)*puVar7);
  puVar7 = (uint *)(ulonglong)uVar5;
  *(byte *)(param_2 + unaff_RSI) = *(byte *)(param_2 + unaff_RSI) | (byte)((ulonglong)param_2 >> 8);
  *(char *)((longlong)puVar7 + -0x7d) = *(char *)((longlong)puVar7 + -0x7d) + (char)param_2;
  *puVar7 = *puVar7 | uVar5;
  piVar2 = (int *)(CONCAT71(unaff_00000019,unaff_BL) + 0x65f40009);
  *piVar2 = *piVar2 + 0x4a;
  *param_1 = *param_1 + bVar8;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) =
       *(char *)CONCAT71(unaff_00000019,unaff_BL) + (char)((ulonglong)param_1 >> 8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

