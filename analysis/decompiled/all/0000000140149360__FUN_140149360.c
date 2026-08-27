// Function: FUN_140149360
// Addr: 140149360
// Size: 7190 bytes


undefined8 FUN_140149360(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  bool bVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  uint uVar21;
  uint uVar22;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_c0;
  
  uVar5 = DAT_140492ff0;
  if ((param_1 == (undefined8 *)0x0) || (param_2 == 0)) {
    return 0xffffffff;
  }
  if (param_2 == 1) goto LAB_14014af52;
  if ((param_2 & param_2 - 1) == 0) {
    uVar6 = FUN_14014af80();
    return uVar6;
  }
  uVar10 = 1;
  uVar21 = (uint)DAT_140492fe0;
  uVar22 = (uint)((ulonglong)DAT_140492fe0 >> 0x20);
  if ((param_2 & 1) != 0) {
    uVar13 = 1;
    if (8 < param_2) {
      uVar16 = uVar13;
      do {
        FUN_140149160(uVar16,param_2,&local_d8);
        auVar4._8_8_ = dStack_d0;
        auVar4._0_8_ = local_d8;
        *(undefined1 (*) [16])(param_1 + uVar16 * 2) = auVar4;
        *(float *)(param_1 + (param_2 - uVar16)) = (float)local_d8;
        *(float *)((longlong)param_1 + param_2 * 8 + uVar16 * -8 + 4) =
             (float)(double)CONCAT44((uint)((ulonglong)dStack_d0 >> 0x20) ^ uVar22,
                                     SUB84(dStack_d0,0) ^ uVar21);
        if (1 < uVar16) {
          uVar13 = 1;
          if (3 < uVar16 - 1) {
            uVar11 = uVar13;
            do {
              dVar20 = (double)param_1[uVar11 * 2 + 1];
              dVar19 = (double)param_1[uVar11 * 2];
              dVar18 = local_d8 * dVar19 - dVar20 * dStack_d0;
              param_1[(uVar11 + uVar16) * 2] = dVar18;
              dVar20 = dVar20 * local_d8 + dStack_d0 * dVar19;
              lVar7 = param_2 * 8 + uVar11 * -8 + uVar16 * -8;
              param_1[(uVar11 + uVar16) * 2 + 1] = dVar20;
              *(float *)(param_1 + ((param_2 - uVar11) - uVar16)) = (float)dVar18;
              lVar15 = uVar11 + 1 + uVar16;
              *(float *)((longlong)param_1 + lVar7 + 4) =
                   (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar22,
                                           SUB84(dVar20,0) ^ uVar21);
              dVar20 = (double)param_1[uVar11 * 2 + 3];
              dVar19 = (double)param_1[uVar11 * 2 + 2];
              dVar18 = local_d8 * dVar19 - dVar20 * dStack_d0;
              param_1[lVar15 * 2] = dVar18;
              dVar20 = dVar20 * local_d8 + dStack_d0 * dVar19;
              param_1[lVar15 * 2 + 1] = dVar20;
              *(float *)(param_1 + (((param_2 - 1) - uVar11) - uVar16)) = (float)dVar18;
              lVar15 = uVar11 + 2 + uVar16;
              *(float *)((longlong)param_1 + lVar7 + -4) =
                   (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar22,
                                           SUB84(dVar20,0) ^ uVar21);
              dVar20 = (double)param_1[uVar11 * 2 + 4];
              dVar19 = (double)param_1[uVar11 * 2 + 5];
              dVar18 = local_d8 * dVar20 - dVar19 * dStack_d0;
              param_1[lVar15 * 2] = dVar18;
              dVar20 = dVar19 * local_d8 + dStack_d0 * dVar20;
              param_1[lVar15 * 2 + 1] = dVar20;
              *(float *)(param_1 + (((param_2 - 2) - uVar11) - uVar16)) = (float)dVar18;
              *(float *)((longlong)param_1 + lVar7 + -0xc) =
                   (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar22,
                                           SUB84(dVar20,0) ^ uVar21);
              dVar20 = (double)param_1[uVar11 * 2 + 6];
              dVar19 = (double)param_1[uVar11 * 2 + 7];
              lVar15 = uVar11 + 3 + uVar16;
              uVar13 = uVar11 + 4;
              dVar18 = local_d8 * dVar20 - dVar19 * dStack_d0;
              param_1[lVar15 * 2] = dVar18;
              dVar20 = dVar19 * local_d8 + dStack_d0 * dVar20;
              param_1[lVar15 * 2 + 1] = dVar20;
              *(float *)(param_1 + (((param_2 - 3) - uVar11) - uVar16)) = (float)dVar18;
              *(float *)((longlong)param_1 + lVar7 + -0x14) =
                   (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar22,
                                           SUB84(dVar20,0) ^ uVar21);
              uVar11 = uVar13;
            } while (uVar13 < uVar16 - 3);
            if (uVar16 <= uVar13) goto LAB_14014a243;
          }
          do {
            dVar20 = (double)param_1[uVar13 * 2 + 1];
            dVar19 = (double)param_1[uVar13 * 2];
            dVar18 = local_d8 * dVar19 - dVar20 * dStack_d0;
            param_1[(uVar13 + uVar16) * 2] = dVar18;
            dVar20 = dVar20 * local_d8 + dStack_d0 * dVar19;
            uVar11 = uVar13 + 1;
            param_1[(uVar13 + uVar16) * 2 + 1] = dVar20;
            *(float *)(param_1 + ((param_2 - uVar13) - uVar16)) = (float)dVar18;
            *(float *)((longlong)param_1 + param_2 * 8 + uVar13 * -8 + uVar16 * -8 + 4) =
                 (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar22,
                                         SUB84(dVar20,0) ^ uVar21);
            uVar13 = uVar11;
          } while (uVar11 < uVar16);
        }
LAB_14014a243:
        uVar13 = uVar16 * 2;
        uVar11 = uVar16 << 4;
        uVar16 = uVar13;
      } while (uVar11 < param_2);
    }
    FUN_140149160(uVar13,param_2,&local_d8);
    FUN_140149160(uVar13 * 2,param_2,&local_c8);
    uVar11 = (param_2 + 1 >> 1) + uVar13 * -2;
    uVar16 = 1;
    *(float *)(param_1 + (param_2 - uVar13)) = (float)local_d8;
    *(float *)((longlong)param_1 + (param_2 - uVar13) * 8 + 4) =
         (float)(double)CONCAT44((uint)((ulonglong)dStack_d0 >> 0x20) ^ uVar22,
                                 SUB84(dStack_d0,0) ^ uVar21);
    lVar15 = param_2 + uVar13 * -2;
    *(float *)(param_1 + lVar15) = (float)local_c8;
    *(float *)(lVar15 * 8 + 4 + (longlong)param_1) =
         (float)(double)CONCAT44((uint)((ulonglong)local_c0 >> 0x20) ^ uVar22,
                                 SUB84(local_c0,0) ^ uVar21);
    if (uVar13 < uVar11) {
      uVar14 = uVar11 - uVar13;
      *(float *)(param_1 + (lVar15 - uVar13)) = (float)(local_c8 * local_d8 - local_c0 * dStack_d0);
      dVar20 = local_c0 * local_d8 + local_c8 * dStack_d0;
      *(float *)((longlong)param_1 + (lVar15 - uVar13) * 8 + 4) =
           (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar22,
                                   SUB84(dVar20,0) ^ uVar21);
      uVar11 = uVar13;
      if (1 < uVar14) {
        if (3 < uVar14 - 1) {
          uVar12 = uVar16;
          do {
            lVar8 = param_2 * 8 + uVar12 * -8 + uVar13 * -8;
            lVar9 = lVar15 * 8 + uVar12 * -8;
            lVar7 = lVar9 + uVar13 * -8;
            dVar20 = local_d8 * (double)param_1[uVar12 * 2] -
                     (double)param_1[uVar12 * 2 + 1] * dStack_d0;
            dVar19 = (double)param_1[uVar12 * 2 + 1] * local_d8 +
                     dStack_d0 * (double)param_1[uVar12 * 2];
            *(float *)(param_1 + ((param_2 - uVar12) - uVar13)) = (float)dVar20;
            *(float *)((longlong)param_1 + lVar8 + 4) =
                 (float)(double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) ^ uVar22,
                                         SUB84(dVar19,0) ^ uVar21);
            dVar18 = (double)param_1[uVar12 * 2 + 1] * local_c8 +
                     local_c0 * (double)param_1[uVar12 * 2];
            *(float *)(param_1 + (lVar15 - uVar12)) =
                 (float)(local_c8 * (double)param_1[uVar12 * 2] -
                        (double)param_1[uVar12 * 2 + 1] * local_c0);
            *(float *)((longlong)param_1 + lVar9 + 4) =
                 (float)(double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ uVar22,
                                         SUB84(dVar18,0) ^ uVar21);
            *(float *)(param_1 + ((lVar15 - uVar12) - uVar13)) =
                 (float)(local_c8 * dVar20 - local_c0 * dVar19);
            dVar20 = local_c8 * dVar19 + local_c0 * dVar20;
            *(float *)((longlong)param_1 + lVar7 + 4) =
                 (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar22,
                                         SUB84(dVar20,0) ^ uVar21);
            dVar20 = local_d8 * (double)param_1[uVar12 * 2 + 2] -
                     (double)param_1[uVar12 * 2 + 3] * dStack_d0;
            dVar19 = (double)param_1[uVar12 * 2 + 3] * local_d8 +
                     dStack_d0 * (double)param_1[uVar12 * 2 + 2];
            *(float *)(param_1 + (((param_2 - 1) - uVar12) - uVar13)) = (float)dVar20;
            *(float *)((longlong)param_1 + lVar8 + -4) =
                 (float)(double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) ^ uVar22,
                                         SUB84(dVar19,0) ^ uVar21);
            dVar18 = (double)param_1[uVar12 * 2 + 3] * local_c8 +
                     local_c0 * (double)param_1[uVar12 * 2 + 2];
            *(float *)(param_1 + ((lVar15 + -1) - uVar12)) =
                 (float)(local_c8 * (double)param_1[uVar12 * 2 + 2] -
                        (double)param_1[uVar12 * 2 + 3] * local_c0);
            *(float *)((longlong)param_1 + lVar9 + -4) =
                 (float)(double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ uVar22,
                                         SUB84(dVar18,0) ^ uVar21);
            *(float *)(param_1 + (((lVar15 + -1) - uVar12) - uVar13)) =
                 (float)(local_c8 * dVar20 - local_c0 * dVar19);
            dVar20 = local_c8 * dVar19 + local_c0 * dVar20;
            *(float *)((longlong)param_1 + lVar7 + -4) =
                 (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar22,
                                         SUB84(dVar20,0) ^ uVar21);
            dVar20 = local_d8 * (double)param_1[uVar12 * 2 + 4] -
                     (double)param_1[uVar12 * 2 + 5] * dStack_d0;
            dVar19 = (double)param_1[uVar12 * 2 + 5] * local_d8 +
                     dStack_d0 * (double)param_1[uVar12 * 2 + 4];
            *(float *)(param_1 + (((param_2 - 2) - uVar12) - uVar13)) = (float)dVar20;
            *(float *)((longlong)param_1 + lVar8 + -0xc) =
                 (float)(double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) ^ uVar22,
                                         SUB84(dVar19,0) ^ uVar21);
            dVar18 = (double)param_1[uVar12 * 2 + 5] * local_c8 +
                     local_c0 * (double)param_1[uVar12 * 2 + 4];
            *(float *)(param_1 + ((lVar15 + -2) - uVar12)) =
                 (float)(local_c8 * (double)param_1[uVar12 * 2 + 4] -
                        (double)param_1[uVar12 * 2 + 5] * local_c0);
            *(float *)((longlong)param_1 + lVar9 + -0xc) =
                 (float)(double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ uVar22,
                                         SUB84(dVar18,0) ^ uVar21);
            *(float *)(param_1 + (((lVar15 + -2) - uVar12) - uVar13)) =
                 (float)(local_c8 * dVar20 - local_c0 * dVar19);
            dVar20 = local_c8 * dVar19 + local_c0 * dVar20;
            uVar16 = uVar12 + 4;
            *(float *)((longlong)param_1 + lVar7 + -0xc) =
                 (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar22,
                                         SUB84(dVar20,0) ^ uVar21);
            dVar20 = local_d8 * (double)param_1[uVar12 * 2 + 6] -
                     (double)param_1[uVar12 * 2 + 7] * dStack_d0;
            dVar19 = (double)param_1[uVar12 * 2 + 7] * local_d8 +
                     dStack_d0 * (double)param_1[uVar12 * 2 + 6];
            *(float *)(param_1 + (((param_2 - 3) - uVar12) - uVar13)) = (float)dVar20;
            *(float *)((longlong)param_1 + lVar8 + -0x14) =
                 (float)(double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) ^ uVar22,
                                         SUB84(dVar19,0) ^ uVar21);
            dVar18 = (double)param_1[uVar12 * 2 + 7] * local_c8 +
                     local_c0 * (double)param_1[uVar12 * 2 + 6];
            *(float *)(param_1 + ((lVar15 + -3) - uVar12)) =
                 (float)(local_c8 * (double)param_1[uVar12 * 2 + 6] -
                        (double)param_1[uVar12 * 2 + 7] * local_c0);
            *(float *)((longlong)param_1 + lVar9 + -0x14) =
                 (float)(double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ uVar22,
                                         SUB84(dVar18,0) ^ uVar21);
            *(float *)(param_1 + (((lVar15 + -3) - uVar12) - uVar13)) =
                 (float)(local_c8 * dVar20 - local_c0 * dVar19);
            dVar20 = local_c8 * dVar19 + local_c0 * dVar20;
            *(float *)((longlong)param_1 + lVar7 + -0x14) =
                 (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar22,
                                         SUB84(dVar20,0) ^ uVar21);
            uVar12 = uVar16;
          } while (uVar16 < uVar14 - 3);
          if (uVar14 <= uVar16) goto LAB_14014a888;
        }
        lVar15 = param_2 + uVar13 * -2;
        uVar12 = uVar16;
        do {
          uVar16 = uVar12 + 1;
          dVar20 = local_d8 * (double)param_1[uVar12 * 2] -
                   (double)param_1[uVar12 * 2 + 1] * dStack_d0;
          dVar19 = (double)param_1[uVar12 * 2 + 1] * local_d8 +
                   dStack_d0 * (double)param_1[uVar12 * 2];
          *(float *)(param_1 + ((param_2 - uVar12) - uVar13)) = (float)dVar20;
          *(float *)((longlong)param_1 + param_2 * 8 + uVar12 * -8 + uVar13 * -8 + 4) =
               (float)(double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) ^ uVar22,
                                       SUB84(dVar19,0) ^ uVar21);
          lVar7 = lVar15 * 8 + uVar12 * -8;
          dVar18 = (double)param_1[uVar12 * 2 + 1] * local_c8 +
                   local_c0 * (double)param_1[uVar12 * 2];
          *(float *)(param_1 + (lVar15 - uVar12)) =
               (float)(local_c8 * (double)param_1[uVar12 * 2] -
                      (double)param_1[uVar12 * 2 + 1] * local_c0);
          *(float *)((longlong)param_1 + lVar7 + 4) =
               (float)(double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ uVar22,
                                       SUB84(dVar18,0) ^ uVar21);
          *(float *)(param_1 + ((lVar15 - uVar12) - uVar13)) =
               (float)(local_c8 * dVar20 - local_c0 * dVar19);
          dVar20 = local_c8 * dVar19 + local_c0 * dVar20;
          *(float *)((longlong)param_1 + lVar7 + uVar13 * -8 + 4) =
               (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar22,
                                       SUB84(dVar20,0) ^ uVar21);
          uVar12 = uVar16;
        } while (uVar16 < uVar14);
      }
    }
