// Function: FUN_140132870
// Addr: 140132870
// Size: 706 bytes


longlong * FUN_140132870(float *param_1,longlong *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  size_t _Size;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *_Buf1;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  undefined8 *local_38;
  longlong local_30;
  
  puVar4 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar4 = (undefined8 *)*param_3;
  }
  uVar5 = 0;
  uVar10 = 0xcbf29ce484222325;
  if (param_3[2] != 0) {
    do {
      pbVar1 = (byte *)(uVar5 + (longlong)puVar4);
      uVar5 = uVar5 + 1;
      uVar10 = (uVar10 ^ *pbVar1) * 0x100000001b3;
    } while (uVar5 < (ulonglong)param_3[2]);
  }
  FUN_1400dfa90(param_1,&local_38,param_3,uVar10);
  if (local_30 != 0) {
    *param_2 = local_30;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (*(longlong *)(param_1 + 4) == 0x249249249249249) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_14028af20(0x70);
  FUN_140016fc0(puVar4 + 2,param_3);
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0xf;
  *(undefined1 *)(puVar4 + 6) = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0xf;
  *(undefined1 *)(puVar4 + 10) = 0;
  uVar5 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar5) {
    fVar11 = (float)FUN_140419fa0((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar6 = 0;
    if ((DAT_140492974 <= fVar11) && (fVar11 = fVar11 - DAT_140492974, fVar11 < DAT_140492974)) {
      lVar6 = -0x8000000000000000;
    }
    uVar7 = 8;
    if (8 < (ulonglong)((longlong)fVar11 + lVar6)) {
      uVar7 = (longlong)fVar11 + lVar6;
    }
    uVar9 = uVar5;
    if ((uVar5 < uVar7) && ((0x1ff < uVar5 || (uVar9 = uVar5 * 8, uVar5 * 8 < uVar7)))) {
      uVar9 = uVar7;
    }
    FUN_140133d90(param_1,uVar9);
    puVar8 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    local_38 = *(undefined8 **)(param_1 + 2);
    if (puVar8 != *(undefined8 **)(param_1 + 2)) {
      _Size = puVar4[4];
      puVar2 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (uVar10 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      local_38 = puVar8;
      while( true ) {
        puVar8 = local_38 + 2;
        if (0xf < (ulonglong)local_38[5]) {
          puVar8 = (undefined8 *)*puVar8;
        }
        if ((ulonglong)puVar4[5] < 0x10) {
          _Buf1 = puVar4 + 2;
        }
        else {
          _Buf1 = (undefined8 *)puVar4[2];
        }
        if ((_Size == local_38[4]) &&
           ((_Size == 0 || (iVar3 = memcmp(_Buf1,puVar8,_Size), iVar3 == 0)))) break;
        if (local_38 == puVar2) goto LAB_140132aba;
        local_38 = (undefined8 *)local_38[1];
      }
      local_38 = (undefined8 *)*local_38;
    }
  }
LAB_140132aba:
  puVar8 = (undefined8 *)local_38[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar4 = local_38;
  puVar4[1] = puVar8;
  *puVar8 = puVar4;
  local_38[1] = puVar4;
  lVar6 = *(longlong *)(param_1 + 6);
  uVar10 = *(ulonglong *)(param_1 + 0xc) & uVar10;
  puVar2 = *(undefined8 **)(lVar6 + uVar10 * 0x10);
  if (puVar2 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar6 + uVar10 * 0x10) = puVar4;
  }
  else {
    if (puVar2 == local_38) {
      *(undefined8 **)(lVar6 + uVar10 * 0x10) = puVar4;
      goto LAB_140132b0a;
    }
    if (*(undefined8 **)(lVar6 + 8 + uVar10 * 0x10) != puVar8) goto LAB_140132b0a;
  }
  *(undefined8 **)(lVar6 + 8 + uVar10 * 0x10) = puVar4;
LAB_140132b0a:
  *param_2 = (longlong)puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}

