// Function: FUN_140387610
// Addr: 140387610
// Size: 18 bytes


undefined8 FUN_140387610(longlong *param_1,undefined4 param_2,uint *param_3)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar9;
  
  cVar5 = FUN_1403c9950();
  if (cVar5 != '\0') {
    return 1;
  }
  uVar6 = FUN_14039b960(param_2);
  uVar8 = (uint)uVar6;
  if (uVar6 == 0) {
    return 0;
  }
  iVar3 = (int)param_1[5];
  iVar12 = 0;
  lVar4 = *param_1;
  iVar10 = iVar3 + -1;
  if (-1 < iVar10) {
    do {
      uVar7 = (uint)(iVar10 + iVar12) >> 1;
      uVar9 = (ulonglong)uVar7;
      lVar1 = lVar4 + uVar9 * 2;
      if ((uint)*(byte *)(lVar4 + 1 + uVar9 * 2) + (uint)*(byte *)(lVar4 + uVar9 * 2) * 0x100 <
          uVar8) {
        iVar12 = uVar7 + 1;
      }
      else {
        if ((uint)*(byte *)(lVar1 + 1 + (ulonglong)(iVar3 + 1) * 2) +
            (uint)*(byte *)(lVar1 + (ulonglong)(iVar3 + 1) * 2) * 0x100 <= uVar8) {
          lVar4 = (ulonglong)uVar7 * 2;
          uVar11 = (uint)*(byte *)(param_1[3] + 1 + lVar4) +
                   (uint)*(byte *)(param_1[3] + lVar4) * 0x100;
          if (uVar11 == 0) {
            bVar2 = *(byte *)(param_1[2] + lVar4);
            iVar10 = uVar8 + *(byte *)(param_1[2] + 1 + lVar4);
          }
          else {
            uVar8 = uVar7 + ((((uVar11 >> 1) - (uint)*(byte *)(param_1[1] + 1 + lVar4)) +
                             (uint)*(byte *)(param_1[1] + lVar4) * -0x100) - iVar3) + uVar8;
            if (*(uint *)((longlong)param_1 + 0x2c) <= uVar8) {
              return 0;
            }
            iVar10 = (uint)*(byte *)(param_1[4] + 1 + (ulonglong)uVar8 * 2) +
                     (uint)*(byte *)(param_1[4] + (ulonglong)uVar8 * 2) * 0x100;
            if (iVar10 == 0) {
              return 0;
            }
            bVar2 = *(byte *)(param_1[2] + lVar4);
            iVar10 = iVar10 + (uint)*(byte *)(param_1[2] + 1 + lVar4);
          }
          uVar8 = (uint)bVar2 * 0x100 + iVar10 & 0xffff;
          if (uVar8 == 0) {
            return 0;
          }
          *param_3 = uVar8;
          return 1;
        }
        iVar10 = uVar7 - 1;
      }
    } while (iVar12 <= iVar10);
  }
  return 0;
}

