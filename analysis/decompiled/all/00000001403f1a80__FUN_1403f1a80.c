// Function: FUN_1403f1a80
// Addr: 1403f1a80
// Size: 144 bytes


void FUN_1403f1a80(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  float fVar10;
  
  uVar1 = *(uint *)(param_2 + 0x60);
  if (*(char *)(param_2 + 0x5a) == '\0') {
    if (*(int *)(param_2 + 0x110) != 0) {
      lVar9 = 0;
      goto LAB_1403f1ae2;
    }
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_2 + 0x70);
    *(undefined2 *)(param_2 + 0x59) = 0x100;
    *(undefined4 *)(param_2 + 100) = 0;
    if ((uVar1 * 5 & 0x3fffffff) != 0) {
      func_0x000140421870(*(undefined8 *)(param_2 + 0x80),0,uVar1 * 0x14);
    }
  }
  lVar9 = *(longlong *)(param_2 + 0x80);
LAB_1403f1ae2:
  uVar5 = *(uint *)(param_2 + 0x38);
  uVar6 = (ulonglong)uVar5;
  if ((*(byte *)(param_2 + 0xd8) & 8) != 0) {
    lVar4 = *(longlong *)(param_2 + 0x80);
    if ((uVar5 & 0xfffffffd) == 4) {
      uVar8 = 0;
      if (uVar1 != 0) {
        do {
          if (*(short *)(lVar4 + 0x10 + uVar8 * 0x14) != 0) {
            func_0x0001403f51d0(lVar4,uVar1,uVar8);
          }
          uVar5 = (uint)uVar6;
          uVar7 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar7;
        } while (uVar7 < uVar1);
      }
    }
    else {
      uVar8 = (ulonglong)uVar1;
      uVar7 = uVar1;
      while (uVar7 != 0) {
        uVar8 = (ulonglong)((int)uVar8 - 1);
        if (*(short *)(lVar4 + 0x10 + uVar8 * 0x14) != 0) {
          func_0x0001403f51d0(lVar4,uVar1,uVar8);
        }
        uVar5 = (uint)uVar6;
        uVar7 = (uint)uVar8;
      }
    }
  }
  fVar3 = DAT_140492790;
  if (((*(float *)(param_1 + 0x4c) != 0.0) && ((uVar5 & 0xfffffffe) == 4)) &&
     (uVar5 = 0, uVar1 != 0)) {
    lVar4 = 0;
    do {
      iVar2 = *(int *)(lVar9 + 0xc + lVar4 * 0x14);
      if (iVar2 != 0) {
        fVar10 = (float)FUN_14041a690((float)iVar2 * *(float *)(param_1 + 0x4c) + fVar3);
        *(int *)(lVar9 + 8 + lVar4 * 0x14) =
             (int)(fVar10 + (float)*(int *)(lVar9 + 8 + lVar4 * 0x14));
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 1;
    } while (uVar5 < uVar1);
  }
  return;
}

