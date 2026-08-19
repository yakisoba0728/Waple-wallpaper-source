// Function: FUN_1404a6d18
// Addr: 1404a6d18
// Size: 1 bytes


void FUN_1404a6d18(undefined8 param_1,uint *param_2)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
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
  *param_2 = *param_2 & (uint)param_1;
  pcVar2 = (code *)swi(9);
  puVar6 = (uint *)(*pcVar2)();
  pcVar1 = (char *)(unaff_RSI + CONCAT44(uVar10,CONCAT22(uVar9,CONCAT11(bVar8,cVar7))) * 8);
  cVar3 = (char)puVar6;
  *pcVar1 = *pcVar1 + cVar3;
  uVar4 = (uint)puVar6;
  *puVar6 = *puVar6 | uVar4;
  *puVar6 = *puVar6 & uVar4;
  *(char *)puVar6 = (char)*puVar6 + cVar3;
  bVar8 = bVar8 >> 1 | bVar8 << 7;
  *puVar6 = *puVar6 | uVar4;
  puVar6 = (uint *)CONCAT71((int7)((ulonglong)puVar6 >> 8),cVar3 + -0x32);
  *puVar6 = *puVar6 | (uint)puVar6;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
       CONCAT22(uVar9,CONCAT11(bVar8,cVar7));
  uVar4 = (uint)puVar6 + 0x4640b00;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar7;
  iVar5 = uVar4 + *(int *)(ulonglong)uVar4;
  *(char *)CONCAT44(uVar10,CONCAT22(uVar9,CONCAT11(bVar8,cVar7))) =
       *(char *)CONCAT44(uVar10,CONCAT22(uVar9,CONCAT11(bVar8,cVar7))) + (char)((uint)iVar5 >> 8);
  uVar4 = iVar5 + 0x34050002;
  uVar4 = CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + *(char *)(ulonglong)uVar4);
  *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 | uVar4;
  return;
}

