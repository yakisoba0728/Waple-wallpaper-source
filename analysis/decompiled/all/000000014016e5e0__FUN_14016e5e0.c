// Function: FUN_14016e5e0
// Addr: 14016e5e0
// Size: 594 bytes


longlong * FUN_14016e5e0(float *param_1,longlong *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  size_t _Size;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *_Buf1;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  float fVar11;
  undefined8 *local_38;
  longlong local_30;
  
  puVar9 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar9 = (undefined8 *)*param_3;
  }
  uVar7 = 0;
  uVar10 = 0xcbf29ce484222325;
  if (param_3[2] != 0) {
    do {
      pbVar1 = (byte *)(uVar7 + (longlong)puVar9);
      uVar7 = uVar7 + 1;
      uVar10 = (uVar10 ^ *pbVar1) * 0x100000001b3;
    } while (uVar7 < (ulonglong)param_3[2]);
  }
  FUN_1400110a0(param_1,&local_38,param_3,uVar10);
  if (local_30 != 0) {
    *param_2 = local_30;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x2e8ba2e8ba2e8ba) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("unordered_map/set too long");
  }
  puVar5 = (undefined8 *)FUN_14028af20(0x58);
  FUN_140016fc0(puVar5 + 2,param_3);
  puVar5[10] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0xf;
  *(undefined1 *)(puVar5 + 6) = 0;
  fVar11 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  puVar9 = local_38;
  if (*param_1 <= fVar11 && fVar11 != *param_1) {
    uVar6 = FUN_140012f40(param_1);
    FUN_14016f030(param_1,uVar6);
    puVar8 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar9 = *(undefined8 **)(param_1 + 2);
    if (puVar8 != *(undefined8 **)(param_1 + 2)) {
      _Size = puVar5[4];
      puVar2 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      puVar9 = puVar8;
      while( true ) {
        puVar8 = puVar9 + 2;
        if (0xf < (ulonglong)puVar9[5]) {
          puVar8 = (undefined8 *)*puVar8;
        }
        if ((ulonglong)puVar5[5] < 0x10) {
          _Buf1 = puVar5 + 2;
        }
        else {
          _Buf1 = (undefined8 *)puVar5[2];
        }
        if ((_Size == puVar9[4]) &&
           ((_Size == 0 || (iVar4 = memcmp(_Buf1,puVar8,_Size), iVar4 == 0)))) break;
        if (puVar9 == puVar2) goto LAB_14016e7ba;
        puVar9 = (undefined8 *)puVar9[1];
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_14016e7ba:
  puVar8 = (undefined8 *)puVar9[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = puVar9;
  puVar5[1] = puVar8;
  *puVar8 = puVar5;
  puVar9[1] = puVar5;
  lVar3 = *(longlong *)(param_1 + 6);
  uVar10 = *(ulonglong *)(param_1 + 0xc) & uVar10;
  puVar2 = *(undefined8 **)(lVar3 + uVar10 * 0x10);
  if (puVar2 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar3 + uVar10 * 0x10) = puVar5;
  }
  else {
    if (puVar2 == puVar9) {
      *(undefined8 **)(lVar3 + uVar10 * 0x10) = puVar5;
      goto LAB_14016e80a;
    }
    if (*(undefined8 **)(lVar3 + 8 + uVar10 * 0x10) != puVar8) goto LAB_14016e80a;
  }
  *(undefined8 **)(lVar3 + 8 + uVar10 * 0x10) = puVar5;
LAB_14016e80a:
  *param_2 = (longlong)puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}

