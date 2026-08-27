// Function: FUN_14015a000
// Addr: 14015a000
// Size: 706 bytes


undefined8 * FUN_14015a000(float *param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong _Size;
  size_t _Size_00;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *_Buf1;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  float fVar13;
  
  uVar2 = param_3[3];
  puVar7 = param_3;
  if (0xf < uVar2) {
    puVar7 = (undefined8 *)*param_3;
  }
  _Size = param_3[2];
  uVar8 = 0;
  uVar12 = 0xcbf29ce484222325;
  if (_Size != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar7 + uVar8);
      uVar8 = uVar8 + 1;
      uVar12 = (uVar12 ^ *pbVar1) * 0x100000001b3;
    } while (uVar8 < _Size);
  }
  puVar7 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar12 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  puVar10 = *(undefined8 **)(param_1 + 2);
  if (puVar7 != *(undefined8 **)(param_1 + 2)) {
    puVar11 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + (uVar12 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    while( true ) {
      puVar10 = puVar7 + 2;
      if (0xf < (ulonglong)puVar7[5]) {
        puVar10 = (undefined8 *)*puVar10;
      }
      puVar9 = param_3;
      if (0xf < uVar2) {
        puVar9 = (undefined8 *)*param_3;
      }
      if ((_Size == puVar7[4]) &&
         ((_Size == 0 || (iVar6 = memcmp(puVar9,puVar10,_Size), iVar6 == 0)))) {
        uVar5 = 0;
        goto LAB_14015a29a;
      }
      puVar10 = puVar7;
      if (puVar7 == puVar11) break;
      puVar7 = (undefined8 *)puVar7[1];
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x1e1e1e1e1e1e1e1) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("unordered_map/set too long");
  }
  puVar7 = (undefined8 *)FUN_14028af20();
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  uVar4 = param_3[1];
  puVar7[2] = *param_3;
  puVar7[3] = uVar4;
  uVar4 = param_3[3];
  puVar7[4] = param_3[2];
  puVar7[5] = uVar4;
  param_3[2] = 0;
  *(undefined1 *)param_3 = 0;
  param_3[3] = 0xf;
  *(undefined4 *)((longlong)puVar7 + 0x61) = 0;
  *(undefined2 *)((longlong)puVar7 + 0x65) = 0;
  *(undefined1 *)((longlong)puVar7 + 0x67) = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  puVar7[8] = 0;
  puVar7[9] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0;
  *(undefined1 *)(puVar7 + 0xc) = 0;
  puVar7[0xd] = 0;
  puVar7[0xe] = 0;
  puVar7[0xf] = 0;
  puVar7[0x10] = 0xf;
  *(undefined1 *)(puVar7 + 0xd) = 0;
  fVar13 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar13 && fVar13 != *param_1) {
    FUN_14015ba50(param_1);
    puVar10 = *(undefined8 **)(param_1 + 2);
    puVar11 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + 8 + (uVar12 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    if (puVar11 != puVar10) {
      uVar2 = puVar7[5];
      _Size_00 = puVar7[4];
      puVar9 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (uVar12 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      puVar10 = puVar11;
      while( true ) {
        puVar11 = puVar10 + 2;
        if (0xf < (ulonglong)puVar10[5]) {
          puVar11 = (undefined8 *)*puVar11;
        }
        if (uVar2 < 0x10) {
          _Buf1 = puVar7 + 2;
        }
        else {
          _Buf1 = (undefined8 *)puVar7[2];
        }
        if ((_Size_00 == puVar10[4]) &&
           ((_Size_00 == 0 || (iVar6 = memcmp(_Buf1,puVar11,_Size_00), iVar6 == 0)))) break;
        if (puVar10 == puVar9) goto LAB_14015a24d;
        puVar10 = (undefined8 *)puVar10[1];
      }
      puVar10 = (undefined8 *)*puVar10;
    }
  }
LAB_14015a24d:
  puVar11 = (undefined8 *)puVar10[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar7 = puVar10;
  puVar7[1] = puVar11;
  *puVar11 = puVar7;
  puVar10[1] = puVar7;
  lVar3 = *(longlong *)(param_1 + 6);
  uVar12 = *(ulonglong *)(param_1 + 0xc) & uVar12;
  puVar9 = *(undefined8 **)(lVar3 + uVar12 * 0x10);
  if (puVar9 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar3 + uVar12 * 0x10) = puVar7;
  }
  else {
    if (puVar9 == puVar10) {
      *(undefined8 **)(lVar3 + uVar12 * 0x10) = puVar7;
      goto LAB_14015a298;
    }
    if (*(undefined8 **)(lVar3 + 8 + uVar12 * 0x10) != puVar11) goto LAB_14015a298;
  }
  *(undefined8 **)(lVar3 + 8 + uVar12 * 0x10) = puVar7;
LAB_14015a298:
  uVar5 = 1;
LAB_14015a29a:
  *(undefined1 *)(param_2 + 1) = uVar5;
  *param_2 = puVar7;
  return param_2;
}

