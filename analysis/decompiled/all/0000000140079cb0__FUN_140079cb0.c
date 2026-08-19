// Function: FUN_140079cb0
// Addr: 140079cb0
// Size: 451 bytes


undefined8 * FUN_140079cb0(float *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  ulonglong uVar16;
  float fVar17;
  
  uVar2 = param_2[3];
  uVar3 = param_2[2];
  puVar11 = param_2;
  if (0xf < uVar2) {
    puVar11 = (undefined8 *)*param_2;
  }
  uVar12 = 0;
  uVar16 = 0xcbf29ce484222325;
  if (uVar3 != 0) {
    do {
      pbVar1 = (byte *)(uVar12 + (longlong)puVar11);
      uVar12 = uVar12 + 1;
      uVar16 = (uVar16 ^ *pbVar1) * 0x100000001b3;
    } while (uVar12 < uVar3);
  }
  puVar11 = *(undefined8 **)
             (*(longlong *)(param_1 + 6) + 8 + (uVar16 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
  puVar13 = *(undefined8 **)(param_1 + 2);
  if (puVar11 != *(undefined8 **)(param_1 + 2)) {
    puVar14 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + (uVar16 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    while( true ) {
      plVar15 = puVar11 + 2;
      if (0xf < (ulonglong)puVar11[5]) {
        plVar15 = (longlong *)*plVar15;
      }
      puVar13 = param_2;
      if (0xf < uVar2) {
        puVar13 = (undefined8 *)*param_2;
      }
      if ((uVar3 == puVar11[4]) &&
         ((uVar3 == 0 || (iVar10 = func_0x0001404210c0(puVar13,plVar15,uVar3), iVar10 == 0))))
      goto UNWIND_INFO_140079e75_UnwindCodes_85__OffsetInProlog;
      puVar13 = puVar11;
      if (puVar11 == puVar14) break;
      puVar11 = (undefined8 *)puVar11[1];
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x249249249249249) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c3b0("unordered_map/set too long");
  }
  puVar11 = (undefined8 *)func_0x00014028aff0(0x70);
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  uVar9 = param_2[1];
  puVar11[2] = *param_2;
  puVar11[3] = uVar9;
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar7 = *(undefined4 *)(param_2 + 3);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(puVar11 + 4) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)puVar11 + 0x24) = uVar6;
  *(undefined4 *)(puVar11 + 5) = uVar7;
  *(undefined4 *)((longlong)puVar11 + 0x2c) = uVar8;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[8] = 0;
  puVar11[9] = 0;
  puVar11[10] = 0;
  puVar11[0xb] = 0;
  puVar11[0xc] = 0;
  puVar11[0xd] = 0;
  func_0x00014007fce0();
  fVar17 = (float)(*(longlong *)(param_1 + 4) + 1) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar17 && fVar17 != *param_1) {
    FUN_14007d0d0(param_1);
    puVar13 = *(undefined8 **)(param_1 + 2);
    puVar14 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + 8 + (uVar16 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
    if (puVar14 != puVar13) {
      uVar2 = puVar11[5];
      lVar4 = puVar11[4];
      puVar5 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (uVar16 & *(ulonglong *)(param_1 + 0xc)) * 0x10);
      puVar13 = puVar14;
      while( true ) {
        plVar15 = puVar13 + 2;
        if (0xf < (ulonglong)puVar13[5]) {
          plVar15 = (longlong *)*plVar15;
        }
        if (uVar2 < 0x10) {
          puVar14 = puVar11 + 2;
        }
        else {
          puVar14 = (undefined8 *)puVar11[2];
        }
        if ((lVar4 == puVar13[4]) &&
           ((lVar4 == 0 || (iVar10 = func_0x0001404210c0(puVar14,plVar15,lVar4), iVar10 == 0))))
        break;
        if (puVar13 == puVar5) goto UNWIND_INFO_140079e75_UnwindCodes_47__UnwindOpCode;
        puVar13 = (undefined8 *)puVar13[1];
      }
      puVar13 = (undefined8 *)*puVar13;
    }
  }
UNWIND_INFO_140079e75_UnwindCodes_47__UnwindOpCode:
  puVar14 = (undefined8 *)puVar13[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar11 = puVar13;
  puVar11[1] = puVar14;
  *puVar14 = puVar11;
  puVar13[1] = puVar11;
  lVar4 = *(longlong *)(param_1 + 6);
  uVar16 = *(ulonglong *)(param_1 + 0xc) & uVar16;
  puVar5 = *(undefined8 **)(lVar4 + uVar16 * 0x10);
  if (puVar5 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar4 + uVar16 * 0x10) = puVar11;
  }
  else {
    if (puVar5 == puVar13) {
      *(undefined8 **)(lVar4 + uVar16 * 0x10) = puVar11;
      goto UNWIND_INFO_140079e75_UnwindCodes_85__OffsetInProlog;
    }
    if (*(undefined8 **)(lVar4 + 8 + uVar16 * 0x10) != puVar14)
    goto UNWIND_INFO_140079e75_UnwindCodes_85__OffsetInProlog;
  }
  *(undefined8 **)(lVar4 + 8 + uVar16 * 0x10) = puVar11;
UNWIND_INFO_140079e75_UnwindCodes_85__OffsetInProlog:
  return puVar11 + 6;
}

