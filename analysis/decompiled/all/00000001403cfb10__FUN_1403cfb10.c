// Function: FUN_1403cfb10
// Addr: 1403cfb10
// Size: 281 bytes


longlong FUN_1403cfb10(longlong param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  
  iVar7 = (uint)*(byte *)(param_1 + 5) + (uint)*(byte *)(param_1 + 4) * 0x100;
  if (iVar7 != 0) {
    uVar4 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) * 0x100;
    lVar3 = (ulonglong)((iVar7 + -1) * uVar4) + param_1;
    if (((uint)*(byte *)(lVar3 + 0xd) + (uint)*(byte *)(lVar3 + 0xc) * 0x100 == 0xffff) &&
       ((uint)*(byte *)(lVar3 + 0xe) * 0x100 + (uint)*(byte *)(lVar3 + 0xf) == 0xffff)) {
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
    iVar5 = 0;
    iVar7 = (iVar7 - iVar1) + -1;
    if (-1 < iVar7) {
      do {
        uVar2 = (uint)(iVar7 + iVar5) >> 1;
        lVar3 = (ulonglong)uVar2 * (ulonglong)uVar4;
        if (param_2 < (uint)*(byte *)(param_1 + 0xf + lVar3) +
                      (uint)*(byte *)(param_1 + 0xe + lVar3) * 0x100) {
          iVar7 = uVar2 - 1;
        }
        else {
          if (param_2 <=
              (uint)*(byte *)(param_1 + 0xc + lVar3) * 0x100 +
              (uint)*(byte *)(param_1 + 0xd + lVar3)) {
            pbVar6 = (byte *)((ulonglong)(uVar2 * uVar4) + 0xc + param_1);
            if (pbVar6 == (byte *)0x0) {
              return 0;
            }
            uVar4 = (uint)pbVar6[3] + (uint)pbVar6[2] * 0x100;
            if (param_2 < uVar4) {
              return 0;
            }
            if ((uint)pbVar6[1] + (uint)*pbVar6 * 0x100 < param_2) {
              return 0;
            }
            return (ulonglong)pbVar6[5] + param_1 +
                   ((ulonglong)(param_2 - uVar4) + (ulonglong)pbVar6[4] * 0x40) * 4;
          }
          iVar5 = uVar2 + 1;
        }
      } while (iVar5 <= iVar7);
    }
  }
  return 0;
}

