// Function: FUN_140079be0
// Addr: 140079be0
// Size: 660 bytes


undefined8 * FUN_140079be0(float *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong _Size;
  size_t _Size_00;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *_Buf1;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  float fVar15;
  
  uVar2 = param_2[3];
  _Size = param_2[2];
  puVar9 = param_2;
  if (0xf < uVar2) {
    puVar9 = (undefined8 *)*param_2;
  }
  uVar10 = 0;
  uVar14 = 0xcbf29ce484222325;
  if (_Size != 0) {
    do {
      pbVar1 = (byte *)(uVar10 + (longlong)puVar9);
      uVar10 = uVar10 + 1;
      uVar14 = (uVar14 ^ *pbVar1) * 0x100000001b3;
    } while (uVar10 < _Size);
  }
  puVar9 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar14 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  puVar12 = *(undefined8 **)(param_1 + 2);
  if (puVar9 != *(undefined8 **)(param_1 + 2)) {
    puVar13 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + (uVar14 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    while( true ) {
      puVar12 = puVar9 + 2;
      if (0xf < (ulonglong)puVar9[5]) {
        puVar12 = (undefined8 *)*puVar12;
      }
      puVar11 = param_2;
      if (0xf < uVar2) {
        puVar11 = (undefined8 *)*param_2;
      }
      if ((_Size == puVar9[4]) &&
         ((_Size == 0 || (iVar8 = memcmp(puVar11,puVar12,_Size), iVar8 == 0)))) goto LAB_140079e53;
      puVar12 = puVar9;
      if (puVar9 == puVar13) break;
      puVar9 = (undefined8 *)puVar9[1];
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x249249249249249) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("unordered_map/set too long");
  }
  puVar9 = (undefined8 *)FUN_14028af20(0x70);
  puVar9[2] = 0;
  puVar9[3] = 0;
  puVar9[4] = 0;
  puVar9[5] = 0;
  uVar7 = param_2[1];
  puVar9[2] = *param_2;
  puVar9[3] = uVar7;
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 3);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(puVar9 + 4) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)puVar9 + 0x24) = uVar4;
  *(undefined4 *)(puVar9 + 5) = uVar5;
  *(undefined4 *)((longlong)puVar9 + 0x2c) = uVar6;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[8] = 0;
  puVar9[9] = 0;
  puVar9[10] = 0;
  puVar9[0xb] = 0;
  puVar9[0xc] = 0;
  puVar9[0xd] = 0;
  FUN_14007fc10();
  fVar15 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar15 && fVar15 != *param_1) {
    FUN_14007d000(param_1);
    puVar12 = *(undefined8 **)(param_1 + 2);
    puVar13 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + 8 + (uVar14 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    if (puVar13 != puVar12) {
      uVar2 = puVar9[5];
      _Size_00 = puVar9[4];
      puVar11 = *(undefined8 **)
                 (*(longlong *)(param_1 + 6) + (uVar14 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      puVar12 = puVar13;
      while( true ) {
        puVar13 = puVar12 + 2;
        if (0xf < (ulonglong)puVar12[5]) {
          puVar13 = (undefined8 *)*puVar13;
        }
        if (uVar2 < 0x10) {
          _Buf1 = puVar9 + 2;
        }
        else {
          _Buf1 = (undefined8 *)puVar9[2];
        }
        if ((_Size_00 == puVar12[4]) &&
           ((_Size_00 == 0 || (iVar8 = memcmp(_Buf1,puVar13,_Size_00), iVar8 == 0)))) break;
        if (puVar12 == puVar11) goto LAB_140079e08;
        puVar12 = (undefined8 *)puVar12[1];
      }
      puVar12 = (undefined8 *)*puVar12;
    }
  }
LAB_140079e08:
  puVar13 = (undefined8 *)puVar12[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar9 = puVar12;
  puVar9[1] = puVar13;
  *puVar13 = puVar9;
  puVar12[1] = puVar9;
  lVar3 = *(longlong *)(param_1 + 6);
  uVar14 = *(ulonglong *)(param_1 + 0xc) & uVar14;
  puVar11 = *(undefined8 **)(lVar3 + uVar14 * 0x10);
  if (puVar11 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar3 + uVar14 * 0x10) = puVar9;
  }
  else {
    if (puVar11 == puVar12) {
      *(undefined8 **)(lVar3 + uVar14 * 0x10) = puVar9;
      goto LAB_140079e53;
    }
    if (*(undefined8 **)(lVar3 + 8 + uVar14 * 0x10) != puVar13) goto LAB_140079e53;
  }
  *(undefined8 **)(lVar3 + 8 + uVar14 * 0x10) = puVar9;
LAB_140079e53:
  return puVar9 + 6;
}

