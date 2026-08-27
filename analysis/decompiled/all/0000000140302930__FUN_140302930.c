// Function: FUN_140302930
// Addr: 140302930
// Size: 508 bytes


void FUN_140302930(longlong param_1,int param_2,longlong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  
  iVar7 = 0;
  uVar5 = 0;
  lVar12 = (longlong)param_4 * 0x898 + param_1;
  uVar6 = *(ulonglong *)(lVar12 + 0x50);
  if (uVar6 != 0) {
    uVar5 = uVar6 + (ulonglong)*(uint *)(lVar12 + 0x48) * 0x48;
  }
  if (param_2 != 0) {
    iVar7 = *(int *)(param_3 + (ulonglong)(param_2 - 1) * 0xc);
  }
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x1180) + 0x40);
  iVar11 = iVar2 * 8;
  iVar11 = (int)((iVar11 >> 0x1f & 0x7ffU) + iVar11) >> 0xb;
  if (iVar11 == 0) {
    iVar11 = 1;
  }
  iVar2 = iVar2 * 6000;
  iVar2 = (iVar2 >> 0x1f & 0x7ffU) + iVar2;
  uVar10 = uVar6;
  if (uVar6 < uVar5) {
    do {
      uVar3 = (uint)*(char *)(uVar10 + 1);
      uVar9 = uVar6;
      if (uVar3 == *(uint *)(lVar12 + 0x68)) {
        do {
          if ((int)*(char *)(uVar9 + 1) + (int)(char)uVar3 == 0) {
            if ((int)*(short *)(uVar10 + 2) < (int)*(short *)(uVar9 + 2)) {
              iVar1 = (int)*(short *)(uVar9 + 8);
              if ((int)*(short *)(uVar10 + 8) <= (int)*(short *)(uVar9 + 8)) {
                iVar1 = (int)*(short *)(uVar10 + 8);
              }
              iVar4 = (int)*(short *)(uVar9 + 6);
              if ((int)*(short *)(uVar9 + 6) <= (int)*(short *)(uVar10 + 6)) {
                iVar4 = (int)*(short *)(uVar10 + 6);
              }
              if (iVar11 <= iVar1 - iVar4) {
                iVar8 = (int)*(short *)(uVar9 + 2) - (int)*(short *)(uVar10 + 2);
                if (iVar7 != 0) {
                  iVar8 = (iVar8 * 0x400) / iVar7 + -0x400;
                  if (iVar8 < 0x2711) {
                    if (iVar8 < 1) {
                      iVar8 = 0;
                    }
                    else {
                      iVar8 = (iVar8 * iVar8) / 3000;
                    }
                  }
                  else {
                    iVar8 = 32000;
                  }
                  uVar3 = (uint)*(byte *)(uVar10 + 1);
                }
                iVar8 = (int)(CONCAT44(iVar2 >> 0x1f,iVar2 >> 0xb) / (longlong)(iVar1 - iVar4)) +
                        iVar8;
                if (iVar8 < *(int *)(uVar10 + 0x30)) {
                  uVar3 = (uint)*(byte *)(uVar10 + 1);
                  *(int *)(uVar10 + 0x30) = iVar8;
                  *(ulonglong *)(uVar10 + 0x20) = uVar9;
                }
                if (iVar8 < *(int *)(uVar9 + 0x30)) {
                  *(int *)(uVar9 + 0x30) = iVar8;
                  *(ulonglong *)(uVar9 + 0x20) = uVar10;
                  uVar3 = (uint)*(byte *)(uVar10 + 1);
                }
              }
            }
          }
          uVar9 = uVar9 + 0x48;
        } while (uVar9 < uVar5);
      }
      uVar10 = uVar10 + 0x48;
    } while (uVar10 < uVar5);
    do {
      lVar12 = *(longlong *)(uVar6 + 0x20);
      if ((lVar12 != 0) && (*(ulonglong *)(lVar12 + 0x20) != uVar6)) {
        *(undefined8 *)(uVar6 + 0x20) = 0;
        *(undefined8 *)(uVar6 + 0x28) = *(undefined8 *)(lVar12 + 0x20);
      }
      uVar6 = uVar6 + 0x48;
    } while (uVar6 < uVar5);
  }
  return;
}

