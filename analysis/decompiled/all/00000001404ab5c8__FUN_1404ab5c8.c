// Function: FUN_1404ab5c8
// Addr: 1404ab5c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ab5e1) overlaps instruction at (ram,0x0001404ab5e0)
    */

void FUN_1404ab5c8(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint *in_RAX;
  byte *pbVar4;
  uint *puVar5;
  byte bVar8;
  longlong unaff_RBX;
  longlong unaff_RDI;
  char cVar6;
  undefined6 uVar7;
  
  bVar8 = (byte)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar1 = *in_RAX;
  bVar3 = (byte)in_RAX;
  uVar2 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar3;
  if (!SCARRY1((byte)uVar2,bVar3)) {
    TaskRegister(*(undefined2 *)(unaff_RDI + -0x37fff0ed));
    *(char *)param_2 = (char)*param_2 + (char)param_1 + CARRY1((byte)uVar1,bVar3);
    *in_RAX = *in_RAX & (uint)in_RAX;
    bVar3 = bVar3 | (byte)*in_RAX;
    uVar7 = (undefined6)((ulonglong)in_RAX >> 0x10);
    cVar6 = (char)((ulonglong)in_RAX >> 8) + (char)param_2;
    pbVar4 = (byte *)CONCAT62(uVar7,CONCAT11(cVar6,bVar3));
    *pbVar4 = *pbVar4 | bVar3;
    cVar6 = cVar6 + bVar3;
    puVar5 = (uint *)CONCAT62(uVar7,CONCAT11(cVar6,bVar3));
    *puVar5 = *puVar5 | (uint)puVar5;
    *(char *)((longlong)param_2 + param_1) = *(char *)((longlong)param_2 + param_1) + bVar8;
    *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + cVar6;
    *(char *)((longlong)puVar5 + (longlong)param_2) =
         *(char *)((longlong)puVar5 + (longlong)param_2) + bVar8;
    pbVar4 = (byte *)((longlong)puVar5 + 0x13);
    bVar3 = *pbVar4;
    *pbVar4 = *pbVar4 + bVar8;
    TaskRegister(*(undefined2 *)(unaff_RDI + -0x37fff0ed));
    *(char *)param_2 = (char)*param_2 + (char)param_1 + CARRY1(bVar3,bVar8);
    *param_2 = *param_2 & (uint)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

