// Function: FUN_140032960
// Addr: 140032960
// Size: 599 bytes


longlong * FUN_140032960(float *param_1,longlong *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  size_t _Size;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
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
      pbVar1 = (byte *)((longlong)puVar9 + uVar7);
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
  if (*(longlong *)(param_1 + 4) == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("unordered_map/set too long");
  }
  puVar6 = (undefined8 *)FUN_14028af20(0x30);
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  uVar4 = param_3[1];
  puVar6[2] = *param_3;
  puVar6[3] = uVar4;
  uVar4 = param_3[3];
  puVar6[4] = param_3[2];
  puVar6[5] = uVar4;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  fVar11 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  puVar9 = local_38;
  if (*param_1 <= fVar11 && fVar11 != *param_1) {
    FUN_140037770(param_1);
    puVar8 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar9 = *(undefined8 **)(param_1 + 2);
    if (puVar8 != *(undefined8 **)(param_1 + 2)) {
      _Size = puVar6[4];
      puVar2 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      puVar9 = puVar8;
      while( true ) {
        puVar8 = puVar9 + 2;
        if (0xf < (ulonglong)puVar9[5]) {
          puVar8 = (undefined8 *)*puVar8;
        }
        if ((ulonglong)puVar6[5] < 0x10) {
          _Buf1 = puVar6 + 2;
        }
        else {
          _Buf1 = (undefined8 *)puVar6[2];
        }
        if ((_Size == puVar9[4]) &&
           ((_Size == 0 || (iVar5 = memcmp(_Buf1,puVar8,_Size), iVar5 == 0)))) break;
        if (puVar9 == puVar2) goto LAB_140032b3f;
        puVar9 = (undefined8 *)puVar9[1];
      }
      puVar9 = (undefined8 *)*puVar9;
    }
  }
LAB_140032b3f:
  puVar8 = (undefined8 *)puVar9[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar6 = puVar9;
  puVar6[1] = puVar8;
  *puVar8 = puVar6;
  puVar9[1] = puVar6;
  lVar3 = *(longlong *)(param_1 + 6);
  uVar10 = *(ulonglong *)(param_1 + 0xc) & uVar10;
  puVar2 = *(undefined8 **)(lVar3 + uVar10 * 0x10);
  if (puVar2 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar3 + uVar10 * 0x10) = puVar6;
  }
  else {
    if (puVar2 == puVar9) {
      *(undefined8 **)(lVar3 + uVar10 * 0x10) = puVar6;
      goto LAB_140032b8f;
    }
    if (*(undefined8 **)(lVar3 + 8 + uVar10 * 0x10) != puVar8) goto LAB_140032b8f;
  }
  *(undefined8 **)(lVar3 + 8 + uVar10 * 0x10) = puVar6;
LAB_140032b8f:
  *param_2 = (longlong)puVar6;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}

