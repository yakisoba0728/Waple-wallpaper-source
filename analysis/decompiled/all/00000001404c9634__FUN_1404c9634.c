// Function: FUN_1404c9634
// Addr: 1404c9634
// Size: 1 bytes


void FUN_1404c9634(void)

{
  undefined4 in_EAX;
  uint uVar1;
  undefined4 in_register_00000004;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),0xd9);
  *(uint *)CONCAT44(in_register_00000004,uVar1) =
       *(uint *)CONCAT44(in_register_00000004,uVar1) ^ uVar1;
  return;
}

