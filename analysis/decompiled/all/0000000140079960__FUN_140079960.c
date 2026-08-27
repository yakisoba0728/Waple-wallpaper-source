// Function: FUN_140079960
// Addr: 140079960
// Size: 639 bytes


undefined8 * FUN_140079960(float *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong _Size;
  size_t _Size_00;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *_Buf1;
  ulonglong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  float fVar11;
  
  uVar2 = param_2[3];
  _Size = param_2[2];
  puVar5 = param_2;
  if (0xf < uVar2) {
    puVar5 = (undefined8 *)*param_2;
  }
  uVar7 = 0;
  uVar10 = 0xcbf29ce484222325;
  if (_Size != 0) {
    do {
      pbVar1 = (byte *)(uVar7 + (longlong)puVar5);
      uVar7 = uVar7 + 1;
      uVar10 = (uVar10 ^ *pbVar1) * 0x100000001b3;
    } while (uVar7 < _Size);
  }
  puVar5 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  puVar8 = *(undefined8 **)(param_1 + 2);
  if (puVar5 != *(undefined8 **)(param_1 + 2)) {
    puVar9 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    while( true ) {
      puVar8 = puVar5 + 2;
      if (0xf < (ulonglong)puVar5[5]) {
        puVar8 = (undefined8 *)*puVar8;
      }
      puVar6 = param_2;
      if (0xf < uVar2) {
        puVar6 = (undefined8 *)*param_2;
      }
      if ((_Size == puVar5[4]) &&
         ((_Size == 0 || (iVar4 = memcmp(puVar6,puVar8,_Size), iVar4 == 0)))) goto LAB_140079bb8;
      puVar8 = puVar5;
      if (puVar5 == puVar9) break;
      puVar5 = (undefined8 *)puVar5[1];
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x249249249249249) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("unordered_map/set too long");
  }
  puVar5 = (undefined8 *)FUN_14028af20(0x70);
  FUN_140016fc0(puVar5 + 2,param_2);
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  FUN_14007fc10();
  fVar11 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar11 && fVar11 != *param_1) {
    FUN_14007d000(param_1);
    puVar8 = *(undefined8 **)(param_1 + 2);
    puVar9 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    if (puVar9 != puVar8) {
      _Size_00 = puVar5[4];
      uVar2 = puVar5[5];
      puVar6 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      puVar8 = puVar9;
      while( true ) {
        puVar9 = puVar8 + 2;
        if (0xf < (ulonglong)puVar8[5]) {
          puVar9 = (undefined8 *)*puVar9;
        }
        if (uVar2 < 0x10) {
          _Buf1 = puVar5 + 2;
        }
        else {
          _Buf1 = (undefined8 *)puVar5[2];
        }
        if ((_Size_00 == puVar8[4]) &&
           ((_Size_00 == 0 || (iVar4 = memcmp(_Buf1,puVar9,_Size_00), iVar4 == 0)))) break;
        if (puVar8 == puVar6) goto LAB_140079b6d;
        puVar8 = (undefined8 *)puVar8[1];
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_140079b6d:
  puVar9 = (undefined8 *)puVar8[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = puVar8;
  puVar5[1] = puVar9;
  *puVar9 = puVar5;
  puVar8[1] = puVar5;
  lVar3 = *(longlong *)(param_1 + 6);
  uVar10 = *(ulonglong *)(param_1 + 0xc) & uVar10;
  puVar6 = *(undefined8 **)(lVar3 + uVar10 * 0x10);
  if (puVar6 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar3 + uVar10 * 0x10) = puVar5;
  }
  else {
    if (puVar6 == puVar8) {
      *(undefined8 **)(lVar3 + uVar10 * 0x10) = puVar5;
      goto LAB_140079bb8;
    }
    if (*(undefined8 **)(lVar3 + 8 + uVar10 * 0x10) != puVar9) goto LAB_140079bb8;
  }
  *(undefined8 **)(lVar3 + 8 + uVar10 * 0x10) = puVar5;
LAB_140079bb8:
  return puVar5 + 6;
}

