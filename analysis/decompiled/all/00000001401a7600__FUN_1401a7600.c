// Function: FUN_1401a7600
// Addr: 1401a7600
// Size: 706 bytes


longlong * FUN_1401a7600(float *param_1,longlong *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  size_t _Size;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *_Buf1;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  undefined8 *local_38;
  longlong local_30;
  
  puVar5 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar5 = (undefined8 *)*param_3;
  }
  uVar6 = 0;
  uVar11 = 0xcbf29ce484222325;
  if (param_3[2] != 0) {
    do {
      pbVar1 = (byte *)(uVar6 + (longlong)puVar5);
      uVar6 = uVar6 + 1;
      uVar11 = (uVar11 ^ *pbVar1) * 0x100000001b3;
    } while (uVar6 < (ulonglong)param_3[2]);
  }
  FUN_1400110a0(param_1,&local_38,param_3,uVar11);
  if (local_30 != 0) {
    *param_2 = local_30;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("unordered_map/set too long");
  }
  puVar5 = (undefined8 *)FUN_14028af20(0x38);
  puVar5[2] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  uVar3 = param_3[1];
  puVar5[2] = *param_3;
  puVar5[3] = uVar3;
  uVar3 = param_3[3];
  puVar5[4] = param_3[2];
  puVar5[5] = uVar3;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  puVar5[6] = 0;
  uVar6 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar6) {
    fVar12 = (float)FUN_140419fa0((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar7 = 0;
    if ((DAT_140492974 <= fVar12) && (fVar12 = fVar12 - DAT_140492974, fVar12 < DAT_140492974)) {
      lVar7 = -0x8000000000000000;
    }
    uVar8 = 8;
    if (8 < (ulonglong)((longlong)fVar12 + lVar7)) {
      uVar8 = (longlong)fVar12 + lVar7;
    }
    uVar10 = uVar6;
    if ((uVar6 < uVar8) && ((0x1ff < uVar6 || (uVar10 = uVar6 * 8, uVar6 * 8 < uVar8)))) {
      uVar10 = uVar8;
    }
    FUN_1401a80b0(param_1,uVar10);
    puVar9 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar11 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    local_38 = *(undefined8 **)(param_1 + 2);
    if (puVar9 != *(undefined8 **)(param_1 + 2)) {
      _Size = puVar5[4];
      puVar2 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (uVar11 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      local_38 = puVar9;
      while( true ) {
        puVar9 = local_38 + 2;
        if (0xf < (ulonglong)local_38[5]) {
          puVar9 = (undefined8 *)*puVar9;
        }
        if ((ulonglong)puVar5[5] < 0x10) {
          _Buf1 = puVar5 + 2;
        }
        else {
          _Buf1 = (undefined8 *)puVar5[2];
        }
        if ((_Size == local_38[4]) &&
           ((_Size == 0 || (iVar4 = memcmp(_Buf1,puVar9,_Size), iVar4 == 0)))) break;
        if (local_38 == puVar2) goto LAB_1401a784a;
        local_38 = (undefined8 *)local_38[1];
      }
      local_38 = (undefined8 *)*local_38;
    }
  }
LAB_1401a784a:
  puVar9 = (undefined8 *)local_38[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = local_38;
  puVar5[1] = puVar9;
  *puVar9 = puVar5;
  local_38[1] = puVar5;
  lVar7 = *(longlong *)(param_1 + 6);
  uVar11 = *(ulonglong *)(param_1 + 0xc) & uVar11;
  puVar2 = *(undefined8 **)(lVar7 + uVar11 * 0x10);
  if (puVar2 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar7 + uVar11 * 0x10) = puVar5;
  }
  else {
    if (puVar2 == local_38) {
      *(undefined8 **)(lVar7 + uVar11 * 0x10) = puVar5;
      goto LAB_1401a789a;
    }
    if (*(undefined8 **)(lVar7 + 8 + uVar11 * 0x10) != puVar9) goto LAB_1401a789a;
  }
  *(undefined8 **)(lVar7 + 8 + uVar11 * 0x10) = puVar5;
LAB_1401a789a:
  *param_2 = (longlong)puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}