LAB_14014a888:
    if (uVar16 < uVar11) {
      if (3 < uVar11 - uVar16) {
        lVar15 = param_2 + uVar13 * -2;
        uVar14 = uVar16;
        do {
          lVar8 = param_2 * 8 + uVar14 * -8 + uVar13 * -8;
          lVar7 = lVar15 * 8 + uVar14 * -8;
          dVar20 = (double)param_1[uVar14 * 2 + 1] * local_d8 +
                   dStack_d0 * (double)param_1[uVar14 * 2];
          *(float *)(param_1 + ((param_2 - uVar14) - uVar13)) =
               (float)(local_d8 * (double)param_1[uVar14 * 2] -
                      (double)param_1[uVar14 * 2 + 1] * dStack_d0);
          *(float *)((longlong)param_1 + lVar8 + 4) =
               (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar22,
                                       SUB84(dVar20,0) ^ uVar21);
          dVar20 = (double)param_1[uVar14 * 2 + 1] * local_c8 +
                   local_c0 * (double)param_1[uVar14 * 2];
          *(float *)(param_1 + (lVar15 - uVar14)) =
               (float)(local_c8 * (double)param_1[uVar14 * 2] -
                      (double)param_1[uVar14 * 2 + 1] * local_c0);
          *(float *)((longlong)param_1 + lVar7 + 4) =
               (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar22,
                                       SUB84(dVar20,0) ^ uVar21);
          dVar20 = (double)param_1[uVar14 * 2 + 3] * local_d8 +
                   dStack_d0 * (double)param_1[uVar14 * 2 + 2];
          *(float *)(param_1 + (((param_2 - 1) - uVar14) - uVar13)) =
               (float)(local_d8 * (double)param_1[uVar14 * 2 + 2] -
                      (double)param_1[uVar14 * 2 + 3] * dStack_d0);
          *(float *)((longlong)param_1 + lVar8 + -4) =
               (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar22,
                                       SUB84(dVar20,0) ^ uVar21);
          dVar20 = (double)param_1[uVar14 * 2 + 3] * local_c8 +
                   local_c0 * (double)param_1[uVar14 * 2 + 2];
          *(float *)(param_1 + ((lVar15 + -1) - uVar14)) =
               (float)(local_c8 * (double)param_1[uVar14 * 2 + 2] -
                      (double)param_1[uVar14 * 2 + 3] * local_c0);
          *(float *)((longlong)param_1 + lVar7 + -4) =
               (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar22,
                                       SUB84(dVar20,0) ^ uVar21);
          uVar16 = uVar14 + 4;
          dVar20 = (double)param_1[uVar14 * 2 + 5] * local_d8 +
                   dStack_d0 * (double)param_1[uVar14 * 2 + 4];
          *(float *)(param_1 + (((param_2 - 2) - uVar14) - uVar13)) =
               (float)(local_d8 * (double)param_1[uVar14 * 2 + 4] -
                      (double)param_1[uVar14 * 2 + 5] * dStack_d0);
          *(float *)((longlong)param_1 + lVar8 + -0xc) =
               (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar22,
                                       SUB84(dVar20,0) ^ uVar21);
          dVar20 = (double)param_1[uVar14 * 2 + 5] * local_c8 +
                   local_c0 * (double)param_1[uVar14 * 2 + 4];
          *(float *)(param_1 + ((lVar15 + -2) - uVar14)) =
               (float)(local_c8 * (double)param_1[uVar14 * 2 + 4] -
                      (double)param_1[uVar14 * 2 + 5] * local_c0);
          *(float *)((longlong)param_1 + lVar7 + -0xc) =
               (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar22,
                                       SUB84(dVar20,0) ^ uVar21);
          dVar20 = (double)param_1[uVar14 * 2 + 7] * local_d8 +
                   dStack_d0 * (double)param_1[uVar14 * 2 + 6];
          *(float *)(param_1 + (((param_2 - 3) - uVar14) - uVar13)) =
               (float)(local_d8 * (double)param_1[uVar14 * 2 + 6] -
                      (double)param_1[uVar14 * 2 + 7] * dStack_d0);
          *(float *)((longlong)param_1 + lVar8 + -0x14) =
               (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar22,
                                       SUB84(dVar20,0) ^ uVar21);
          dVar20 = (double)param_1[uVar14 * 2 + 7] * local_c8 +
                   local_c0 * (double)param_1[uVar14 * 2 + 6];
          *(float *)(param_1 + ((lVar15 + -3) - uVar14)) =
               (float)(local_c8 * (double)param_1[uVar14 * 2 + 6] -
                      (double)param_1[uVar14 * 2 + 7] * local_c0);
          *(float *)((longlong)param_1 + lVar7 + -0x14) =
               (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar22,
                                       SUB84(dVar20,0) ^ uVar21);
          uVar14 = uVar16;
        } while (uVar16 < uVar11 - 3);
        if (uVar11 <= uVar16) goto LAB_14014ac28;
      }
      lVar15 = param_2 + uVar13 * -2;
      uVar14 = uVar16;
      do {
        uVar16 = uVar14 + 1;
        dVar20 = (double)param_1[uVar14 * 2 + 1] * local_d8 +
                 dStack_d0 * (double)param_1[uVar14 * 2];
        *(float *)(param_1 + ((param_2 - uVar14) - uVar13)) =
             (float)(local_d8 * (double)param_1[uVar14 * 2] -
                    (double)param_1[uVar14 * 2 + 1] * dStack_d0);
        *(float *)((longlong)param_1 + param_2 * 8 + uVar14 * -8 + uVar13 * -8 + 4) =
             (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar22,
                                     SUB84(dVar20,0) ^ uVar21);
        dVar20 = (double)param_1[uVar14 * 2 + 1] * local_c8 + local_c0 * (double)param_1[uVar14 * 2]
        ;
        *(float *)(param_1 + (lVar15 - uVar14)) =
             (float)(local_c8 * (double)param_1[uVar14 * 2] -
                    (double)param_1[uVar14 * 2 + 1] * local_c0);
        *(float *)((longlong)param_1 + lVar15 * 8 + uVar14 * -8 + 4) =
             (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar22,
                                     SUB84(dVar20,0) ^ uVar21);
        uVar14 = uVar16;
      } while (uVar16 < uVar11);
    }
