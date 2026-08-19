// Function: FUN_1403ca160
// Addr: 1403ca160
// Size: 353 bytes


undefined8 FUN_1403ca160(longlong param_1,undefined8 param_2,uint param_3,int *param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  uint *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  longlong lVar13;
  longlong lVar14;
  uint local_48 [2];
  undefined2 local_40;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xdc) != -1) {
    return 0;
  }
  if ((int)param_3 < 0) {
    uVar5 = func_0x000140421ed0(param_2);
    return uVar5;
  }
  if (param_3 == 0) {
    return 0;
  }
  lVar13 = *(longlong *)(param_1 + 0x130);
  uVar8 = 0;
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_1402dd8b0(1,0x10);
  }
  local_40 = 0;
  iVar10 = 0;
  local_48[1] = 0;
  local_48[0] = param_3;
  iVar11 = *(int *)(lVar13 + 4) + -1;
  uVar7 = uVar8;
  if (-1 < iVar11) {
    lVar13 = *(longlong *)(lVar13 + 8);
    do {
      uVar2 = (uint)(iVar11 + iVar10) >> 1;
      lVar14 = (ulonglong)uVar2 * 0x20;
      puVar6 = (uint *)(lVar14 + 0x10 + lVar13);
      uVar4 = *puVar6;
      puVar12 = local_48;
      if (uVar4 < param_3) {
        puVar12 = puVar6;
      }
      iVar3 = func_0x000140421dc0(param_2,*(undefined8 *)(lVar14 + 8 + lVar13),*puVar12);
      iVar9 = param_3 - uVar4;
      if (iVar3 != 0) {
        iVar9 = iVar3;
      }
      if (iVar9 < 0) {
        iVar11 = uVar2 - 1;
      }
      else {
        if (iVar9 < 1) {
          uVar7 = lVar14 + lVar13;
          break;
        }
        iVar10 = uVar2 + 1;
      }
    } while (iVar10 <= iVar11);
  }
  if (uVar7 == 0) {
    return 0;
  }
  uVar1 = *(ushort *)(uVar7 + 0x18);
  if (*(undefined8 **)(param_1 + 0x50) == &DAT_14045dde0) {
    iVar11 = *(int *)(param_1 + 0xf4);
    if (iVar11 == 0) {
      uVar7 = 0;
      if (uVar1 < 0xe5) {
        uVar7 = (ulonglong)(uint)uVar1;
      }
    }
    else if (iVar11 == 1) {
      iVar11 = 0xa4;
      do {
        uVar4 = (uint)(iVar11 + (int)uVar8) >> 1;
        lVar13 = (ulonglong)uVar4 * 4 + 0x45cc50;
        if (uVar1 == *(ushort *)(&UNK_14045cd20 + (ulonglong)uVar4 * 4)) goto code_r0x0001403ca5c7;
        if (uVar1 < *(ushort *)(&UNK_14045cd20 + (ulonglong)uVar4 * 4)) {
          iVar11 = uVar4 - 1;
        }
        else {
          uVar8 = (ulonglong)(uVar4 + 1);
        }
        uVar7 = 0;
      } while ((int)uVar8 <= iVar11);
    }
    else {
      uVar7 = uVar8;
      if (iVar11 == 2) {
        iVar11 = 0x55;
        do {
          uVar4 = (uint)(iVar11 + (int)uVar8) >> 1;
          lVar13 = (ulonglong)uVar4 * 4 + 0x45cef0;
          if (uVar1 == *(ushort *)(&UNK_14045cfc0 + (ulonglong)uVar4 * 4))
          goto code_r0x0001403ca5c7;
          if (uVar1 < *(ushort *)(&UNK_14045cfc0 + (ulonglong)uVar4 * 4)) {
            iVar11 = uVar4 - 1;
          }
          else {
            uVar8 = (ulonglong)(uVar4 + 1);
          }
        } while ((int)uVar8 <= iVar11);
      }
    }
  }
  else {
    uVar8 = func_0x0001403c9360(*(undefined8 **)(param_1 + 0x50),uVar1,
                                *(undefined4 *)(param_1 + 0x128));
    uVar7 = uVar8 & 0xffffffff;
  }
code_r0x0001403ca5d8:
  if (((int)uVar7 == 0) && (uVar1 != 0)) {
    return 0;
  }
  *param_4 = (int)uVar7;
  return 1;
code_r0x0001403ca5c7:
  uVar7 = (ulonglong)(byte)(&DAT_140000080.field_0x52)[lVar13];
  goto code_r0x0001403ca5d8;
}

