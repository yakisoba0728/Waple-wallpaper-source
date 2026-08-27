// Function: FUN_1403bf460
// Addr: 1403bf460
// Size: 361 bytes


void FUN_1403bf460(byte *param_1,int param_2,longlong param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  uVar5 = 0;
  uVar6 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  uVar1 = uVar6 * param_2;
  if (uVar6 == 0) {
    return;
  }
  do {
    if ((uint)uVar5 < param_4) {
      iVar8 = *(int *)(param_3 + uVar5 * 4);
    }
    else {
      iVar8 = 0;
    }
    sVar3 = (ushort)param_1[uVar5 * 6 + (ulonglong)uVar1 * 6 + 6] * 0x100 +
            (ushort)param_1[uVar5 * 6 + (ulonglong)uVar1 * 6 + 7];
    iVar9 = (int)sVar3;
    if ((sVar3 != 0) && (iVar8 != iVar9)) {
      if (iVar8 == 0) {
        return;
      }
      sVar3 = (ushort)param_1[uVar5 * 6 + (ulonglong)uVar1 * 6 + 4] * 0x100 +
              (ushort)param_1[uVar5 * 6 + (ulonglong)uVar1 * 6 + 5];
      iVar10 = (int)sVar3;
      if (iVar10 <= iVar9) {
        sVar7 = (ushort)param_1[uVar5 * 6 + (ulonglong)uVar1 * 6 + 9] +
                (ushort)param_1[uVar5 * 6 + (ulonglong)uVar1 * 6 + 8] * 0x100;
        iVar2 = (int)sVar7;
        if ((iVar9 <= iVar2) && ((-1 < sVar3 || (sVar7 < 1)))) {
          if (iVar8 <= iVar10) {
            return;
          }
          if (iVar2 <= iVar8) {
            return;
          }
          if (iVar8 < iVar9) {
            iVar8 = iVar8 - iVar10;
            iVar9 = iVar9 - iVar10;
          }
          else {
            iVar8 = iVar2 - iVar8;
            iVar9 = iVar2 - iVar9;
          }
          if ((float)iVar8 / (float)iVar9 == 0.0) {
            return;
          }
        }
      }
    }
    uVar4 = (uint)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
    if (uVar6 <= uVar4) {
      return;
    }
  } while( true );
}

