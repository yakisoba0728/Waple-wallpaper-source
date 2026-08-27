// Function: FUN_14015ac40
// Addr: 14015ac40
// Size: 630 bytes


longlong * FUN_14015ac40(float *param_1,longlong *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  size_t _Size;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *_Buf1;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  float fVar10;
  undefined8 *local_38;
  longlong local_30;
  
  puVar8 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar8 = (undefined8 *)*param_3;
  }
  uVar6 = 0;
  uVar9 = 0xcbf29ce484222325;
  if (param_3[2] != 0) {
    do {
      pbVar1 = (byte *)(uVar6 + (longlong)puVar8);
      uVar6 = uVar6 + 1;
      uVar9 = (uVar9 ^ *pbVar1) * 0x100000001b3;
    } while (uVar6 < (ulonglong)param_3[2]);
  }
  FUN_1400110a0(param_1,&local_38,param_3,uVar9);
  if (local_30 != 0) {
    *param_2 = local_30;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x1e1e1e1e1e1e1e1) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("unordered_map/set too long");
  }
  puVar5 = (undefined8 *)FUN_14028af20(0x88);
  FUN_140016fc0(puVar5 + 2,param_3);
  *(undefined4 *)((longlong)puVar5 + 0x61) = 0;
  *(undefined2 *)((longlong)puVar5 + 0x65) = 0;
  *(undefined1 *)((longlong)puVar5 + 0x67) = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  *(undefined1 *)(puVar5 + 0xc) = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5[0x10] = 0xf;
  *(undefined1 *)(puVar5 + 0xd) = 0;
  fVar10 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  puVar8 = local_38;
  if (*param_1 <= fVar10 && fVar10 != *param_1) {
    FUN_14015ba50(param_1);
    puVar7 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar8 = *(undefined8 **)(param_1 + 2);
    if (puVar7 != *(undefined8 **)(param_1 + 2)) {
      _Size = puVar5[4];
      puVar2 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      puVar8 = puVar7;
      while( true ) {
        puVar7 = puVar8 + 2;
        if (0xf < (ulonglong)puVar8[5]) {
          puVar7 = (undefined8 *)*puVar7;
        }
        if ((ulonglong)puVar5[5] < 0x10) {
          _Buf1 = puVar5 + 2;
        }
        else {
          _Buf1 = (undefined8 *)puVar5[2];
        }
        if ((_Size == puVar8[4]) &&
           ((_Size == 0 || (iVar4 = memcmp(_Buf1,puVar7,_Size), iVar4 == 0)))) break;
        if (puVar8 == puVar2) goto LAB_14015ae3e;
        puVar8 = (undefined8 *)puVar8[1];
      }
      puVar8 = (undefined8 *)*puVar8;
    }
  }
LAB_14015ae3e:
  puVar7 = (undefined8 *)puVar8[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = puVar8;
  puVar5[1] = puVar7;
  *puVar7 = puVar5;
  puVar8[1] = puVar5;
  lVar3 = *(longlong *)(param_1 + 6);
  uVar9 = *(ulonglong *)(param_1 + 0xc) & uVar9;
  puVar2 = *(undefined8 **)(lVar3 + uVar9 * 0x10);
  if (puVar2 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar3 + uVar9 * 0x10) = puVar5;
  }
  else {
    if (puVar2 == puVar8) {
      *(undefined8 **)(lVar3 + uVar9 * 0x10) = puVar5;
      goto LAB_14015ae8e;
    }
    if (*(undefined8 **)(lVar3 + 8 + uVar9 * 0x10) != puVar7) goto LAB_14015ae8e;
  }
  *(undefined8 **)(lVar3 + 8 + uVar9 * 0x10) = puVar5;
LAB_14015ae8e:
  *param_2 = (longlong)puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}

