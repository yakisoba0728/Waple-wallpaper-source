// Function: FUN_140031430
// Addr: 140031430
// Size: 597 bytes


longlong * FUN_140031430(float *param_1,longlong *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  size_t _Size;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *_Buf1;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  float fVar12;
  undefined8 *local_38;
  longlong local_30;
  
  puVar10 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar10 = (undefined8 *)*param_3;
  }
  uVar8 = 0;
  uVar11 = 0xcbf29ce484222325;
  if (param_3[2] != 0) {
    do {
      pbVar1 = (byte *)(uVar8 + (longlong)puVar10);
      uVar8 = uVar8 + 1;
      uVar11 = (uVar11 ^ *pbVar1) * 0x100000001b3;
    } while (uVar8 < (ulonglong)param_3[2]);
  }
  FUN_1400110a0(param_1,&local_38,param_3,uVar11);
  if (local_30 != 0) {
    *param_2 = local_30;
    uVar5 = 0;
    goto LAB_140031665;
  }
  if (*(longlong *)(param_1 + 4) == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("unordered_map/set too long");
  }
  puVar7 = (undefined8 *)FUN_14028af20(0x30);
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
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  fVar12 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  puVar10 = local_38;
  if (*param_1 <= fVar12 && fVar12 != *param_1) {
    FUN_140037770(param_1);
    puVar9 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar11 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar10 = *(undefined8 **)(param_1 + 2);
    if (puVar9 != *(undefined8 **)(param_1 + 2)) {
      _Size = puVar7[4];
      puVar2 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (uVar11 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      puVar10 = puVar9;
      while( true ) {
        puVar9 = puVar10 + 2;
        if (0xf < (ulonglong)puVar10[5]) {
          puVar9 = (undefined8 *)*puVar9;
        }
        if ((ulonglong)puVar7[5] < 0x10) {
          _Buf1 = puVar7 + 2;
        }
        else {
          _Buf1 = (undefined8 *)puVar7[2];
        }
        if ((_Size == puVar10[4]) &&
           ((_Size == 0 || (iVar6 = memcmp(_Buf1,puVar9,_Size), iVar6 == 0)))) break;
        if (puVar10 == puVar2) goto LAB_14003160a;
        puVar10 = (undefined8 *)puVar10[1];
      }
      puVar10 = (undefined8 *)*puVar10;
    }
  }
LAB_14003160a:
  puVar9 = (undefined8 *)puVar10[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar7 = puVar10;
  puVar7[1] = puVar9;
  *puVar9 = puVar7;
  puVar10[1] = puVar7;
  lVar3 = *(longlong *)(param_1 + 6);
  uVar11 = *(ulonglong *)(param_1 + 0xc) & uVar11;
  puVar2 = *(undefined8 **)(lVar3 + uVar11 * 0x10);
  if (puVar2 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar3 + uVar11 * 0x10) = puVar7;
LAB_140031655:
    *(undefined8 **)(lVar3 + 8 + uVar11 * 0x10) = puVar7;
  }
  else if (puVar2 == puVar10) {
    *(undefined8 **)(lVar3 + uVar11 * 0x10) = puVar7;
  }
  else if (*(undefined8 **)(lVar3 + 8 + uVar11 * 0x10) == puVar9) goto LAB_140031655;
  *param_2 = (longlong)puVar7;
  uVar5 = 1;
LAB_140031665:
  *(undefined1 *)(param_2 + 1) = uVar5;
  return param_2;
}

