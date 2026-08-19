// Function: FUN_1404ccbd0
// Addr: 1404ccbd0
// Size: 1 bytes


uint FUN_1404ccbd0(byte *param_1)

{
  uint uVar1;
  uint *puVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  int *in_RAX;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  uint uVar2;
  
  bVar4 = *param_1;
  bVar6 = (byte)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + bVar6;
  puVar3 = (uint *)((longlong)in_RAX * 2);
  uVar1 = *puVar3;
  uVar5 = (uint)in_RAX;
  uVar2 = *puVar3;
  *puVar3 = (uVar2 - uVar5) - (uint)CARRY1(bVar4,bVar6);
  *in_RAX = (*in_RAX - uVar5) -
            (uint)((uint)&stack0x00000000 < unaff_ESI ||
                  (uint)&stack0x00000000 - unaff_ESI <
                  (uint)(uVar1 < uVar5 || uVar2 - uVar5 < (uint)CARRY1(bVar4,bVar6)));
  bVar4 = (byte)in_RAX;
  *(byte *)CONCAT44(unaff_00000034,unaff_ESI) = *(byte *)CONCAT44(unaff_00000034,unaff_ESI) >> 1;
  return CONCAT31((int3)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar6 | bVar4,bVar4))
                        >> 8),bVar4 + (char)((ulonglong)param_1 >> 8)) ^ 0x352ef800;
}

