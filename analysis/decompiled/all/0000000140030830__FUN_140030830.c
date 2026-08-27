// Function: FUN_140030830
// Addr: 140030830
// Size: 593 bytes


undefined8 * FUN_140030830(float *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  size_t _Size;
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
  undefined8 *local_30;
  
  puVar5 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar5 = (undefined8 *)*param_2;
  }
  uVar6 = 0;
  uVar9 = 0xcbf29ce484222325;
  if (param_2[2] != 0) {
    do {
      pbVar1 = (byte *)(uVar6 + (longlong)puVar5);
      uVar6 = uVar6 + 1;
      uVar9 = (uVar9 ^ *pbVar1) * 0x100000001b3;
    } while (uVar6 < (ulonglong)param_2[2]);
  }
  FUN_1400110a0(param_1,&local_38,param_2,uVar9);
  puVar5 = local_30;
  if (local_30 == (undefined8 *)0x0) {
    if (*(longlong *)(param_1 + 4) == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
      FUN_14028c2e0("unordered_map/set too long");
    }
    puVar5 = (undefined8 *)FUN_14028af20(0x50);
    FUN_140016fc0(puVar5 + 2,param_2);
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0xf;
    *(undefined1 *)(puVar5 + 6) = 0;
    fVar10 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
    puVar8 = local_38;
    if (*param_1 <= fVar10 && fVar10 != *param_1) {
      FUN_140036ea0(param_1);
      puVar7 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + 8 + (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      puVar8 = *(undefined8 **)(param_1 + 2);
      if (puVar7 != *(undefined8 **)(param_1 + 2)) {
        uVar6 = puVar5[5];
        puVar2 = *(undefined8 **)
                  (*(longlong *)(param_1 + 6) + (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
        _Size = puVar5[4];
        puVar8 = puVar7;
        while( true ) {
          puVar7 = puVar8 + 2;
          if (0xf < (ulonglong)puVar8[5]) {
            puVar7 = (undefined8 *)*puVar7;
          }
          if (uVar6 < 0x10) {
            _Buf1 = puVar5 + 2;
          }
          else {
            _Buf1 = (undefined8 *)puVar5[2];
          }
          if ((_Size == puVar8[4]) &&
             ((_Size == 0 || (iVar4 = memcmp(_Buf1,puVar7,_Size), iVar4 == 0)))) break;
          if (puVar8 == puVar2) goto LAB_140030a0d;
          puVar8 = (undefined8 *)puVar8[1];
        }
        puVar8 = (undefined8 *)*puVar8;
      }
    }
LAB_140030a0d:
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
        return puVar5 + 6;
      }
      if (*(undefined8 **)(lVar3 + 8 + uVar9 * 0x10) != puVar7) goto LAB_140030a68;
    }
    *(undefined8 **)(lVar3 + 8 + uVar9 * 0x10) = puVar5;
  }
LAB_140030a68:
  return puVar5 + 6;
}

