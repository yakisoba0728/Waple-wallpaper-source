// Function: FUN_1403f4b90
// Addr: 1403f4b90
// Size: 707 bytes


void FUN_1403f4b90(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  longlong lVar7;
  double dVar8;
  double *pdVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  double *pdVar13;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  uVar12 = *(uint *)(param_1 + 0x1c);
  puVar1 = (undefined1 *)(param_1 + 0x18);
  pdVar13 = &DAT_1404e4f20;
  if (uVar12 - 4 < uVar12) {
    pdVar9 = (double *)(param_1 + ((ulonglong)(uVar12 - 4) + 4) * 8);
    dVar6 = *pdVar9;
  }
  else {
    *puVar1 = 1;
    pdVar9 = &DAT_1404e4f20;
    DAT_1404e4f20 = DAT_14045dd10;
    dVar6 = DAT_14045dd10;
  }
  local_88 = *pdVar9;
  if (uVar12 - 3 < *(uint *)(param_1 + 0x1c)) {
    lVar7 = (ulonglong)(uVar12 - 3) + 1;
    puVar10 = (undefined8 *)(puVar1 + lVar7 * 8);
    dVar8 = *(double *)(puVar1 + lVar7 * 8);
  }
  else {
    *puVar1 = 1;
    puVar10 = &DAT_1404e4f20;
    DAT_1404e4f20 = DAT_14045dd10;
    dVar8 = DAT_14045dd10;
  }
  dStack_80 = (double)*puVar10;
  uVar5 = *(uint *)(param_1 + 0x1c);
  if (uVar12 - 2 < uVar5) {
    pdVar9 = (double *)(puVar1 + ((ulonglong)(uVar12 - 2) + 1) * 8);
  }
  else {
    *puVar1 = 1;
    DAT_1404e4f20 = DAT_14045dd10;
    pdVar9 = &DAT_1404e4f20;
    uVar5 = *(uint *)(param_1 + 0x1c);
  }
  uVar11 = (uint)*pdVar9;
  plVar2 = (longlong *)(param_2 + 0x28);
  if (uVar11 < 0x100) {
    uVar4 = (uint)(byte)(&DAT_14045d050)[uVar11];
    lVar7 = *plVar2;
    if ((double *)*(undefined8 **)(lVar7 + 0x50) == &DAT_14045dd10) {
      if ((*(int *)(lVar7 + 0xf4) != 0) || (0xe4 < uVar11)) goto LAB_1403f4cdd;
    }
    else {
      uVar4 = FUN_1403c9290(*(undefined8 **)(lVar7 + 0x50),(&DAT_14045d050)[uVar11],
                            *(undefined4 *)(lVar7 + 0x128));
    }
  }
  else {
LAB_1403f4cdd:
    uVar4 = 0;
  }
  if (uVar12 - 1 < uVar5) {
    pdVar13 = (double *)(puVar1 + ((ulonglong)(uVar12 - 1) + 1) * 8);
  }
  else {
    *puVar1 = 1;
    DAT_1404e4f20 = DAT_14045dd10;
  }
  uVar12 = (uint)*pdVar13;
  lVar7 = *plVar2;
  if (uVar12 < 0x100) {
    uVar5 = (uint)(byte)(&DAT_14045d050)[uVar12];
    if ((double *)*(undefined8 **)(lVar7 + 0x50) != &DAT_14045dd10) {
      uVar5 = FUN_1403c9290(*(undefined8 **)(lVar7 + 0x50),(&DAT_14045d050)[uVar12],
                            *(undefined4 *)(lVar7 + 0x128));
      goto LAB_1403f4d57;
    }
    if ((*(int *)(lVar7 + 0xf4) == 0) && (uVar12 < 0xe5)) goto LAB_1403f4d57;
  }
  uVar5 = 0;
LAB_1403f4d57:
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_88 = 0.0;
  dStack_80 = 0.0;
  local_78 = 0.0;
  dStack_70 = 0.0;
  if ((((*(char *)(param_1 + 0x11e0) == '\0') && (uVar4 != 0)) && (uVar5 != 0)) &&
     ((cVar3 = FUN_14039ada0(lVar7,uVar4,&local_68,1), cVar3 != '\0' &&
      (cVar3 = FUN_14039ada0(*plVar2,uVar5,&local_88,1), cVar3 != '\0')))) {
    FUN_1403ec1e0(param_2 + 8,&local_68);
    if ((local_88 < local_78) && (dStack_80 < dStack_70)) {
      local_88 = local_88 + dVar6;
      dStack_80 = dStack_80 + dVar8;
      local_78 = local_78 + dVar6;
      dStack_70 = dStack_70 + dVar8;
    }
    FUN_1403ec1e0(param_2 + 8,&local_88);
  }
  else {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + 1;
  }
  return;
}

