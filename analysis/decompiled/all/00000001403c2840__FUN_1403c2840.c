// Function: FUN_1403c2840
// Addr: 1403c2840
// Size: 404 bytes


int FUN_1403c2840(longlong param_1,uint param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar3 = param_2 >> 8 & 0xff;
  uVar5 = param_2 >> 0x10 & 0xff;
  iVar1 = (uint)*(byte *)(param_1 + 4) * 0x100;
  uVar4 = (uint)*(byte *)(param_1 + 5) + iVar1;
  if (uVar4 < 0x10) {
    uVar6 = 0;
    if (uVar4 != 0) {
      uVar3 = uVar3 * 0x100 + uVar5 * 0x10000 + (param_2 >> 0x18) * 0x1000000 + (param_2 & 0xff);
      do {
        uVar5 = *(uint *)(param_1 + 0xc + (ulonglong)uVar6 * 0x10);
        uVar5 = (uVar5 >> 8 & 0xff) * 0x10000 + (uVar5 >> 0x10 & 0xff) * 0x100 + uVar5 * 0x1000000 +
                (uVar5 >> 0x18);
        iVar1 = 0;
        if (uVar5 < uVar3 == uVar3 < uVar5) {
LAB_1403c29c5:
          if (param_3 != (uint *)0x0) {
            *param_3 = uVar6;
          }
          return 1;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
    }
  }
  else {
    iVar8 = 0;
    iVar7 = uVar4 - 1;
    if (-1 < iVar7) {
      uVar3 = uVar3 * 0x100 + uVar5 * 0x10000 + (param_2 >> 0x18) * 0x1000000 + (param_2 & 0xff);
      do {
        uVar6 = (uint)(iVar7 + iVar8) >> 1;
        uVar4 = *(uint *)(param_1 + 0xc + (ulonglong)uVar6 * 0x10);
        uVar4 = (uVar4 >> 8 & 0xff) * 0x10000 + (uVar4 >> 0x10 & 0xff) * 0x100 + uVar4 * 0x1000000 +
                (uVar4 >> 0x18);
        iVar1 = 0;
        iVar2 = (uint)(uVar4 < uVar3) - (uint)(uVar3 < uVar4);
        if (iVar2 < 0) {
          iVar7 = uVar6 - 1;
        }
        else {
          if (iVar2 < 1) goto LAB_1403c29c5;
          iVar8 = uVar6 + 1;
        }
      } while (iVar8 <= iVar7);
    }
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = 0xffff;
  }
  return iVar1;
}

