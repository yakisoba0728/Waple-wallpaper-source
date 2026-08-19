// Function: FUN_1404ad6d8
// Addr: 1404ad6d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ad6db) overlaps instruction at (ram,0x0001404ad6da)
    */

void FUN_1404ad6d8(longlong param_1)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint in_EAX;
  undefined4 in_register_00000004;
  byte unaff_BH;
  bool bVar4;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  bVar4 = CARRY1(*(byte *)CONCAT44(in_register_00000004,in_EAX),(byte)in_EAX);
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (byte)in_EAX;
  if (-1 < *(char *)CONCAT44(in_register_00000004,in_EAX)) {
    pbVar1 = (byte *)(param_1 + -3);
    bVar4 = CARRY1(*pbVar1,unaff_BH);
    *pbVar1 = *pbVar1 + unaff_BH;
  }
  uVar2 = *(uint *)CONCAT44(in_register_00000004,in_EAX);
  uVar3 = *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) = uVar3 + bVar4;
  do {
  } while (*(int *)CONCAT44(in_register_00000004,in_EAX) == 0);
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX +
       (uint)(CARRY4(uVar2,in_EAX) || CARRY4(uVar3,(uint)bVar4));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