LAB_14014ac28:
    if (uVar16 < uVar13) {
      if (3 < uVar13 - uVar16) {
        uVar11 = uVar16;
        do {
          uVar16 = uVar11 + 4;
          lVar15 = param_2 * 8 + uVar11 * -8 + uVar13 * -8;
          dVar20 = (double)param_1[uVar11 * 2 + 1] * local_d8 +
                   dStack_d0 * (double)param_1[uVar11 * 2];
          *(float *)(param_1 + ((param_2 - uVar11) - uVar13)) =
               (float)(local_d8 * (double)param_1[uVar11 * 2] -
                      (double)param_1[uVar11 * 2 + 1] * dStack_d0);
          *(float *)((longlong)param_1 + lVar15 + 4) =
               (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar22,
                                       SUB84(dVar20,0) ^ uVar21);
          dVar20 = (double)param_1[uVar11 * 2 + 3] * local_d8 +
                   dStack_d0 * (double)param_1[uVar11 * 2 + 2];
          *(float *)(param_1 + (((param_2 - 1) - uVar11) - uVar13)) =
               (float)(local_d8 * (double)param_1[uVar11 * 2 + 2] -
                      (double)param_1[uVar11 * 2 + 3] * dStack_d0);
          *(float *)((longlong)param_1 + lVar15 + -4) =
               (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar22,
                                       SUB84(dVar20,0) ^ uVar21);
          dVar20 = (double)param_1[uVar11 * 2 + 5] * local_d8 +
                   dStack_d0 * (double)param_1[uVar11 * 2 + 4];
          *(float *)(param_1 + (((param_2 - 2) - uVar11) - uVar13)) =
               (float)(local_d8 * (double)param_1[uVar11 * 2 + 4] -
                      (double)param_1[uVar11 * 2 + 5] * dStack_d0);
          *(float *)((longlong)param_1 + lVar15 + -0xc) =
               (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar22,
                                       SUB84(dVar20,0) ^ uVar21);
          dVar20 = (double)param_1[uVar11 * 2 + 7] * local_d8 +
                   dStack_d0 * (double)param_1[uVar11 * 2 + 6];
          *(float *)(param_1 + (((param_2 - 3) - uVar11) - uVar13)) =
               (float)(local_d8 * (double)param_1[uVar11 * 2 + 6] -
                      (double)param_1[uVar11 * 2 + 7] * dStack_d0);
          *(float *)((longlong)param_1 + lVar15 + -0x14) =
               (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar22,
                                       SUB84(dVar20,0) ^ uVar21);
          uVar11 = uVar16;
        } while (uVar16 < uVar13 - 3);
        if (uVar13 <= uVar16) goto LAB_14014ae31;
      }
      do {
        uVar11 = uVar16 + 1;
        dVar20 = (double)param_1[uVar16 * 2 + 1] * local_d8 +
                 dStack_d0 * (double)param_1[uVar16 * 2];
        *(float *)(param_1 + ((param_2 - uVar16) - uVar13)) =
             (float)(local_d8 * (double)param_1[uVar16 * 2] -
                    (double)param_1[uVar16 * 2 + 1] * dStack_d0);
        *(float *)((longlong)param_1 + param_2 * 8 + uVar16 * -8 + uVar13 * -8 + 4) =
             (float)(double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^ uVar22,
                                     SUB84(dVar20,0) ^ uVar21);
        uVar16 = uVar11;
      } while (uVar11 < uVar13);
    }
