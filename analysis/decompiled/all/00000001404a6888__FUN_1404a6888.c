// Function: FUN_1404a6888
// Addr: 1404a6888
// Size: 1 bytes


void FUN_1404a6888(void)

{
  code *pcVar1;
  undefined4 in_EAX;
  uint uVar2;
  undefined4 in_register_00000004;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),0x8d);
  *(uint *)CONCAT44(in_register_00000004,uVar2) =
       *(uint *)CONCAT44(in_register_00000004,uVar2) | uVar2;
  pcVar1 = (code *)swi(1);
  (*pcVar1)();
  return;
}

