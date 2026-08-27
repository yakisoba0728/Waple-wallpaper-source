// Function: FUN_1403aa3e0
// Addr: 1403aa3e0
// Size: 86 bytes


void FUN_1403aa3e0(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  uVar1 = iVar2 * 2 - 2;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  FUN_1403720a0(param_2,iVar2,param_1 + 4,(uint)param_1[2] * 0x100 + (uint)param_1[3],
                param_1 + 4 + uVar1,param_3);
  return;
}

