// Function: FUN_14040b3e0
// Addr: 14040b3e0
// Size: 124 bytes


void FUN_14040b3e0(undefined1 *param_1,byte *param_2,ulonglong param_3)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = 0;
  pbVar1 = param_2 + (param_3 & 0xfffffffc);
  for (; param_2 < pbVar1; param_2 = param_2 + 4) {
    iVar2 = iVar2 + (uint)param_2[3] +
            (uint)param_2[1] * 0x10000 + (uint)param_2[2] * 0x100 + (uint)*param_2 * 0x1000000;
  }
  *param_1 = (char)((uint)iVar2 >> 0x18);
  param_1[1] = (char)((uint)iVar2 >> 0x10);
  param_1[2] = (char)((uint)iVar2 >> 8);
  param_1[3] = (char)iVar2;
  return;
}

