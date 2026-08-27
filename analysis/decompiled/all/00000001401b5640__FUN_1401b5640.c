// Function: FUN_1401b5640
// Addr: 1401b5640
// Size: 683 bytes


undefined8 * FUN_1401b5640(float *param_1,undefined8 *param_2,float *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  
  uVar3 = FUN_1401b55d0(param_1,param_3);
  puVar7 = *(undefined8 **)(param_1 + 2);
  puVar4 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar3 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  if (puVar4 != puVar7) {
    puVar7 = puVar4;
    while( true ) {
      if (*param_3 == *(float *)(puVar7 + 2)) {
        *param_2 = puVar7;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar7 == *(undefined8 **)
                     (*(longlong *)(param_1 + 6) + (uVar3 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      break;
      puVar7 = (undefined8 *)puVar7[1];
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x222222222222222) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)FUN_14028af20(0x78);
  *(float *)(puVar4 + 2) = *param_3;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0;
  *(undefined4 *)(puVar4 + 7) = 0;
  lVar5 = FUN_14028af20(0x28);
  *(longlong *)lVar5 = lVar5;
  *(longlong *)(lVar5 + 8) = lVar5;
  puVar4[8] = lVar5;
  puVar4[10] = 0;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 7;
  puVar4[0xe] = 8;
  *(undefined4 *)(puVar4 + 7) = 0x3f800000;
  FUN_14004f190(puVar4 + 10,0x10,puVar4[8]);
  uVar1 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar1) {
    fVar10 = (float)FUN_140419fa0((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar5 = 0;
    if ((DAT_140492974 <= fVar10) && (fVar10 = fVar10 - DAT_140492974, fVar10 < DAT_140492974)) {
      lVar5 = -0x8000000000000000;
    }
    uVar9 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar5)) {
      uVar9 = (longlong)fVar10 + lVar5;
    }
    uVar8 = uVar1;
    if ((uVar1 < uVar9) && ((0x1ff < uVar1 || (uVar8 = uVar1 * 8, uVar1 * 8 < uVar9)))) {
      uVar8 = uVar9;
    }
    FUN_1401b7500(param_1,uVar8);
    puVar6 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar3 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    puVar7 = *(undefined8 **)(param_1 + 2);
    if (puVar6 != *(undefined8 **)(param_1 + 2)) {
      for (; *(float *)(puVar4 + 2) != *(float *)(puVar6 + 2); puVar6 = (undefined8 *)puVar6[1]) {
        puVar7 = puVar6;
        if (puVar6 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (uVar3 & *(ulonglong *)(param_1 + 0xc)) * 0x10)
           ) goto LAB_1401b586b;
      }
      puVar7 = (undefined8 *)*puVar6;
    }
  }
LAB_1401b586b:
  puVar6 = (undefined8 *)puVar7[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar4 = puVar7;
  puVar4[1] = puVar6;
  *puVar6 = puVar4;
  puVar7[1] = puVar4;
  lVar5 = *(longlong *)(param_1 + 6);
  uVar3 = *(ulonglong *)(param_1 + 0xc) & uVar3;
  puVar2 = *(undefined8 **)(lVar5 + uVar3 * 0x10);
  if (puVar2 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar5 + uVar3 * 0x10) = puVar4;
  }
  else {
    if (puVar2 == puVar7) {
      *(undefined8 **)(lVar5 + uVar3 * 0x10) = puVar4;
      goto LAB_1401b58bb;
    }
    if (*(undefined8 **)(lVar5 + 8 + uVar3 * 0x10) != puVar6) goto LAB_1401b58bb;
  }
  *(undefined8 **)(lVar5 + 8 + uVar3 * 0x10) = puVar4;
LAB_1401b58bb:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}

