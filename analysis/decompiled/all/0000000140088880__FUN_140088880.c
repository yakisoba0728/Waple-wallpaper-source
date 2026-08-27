// Function: FUN_140088880
// Addr: 140088880
// Size: 15 bytes


undefined4 FUN_140088880(longlong param_1)

{
  uint uVar1;
  
  uVar1 = (*(uint *)(param_1 + 8) & 0xff) - 1;
  return CONCAT31((int3)(uVar1 >> 8),uVar1 < 3);
}

