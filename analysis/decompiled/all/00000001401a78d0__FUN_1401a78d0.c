// Function: FUN_1401a78d0
// Addr: 1401a78d0
// Size: 722 bytes


longlong * FUN_1401a78d0(float *param_1,longlong *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  size_t _Size;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *_Buf1;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  undefined8 *local_38;
  longlong local_30;
  
  puVar7 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar7 = (undefined8 *)*param_3;
  }
  uVar8 = 0;
  uVar13 = 0xcbf29ce484222325;
  if (param_3[2] != 0) {
    do {
      pbVar1 = (byte *)(uVar8 + (longlong)puVar7);
      uVar8 = uVar8 + 1;
      uVar13 = (uVar13 ^ *pbVar1) * 0x100000001b3;
    } while (uVar8 < (ulonglong)param_3[2]);
  }
  FUN_1400110a0(param_1,&local_38,param_3,uVar13);
  if (local_30 != 0) {
    *param_2 = local_30;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x13b13b13b13b13b) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("unordered_map/set too long");
  }
  puVar7 = (undefined8 *)FUN_14028af20(0xd0);
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  uVar3 = *(undefined4 *)((longlong)param_3 + 4);
  uVar4 = *(undefined4 *)(param_3 + 1);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
  *(undefined4 *)(puVar7 + 2) = *(undefined4 *)param_3;
  *(undefined4 *)((longlong)puVar7 + 0x14) = uVar3;
  *(undefined4 *)(puVar7 + 3) = uVar4;
  *(undefined4 *)((longlong)puVar7 + 0x1c) = uVar5;
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar4 = *(undefined4 *)(param_3 + 3);
  uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(param_3 + 2);
  *(undefined4 *)((longlong)puVar7 + 0x24) = uVar3;
  *(undefined4 *)(puVar7 + 5) = uVar4;
  *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar5;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  FUN_1404217a0(puVar7 + 6,0,0xa0);
  FUN_1401a72b0(puVar7 + 6);
  uVar8 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar8) {
    fVar14 = (float)FUN_140419fa0((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar9 = 0;
    if ((DAT_140492974 <= fVar14) && (fVar14 = fVar14 - DAT_140492974, fVar14 < DAT_140492974)) {
      lVar9 = -0x8000000000000000;
    }
    uVar10 = 8;
    if (8 < (ulonglong)((longlong)fVar14 + lVar9)) {
      uVar10 = (longlong)fVar14 + lVar9;
    }
    uVar12 = uVar8;
    if ((uVar8 < uVar10) && ((0x1ff < uVar8 || (uVar12 = uVar8 * 8, uVar8 * 8 < uVar10)))) {
      uVar12 = uVar10;
    }
    FUN_1401a8350(param_1,uVar12);
    puVar11 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + 8 + (uVar13 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    local_38 = *(undefined8 **)(param_1 + 2);
    if (puVar11 != *(undefined8 **)(param_1 + 2)) {
      _Size = puVar7[4];
      puVar2 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (uVar13 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      local_38 = puVar11;
      while( true ) {
        puVar11 = local_38 + 2;
        if (0xf < (ulonglong)local_38[5]) {
          puVar11 = (undefined8 *)*puVar11;
        }
        if ((ulonglong)puVar7[5] < 0x10) {
          _Buf1 = puVar7 + 2;
        }
        else {
          _Buf1 = (undefined8 *)puVar7[2];
        }
        if ((_Size == local_38[4]) &&
           ((_Size == 0 || (iVar6 = memcmp(_Buf1,puVar11,_Size), iVar6 == 0)))) break;
        if (local_38 == puVar2) goto LAB_1401a7b2a;
        local_38 = (undefined8 *)local_38[1];
      }
      local_38 = (undefined8 *)*local_38;
    }
  }
LAB_1401a7b2a:
  puVar11 = (undefined8 *)local_38[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar7 = local_38;
  puVar7[1] = puVar11;
  *puVar11 = puVar7;
  local_38[1] = puVar7;
  lVar9 = *(longlong *)(param_1 + 6);
  uVar13 = *(ulonglong *)(param_1 + 0xc) & uVar13;
  puVar2 = *(undefined8 **)(lVar9 + uVar13 * 0x10);
  if (puVar2 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar9 + uVar13 * 0x10) = puVar7;
  }
  else {
    if (puVar2 == local_38) {
      *(undefined8 **)(lVar9 + uVar13 * 0x10) = puVar7;
      goto LAB_1401a7b7a;
    }
    if (*(undefined8 **)(lVar9 + 8 + uVar13 * 0x10) != puVar11) goto LAB_1401a7b7a;
  }
  *(undefined8 **)(lVar9 + 8 + uVar13 * 0x10) = puVar7;
LAB_1401a7b7a:
  *param_2 = (longlong)puVar7;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}

