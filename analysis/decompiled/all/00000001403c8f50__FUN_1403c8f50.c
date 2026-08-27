// Function: FUN_1403c8f50
// Addr: 1403c8f50
// Size: 126 bytes


undefined8 * FUN_1403c8f50(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar2;
  
  iVar5 = 0;
  iVar4 = (uint)*(byte *)(param_1 + 4) * 0x100 + (*(byte *)(param_1 + 5) - 1);
  if (-1 < iVar4) {
    do {
      uVar1 = (uint)(iVar4 + iVar5) >> 1;
      uVar2 = (ulonglong)uVar1;
      iVar3 = ((uint)*(byte *)(param_1 + 0xc + uVar2 * 0xc) * -0x100 -
              (uint)*(byte *)(param_1 + 0xd + uVar2 * 0xc)) + param_2;
      if (iVar3 < 0) {
        iVar4 = uVar1 - 1;
      }
      else {
        if (iVar3 < 1) {
          return (undefined8 *)(param_1 + 0xc + uVar2 * 0xc);
        }
        iVar5 = uVar1 + 1;
      }
    } while (iVar5 <= iVar4);
  }
  return &DAT_14045dd10;
}

