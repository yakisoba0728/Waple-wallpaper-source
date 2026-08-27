// Function: FUN_1403e2990
// Addr: 1403e2990
// Size: 2668 bytes


void FUN_1403e2990(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double *pdVar14;
  double *pdVar15;
  undefined8 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  undefined4 uVar24;
  undefined8 in_stack_fffffffffffffec8;
  undefined8 uVar25;
  undefined4 uVar26;
  undefined8 in_stack_fffffffffffffed0;
  undefined4 uVar28;
  undefined8 uVar27;
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  
  uVar17 = *(uint *)(param_1 + 0x1c);
  if (((byte)uVar17 & 7) < 4) {
    uVar18 = 0;
    if (7 < uVar17) {
      do {
        uVar24 = (undefined4)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
        uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
        dVar11 = *(double *)(param_1 + 0x11c8);
        if (uVar18 < *(uint *)(param_1 + 0x1c)) {
          pdVar14 = (double *)(param_1 + ((ulonglong)uVar18 + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar14 = &DAT_1404e4f20;
        }
        dVar21 = *(double *)(param_1 + 0x11c0) + *pdVar14;
        if (uVar18 + 2 < *(uint *)(param_1 + 0x1c)) {
          pdVar14 = (double *)(param_1 + ((ulonglong)(uVar18 + 2) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar14 = &DAT_1404e4f20;
          DAT_1404e4f20 = DAT_14045dd10;
        }
        if (uVar18 + 1 < *(uint *)(param_1 + 0x1c)) {
          pdVar15 = (double *)(param_1 + ((ulonglong)(uVar18 + 1) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar15 = &DAT_1404e4f20;
        }
        dVar20 = dVar21 + *pdVar15;
        dVar22 = dVar11 + *pdVar14;
        if (uVar18 + 3 < *(uint *)(param_1 + 0x1c)) {
          pdVar14 = (double *)(param_1 + ((ulonglong)(uVar18 + 3) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar14 = &DAT_1404e4f20;
        }
        dVar10 = dVar22 + *pdVar14;
        fVar3 = *(float *)(param_2[1] + 0x54);
        fVar4 = *(float *)(param_2[1] + 0x50);
        plVar5 = (longlong *)*param_2;
        plVar2 = plVar5 + 2;
        lVar6 = plVar5[1];
        lVar7 = *plVar5;
        fVar23 = fVar4 * (float)dVar20;
        if ((int)plVar5[2] == 0) {
          uVar16 = 0;
          if (*(undefined8 **)(lVar7 + 0x38) != (undefined8 *)0x0) {
            uVar16 = **(undefined8 **)(lVar7 + 0x38);
          }
          uVar25 = CONCAT44(uVar24,(int)plVar5[4]);
          (**(code **)(lVar7 + 0x10))
                    (lVar7,lVar6,plVar2,*(undefined4 *)((longlong)plVar5 + 0x1c),uVar25,uVar16);
          uVar24 = (undefined4)((ulonglong)uVar25 >> 0x20);
          uVar26 = (undefined4)((ulonglong)uVar16 >> 0x20);
          *(undefined4 *)((longlong)plVar5 + 0x14) = *(undefined4 *)((longlong)plVar5 + 0x1c);
          *(int *)(plVar5 + 3) = (int)plVar5[4];
          *(undefined4 *)plVar2 = 1;
        }
        uVar16 = 0;
        if (*(longlong *)(lVar7 + 0x38) != 0) {
          uVar16 = *(undefined8 *)(*(longlong *)(lVar7 + 0x38) + 0x18);
        }
        uVar27 = CONCAT44(uVar26,fVar23);
        uVar25 = CONCAT44(uVar24,(float)dVar11 * fVar3);
        (**(code **)(lVar7 + 0x28))
                  (lVar7,lVar6,plVar2,(float)dVar21 * fVar4,uVar25,uVar27,fVar3 * (float)dVar22,
                   fVar23,(float)dVar10 * fVar3,uVar16);
        uVar24 = (undefined4)((ulonglong)uVar25 >> 0x20);
        uVar26 = (undefined4)((ulonglong)uVar27 >> 0x20);
        *(float *)((longlong)plVar5 + 0x1c) = fVar23;
        *(float *)(plVar5 + 4) = (float)dVar10 * fVar3;
        *(double *)(param_1 + 0x11c0) = dVar20;
        *(double *)(param_1 + 0x11c8) = dVar10;
        if (uVar18 + 4 < *(uint *)(param_1 + 0x1c)) {
          pdVar14 = (double *)(param_1 + ((ulonglong)(uVar18 + 4) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar14 = &DAT_1404e4f20;
        }
        dVar11 = *pdVar14;
        if (uVar18 + 6 < *(uint *)(param_1 + 0x1c)) {
          pdVar14 = (double *)(param_1 + ((ulonglong)(uVar18 + 6) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar14 = &DAT_1404e4f20;
          DAT_1404e4f20 = DAT_14045dd10;
        }
        if (uVar18 + 5 < *(uint *)(param_1 + 0x1c)) {
          pdVar15 = (double *)(param_1 + ((ulonglong)(uVar18 + 5) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar15 = &DAT_1404e4f20;
        }
        dVar21 = *pdVar15;
        dVar22 = dVar10 + dVar11 + *pdVar14;
        if (uVar18 + 7 < *(uint *)(param_1 + 0x1c)) {
          pdVar14 = (double *)(param_1 + ((ulonglong)(uVar18 + 7) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar14 = &DAT_1404e4f20;
        }
        uVar17 = *(uint *)(param_1 + 0x1c);
        dVar9 = dVar20 + dVar21 + *pdVar14;
        dVar13 = dVar22;
        if ((uVar17 - uVar18 < 0x10) && ((uVar17 & 1) != 0)) {
          if (uVar18 + 8 < uVar17) {
            dVar13 = dVar22 + *(double *)(param_1 + ((ulonglong)(uVar18 + 8) + 4) * 8);
          }
          else {
            *(undefined1 *)(param_1 + 0x18) = 1;
            DAT_1404e4f20 = DAT_14045dd10;
            dVar13 = dVar22 + DAT_14045dd10;
          }
        }
        fVar3 = *(float *)(param_2[1] + 0x54);
        fVar4 = *(float *)(param_2[1] + 0x50);
        plVar5 = (longlong *)*param_2;
        plVar2 = plVar5 + 2;
        lVar6 = plVar5[1];
        lVar7 = *plVar5;
        fVar23 = (float)dVar9 * fVar4;
        if ((int)plVar5[2] == 0) {
          uVar16 = 0;
          if (*(undefined8 **)(lVar7 + 0x38) != (undefined8 *)0x0) {
            uVar16 = **(undefined8 **)(lVar7 + 0x38);
          }
          uVar25 = CONCAT44(uVar24,(int)plVar5[4]);
          (**(code **)(lVar7 + 0x10))
                    (lVar7,lVar6,plVar2,*(undefined4 *)((longlong)plVar5 + 0x1c),uVar25,uVar16);
          uVar24 = (undefined4)((ulonglong)uVar25 >> 0x20);
          uVar26 = (undefined4)((ulonglong)uVar16 >> 0x20);
          *(undefined4 *)((longlong)plVar5 + 0x14) = *(undefined4 *)((longlong)plVar5 + 0x1c);
          *(int *)(plVar5 + 3) = (int)plVar5[4];
          *(undefined4 *)plVar2 = 1;
        }
        uVar16 = 0;
        if (*(longlong *)(lVar7 + 0x38) != 0) {
          uVar16 = *(undefined8 *)(*(longlong *)(lVar7 + 0x38) + 0x18);
        }
        in_stack_fffffffffffffed0 = CONCAT44(uVar26,fVar4 * (float)(dVar20 + dVar21));
        in_stack_fffffffffffffec8 = CONCAT44(uVar24,(float)(dVar10 + dVar11) * fVar3);
        (**(code **)(lVar7 + 0x28))
                  (lVar7,lVar6,plVar2,fVar4 * (float)dVar20,in_stack_fffffffffffffec8,
                   in_stack_fffffffffffffed0,fVar3 * (float)dVar22,fVar23,(float)dVar13 * fVar3,
                   uVar16);
        *(float *)((longlong)plVar5 + 0x1c) = fVar23;
        *(float *)(plVar5 + 4) = (float)dVar13 * fVar3;
        *(double *)(param_1 + 0x11c0) = dVar9;
        uVar17 = uVar18 + 0x10;
        *(double *)(param_1 + 0x11c8) = dVar13;
        uVar18 = uVar18 + 8;
      } while (uVar17 <= *(uint *)(param_1 + 0x1c));
    }
  }
  else {
    dVar11 = *(double *)(param_1 + 0x11c8);
    if (uVar17 == 0) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar14 = &DAT_1404e4f20;
    }
    else {
      pdVar14 = (double *)(param_1 + 0x20);
    }
    dVar21 = *(double *)(param_1 + 0x11c0) + *pdVar14;
    local_108._8_8_ = dVar11;
    local_108._0_8_ = dVar21;
    if (*(uint *)(param_1 + 0x1c) < 2) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      pdVar14 = &DAT_1404e4f20;
      DAT_1404e4f20 = DAT_14045dd10;
    }
    else {
      pdVar14 = (double *)(param_1 + 0x28);
    }
    if (*(uint *)(param_1 + 0x1c) < 3) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar15 = &DAT_1404e4f20;
    }
    else {
      pdVar15 = (double *)(param_1 + 0x30);
    }
    dVar22 = dVar21 + *pdVar14;
    dVar20 = dVar11 + *pdVar15;
    if (*(uint *)(param_1 + 0x1c) < 4) {
      *(undefined1 *)(param_1 + 0x18) = 1;
      DAT_1404e4f20 = DAT_14045dd10;
      pdVar14 = &DAT_1404e4f20;
    }
    else {
      pdVar14 = (double *)(param_1 + 0x38);
    }
    uVar17 = *(uint *)(param_1 + 0x1c);
    uVar18 = 4;
    dVar10 = dVar20 + *pdVar14;
    uVar19 = uVar18;
    local_e8 = dVar22;
    local_e0 = dVar20;
    dStack_f0 = dVar10;
    local_f8 = dVar22;
    if (0xb < uVar17) {
      do {
        uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
        uVar28 = (undefined4)((ulonglong)in_stack_fffffffffffffed0 >> 0x20);
        uVar24 = (undefined4)((ulonglong)dVar10 >> 0x20);
        fVar3 = *(float *)(param_2[1] + 0x54);
        fVar4 = *(float *)(param_2[1] + 0x50);
        plVar5 = (longlong *)*param_2;
        plVar2 = plVar5 + 2;
        lVar6 = plVar5[1];
        lVar7 = *plVar5;
        dStack_f0 = dVar10;
        if ((int)plVar5[2] == 0) {
          uVar16 = 0;
          if (*(undefined8 **)(lVar7 + 0x38) != (undefined8 *)0x0) {
            uVar16 = **(undefined8 **)(lVar7 + 0x38);
          }
          uVar25 = CONCAT44(uVar26,(int)plVar5[4]);
          (**(code **)(lVar7 + 0x10))
                    (lVar7,lVar6,plVar2,*(undefined4 *)((longlong)plVar5 + 0x1c),uVar25,uVar16);
          uVar26 = (undefined4)((ulonglong)uVar25 >> 0x20);
          uVar28 = (undefined4)((ulonglong)uVar16 >> 0x20);
          *(undefined4 *)((longlong)plVar5 + 0x14) = *(undefined4 *)((longlong)plVar5 + 0x1c);
          *(int *)(plVar5 + 3) = (int)plVar5[4];
          *(undefined4 *)plVar2 = 1;
        }
        uVar16 = 0;
        if (*(longlong *)(lVar7 + 0x38) != 0) {
          uVar16 = *(undefined8 *)(*(longlong *)(lVar7 + 0x38) + 0x18);
        }
        uVar27 = CONCAT44(uVar28,(float)dVar22 * fVar4);
        uVar25 = CONCAT44(uVar26,(float)dVar11 * fVar3);
        (**(code **)(lVar7 + 0x28))
                  (lVar7,lVar6,plVar2,(float)dVar21 * fVar4,uVar25,uVar27,(float)dVar20 * fVar3,
                   (float)dVar22 * fVar4,(float)dVar10 * fVar3,uVar16);
        uVar26 = (undefined4)((ulonglong)uVar25 >> 0x20);
        uVar28 = (undefined4)((ulonglong)uVar27 >> 0x20);
        *(float *)((longlong)plVar5 + 0x1c) = (float)dVar22 * fVar4;
        *(float *)(plVar5 + 4) = (float)dVar10 * fVar3;
        auVar12._8_4_ = SUB84(dVar10,0);
        auVar12._0_8_ = dVar22;
        auVar12._12_4_ = uVar24;
        *(undefined1 (*) [16])(param_1 + 0x11c0) = auVar12;
        local_108._8_4_ = SUB84(dVar10,0);
        local_108._0_8_ = dVar22;
        local_108._12_4_ = uVar24;
        if (uVar18 < *(uint *)(param_1 + 0x1c)) {
          pdVar14 = (double *)(param_1 + ((ulonglong)uVar18 + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar14 = &DAT_1404e4f20;
        }
        dVar21 = *pdVar14;
        if (uVar18 + 2 < *(uint *)(param_1 + 0x1c)) {
          pdVar14 = (double *)(param_1 + ((ulonglong)(uVar18 + 2) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar14 = &DAT_1404e4f20;
          DAT_1404e4f20 = DAT_14045dd10;
        }
        if (uVar18 + 1 < *(uint *)(param_1 + 0x1c)) {
          pdVar15 = (double *)(param_1 + ((ulonglong)(uVar18 + 1) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar15 = &DAT_1404e4f20;
        }
        dVar20 = *pdVar15;
        dVar11 = dVar10 + dVar21 + *pdVar14;
        if (uVar18 + 3 < *(uint *)(param_1 + 0x1c)) {
          pdVar14 = (double *)(param_1 + ((ulonglong)(uVar18 + 3) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar14 = &DAT_1404e4f20;
        }
        dVar9 = dVar22 + dVar20 + *pdVar14;
        lVar6 = param_2[1];
        fVar3 = *(float *)(lVar6 + 0x50);
        fVar4 = *(float *)(lVar6 + 0x54);
        fVar23 = (float)dVar11 * *(float *)(lVar6 + 0x54);
        plVar5 = (longlong *)*param_2;
        plVar2 = plVar5 + 2;
        lVar6 = plVar5[1];
        lVar7 = *plVar5;
        if ((int)plVar5[2] == 0) {
          uVar16 = 0;
          if (*(undefined8 **)(lVar7 + 0x38) != (undefined8 *)0x0) {
            uVar16 = **(undefined8 **)(lVar7 + 0x38);
          }
          uVar25 = CONCAT44(uVar26,(int)plVar5[4]);
          (**(code **)(lVar7 + 0x10))
                    (lVar7,lVar6,plVar2,*(undefined4 *)((longlong)plVar5 + 0x1c),uVar25,uVar16);
          uVar26 = (undefined4)((ulonglong)uVar25 >> 0x20);
          uVar28 = (undefined4)((ulonglong)uVar16 >> 0x20);
          *(undefined4 *)((longlong)plVar5 + 0x14) = *(undefined4 *)((longlong)plVar5 + 0x1c);
          *(int *)(plVar5 + 3) = (int)plVar5[4];
          *(undefined4 *)plVar2 = 1;
        }
        uVar16 = 0;
        if (*(longlong *)(lVar7 + 0x38) != 0) {
          uVar16 = *(undefined8 *)(*(longlong *)(lVar7 + 0x38) + 0x18);
        }
        in_stack_fffffffffffffed0 = CONCAT44(uVar28,fVar3 * (float)(dVar22 + dVar20));
        in_stack_fffffffffffffec8 = CONCAT44(uVar26,(float)(dVar10 + dVar21) * fVar4);
        (**(code **)(lVar7 + 0x28))
                  (lVar7,lVar6,plVar2,(float)dVar22 * fVar3,in_stack_fffffffffffffec8,
                   in_stack_fffffffffffffed0,fVar23,(float)dVar9 * fVar3,fVar23,uVar16);
        *(float *)((longlong)plVar5 + 0x1c) = (float)dVar9 * fVar3;
        *(float *)(plVar5 + 4) = fVar23;
        auVar8._8_4_ = SUB84(dVar11,0);
        auVar8._0_8_ = dVar9;
        auVar8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        *(undefined1 (*) [16])(param_1 + 0x11c0) = auVar8;
        if (uVar18 + 4 < *(uint *)(param_1 + 0x1c)) {
          pdVar14 = (double *)(param_1 + ((ulonglong)(uVar18 + 4) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar14 = &DAT_1404e4f20;
        }
        dVar21 = dVar9 + *pdVar14;
        local_108._8_8_ = dVar11;
        local_108._0_8_ = dVar21;
        if (uVar18 + 6 < *(uint *)(param_1 + 0x1c)) {
          pdVar14 = (double *)(param_1 + ((ulonglong)(uVar18 + 6) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          pdVar14 = &DAT_1404e4f20;
          DAT_1404e4f20 = DAT_14045dd10;
        }
        if (uVar18 + 5 < *(uint *)(param_1 + 0x1c)) {
          pdVar15 = (double *)(param_1 + ((ulonglong)(uVar18 + 5) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar15 = &DAT_1404e4f20;
        }
        dVar22 = dVar21 + *pdVar15;
        dVar20 = dVar11 + *pdVar14;
        if (uVar18 + 7 < *(uint *)(param_1 + 0x1c)) {
          pdVar14 = (double *)(param_1 + ((ulonglong)(uVar18 + 7) + 4) * 8);
        }
        else {
          *(undefined1 *)(param_1 + 0x18) = 1;
          DAT_1404e4f20 = DAT_14045dd10;
          pdVar14 = &DAT_1404e4f20;
        }
        uVar17 = *(uint *)(param_1 + 0x1c);
        uVar19 = uVar18 + 8;
        dVar10 = dVar20 + *pdVar14;
        uVar1 = uVar18 + 0x10;
        uVar18 = uVar19;
        dStack_f0 = dVar10;
        local_f8 = dVar9;
      } while (uVar1 <= uVar17);
    }
    local_e0 = dVar20;
    local_f8 = dVar22;
    if (uVar19 < uVar17) {
      local_f8 = dVar22 + *(double *)(param_1 + 0x20 + (ulonglong)uVar19 * 8);
    }
    local_e8 = dVar22;
    FUN_1403bce90(param_1,param_2,local_108,&local_e8,&local_f8);
  }
  return;
}

