// Function: FUN_1401b3430
// Addr: 1401b3430
// Size: 1828 bytes


void FUN_1401b3430(longlong *param_1,ulonglong param_2,int param_3,int param_4,undefined8 *param_5,
                  undefined4 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  float *pfVar6;
  undefined8 *puVar7;
  code *pcVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulonglong local_res10;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [24];
  undefined4 local_128 [2];
  longlong local_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  longlong lStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  ulonglong *local_e8;
  undefined4 *local_e0;
  longlong *local_d8;
  undefined8 uStack_9c;
  
  if (param_2 != 0) {
    puVar14 = auStack_148;
    lVar11 = *(longlong *)(param_2 + 0x100);
    uVar15 = ((((((((param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (longlong)param_2 >> 8 & 0xffU) * 0x100000001b3 ^
                  (longlong)param_2 >> 0x10 & 0xffU) * 0x100000001b3 ^
                 (longlong)param_2 >> 0x18 & 0xffU) * 0x100000001b3 ^
                (longlong)param_2 >> 0x20 & 0xffU) * 0x100000001b3 ^
               (longlong)param_2 >> 0x28 & 0xffU) * 0x100000001b3 ^
              (longlong)param_2 >> 0x30 & 0xffU) * 0x100000001b3 ^ (longlong)param_2 >> 0x38 & 0xffU
             ) * 0x100000001b3 & *(ulonglong *)(lVar11 + 0xe8);
    lVar12 = *(longlong *)(*(longlong *)(lVar11 + 0xd0) + 8 + uVar15 * 0x10);
    if (lVar12 == *(longlong *)(lVar11 + 0xc0)) {
LAB_1401b3562:
      lVar12 = 0;
    }
    else {
      uVar4 = *(ulonglong *)(lVar12 + 0x10);
      while (param_2 != uVar4) {
        if (lVar12 == *(longlong *)(*(longlong *)(lVar11 + 0xd0) + uVar15 * 0x10))
        goto LAB_1401b3562;
        lVar12 = *(longlong *)(lVar12 + 8);
        uVar4 = *(ulonglong *)(lVar12 + 0x10);
      }
    }
    local_res10 = param_2;
    if ((lVar12 == 0) || (lVar12 == *(longlong *)(lVar11 + 0xc0))) {
      plVar13 = (longlong *)(param_2 + 0x58);
      if (0xf < *(ulonglong *)(param_2 + 0x70)) {
        plVar13 = (longlong *)*plVar13;
      }
      FUN_1401b0410(param_1,param_2,plVar13,param_2);
    }
    fVar20 = (float)param_3;
    *(undefined4 *)(lVar11 + 0x24) = *(undefined4 *)(*param_1 + 0x144);
    lVar12 = *param_1;
    *(undefined8 *)(lVar12 + 0x124) = *param_5;
    *(undefined4 *)(lVar12 + 300) = *(undefined4 *)(param_5 + 1);
    fVar19 = (float)param_4;
    *(undefined4 *)(*param_1 + 0x120) = param_6;
    lVar12 = *param_1;
    puVar5 = *(undefined8 **)(lVar12 + 0x30);
    *(undefined1 *)(lVar12 + 0x1ca) = 1;
    *(undefined8 **)(lVar12 + 0x30) = puVar5 + 8;
    puVar5[8] = *puVar5;
    puVar5[9] = puVar5[1];
    puVar5[10] = puVar5[2];
    puVar5[0xb] = puVar5[3];
    puVar5[0xc] = puVar5[4];
    puVar5[0xd] = puVar5[5];
    puVar5[0xe] = puVar5[6];
    puVar5[0xf] = puVar5[7];
    pfVar6 = *(float **)(*param_1 + 0x30);
    fVar1 = pfVar6[4];
    fVar2 = *pfVar6;
    fVar3 = pfVar6[8];
    *(undefined8 *)pfVar6 = *(undefined8 *)pfVar6;
    *(undefined8 *)(pfVar6 + 2) = *(undefined8 *)(pfVar6 + 2);
    *(undefined8 *)(pfVar6 + 4) = *(undefined8 *)(pfVar6 + 4);
    *(undefined8 *)(pfVar6 + 6) = *(undefined8 *)(pfVar6 + 6);
    *(undefined8 *)(pfVar6 + 8) = *(undefined8 *)(pfVar6 + 8);
    *(undefined8 *)(pfVar6 + 10) = *(undefined8 *)(pfVar6 + 10);
    fVar17 = fVar20 * (float)*(undefined8 *)(pfVar6 + 1) +
             fVar19 * (float)*(undefined8 *)(pfVar6 + 5) + (float)*(undefined8 *)(pfVar6 + 9) * 0.0
             + (float)*(undefined8 *)(pfVar6 + 0xd);
    fVar18 = fVar20 * (float)((ulonglong)*(undefined8 *)(pfVar6 + 1) >> 0x20) +
             fVar19 * (float)((ulonglong)*(undefined8 *)(pfVar6 + 5) >> 0x20) +
             (float)((ulonglong)*(undefined8 *)(pfVar6 + 9) >> 0x20) * 0.0 +
             (float)((ulonglong)*(undefined8 *)(pfVar6 + 0xd) >> 0x20);
    uStack_9c = CONCAT44(fVar18,fVar17);
    pfVar6[0xc] = fVar20 * fVar2 + fVar19 * fVar1 + fVar3 * 0.0 + pfVar6[0xc];
    pfVar6[0xd] = fVar17;
    pfVar6[0xe] = fVar18;
    pfVar6[0xf] = fVar20 * pfVar6[3] + fVar19 * pfVar6[7] + pfVar6[0xb] * 0.0 + pfVar6[0xf];
    local_128[0] = 0;
    local_120 = 0;
    local_118 = 0;
    local_120 = FUN_14028af20(0x38);
    *(longlong *)local_120 = local_120;
    *(longlong *)(local_120 + 8) = local_120;
    local_108 = 0;
    lStack_100 = 0;
    local_110 = 0;
    local_f8 = 7;
    local_f0 = 8;
    local_128[0] = 0x3f800000;
    FUN_140011f50(&local_110,0x10,local_120);
    local_e8 = &local_res10;
    local_e0 = local_128;
    local_d8 = param_1;
    if ((*(longlong *)(local_res10 + 0x78) != 0) &&
       (lVar12 = *(longlong *)(lVar11 + 0x70), lVar12 != 0)) {
      plVar13 = *(longlong **)(lVar12 + 0x18);
      if (plVar13 == (longlong *)0x0) {
        FUN_1401ac7f0(*param_1,lVar12);
        plVar13 = *(longlong **)(lVar12 + 0x18);
        *(undefined1 *)(lVar12 + 0x20) = 0;
      }
      if (*(char *)(lVar12 + 0x20) != '\0') {
        *(undefined1 *)(lVar12 + 0x20) = 0;
        (**(code **)(*plVar13 + 0x48))(plVar13,*(undefined8 *)(lVar12 + 0x10));
      }
      if (*(char *)(lVar11 + 0x20) == '\0') {
        if (*(char *)(local_res10 + 0x19) == '\0') {
          lVar10 = param_1[0x15];
          if (lVar10 == 0) {
            lVar10 = FUN_14014ff70(*param_1 + 0x1630,"materials/fonts/basefont.json");
            param_1[0x15] = lVar10;
          }
        }
        else {
          lVar10 = param_1[0x16];
          if (lVar10 == 0) {
            lVar10 = FUN_14014ff70(*param_1 + 0x1630,"materials/fonts/basefont_depth.json");
            param_1[0x16] = lVar10;
          }
        }
      }
      else {
        iVar9 = FUN_1401b3b60(&local_e8);
        lVar16 = (longlong)iVar9;
        if (*(char *)(local_res10 + 0x19) == '\0') {
          lVar10 = param_1[lVar16 + 0x17];
          if (lVar10 == 0) {
            lVar10 = FUN_140150110(*param_1 + 0x1630,"materials/fonts/basefont_msdf.json",local_128,
                                   0);
            param_1[lVar16 + 0x17] = lVar10;
          }
        }
        else {
          lVar10 = param_1[lVar16 + 0x1f];
          if (lVar10 == 0) {
            lVar10 = FUN_140150110(*param_1 + 0x1630,"materials/fonts/basefont_msdf_depth.json",
                                   local_128,0);
            param_1[lVar16 + 0x1f] = lVar10;
          }
        }
      }
      *(undefined8 *)(lVar10 + 0xd0) = *(undefined8 *)(lVar12 + 0x18);
      *(char *)(lVar10 + 0x1f0) = (char)param_1[0x27];
      FUN_140155fc0(lVar10);
      (**(code **)(**(longlong **)(local_res10 + 0x78) + 8))();
      FUN_140157430(lVar10);
    }
    if ((*(longlong *)(local_res10 + 0x80) != 0) &&
       (lVar12 = *(longlong *)(local_res10 + 0xb0), lVar12 != 0)) {
      plVar13 = *(longlong **)(lVar12 + 0x18);
      if (plVar13 == (longlong *)0x0) {
        FUN_1401ac7f0(*param_1,lVar12);
        plVar13 = *(longlong **)(lVar12 + 0x18);
        *(undefined1 *)(lVar12 + 0x20) = 0;
      }
      if (*(char *)(lVar12 + 0x20) != '\0') {
        *(undefined1 *)(lVar12 + 0x20) = 0;
        (**(code **)(*plVar13 + 0x48))(plVar13,*(undefined8 *)(lVar12 + 0x10));
        plVar13 = *(longlong **)(lVar12 + 0x30);
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 0x48))(plVar13,*(undefined8 *)(lVar12 + 0x28));
        }
      }
      if (*(char *)(lVar11 + 0x20) == '\0') {
        if (*(char *)(local_res10 + 0x19) == '\0') {
          lVar11 = param_1[3];
          if (lVar11 == 0) {
            lVar11 = FUN_14014ff70(*param_1 + 0x1630,"materials/fonts/basefontrgba.json");
            param_1[3] = lVar11;
          }
        }
        else {
          lVar11 = param_1[4];
          if (lVar11 == 0) {
            lVar11 = FUN_14014ff70(*param_1 + 0x1630,"materials/fonts/basefontrgba_depth.json");
            param_1[4] = lVar11;
          }
        }
      }
      else {
        iVar9 = FUN_1401b3b60(&local_e8);
        lVar10 = (longlong)iVar9;
        if (*(char *)(local_res10 + 0x19) == '\0') {
          lVar11 = param_1[lVar10 + 5];
          if (lVar11 == 0) {
            lVar11 = FUN_140150110(*param_1 + 0x1630,"materials/fonts/basefontrgba_msdf.json",
                                   local_128,0);
            param_1[lVar10 + 5] = lVar11;
          }
        }
        else {
          lVar11 = param_1[lVar10 + 0xd];
          if (lVar11 == 0) {
            lVar11 = FUN_140150110(*param_1 + 0x1630,"materials/fonts/basefontrgba_msdf_depth.json",
                                   local_128,0);
            param_1[lVar10 + 0xd] = lVar11;
          }
        }
      }
      *(undefined8 *)(lVar11 + 0xd0) = *(undefined8 *)(lVar12 + 0x18);
      *(undefined8 *)(lVar11 + 0xd8) = *(undefined8 *)(lVar12 + 0x30);
      *(char *)(lVar11 + 0x1f0) = (char)param_1[0x27];
      FUN_140155fc0(lVar11);
      (**(code **)(**(longlong **)(local_res10 + 0x80) + 8))();
      FUN_140157430(lVar11);
    }
    lVar11 = *param_1;
    plVar13 = (longlong *)(lVar11 + 0x30);
    *plVar13 = *plVar13 + -0x40;
    *(undefined1 *)(lVar11 + 0x1ca) = 1;
    if (local_110 != 0) {
      lVar11 = local_110;
      puVar14 = auStack_148;
      if ((0xfff < (ulonglong)((lStack_100 - local_110 >> 3) * 8)) &&
         (lVar11 = *(longlong *)(local_110 + -8), puVar14 = auStack_148,
         0x1f < (local_110 - lVar11) - 8U)) {
        lVar11 = 5;
        pcVar8 = (code *)swi(0x29);
        (*pcVar8)(5);
        puVar14 = auStack_140;
      }
      *(undefined8 *)(puVar14 + -8) = 0x1401b3ae3;
      thunk_FUN_14028af80(lVar11);
      *(undefined8 *)(puVar14 + 0x38) = 0;
      *(undefined8 *)(puVar14 + 0x40) = 0;
      *(undefined8 *)(puVar14 + 0x48) = 0;
    }
    puVar5 = *(undefined8 **)(puVar14 + 0x28);
    *(undefined8 *)puVar5[1] = 0;
    puVar5 = (undefined8 *)*puVar5;
    while (puVar5 != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)*puVar5;
      *(undefined8 *)(puVar14 + -8) = 0x1401b3b1c;
      FUN_140017240(puVar5 + 2);
      *(undefined8 *)(puVar14 + -8) = 0x1401b3b29;
      thunk_FUN_14028af80(puVar5,0x38);
      puVar5 = puVar7;
    }
    *(undefined8 *)(puVar14 + -8) = 0x1401b3b40;
    thunk_FUN_14028af80(*(undefined8 *)(puVar14 + 0x28),0x38);
  }
  return;
}

