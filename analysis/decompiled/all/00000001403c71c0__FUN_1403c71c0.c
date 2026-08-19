// Function: FUN_1403c71c0
// Addr: 1403c71c0
// Size: 121 bytes


ulonglong FUN_1403c71c0(longlong param_1,uint param_2)

{
  uint uVar1;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar2;
  
  iVar6 = 0;
  iVar5 = (uint)*(byte *)(param_1 + 2) * 0x100 + (*(byte *)(param_1 + 3) - 1);
  if (-1 < iVar5) {
    do {
      uVar1 = (uint)(iVar5 + iVar6) >> 1;
      uVar2 = (ulonglong)uVar1;
      uVar4 = (uint)*(byte *)(param_1 + 4 + uVar2 * 2) * 0x100 +
              (uint)*(byte *)(param_1 + 5 + uVar2 * 2);
      iVar3 = (uint)(uVar4 < param_2) - (uint)(param_2 < uVar4);
      if (iVar3 < 0) {
        iVar5 = uVar1 - 1;
      }
      else {
        if (iVar3 < 1) {
          return uVar2;
        }
        iVar6 = uVar1 + 1;
      }
    } while (iVar6 <= iVar5);
  }
  return 0xffffffff;
}

