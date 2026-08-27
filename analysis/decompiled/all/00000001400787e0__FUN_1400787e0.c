// Function: FUN_1400787e0
// Addr: 1400787e0
// Size: 603 bytes


undefined8 * FUN_1400787e0(float *param_1,undefined8 *param_2)

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
  undefined8 *local_30;
  
  puVar6 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar6 = (undefined8 *)*param_2;
  }
  uVar7 = 0;
  uVar10 = 0xcbf29ce484222325;
  if (param_2[2] != 0) {
    do {
      pbVar1 = (byte *)(uVar7 + (longlong)puVar6);
      uVar7 = uVar7 + 1;
      uVar10 = (uVar10 ^ *pbVar1) * 0x100000001b3;
    } while (uVar7 < (ulonglong)param_2[2]);
  }
  FUN_1400110a0(param_1,&local_38,param_2,uVar10);
  puVar6 = local_30;
  if (local_30 == (undefined8 *)0x0) {
    if (*(longlong *)(param_1 + 4) == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
      FUN_14028c2e0("unordered_map/set too long");
    }
    puVar6 = (undefined8 *)FUN_14028af20(0x50);
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    uVar4 = param_2[1];
    puVar6[2] = *param_2;
    puVar6[3] = uVar4;
    uVar4 = param_2[3];
    puVar6[4] = param_2[2];
    puVar6[5] = uVar4;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0xf;
    *(undefined1 *)(puVar6 + 6) = 0;
    fVar11 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
    puVar8 = local_38;
    if (*param_1 <= fVar11 && fVar11 != *param_1) {
      FUN_140011c30(param_1);
      puVar9 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + 8 + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      puVar8 = *(undefined8 **)(param_1 + 2);
      if (puVar9 != *(undefined8 **)(param_1 + 2)) {
        _Size = puVar6[4];
        uVar7 = puVar6[5];
        puVar2 = *(undefined8 **)
                  (*(longlong *)(param_1 + 6) + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
        puVar8 = puVar9;
        while( true ) {
          puVar9 = puVar8 + 2;
          if (0xf < (ulonglong)puVar8[5]) {
            puVar9 = (undefined8 *)*puVar9;
          }
          if (uVar7 < 0x10) {
            _Buf1 = puVar6 + 2;
          }
          else {
            _Buf1 = (undefined8 *)puVar6[2];
          }
          if ((_Size == puVar8[4]) &&
             ((_Size == 0 || (iVar5 = memcmp(_Buf1,puVar9,_Size), iVar5 == 0)))) break;
          if (puVar8 == puVar2) goto LAB_1400789c3;
          puVar8 = (undefined8 *)puVar8[1];
        }
        puVar8 = (undefined8 *)*puVar8;
      }
    }
LAB_1400789c3:
    puVar9 = (undefined8 *)puVar8[1];
    *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
    *puVar6 = puVar8;
    puVar6[1] = puVar9;
    *puVar9 = puVar6;
    puVar8[1] = puVar6;
    lVar3 = *(longlong *)(param_1 + 6);
    uVar10 = *(ulonglong *)(param_1 + 0xc) & uVar10;
    puVar2 = *(undefined8 **)(lVar3 + uVar10 * 0x10);
    if (puVar2 == *(undefined8 **)(param_1 + 2)) {
      *(undefined8 **)(lVar3 + uVar10 * 0x10) = puVar6;
    }
    else {
      if (puVar2 == puVar8) {
        *(undefined8 **)(lVar3 + uVar10 * 0x10) = puVar6;
        return puVar6 + 6;
      }
      if (*(undefined8 **)(lVar3 + 8 + uVar10 * 0x10) != puVar9) goto LAB_140078a20;
    }
    *(undefined8 **)(lVar3 + 8 + uVar10 * 0x10) = puVar6;
  }
LAB_140078a20:
  return puVar6 + 6;
}

