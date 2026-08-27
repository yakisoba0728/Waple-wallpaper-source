// Function: FUN_1402befb0
// Addr: 1402befb0
// Size: 59 bytes


uint FUN_1402befb0(longlong param_1,longlong param_2)

{
  uint uVar1;
  byte *pbVar2;
  
  if (*(int *)(param_2 + 8) != 0) {
    pbVar2 = (byte *)(*(longlong *)(param_1 + 8) + (longlong)*(int *)(param_2 + 8));
    uVar1 = *pbVar2 & 0xf;
    return *(uint *)(pbVar2 + (-4 - (longlong)(char)(&DAT_14042c3b8)[uVar1])) >>
           ((&DAT_14042c3c8)[uVar1] & 0x1f);
  }
  return 0;
}

