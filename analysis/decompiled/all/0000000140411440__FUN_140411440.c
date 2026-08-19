// Function: FUN_140411440
// Addr: 140411440
// Size: 2542 bytes


void FUN_140411440(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double *pdVar15;
  double *pdVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  undefined8 in_stack_fffffffffffffec8;
  undefined8 uVar26;
  undefined4 uVar27;
  undefined8 in_stack_fffffffffffffed0;
  undefined4 uVar29;
  undefined8 uVar28;
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  
  uVar18 = *(uint *)(param_1 + 0x1c);
  if (((byte)uVar18 & 7) < 4) {
    uVar19 = 0;
    if (7 < uVar18) {
      do {
        uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
        uVar27 = (undefined4)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
        dVar13 = *(double *)(param_1 + 0x11c0);
        if (uVar19 < *(uint *)(param_1 + 0x1c)) {
          pdVar15 = (double *)(param_1 + ((ulonglong)uVar19 + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar15 = &DAT_1404e4ff0;
        }
        dVar23 = *(double *)(param_1 + 0x11c8) + *pdVar15;
        if (uVar19 + 2 < *(uint *)(param_1 + 0x1c)) {
          pdVar15 = (double *)(param_1 + ((ulonglong)(uVar19 + 2) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar15 = &DAT_1404e4ff0;
          DAT_1404e4ff0 = DAT_14045dde0;
        }
        if (uVar19 + 1 < *(uint *)(param_1 + 0x1c)) {
          pdVar16 = (double *)(param_1 + ((ulonglong)(uVar19 + 1) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar16 = &DAT_1404e4ff0;
        }
        dVar24 = dVar13 + *pdVar16;
        dVar22 = dVar23 + *pdVar15;
        if (uVar19 + 3 < *(uint *)(param_1 + 0x1c)) {
          pdVar15 = (double *)(param_1 + ((ulonglong)(uVar19 + 3) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar15 = &DAT_1404e4ff0;
        }
        dVar12 = dVar24 + *pdVar15;
        fVar3 = *(float *)(param_2[1] + 0x54);
        fVar4 = *(float *)(param_2[1] + 0x50);
        plVar6 = (longlong *)*param_2;
        plVar2 = plVar6 + 2;
        lVar7 = plVar6[1];
        lVar8 = *plVar6;
        fVar25 = fVar3 * (float)dVar22;
        if ((int)plVar6[2] == 0) {
          uVar17 = 0;
          if (*(undefined8 **)(lVar8 + 0x38) != (undefined8 *)0x0) {
            uVar17 = **(undefined8 **)(lVar8 + 0x38);
          }
          uVar26 = CONCAT44(uVar21,(int)plVar6[4]);
          (**(code **)(lVar8 + 0x10))
                    (lVar8,lVar7,plVar2,*(undefined4 *)((longlong)plVar6 + 0x1c),uVar26,uVar17);
          uVar21 = (undefined4)((ulonglong)uVar26 >> 0x20);
          uVar27 = (undefined4)((ulonglong)uVar17 >> 0x20);
          *(undefined4 *)((longlong)plVar6 + 0x14) = *(undefined4 *)((longlong)plVar6 + 0x1c);
          *(int *)(plVar6 + 3) = (int)plVar6[4];
          *(undefined4 *)plVar2 = 1;
        }
        uVar17 = 0;
        if (*(longlong *)(lVar8 + 0x38) != 0) {
          uVar17 = *(undefined8 *)(*(longlong *)(lVar8 + 0x38) + 0x18);
        }
        uVar28 = CONCAT44(uVar27,fVar4 * (float)dVar24);
        uVar26 = CONCAT44(uVar21,(float)dVar23 * fVar3);
        (**(code **)(lVar8 + 0x28))
                  (lVar8,lVar7,plVar2,(float)dVar13 * fVar4,uVar26,uVar28,fVar25,
                   (float)dVar12 * fVar4,fVar25,uVar17);
        uVar21 = (undefined4)((ulonglong)uVar26 >> 0x20);
        uVar27 = (undefined4)((ulonglong)uVar28 >> 0x20);
        *(float *)((longlong)plVar6 + 0x1c) = (float)dVar12 * fVar4;
        *(float *)(plVar6 + 4) = fVar25;
        *(double *)(param_1 + 0x11c0) = dVar12;
        *(double *)(param_1 + 0x11c8) = dVar22;
        if (uVar19 + 4 < *(uint *)(param_1 + 0x1c)) {
          pdVar15 = (double *)(param_1 + ((ulonglong)(uVar19 + 4) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar15 = &DAT_1404e4ff0;
        }
        dVar13 = *pdVar15;
        if (uVar19 + 6 < *(uint *)(param_1 + 0x1c)) {
          pdVar15 = (double *)(param_1 + ((ulonglong)(uVar19 + 6) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar15 = &DAT_1404e4ff0;
          DAT_1404e4ff0 = DAT_14045dde0;
        }
        if (uVar19 + 5 < *(uint *)(param_1 + 0x1c)) {
          pdVar16 = (double *)(param_1 + ((ulonglong)(uVar19 + 5) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar16 = &DAT_1404e4ff0;
        }
        dVar23 = *pdVar15;
        dVar24 = dVar12 + dVar13 + *pdVar16;
        if (uVar19 + 7 < *(uint *)(param_1 + 0x1c)) {
          pdVar15 = (double *)(param_1 + ((ulonglong)(uVar19 + 7) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar15 = &DAT_1404e4ff0;
        }
        uVar18 = *(uint *)(param_1 + 0x1c);
        dVar5 = dVar22 + dVar23 + *pdVar15;
        dVar14 = dVar24;
        if ((uVar18 - uVar19 < 0x10) && ((uVar18 & 1) != 0)) {
          if (uVar19 + 8 < uVar18) {
            dVar14 = dVar24 + *(double *)(param_1 + ((ulonglong)(uVar19 + 8) + 4) * 8);
          }
          else {
            *(undefined1 *)(param_1 + 0x18) = 1;
            DAT_1404e4ff0 = DAT_14045dde0;
            dVar14 = dVar24 + DAT_14045dde0;
          }
        }
        fVar3 = *(float *)(param_2[1] + 0x54);
        fVar4 = *(float *)(param_2[1] + 0x50);
        plVar6 = (longlong *)*param_2;
        plVar2 = plVar6 + 2;
        lVar7 = plVar6[1];
        lVar8 = *plVar6;
        fVar25 = (float)dVar5 * fVar3;
        if ((int)plVar6[2] == 0) {
          uVar17 = 0;
          if (*(undefined8 **)(lVar8 + 0x38) != (undefined8 *)0x0) {
            uVar17 = **(undefined8 **)(lVar8 + 0x38);
          }
          uVar26 = CONCAT44(uVar21,(int)plVar6[4]);
          (**(code **)(lVar8 + 0x10))
                    (lVar8,lVar7,plVar2,*(undefined4 *)((longlong)plVar6 + 0x1c),uVar26,uVar17);
          uVar21 = (undefined4)((ulonglong)uVar26 >> 0x20);
          uVar27 = (undefined4)((ulonglong)uVar17 >> 0x20);
          *(undefined4 *)((longlong)plVar6 + 0x14) = *(undefined4 *)((longlong)plVar6 + 0x1c);
          *(int *)(plVar6 + 3) = (int)plVar6[4];
          *(undefined4 *)plVar2 = 1;
        }
        uVar17 = 0;
        if (*(longlong *)(lVar8 + 0x38) != 0) {
          uVar17 = *(undefined8 *)(*(longlong *)(lVar8 + 0x38) + 0x18);
        }
        in_stack_fffffffffffffed0 = CONCAT44(uVar27,fVar4 * (float)dVar24);
        in_stack_fffffffffffffec8 = CONCAT44(uVar21,fVar3 * (float)dVar22);
        (**(code **)(lVar8 + 0x28))
                  (lVar8,lVar7,plVar2,(float)(dVar12 + dVar13) * fVar4,in_stack_fffffffffffffec8,
                   in_stack_fffffffffffffed0,fVar3 * (float)(dVar22 + dVar23),(float)dVar14 * fVar4,
                   fVar25,uVar17);
        *(float *)((longlong)plVar6 + 0x1c) = (float)dVar14 * fVar4;
        *(float *)(plVar6 + 4) = fVar25;
        *(double *)(param_1 + 0x11c0) = dVar14;
        uVar18 = uVar19 + 0x10;
        *(double *)(param_1 + 0x11c8) = dVar5;
        uVar19 = uVar19 + 8;
      } while (uVar18 <= *(uint *)(param_1 + 0x1c));
    }
  }
  else {
    dVar13 = *(double *)(param_1 + 0x11c0);
    if (uVar18 == 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      pdVar15 = &DAT_1404e4ff0;
    }
    else {
      pdVar15 = (double *)(param_1 + 0x20);
    }
    dVar23 = *(double *)(param_1 + 0x11c8) + *pdVar15;
    local_108._8_8_ = dVar23;
    local_108._0_8_ = dVar13;
    if (*(uint *)(param_1 + 0x1c) < 2) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar15 = &DAT_1404e4ff0;
      DAT_1404e4ff0 = DAT_14045dde0;
    }
    else {
      pdVar15 = (double *)(param_1 + 0x28);
    }
    if (*(uint *)(param_1 + 0x1c) < 3) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      pdVar16 = &DAT_1404e4ff0;
    }
    else {
      pdVar16 = (double *)(param_1 + 0x30);
    }
    dVar22 = dVar13 + *pdVar15;
    dVar24 = dVar23 + *pdVar16;
    if (*(uint *)(param_1 + 0x1c) < 4) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4ff0 = DAT_14045dde0;
      pdVar15 = &DAT_1404e4ff0;
    }
    else {
      pdVar15 = (double *)(param_1 + 0x38);
    }
    uVar18 = *(uint *)(param_1 + 0x1c);
    uVar19 = 4;
    dVar12 = dVar22 + *pdVar15;
    dStack_f0 = dVar24;
    local_f8 = dVar12;
    uVar20 = uVar19;
    local_e8 = dVar22;
    local_e0 = dVar24;
    if (0xb < uVar18) {
      do {
        uVar27 = (undefined4)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
        uVar29 = (undefined4)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
        uVar21 = (undefined4)((ulonglong)dVar24 >> 0x20);
        fVar3 = *(float *)(param_2[1] + 0x54);
        fVar4 = *(float *)(param_2[1] + 0x50);
        plVar6 = (longlong *)*param_2;
        plVar2 = plVar6 + 2;
        lVar7 = plVar6[1];
        lVar8 = *plVar6;
        if ((int)plVar6[2] == 0) {
          uVar17 = 0;
          if (*(undefined8 **)(lVar8 + 0x38) != (undefined8 *)0x0) {
            uVar17 = **(undefined8 **)(lVar8 + 0x38);
          }
          uVar26 = CONCAT44(uVar27,(int)plVar6[4]);
          (**(code **)(lVar8 + 0x10))
                    (lVar8,lVar7,plVar2,*(undefined4 *)((longlong)plVar6 + 0x1c),uVar26,uVar17);
          uVar27 = (undefined4)((ulonglong)uVar26 >> 0x20);
          uVar29 = (undefined4)((ulonglong)uVar17 >> 0x20);
          *(undefined4 *)((longlong)plVar6 + 0x14) = *(undefined4 *)((longlong)plVar6 + 0x1c);
          *(int *)(plVar6 + 3) = (int)plVar6[4];
          *(undefined4 *)plVar2 = 1;
        }
        uVar17 = 0;
        if (*(longlong *)(lVar8 + 0x38) != 0) {
          uVar17 = *(undefined8 *)(*(longlong *)(lVar8 + 0x38) + 0x18);
        }
        uVar28 = CONCAT44(uVar29,(float)dVar22 * fVar4);
        uVar26 = CONCAT44(uVar27,(float)dVar23 * fVar3);
        (**(code **)(lVar8 + 0x28))
                  (lVar8,lVar7,plVar2,(float)dVar13 * fVar4,uVar26,uVar28,(float)dVar24 * fVar3,
                   (float)dVar12 * fVar4,(float)dVar24 * fVar3,uVar17);
        uVar27 = (undefined4)((ulonglong)uVar26 >> 0x20);
        uVar29 = (undefined4)((ulonglong)uVar28 >> 0x20);
        *(float *)((longlong)plVar6 + 0x1c) = (float)dVar12 * fVar4;
        *(float *)(plVar6 + 4) = (float)dVar24 * fVar3;
        auVar11._8_4_ = SUB84(dVar24,0);
        auVar11._0_8_ = dVar12;
        auVar11._12_4_ = uVar21;
        *(undefined1 (*) [16])(param_1 + 0x11c0) = auVar11;
        local_108._8_4_ = SUB84(dVar24,0);
        local_108._0_8_ = dVar12;
        local_108._12_4_ = uVar21;
        if (uVar19 < *(uint *)(param_1 + 0x1c)) {
          pdVar15 = (double *)(param_1 + ((ulonglong)uVar19 + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar15 = &DAT_1404e4ff0;
        }
        dVar22 = *pdVar15;
        if (uVar19 + 2 < *(uint *)(param_1 + 0x1c)) {
          pdVar15 = (double *)(param_1 + ((ulonglong)(uVar19 + 2) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar15 = &DAT_1404e4ff0;
          DAT_1404e4ff0 = DAT_14045dde0;
        }
        if (uVar19 + 1 < *(uint *)(param_1 + 0x1c)) {
          pdVar16 = (double *)(param_1 + ((ulonglong)(uVar19 + 1) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar16 = &DAT_1404e4ff0;
        }
        dVar13 = dVar12 + dVar22 + *pdVar16;
        dVar5 = *pdVar15;
        if (uVar19 + 3 < *(uint *)(param_1 + 0x1c)) {
          pdVar15 = (double *)(param_1 + ((ulonglong)(uVar19 + 3) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar15 = &DAT_1404e4ff0;
        }
        dVar23 = dVar24 + dVar5 + *pdVar15;
        uVar21 = (undefined4)((ulonglong)dVar23 >> 0x20);
        lVar7 = param_2[1];
        fVar3 = *(float *)(lVar7 + 0x54);
        fVar4 = *(float *)(lVar7 + 0x50);
        fVar25 = (float)dVar13 * *(float *)(lVar7 + 0x50);
        plVar6 = (longlong *)*param_2;
        plVar2 = plVar6 + 2;
        lVar7 = plVar6[1];
        lVar8 = *plVar6;
        if ((int)plVar6[2] == 0) {
          uVar17 = 0;
          if (*(undefined8 **)(lVar8 + 0x38) != (undefined8 *)0x0) {
            uVar17 = **(undefined8 **)(lVar8 + 0x38);
          }
          uVar26 = CONCAT44(uVar27,(int)plVar6[4]);
          (**(code **)(lVar8 + 0x10))
                    (lVar8,lVar7,plVar2,*(undefined4 *)((longlong)plVar6 + 0x1c),uVar26,uVar17);
          uVar27 = (undefined4)((ulonglong)uVar26 >> 0x20);
          uVar29 = (undefined4)((ulonglong)uVar17 >> 0x20);
          *(undefined4 *)((longlong)plVar6 + 0x14) = *(undefined4 *)((longlong)plVar6 + 0x1c);
          *(int *)(plVar6 + 3) = (int)plVar6[4];
          *(undefined4 *)plVar2 = 1;
        }
        uVar17 = 0;
        if (*(longlong *)(lVar8 + 0x38) != 0) {
          uVar17 = *(undefined8 *)(*(longlong *)(lVar8 + 0x38) + 0x18);
        }
        in_stack_fffffffffffffed0 = CONCAT44(uVar29,fVar25);
        in_stack_fffffffffffffec8 = CONCAT44(uVar27,(float)dVar24 * fVar3);
        (**(code **)(lVar8 + 0x28))
                  (lVar8,lVar7,plVar2,(float)(dVar12 + dVar22) * fVar4,in_stack_fffffffffffffec8,
                   in_stack_fffffffffffffed0,fVar3 * (float)(dVar24 + dVar5),fVar25,
                   (float)dVar23 * fVar3,uVar17);
        *(float *)((longlong)plVar6 + 0x1c) = fVar25;
        *(float *)(plVar6 + 4) = (float)dVar23 * fVar3;
        auVar9._8_4_ = SUB84(dVar23,0);
        auVar9._0_8_ = dVar13;
        auVar9._12_4_ = uVar21;
        *(undefined1 (*) [16])(param_1 + 0x11c0) = auVar9;
        auVar10._8_4_ = SUB84(dVar23,0);
        auVar10._0_8_ = dVar13;
        auVar10._12_4_ = uVar21;
        if (uVar19 + 4 < *(uint *)(param_1 + 0x1c)) {
          pdVar15 = (double *)(param_1 + ((ulonglong)(uVar19 + 4) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar15 = &DAT_1404e4ff0;
        }
        dVar23 = dVar23 + *pdVar15;
        local_108._8_8_ = dVar23;
        local_108._0_8_ = dVar13;
        if (uVar19 + 6 < *(uint *)(param_1 + 0x1c)) {
          pdVar15 = (double *)(param_1 + ((ulonglong)(uVar19 + 6) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar15 = &DAT_1404e4ff0;
          DAT_1404e4ff0 = DAT_14045dde0;
        }
        if (uVar19 + 5 < *(uint *)(param_1 + 0x1c)) {
          pdVar16 = (double *)(param_1 + ((ulonglong)(uVar19 + 5) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar16 = &DAT_1404e4ff0;
        }
        dVar22 = dVar13 + *pdVar16;
        dVar24 = dVar23 + *pdVar15;
        if (uVar19 + 7 < *(uint *)(param_1 + 0x1c)) {
          pdVar15 = (double *)(param_1 + ((ulonglong)(uVar19 + 7) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4ff0 = DAT_14045dde0;
          pdVar15 = &DAT_1404e4ff0;
        }
        uVar18 = *(uint *)(param_1 + 0x1c);
        uVar20 = uVar19 + 8;
        dVar12 = dVar22 + *pdVar15;
        uVar1 = uVar19 + 0x10;
        dStack_f0 = auVar10._8_8_;
        local_f8 = dVar12;
        uVar19 = uVar20;
      } while (uVar1 <= uVar18);
      dStack_f0 = dVar24;
      local_e8 = dVar22;
    }
    if (uVar20 < uVar18) {
      dStack_f0 = dVar24 + *(double *)(param_1 + 0x20 + (ulonglong)uVar20 * 8);
    }
    local_e0 = dVar24;
    FUN_1403bcf60(param_1,param_2,local_108,&local_e8,&local_f8);
  }
  return;
}