LAB_14014ae31:
    uVar5 = DAT_140492ff0;
    uVar13 = param_2 >> 1;
    if (uVar13 != 0) {
      if (3 < uVar13) {
        uVar16 = uVar10;
        do {
          lVar15 = uVar16 * 8;
          lVar7 = param_2 * 8 + uVar16 * -8;
          uVar10 = uVar16 + 4;
          *(undefined4 *)(param_1 + uVar16) = *(undefined4 *)(param_1 + (param_2 - uVar16));
          *(uint *)((longlong)param_1 + lVar15 + 4) =
               *(uint *)((longlong)param_1 + lVar7 + 4) ^ uVar5;
          *(undefined4 *)(param_1 + uVar16 + 1) =
               *(undefined4 *)(param_1 + ((param_2 - 1) - uVar16));
          *(uint *)((longlong)param_1 + lVar15 + 0xc) =
               *(uint *)((longlong)param_1 + lVar7 + -4) ^ uVar5;
          *(undefined4 *)(param_1 + uVar16 + 2) =
               *(undefined4 *)(param_1 + ((param_2 - 2) - uVar16));
          *(uint *)((longlong)param_1 + lVar15 + 0x14) =
               *(uint *)((longlong)param_1 + lVar7 + -0xc) ^ uVar5;
          *(undefined4 *)(param_1 + uVar16 + 3) =
               *(undefined4 *)(param_1 + ((param_2 - 3) - uVar16));
          *(uint *)((longlong)param_1 + lVar15 + 0x1c) =
               *(uint *)((longlong)param_1 + lVar7 + -0x14) ^ uVar5;
          uVar16 = uVar10;
        } while (uVar10 <= uVar13 - 3);
        if (uVar13 < uVar10) goto LAB_14014af52;
      }
      do {
        uVar16 = uVar10 + 1;
        *(undefined4 *)(param_1 + uVar10) = *(undefined4 *)(param_1 + (param_2 - uVar10));
        *(uint *)((longlong)param_1 + uVar10 * 8 + 4) =
             *(uint *)((longlong)param_1 + param_2 * 8 + uVar10 * -8 + 4) ^ uVar5;
        uVar10 = uVar16;
      } while (uVar16 <= uVar13);
    }
    goto LAB_14014af52;
  }
  uVar13 = 1;
  if ((param_2 & 3) == 0) {
    uVar16 = param_2 >> 2;
    if (uVar16 < 4) {
      uVar11 = 2;
    }
    else {
      do {
        uVar11 = uVar13;
        FUN_140149160(uVar11,param_2,&local_d8);
        param_1[uVar11 * 2] = local_d8;
        (param_1 + uVar11 * 2)[1] = dStack_d0;
        param_1[uVar11 * -2 + uVar16 * 2] = dStack_d0;
        param_1[uVar11 * -2 + uVar16 * 2 + 1] = local_d8;
        if (1 < uVar11) {
          uVar13 = 1;
          if (3 < uVar11 - 1) {
            lVar15 = 0x10;
            do {
              lVar8 = (uVar16 * 0x10 - lVar15) + uVar11 * -0x10;
              dVar20 = (double)param_1[uVar13 * 2 + 1];
              dVar19 = (double)param_1[uVar13 * 2];
              dVar18 = local_d8 * dVar19 - dVar20 * dStack_d0;
              param_1[(uVar13 + uVar11) * 2] = dVar18;
              dVar20 = dVar20 * local_d8 + dStack_d0 * dVar19;
              param_1[(uVar13 + uVar11) * 2 + 1] = dVar20;
              *(double *)((longlong)param_1 + lVar8 + 8) = dVar18;
              lVar7 = uVar13 + 1 + uVar11;
              *(double *)((longlong)param_1 + lVar8) = dVar20;
              dVar20 = (double)param_1[uVar13 * 2 + 3];
              dVar19 = (double)param_1[uVar13 * 2 + 2];
              dVar18 = local_d8 * dVar19 - dVar20 * dStack_d0;
              param_1[lVar7 * 2] = dVar18;
              dVar20 = dVar20 * local_d8 + dStack_d0 * dVar19;
              param_1[lVar7 * 2 + 1] = dVar20;
              *(double *)((longlong)param_1 + lVar8 + -8) = dVar18;
              lVar7 = uVar13 + 2 + uVar11;
              *(double *)((longlong)param_1 + lVar8 + -0x10) = dVar20;
              dVar20 = (double)param_1[uVar13 * 2 + 5];
              dVar19 = *(double *)(lVar15 + 0x20 + (longlong)param_1);
              dVar18 = local_d8 * dVar19 - dVar20 * dStack_d0;
              param_1[lVar7 * 2] = dVar18;
              dVar20 = dVar20 * local_d8 + dStack_d0 * dVar19;
              param_1[lVar7 * 2 + 1] = dVar20;
              *(double *)((longlong)param_1 + lVar8 + -0x18) = dVar18;
              lVar7 = uVar13 + 3 + uVar11;
              *(double *)((longlong)param_1 + lVar8 + -0x20) = dVar20;
              dVar20 = (double)param_1[uVar13 * 2 + 7];
              dVar19 = *(double *)(lVar15 + 0x30 + (longlong)param_1);
              dVar18 = local_d8 * dVar19 - dVar20 * dStack_d0;
              param_1[lVar7 * 2] = dVar18;
              dVar20 = dVar20 * local_d8 + dStack_d0 * dVar19;
              param_1[lVar7 * 2 + 1] = dVar20;
              uVar13 = uVar13 + 4;
              lVar15 = lVar15 + 0x40;
              *(double *)((longlong)param_1 + lVar8 + -0x30) = dVar20;
              *(double *)((longlong)param_1 + lVar8 + -0x28) = dVar18;
            } while (uVar13 < uVar11 - 3);
            if (uVar11 <= uVar13) goto LAB_14014967f;
          }
          do {
            uVar14 = uVar13 + 1;
            dVar20 = (double)param_1[uVar13 * 2 + 1];
            dVar19 = (double)param_1[uVar13 * 2];
            dVar18 = local_d8 * dVar19 - dVar20 * dStack_d0;
            param_1[(uVar13 + uVar11) * 2] = dVar18;
            dVar20 = dVar20 * local_d8 + dStack_d0 * dVar19;
            param_1[(uVar13 + uVar11) * 2 + 1] = dVar20;
            param_1[uVar11 * -2 + uVar13 * -2 + uVar16 * 2] = dVar20;
            param_1[uVar11 * -2 + uVar13 * -2 + uVar16 * 2 + 1] = dVar18;
            uVar13 = uVar14;
          } while (uVar14 < uVar11);
        }
LAB_14014967f:
        uVar13 = uVar11 * 2;
      } while (uVar11 * 8 < uVar16 || uVar11 * 8 - uVar16 == 0);
      uVar11 = uVar11 * 4;
    }
    while (uVar11 <= uVar16) {
      FUN_140149160(uVar13,param_2,&local_d8);
      param_1[uVar13 * 2] = local_d8;
      (param_1 + uVar13 * 2)[1] = dStack_d0;
      if (uVar11 == uVar16) break;
      param_1[uVar13 * -2 + uVar16 * 2] = dStack_d0;
      param_1[uVar13 * -2 + uVar16 * 2 + 1] = local_d8;
      if (uVar11 + 1 == uVar16) break;
      uVar11 = uVar11 + 2;
      if (1 < uVar13) {
        uVar12 = 1;
        uVar14 = uVar11;
        while( true ) {
          dVar20 = (double)param_1[uVar12 * 2 + 1];
          dVar19 = (double)param_1[uVar12 * 2];
          dVar18 = local_d8 * dVar19 - dVar20 * dStack_d0;
          param_1[(uVar12 + uVar13) * 2] = dVar18;
          dVar20 = dVar20 * local_d8 + dStack_d0 * dVar19;
          uVar11 = uVar14 + 1;
          param_1[(uVar12 + uVar13) * 2 + 1] = dVar20;
          if (uVar14 == uVar16) break;
          bVar17 = uVar11 == uVar16;
          uVar11 = uVar14 + 2;
          param_1[uVar13 * -2 + uVar12 * -2 + uVar16 * 2] = dVar20;
          param_1[uVar13 * -2 + uVar12 * -2 + uVar16 * 2 + 1] = dVar18;
          if ((bVar17) || (uVar12 = uVar12 + 1, uVar14 = uVar11, uVar13 <= uVar12)) break;
        }
      }
      uVar13 = uVar13 * 2;
    }
    if (uVar16 < 2) {
LAB_1401498ad:
      *(undefined4 *)(param_1 + uVar16) = 0;
      *(undefined4 *)(uVar16 * 8 + 4 + (longlong)param_1) = 0x3f800000;
      if (uVar16 == 0) goto LAB_140149e53;
    }
    else {
      uVar13 = 1;
      if (3 < uVar16 - 1) {
        do {
          *(float *)(param_1 + uVar13) = (float)(double)param_1[uVar13 * 2];
          *(float *)((longlong)param_1 + uVar13 * 8 + 4) = (float)(double)param_1[uVar13 * 2 + 1];
          *(float *)(param_1 + uVar13 + 1) = (float)(double)param_1[uVar13 * 2 + 2];
          *(float *)((longlong)param_1 + uVar13 * 8 + 0xc) = (float)(double)param_1[uVar13 * 2 + 3];
          *(float *)(param_1 + uVar13 + 2) = (float)(double)param_1[uVar13 * 2 + 4];
          *(float *)((longlong)param_1 + uVar13 * 8 + 0x14) = (float)(double)param_1[uVar13 * 2 + 5]
          ;
          *(float *)(param_1 + uVar13 + 3) = (float)(double)param_1[uVar13 * 2 + 6];
          *(float *)((longlong)param_1 + uVar13 * 8 + 0x1c) = (float)(double)param_1[uVar13 * 2 + 7]
          ;
          uVar13 = uVar13 + 4;
        } while (uVar13 < uVar16 - 3);
        if (uVar16 <= uVar13) goto LAB_1401498ad;
      }
      do {
        *(float *)(param_1 + uVar13) = (float)(double)param_1[uVar13 * 2];
        *(float *)((longlong)param_1 + uVar13 * 8 + 4) = (float)(double)param_1[uVar13 * 2 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar16);
      *(undefined4 *)(param_1 + uVar16) = 0;
      *(undefined4 *)(uVar16 * 8 + 4 + (longlong)param_1) = 0x3f800000;
    }
    lVar15 = uVar16 * 8;
    uVar13 = 1;
    if (3 < uVar16) {
      lVar7 = 8;
      do {
        lVar8 = lVar7 + lVar15;
        *(uint *)((longlong)param_1 + lVar8) = *(uint *)((longlong)param_1 + uVar13 * 8 + 4) ^ uVar5
        ;
        *(undefined4 *)((longlong)param_1 + lVar8 + 4) = *(undefined4 *)(param_1 + uVar13);
        *(uint *)((longlong)param_1 + lVar8 + 8) =
             *(uint *)((longlong)param_1 + uVar13 * 8 + 0xc) ^ uVar5;
        *(undefined4 *)((longlong)param_1 + lVar8 + 0xc) = *(undefined4 *)(param_1 + uVar13 + 1);
        *(uint *)((longlong)param_1 + lVar7 + lVar15 + 0x10) =
             *(uint *)((longlong)param_1 + uVar13 * 8 + 0x14) ^ uVar5;
        *(undefined4 *)((longlong)param_1 + lVar8 + 0x14) = *(undefined4 *)(param_1 + uVar13 + 2);
        lVar9 = lVar7 + lVar15;
        lVar7 = lVar7 + 0x20;
        *(uint *)((longlong)param_1 + lVar9 + 0x18) =
             *(uint *)((longlong)param_1 + uVar13 * 8 + 0x1c) ^ uVar5;
        lVar9 = uVar13 + 3;
        uVar13 = uVar13 + 4;
        *(undefined4 *)((longlong)param_1 + lVar8 + 0x1c) = *(undefined4 *)(param_1 + lVar9);
      } while (uVar13 <= uVar16 - 3);
      if (uVar16 < uVar13) goto LAB_140149e53;
    }
    do {
      lVar7 = uVar13 * 8;
      *(uint *)(param_1 + uVar13 + uVar16) = *(uint *)((longlong)param_1 + uVar13 * 8 + 4) ^ uVar5;
      puVar1 = param_1 + uVar13;
      uVar13 = uVar13 + 1;
      *(undefined4 *)((longlong)param_1 + lVar15 + lVar7 + 4) = *(undefined4 *)puVar1;
    } while (uVar13 <= uVar16);
  }
  else {
    uVar16 = param_2 >> 1;
    if (uVar16 < 4) {
      uVar11 = 2;
    }
    else {
      do {
        uVar11 = uVar13;
        FUN_140149160(uVar11,param_2,&local_d8);
        auVar2._8_8_ = dStack_d0;
        auVar2._0_8_ = local_d8;
        *(undefined1 (*) [16])(param_1 + uVar11 * 2) = auVar2;
        param_1[uVar11 * -2 + uVar16 * 2] =
             CONCAT44((uint)((ulonglong)local_d8 >> 0x20) ^ uVar22,SUB84(local_d8,0) ^ uVar21);
        param_1[uVar11 * -2 + uVar16 * 2 + 1] = dStack_d0;
        if (1 < uVar11) {
          uVar13 = 1;
          if (3 < uVar11 - 1) {
            lVar15 = 0x10;
            do {
              lVar8 = (uVar16 * 0x10 - lVar15) + uVar11 * -0x10;
              dVar20 = (double)param_1[uVar13 * 2 + 1];
              dVar19 = (double)param_1[uVar13 * 2];
              dVar18 = local_d8 * dVar19 - dVar20 * dStack_d0;
              param_1[(uVar13 + uVar11) * 2] = dVar18;
              dVar20 = dVar20 * local_d8 + dStack_d0 * dVar19;
              param_1[(uVar13 + uVar11) * 2 + 1] = dVar20;
              *(ulonglong *)((longlong)param_1 + lVar8) =
                   CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ uVar22,SUB84(dVar18,0) ^ uVar21);
              lVar7 = uVar13 + 1 + uVar11;
              *(double *)((longlong)param_1 + lVar8 + 8) = dVar20;
              dVar20 = (double)param_1[uVar13 * 2 + 3];
              dVar19 = (double)param_1[uVar13 * 2 + 2];
              dVar18 = local_d8 * dVar19 - dVar20 * dStack_d0;
              param_1[lVar7 * 2] = dVar18;
              dVar20 = dVar20 * local_d8 + dStack_d0 * dVar19;
              param_1[lVar7 * 2 + 1] = dVar20;
              *(ulonglong *)((longlong)param_1 + lVar8 + -0x10) =
                   CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ uVar22,SUB84(dVar18,0) ^ uVar21);
              lVar7 = uVar13 + 2 + uVar11;
              *(double *)((longlong)param_1 + lVar8 + -8) = dVar20;
              dVar20 = *(double *)(lVar15 + 0x20 + (longlong)param_1);
              dVar19 = (double)param_1[uVar13 * 2 + 5];
              dVar18 = local_d8 * dVar20 - dVar19 * dStack_d0;
              param_1[lVar7 * 2] = dVar18;
              dVar20 = dVar19 * local_d8 + dStack_d0 * dVar20;
              param_1[lVar7 * 2 + 1] = dVar20;
              *(ulonglong *)((longlong)param_1 + lVar8 + -0x20) =
                   CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ uVar22,SUB84(dVar18,0) ^ uVar21);
              lVar7 = uVar13 + 3 + uVar11;
              *(double *)((longlong)param_1 + lVar8 + -0x18) = dVar20;
              dVar20 = *(double *)(lVar15 + 0x30 + (longlong)param_1);
              dVar19 = local_d8 * dVar20 - (double)param_1[uVar13 * 2 + 7] * dStack_d0;
              dVar20 = (double)param_1[uVar13 * 2 + 7] * local_d8 + dStack_d0 * dVar20;
              uVar13 = uVar13 + 4;
              lVar15 = lVar15 + 0x40;
              param_1[lVar7 * 2] = dVar19;
              param_1[lVar7 * 2 + 1] = dVar20;
              *(ulonglong *)((longlong)param_1 + lVar8 + -0x30) =
                   CONCAT44((uint)((ulonglong)dVar19 >> 0x20) ^ uVar22,SUB84(dVar19,0) ^ uVar21);
              *(double *)((longlong)param_1 + lVar8 + -0x28) = dVar20;
            } while (uVar13 < uVar11 - 3);
            if (uVar11 <= uVar13) goto LAB_140149c20;
          }
          do {
            uVar14 = uVar13 + 1;
            dVar20 = (double)param_1[uVar13 * 2 + 1];
            dVar19 = (double)param_1[uVar13 * 2];
            dVar18 = local_d8 * dVar19 - dVar20 * dStack_d0;
            param_1[(uVar13 + uVar11) * 2] = dVar18;
            dVar20 = dVar20 * local_d8 + dStack_d0 * dVar19;
            param_1[(uVar13 + uVar11) * 2 + 1] = dVar20;
            param_1[uVar11 * -2 + uVar13 * -2 + uVar16 * 2] =
                 CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ uVar22,SUB84(dVar18,0) ^ uVar21);
            param_1[uVar11 * -2 + uVar13 * -2 + uVar16 * 2 + 1] = dVar20;
            uVar13 = uVar14;
          } while (uVar14 < uVar11);
        }
