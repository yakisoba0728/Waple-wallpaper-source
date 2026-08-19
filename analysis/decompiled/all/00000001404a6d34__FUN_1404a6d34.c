// Function: FUN_1404a6d34
// Addr: 1404a6d34
// Size: 1 bytes


void FUN_1404a6d34(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  uint *in_RAX;
  uint *puVar3;
  char cVar4;
  byte bVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  
  uVar7 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar6 = (undefined2)((ulonglong)param_1 >> 0x10);
  bVar5 = (byte)((ulonglong)param_1 >> 8);
  cVar4 = (char)param_1;
  bVar5 = bVar5 >> 1 | bVar5 << 7;
  *in_RAX = *in_RAX | (uint)in_RAX;
  puVar3 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + -0x32);
  *puVar3 = *puVar3 | (uint)puVar3;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
       CONCAT22(uVar6,CONCAT11(bVar5,cVar4));
  uVar1 = (uint)puVar3 + 0x4640b00;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar4;
  iVar2 = uVar1 + *(int *)(ulonglong)uVar1;
  *(char *)CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(bVar5,cVar4))) =
       *(char *)CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(bVar5,cVar4))) + (char)((uint)iVar2 >> 8);
  uVar1 = iVar2 + 0x34050002;
  uVar1 = CONCAT31((int3)(uVar1 >> 8),(char)uVar1 + *(char *)(ulonglong)uVar1);
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 | uVar1;
  return;
}

