// Function: FUN_1404a6d08
// Addr: 1404a6d08
// Size: 1 bytes


void FUN_1404a6d08(undefined8 param_1,uint *param_2)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong in_RAX;
  char *pcVar5;
  uint *puVar6;
  char cVar7;
  byte bVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  
  uVar10 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar9 = (undefined2)((ulonglong)param_1 >> 0x10);
  bVar8 = (byte)((ulonglong)param_1 >> 8);
  cVar7 = (char)param_1;
  *(int *)(in_RAX + 0x5640c00) = *(int *)(in_RAX + 0x5640c00) + (uint)param_1;
  (&stack0x00000000)[(longlong)param_2 * 2] = (&stack0x00000000)[(longlong)param_2 * 2] + cVar7;
  pcVar5 = (char *)(in_RAX | 0xe0);
  *pcVar5 = *pcVar5 + (char)pcVar5;
  *param_2 = *param_2 & (uint)param_1;
  pcVar1 = (code *)swi(9);
  puVar6 = (uint *)(*pcVar1)();
  pcVar5 = (char *)(unaff_RSI + CONCAT44(uVar10,CONCAT22(uVar9,CONCAT11(bVar8,cVar7))) * 8);
  cVar2 = (char)puVar6;
  *pcVar5 = *pcVar5 + cVar2;
  uVar3 = (uint)puVar6;
  *puVar6 = *puVar6 | uVar3;
  *puVar6 = *puVar6 & uVar3;
  *(char *)puVar6 = (char)*puVar6 + cVar2;
  bVar8 = bVar8 >> 1 | bVar8 << 7;
  *puVar6 = *puVar6 | uVar3;
  puVar6 = (uint *)CONCAT71((int7)((ulonglong)puVar6 >> 8),cVar2 + -0x32);
  *puVar6 = *puVar6 | (uint)puVar6;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
       CONCAT22(uVar9,CONCAT11(bVar8,cVar7));
  uVar3 = (uint)puVar6 + 0x4640b00;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar7;
  iVar4 = uVar3 + *(int *)(ulonglong)uVar3;
  *(char *)CONCAT44(uVar10,CONCAT22(uVar9,CONCAT11(bVar8,cVar7))) =
       *(char *)CONCAT44(uVar10,CONCAT22(uVar9,CONCAT11(bVar8,cVar7))) + (char)((uint)iVar4 >> 8);
  uVar3 = iVar4 + 0x34050002;
  uVar3 = CONCAT31((int3)(uVar3 >> 8),(char)uVar3 + *(char *)(ulonglong)uVar3);
  *(uint *)(ulonglong)uVar3 = *(uint *)(ulonglong)uVar3 | uVar3;
  return;
}

