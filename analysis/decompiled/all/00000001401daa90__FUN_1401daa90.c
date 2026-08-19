// Function: FUN_1401daa90
// Addr: 1401daa90
// Size: 52 bytes


undefined8 * FUN_1401daa90(float *param_1,undefined8 *param_2,byte *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float fVar10;
  
  puVar6 = *(undefined8 **)(param_1 + 2);
  uVar8 = (((((((((ulonglong)*param_3 ^ 0xcbf29ce484222325) * 0x100000001b3 ^ (ulonglong)param_3[1])
                * 0x100000001b3 ^ (ulonglong)param_3[2]) * 0x100000001b3 ^ (ulonglong)param_3[3]) *
              0x100000001b3 ^ (ulonglong)param_3[4]) * 0x100000001b3 ^ (ulonglong)param_3[5]) *
            0x100000001b3 ^ (ulonglong)param_3[6]) * 0x100000001b3 ^ (ulonglong)param_3[7]) *
          0x100000001b3;
  puVar4 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  if (puVar4 != puVar6) {
    lVar5 = puVar4[2];
    puVar6 = puVar4;
    while( true ) {
      if (*(longlong *)param_3 == lVar5) {
        *param_2 = puVar6;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      if (puVar6 == *(undefined8 **)
                     (*(longlong *)(param_1 + 6) + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10))
      break;
      puVar6 = (undefined8 *)puVar6[1];
      lVar5 = puVar6[2];
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x2e8ba2e8ba2e8ba) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c3b0("unordered_map/set too long");
  }
  puVar4 = (undefined8 *)func_0x00014028aff0(0x58);
  puVar4[2] = *(undefined8 *)param_3;
  *(undefined4 *)(puVar4 + 3) = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  lVar5 = func_0x00014028aff0(0x58);
  *(longlong *)lVar5 = lVar5;
  *(longlong *)(lVar5 + 8) = lVar5;
  puVar4[4] = lVar5;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 7;
  puVar4[10] = 8;
  *(undefined4 *)(puVar4 + 3) = 0x3f800000;
  FUN_14003e5e0(puVar4 + 6,0x10,puVar4[4]);
  uVar1 = *(ulonglong *)(param_1 + 0xe);
  if (*param_1 < (float)(*(longlong *)(param_1 + 4) + 1) / (float)uVar1) {
    fVar10 = (float)func_0x00014041a070((float)(*(longlong *)(param_1 + 4) + 1) / *param_1);
    lVar5 = 0;
    if ((DAT_140492a44 <= fVar10) && (fVar10 = fVar10 - DAT_140492a44, fVar10 < DAT_140492a44)) {
      lVar5 = -0x8000000000000000;
    }
    uVar9 = 8;
    if (8 < (ulonglong)((longlong)fVar10 + lVar5)) {
      uVar9 = (longlong)fVar10 + lVar5;
    }
    uVar7 = uVar1;
    if ((uVar1 < uVar9) && ((0x1ff < uVar1 || (uVar7 = uVar1 * 8, uVar1 * 8 < uVar9)))) {
      uVar7 = uVar9;
    }
    FUN_1401dc880(param_1,uVar7);
    puVar6 = *(undefined8 **)(param_1 + 2);
    puVar2 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    if (puVar2 != puVar6) {
      lVar5 = puVar2[2];
      puVar6 = puVar2;
      while (puVar4[2] != lVar5) {
        if (puVar6 == *(undefined8 **)
                       (*(longlong *)(param_1 + 6) + (uVar8 & *(ulonglong *)(param_1 + 0xc)) * 0x10)
           ) goto code_r0x0001401dad22;
        puVar6 = (undefined8 *)puVar6[1];
        lVar5 = puVar6[2];
      }
      puVar6 = (undefined8 *)*puVar6;
    }
  }
code_r0x0001401dad22:
  puVar2 = (undefined8 *)puVar6[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar4 = puVar6;
  puVar4[1] = puVar2;
  *puVar2 = puVar4;
  puVar6[1] = puVar4;
  lVar5 = *(longlong *)(param_1 + 6);
  uVar8 = *(ulonglong *)(param_1 + 0xc) & uVar8;
  puVar3 = *(undefined8 **)(lVar5 + uVar8 * 0x10);
  if (puVar3 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar5 + uVar8 * 0x10) = puVar4;
  }
  else {
    if (puVar3 == puVar6) {
      *(undefined8 **)(lVar5 + uVar8 * 0x10) = puVar4;
      *param_2 = puVar4;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
    if (*(undefined8 **)(lVar5 + 8 + uVar8 * 0x10) != puVar2) goto code_r0x0001401dad87;
  }
  *(undefined8 **)(lVar5 + 8 + uVar8 * 0x10) = puVar4;
code_r0x0001401dad87:
  *param_2 = puVar4;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}