LAB_140149c20:
        uVar13 = uVar11 * 2;
      } while (uVar11 * 8 < uVar16 || uVar11 * 8 - uVar16 == 0);
      uVar11 = uVar11 * 4;
    }
    while (uVar11 <= uVar16) {
      FUN_140149160(uVar13,param_2,&local_d8);
      auVar3._8_8_ = dStack_d0;
      auVar3._0_8_ = local_d8;
      *(undefined1 (*) [16])(param_1 + uVar13 * 2) = auVar3;
      if (uVar11 == uVar16) break;
      param_1[uVar13 * -2 + uVar16 * 2] =
           CONCAT44((uint)((ulonglong)local_d8 >> 0x20) ^ uVar22,SUB84(local_d8,0) ^ uVar21);
      param_1[uVar13 * -2 + uVar16 * 2 + 1] = dStack_d0;
      if (uVar11 + 1 == uVar16) break;
      uVar11 = uVar11 + 2;
      if (1 < uVar13) {
        uVar12 = 1;
        uVar14 = uVar11;
        while( true ) {
          dVar20 = (double)param_1[uVar12 * 2 + 1];
          dVar19 = (double)param_1[uVar12 * 2];
          dVar18 = local_d8 * dVar19 - dVar20 * dStack_d0;
          param_1[(uVar12 + uVar13) * 2] = dVar18;
          dVar20 = dVar20 * local_d8 + dStack_d0 * dVar19;
          uVar11 = uVar14 + 1;
          param_1[(uVar12 + uVar13) * 2 + 1] = dVar20;
          if (uVar14 == uVar16) break;
          bVar17 = uVar11 == uVar16;
          uVar11 = uVar14 + 2;
          param_1[uVar13 * -2 + uVar12 * -2 + uVar16 * 2] =
               CONCAT44((uint)((ulonglong)dVar18 >> 0x20) ^ uVar22,SUB84(dVar18,0) ^ uVar21);
          param_1[uVar13 * -2 + uVar12 * -2 + uVar16 * 2 + 1] = dVar20;
          if ((bVar17) || (uVar12 = uVar12 + 1, uVar14 = uVar11, uVar13 <= uVar12)) break;
        }
      }
      uVar13 = uVar13 * 2;
    }
    if (1 < uVar16) {
      uVar13 = 1;
      if (3 < uVar16 - 1) {
        do {
          *(float *)(param_1 + uVar13) = (float)(double)param_1[uVar13 * 2];
          *(float *)((longlong)param_1 + uVar13 * 8 + 4) = (float)(double)param_1[uVar13 * 2 + 1];
          *(float *)(param_1 + uVar13 + 1) = (float)(double)param_1[uVar13 * 2 + 2];
          *(float *)((longlong)param_1 + uVar13 * 8 + 0xc) = (float)(double)param_1[uVar13 * 2 + 3];
          *(float *)(param_1 + uVar13 + 2) = (float)(double)param_1[uVar13 * 2 + 4];
          *(float *)((longlong)param_1 + uVar13 * 8 + 0x14) = (float)(double)param_1[uVar13 * 2 + 5]
          ;
          *(float *)(param_1 + uVar13 + 3) = (float)(double)param_1[uVar13 * 2 + 6];
          *(float *)((longlong)param_1 + uVar13 * 8 + 0x1c) = (float)(double)param_1[uVar13 * 2 + 7]
          ;
          uVar13 = uVar13 + 4;
        } while (uVar13 < uVar16 - 3);
        if (uVar16 <= uVar13) goto LAB_140149e42;
      }
      do {
        *(float *)(param_1 + uVar13) = (float)(double)param_1[uVar13 * 2];
        *(float *)((longlong)param_1 + uVar13 * 8 + 4) = (float)(double)param_1[uVar13 * 2 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar13 < uVar16);
    }
LAB_140149e42:
    *(undefined4 *)(param_1 + uVar16) = 0xbf800000;
    *(undefined4 *)((longlong)param_1 + uVar16 * 8 + 4) = 0;
  }
