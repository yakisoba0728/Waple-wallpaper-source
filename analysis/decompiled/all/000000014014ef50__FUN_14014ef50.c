// Function: FUN_14014ef50
// Addr: 14014ef50
// Size: 634 bytes


void FUN_14014ef50(float *param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  size_t _Size;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined8 *_Buf1;
  undefined8 *puVar8;
  ulonglong uVar9;
  float fVar10;
  undefined8 *local_38;
  undefined8 *local_30;
  
  do {
    if (param_2 == param_3) {
      return;
    }
    if ((ulonglong)param_2[5] < 0x10) {
      puVar5 = param_2 + 2;
    }
    else {
      puVar5 = (undefined8 *)param_2[2];
    }
    uVar7 = 0;
    uVar9 = 0xcbf29ce484222325;
    if (param_2[4] != 0) {
      do {
        pbVar1 = (byte *)(uVar7 + (longlong)puVar5);
        uVar7 = uVar7 + 1;
        uVar9 = (uVar9 ^ *pbVar1) * 0x100000001b3;
      } while (uVar7 < (ulonglong)param_2[4]);
    }
    FUN_1400110a0(param_1,&local_38,param_2 + 2,uVar9);
    if (local_30 == (undefined8 *)0x0) {
      if (*(longlong *)(param_1 + 4) == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c2e0("unordered_map/set too long");
      }
      puVar5 = (undefined8 *)FUN_14028af20(0x50);
      FUN_140016fc0(puVar5 + 2,param_2 + 2);
      FUN_140016fc0(puVar5 + 6,param_2 + 6);
      fVar10 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
      if (*param_1 <= fVar10 && fVar10 != *param_1) {
        FUN_140011c30(param_1);
        puVar8 = *(undefined8 **)
                  (*(longlong *)(param_1 + 6) + 8 + (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
        puVar6 = *(undefined8 **)(param_1 + 2);
        if (puVar8 != puVar6) {
          _Size = puVar5[4];
          puVar2 = *(undefined8 **)
                    (*(longlong *)(param_1 + 6) + (uVar9 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
          puVar6 = puVar8;
          while( true ) {
            puVar8 = puVar6 + 2;
            if (0xf < (ulonglong)puVar6[5]) {
              puVar8 = (undefined8 *)*puVar8;
            }
            if ((ulonglong)puVar5[5] < 0x10) {
              _Buf1 = puVar5 + 2;
            }
            else {
              _Buf1 = (undefined8 *)puVar5[2];
            }
            if ((_Size == puVar6[4]) &&
               ((_Size == 0 || (iVar4 = memcmp(_Buf1,puVar8,_Size), iVar4 == 0)))) {
              local_38 = (undefined8 *)*puVar6;
              local_30 = puVar6;
              goto LAB_14014f13f;
            }
            if (puVar6 == puVar2) break;
            puVar6 = (undefined8 *)puVar6[1];
          }
        }
        local_30 = (undefined8 *)0x0;
        local_38 = puVar6;
      }
LAB_14014f13f:
      puVar8 = (undefined8 *)local_38[1];
      *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
      *puVar5 = local_38;
      puVar5[1] = puVar8;
      *puVar8 = puVar5;
      local_38[1] = puVar5;
      uVar9 = uVar9 & *(ulonglong *)(param_1 + 0xc);
      lVar3 = *(longlong *)(param_1 + 6);
      puVar6 = *(undefined8 **)(lVar3 + uVar9 * 0x10);
      if (puVar6 == *(undefined8 **)(param_1 + 2)) {
        *(undefined8 **)(lVar3 + uVar9 * 0x10) = puVar5;
LAB_14014f18b:
        *(undefined8 **)(lVar3 + 8 + uVar9 * 0x10) = puVar5;
      }
      else if (puVar6 == local_38) {
        *(undefined8 **)(lVar3 + uVar9 * 0x10) = puVar5;
      }
      else if (*(undefined8 **)(lVar3 + 8 + uVar9 * 0x10) == puVar8) goto LAB_14014f18b;
    }
    param_2 = (undefined8 *)*param_2;
  } while( true );
}

