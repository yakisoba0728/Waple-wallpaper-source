// Function: FUN_140281730
// Addr: 140281730
// Size: 451 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140281730(longlong *param_1,int param_2,double *param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  longlong local_48 [5];
  
  iVar10 = (**(code **)(*(longlong *)*param_1 + 0x10))();
  if (iVar10 == 2) {
    lVar12 = *param_1;
    plVar11 = (longlong *)FUN_14028af20(0x50);
    dVar8 = *(double *)(lVar12 + 0x30);
    dVar9 = *(double *)(lVar12 + 0x38);
    dVar5 = *(double *)(lVar12 + 0x20);
    dVar6 = *(double *)(lVar12 + 0x28);
    dVar13 = *(double *)(lVar12 + 0x10);
    dVar7 = *(double *)(lVar12 + 0x18);
    *(undefined4 *)(plVar11 + 1) = *(undefined4 *)(lVar12 + 8);
    *plVar11 = (longlong)&PTR_FUN_140492548;
    dVar15 = dVar5 * _DAT_140492ed0;
    dVar14 = dVar6 * _UNK_140492ed8;
    dVar5 = dVar5 * _DAT_140492ee0;
    dVar6 = dVar6 * _UNK_140492ee8;
    dVar16 = dVar8 * _DAT_140492e80;
    dVar17 = dVar9 * _UNK_140492e88;
    plVar11[2] = (longlong)dVar13;
    plVar11[3] = (longlong)dVar7;
    dVar13 = dVar13 * _DAT_140492e90;
    dVar6 = dVar6 + dVar17;
    dVar14 = dVar7 * _UNK_140492e98 + dVar14;
    auVar4._8_4_ = SUB84(dVar6,0);
    auVar4._0_8_ = dVar5 + dVar16;
    auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(plVar11 + 6) = auVar4;
    auVar3._8_4_ = SUB84(dVar14,0);
    auVar3._0_8_ = dVar13 + dVar15;
    auVar3._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    *(undefined1 (*) [16])(plVar11 + 4) = auVar3;
    plVar11[8] = (longlong)dVar8;
    plVar11[9] = (longlong)dVar9;
    if (param_1 != local_48) {
      puVar1 = (undefined8 *)*param_1;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar12 = (**(code **)(*plVar11 + 8))(plVar11);
      *param_1 = lVar12;
    }
    (**(code **)*plVar11)(plVar11,1);
  }
  else if (iVar10 != 3) {
    return;
  }
  lVar12 = *param_1;
  if (param_2 == 0) {
    dVar15 = *(double *)(lVar12 + 0x20) - *(double *)(lVar12 + 0x10);
    dVar14 = *(double *)(lVar12 + 0x28) - *(double *)(lVar12 + 0x18);
    dVar15 = dVar14 * dVar14 + dVar15 * dVar15;
    if (dVar15 < 0.0) {
      dVar15 = (double)FUN_14041f780(SUB84(dVar15,0));
    }
    else {
      dVar15 = SQRT(dVar15);
    }
    dVar14 = *(double *)(lVar12 + 0x28) + param_3[1] * dVar15;
    auVar2._8_4_ = SUB84(dVar14,0);
    auVar2._0_8_ = *(double *)(lVar12 + 0x20) + *param_3 * dVar15;
    auVar2._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    *(undefined1 (*) [16])(lVar12 + 0x20) = auVar2;
  }
  else if (param_2 == 1) {
    dVar15 = *(double *)(lVar12 + 0x30);
    dVar14 = dVar15 - *(double *)(lVar12 + 0x40);
    dVar13 = *(double *)(lVar12 + 0x38) - *(double *)(lVar12 + 0x48);
    dVar14 = dVar13 * dVar13 + dVar14 * dVar14;
    if (dVar14 < 0.0) {
      dVar14 = (double)FUN_14041f780(SUB84(dVar14,0));
    }
    else {
      dVar14 = SQRT(dVar14);
    }
    dVar13 = *param_3;
    *(double *)(lVar12 + 0x38) = dVar14 * param_3[1] + *(double *)(lVar12 + 0x38);
    *(double *)(lVar12 + 0x30) = dVar14 * dVar13 + dVar15;
    return;
  }
  return;
}