LAB_140149e53:
  uVar13 = param_2 >> 1;
  if (1 < uVar13) {
    if (3 < uVar13 - 1) {
      uVar16 = uVar10;
      do {
        lVar15 = uVar16 * 8;
        uVar10 = uVar16 + 4;
        lVar7 = param_2 * 8 + uVar16 * -8;
        *(undefined4 *)(param_1 + (param_2 - uVar16)) = *(undefined4 *)(param_1 + uVar16);
        *(uint *)((longlong)param_1 + lVar7 + 4) = *(uint *)((longlong)param_1 + lVar15 + 4) ^ uVar5
        ;
        *(undefined4 *)(param_1 + ((param_2 - 1) - uVar16)) = *(undefined4 *)(param_1 + uVar16 + 1);
        *(uint *)((longlong)param_1 + lVar7 + -4) =
             *(uint *)((longlong)param_1 + lVar15 + 0xc) ^ uVar5;
        *(undefined4 *)(param_1 + ((param_2 - 2) - uVar16)) = *(undefined4 *)(param_1 + uVar16 + 2);
        *(uint *)((longlong)param_1 + lVar7 + -0xc) =
             *(uint *)((longlong)param_1 + lVar15 + 0x14) ^ uVar5;
        *(undefined4 *)(param_1 + ((param_2 - 3) - uVar16)) = *(undefined4 *)(param_1 + uVar16 + 3);
        *(uint *)((longlong)param_1 + lVar7 + -0x14) =
             *(uint *)((longlong)param_1 + lVar15 + 0x1c) ^ uVar5;
        uVar16 = uVar10;
      } while (uVar10 < uVar13 - 3);
      if (uVar13 <= uVar10) goto LAB_14014af52;
    }
    do {
      uVar16 = uVar10 + 1;
      *(undefined4 *)(param_1 + (param_2 - uVar10)) = *(undefined4 *)(param_1 + uVar10);
      *(uint *)((longlong)param_1 + param_2 * 8 + uVar10 * -8 + 4) =
           *(uint *)((longlong)param_1 + uVar10 * 8 + 4) ^ uVar5;
      uVar10 = uVar16;
    } while (uVar16 < uVar13);
  }
LAB_14014af52:
  *param_1 = 0x3f800000;
  return 0;
}

