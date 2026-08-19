// Function: FUN_1404ab5b8
// Addr: 1404ab5b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ab5e1) overlaps instruction at (ram,0x0001404ab5e0)
    */

void FUN_1404ab5b8(ulonglong param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 in_RAX;
  undefined7 uVar6;
  byte *pbVar4;
  uint uVar8;
  byte bVar9;
  longlong unaff_RBX;
  int *unaff_RDI;
  bool bVar10;
  bool bVar11;
  uint *puVar3;
  char cVar5;
  undefined6 uVar7;
  
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  bVar10 = 0xcb < (byte)in_RAX;
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar1 = (byte)in_RAX + 0x34;
  puVar3 = (uint *)CONCAT71(uVar6,bVar1);
  uVar8 = *puVar3;
  bVar2 = (byte)*puVar3 + bVar1;
  bVar11 = CARRY1((byte)*puVar3,bVar1) || CARRY1(bVar2,bVar10);
  *(byte *)puVar3 = bVar2 + bVar10;
  if (SCARRY1((byte)uVar8,bVar1) == SCARRY1(bVar2,bVar10)) {
    TaskRegister(*(undefined2 *)((longlong)unaff_RDI + -0x37fff0ed));
    *(char *)param_2 = (char)*param_2 + (char)param_1 + bVar11;
    *puVar3 = *puVar3 & (uint)puVar3;
    bVar2 = (byte)*puVar3;
    uVar8 = *puVar3;
    *(byte *)puVar3 = (byte)*puVar3 + bVar1;
    if (SCARRY1((byte)uVar8,bVar1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    uVar8 = (int)param_1 + *unaff_RDI + (uint)bVar11;
    param_1 = (ulonglong)uVar8;
    bVar2 = (byte)uVar8;
    puVar3 = (uint *)CONCAT71(uVar6,bVar1 + bVar2);
  }
  TaskRegister(*(undefined2 *)((longlong)unaff_RDI + -0x37fff0ed));
  *(char *)param_2 = (char)*param_2 + (char)param_1 + CARRY1(bVar2,bVar1);
  *puVar3 = *puVar3 & (uint)puVar3;
  bVar2 = (byte)puVar3 | (byte)*puVar3;
  uVar7 = (undefined6)((ulonglong)puVar3 >> 0x10);
  cVar5 = (char)((ulonglong)puVar3 >> 8) + (char)param_2;
  pbVar4 = (byte *)CONCAT62(uVar7,CONCAT11(cVar5,bVar2));
  *pbVar4 = *pbVar4 | bVar2;
  cVar5 = cVar5 + bVar2;
  puVar3 = (uint *)CONCAT62(uVar7,CONCAT11(cVar5,bVar2));
  *puVar3 = *puVar3 | (uint)puVar3;
  *(char *)((longlong)param_2 + param_1) = *(char *)((longlong)param_2 + param_1) + bVar9;
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + cVar5;
  *(char *)((longlong)puVar3 + (longlong)param_2) =
       *(char *)((longlong)puVar3 + (longlong)param_2) + bVar9;
  pbVar4 = (byte *)((longlong)puVar3 + 0x13);
  bVar2 = *pbVar4;
  *pbVar4 = *pbVar4 + bVar9;
  TaskRegister(*(undefined2 *)((longlong)unaff_RDI + -0x37fff0ed));
  *(char *)param_2 = (char)*param_2 + (char)param_1 + CARRY1(bVar2,bVar9);
  *param_2 = *param_2 & (uint)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

