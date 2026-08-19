// Function: FUN_1404c4ba8
// Addr: 1404c4ba8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c4ba8(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  undefined4 in_EAX;
  undefined3 uVar9;
  undefined4 in_register_00000004;
  int unaff_EBX;
  bool bVar10;
  bool bVar11;
  byte unaff_retaddr;
  uint uVar7;
  undefined4 uVar8;
  
  *(int *)(&stack0x00000000 + param_1) = *(int *)(&stack0x00000000 + param_1) + unaff_EBX;
  bVar10 = CARRY1(unaff_retaddr,(byte)unaff_EBX);
  bVar4 = (byte)in_EAX + *(char *)CONCAT44(in_register_00000004,in_EAX);
  bVar11 = CARRY1((byte)in_EAX,*(byte *)CONCAT44(in_register_00000004,in_EAX)) ||
           CARRY1(bVar4,bVar10);
  uVar9 = (undefined3)((uint)in_EAX >> 8);
  bVar4 = bVar4 + bVar10;
  bVar3 = bVar4 + 0xac;
  bVar5 = bVar3 - bVar11;
  uVar7 = CONCAT31(uVar9,bVar5);
  uVar1 = (uint)(bVar4 < 0x54 || bVar3 < bVar11);
  uVar2 = *(int *)CONCAT44(in_register_00000004,uVar7) + uVar7;
  bVar10 = CARRY4(*(uint *)CONCAT44(in_register_00000004,uVar7),uVar7) || CARRY4(uVar2,uVar1);
  *(uint *)CONCAT44(in_register_00000004,uVar7) = uVar2 + uVar1;
  cVar6 = (bVar5 - 0x34) - bVar10;
  uVar8 = CONCAT31(uVar9,cVar6);
  *(char *)CONCAT44(in_register_00000004,uVar8) =
       *(char *)CONCAT44(in_register_00000004,uVar8) + cVar6 +
       (bVar5 < 0x34 || (byte)(bVar5 - 0x34) < bVar10);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

