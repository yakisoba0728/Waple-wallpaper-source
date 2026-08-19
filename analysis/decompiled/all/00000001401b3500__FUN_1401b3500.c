// Function: FUN_1401b3500
// Addr: 1401b3500
// Size: 155 bytes


void FUN_1401b3500(longlong *param_1,ulonglong param_2,int param_3,int param_4,undefined8 *param_5,
                  undefined4 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  float *pfVar6;
  code *pcVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulonglong local_res10;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [24];
  undefined4 auStack_128 [2];
  longlong lStack_120;
  undefined8 uStack_118;
  longlong alStack_110 [5];
  ulonglong *puStack_e8;
  undefined4 *puStack_e0;
  longlong *plStack_d8;
  undefined8 uStack_9c;
  
  if (param_2 != 0) {
    puVar13 = auStack_148;
    lVar10 = *(longlong *)(param_2 + 0x100);
    uVar14 = ((((((((param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                   (longlong)param_2 >> 8 & 0xffU) * 0x100000001b3 ^
                  (longlong)param_2 >> 0x10 & 0xffU) * 0x100000001b3 ^
                 (longlong)param_2 >> 0x18 & 0xffU) * 0x100000001b3 ^
                (longlong)param_2 >> 0x20 & 0xffU) * 0x100000001b3 ^
               (longlong)param_2 >> 0x28 & 0xffU) * 0x100000001b3 ^
              (longlong)param_2 >> 0x30 & 0xffU) * 0x100000001b3 ^ (longlong)param_2 >> 0x38 & 0xffU
             ) * 0x100000001b3 & *(ulonglong *)(lVar10 + 0xe8);
    lVar11 = *(longlong *)(*(longlong *)(lVar10 + 0xd0) + 8 + uVar14 * 0x10);
    if (lVar11 == *(longlong *)(lVar10 + 0xc0)) {
code_r0x0001401b3632:
      lVar11 = 0;
    }
    else {
      uVar4 = *(ulonglong *)(lVar11 + 0x10);
      while (param_2 != uVar4) {
        if (lVar11 == *(longlong *)(*(longlong *)(lVar10 + 0xd0) + uVar14 * 0x10))
        goto code_r0x0001401b3632;
        lVar11 = *(longlong *)(lVar11 + 8);
        uVar4 = *(ulonglong *)(lVar11 + 0x10);
      }
    }
    local_res10 = param_2;
    if ((lVar11 == 0) || (lVar11 == *(longlong *)(lVar10 + 0xc0))) {
      plVar12 = (longlong *)(param_2 + 0x58);
      if (0xf < *(ulonglong *)(param_2 + 0x70)) {
        plVar12 = (longlong *)*plVar12;
      }
      func_0x0001401b04e0(param_1,param_2,plVar12,param_2);
    }
    fVar19 = (float)param_3;
    *(undefined4 *)(lVar10 + 0x24) = *(undefined4 *)(*param_1 + 0x144);
    lVar11 = *param_1;
    *(undefined8 *)(lVar11 + 0x124) = *param_5;
    *(undefined4 *)(lVar11 + 300) = *(undefined4 *)(param_5 + 1);
    fVar18 = (float)param_4;
    *(undefined4 *)(*param_1 + 0x120) = param_6;
    lVar11 = *param_1;
    puVar5 = *(undefined8 **)(lVar11 + 0x30);
    *(undefined1 *)(lVar11 + 0x1ca) = 1;
    *(undefined8 **)(lVar11 + 0x30) = puVar5 + 8;
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
    fVar16 = fVar19 * (float)*(undefined8 *)(pfVar6 + 1) +
             fVar18 * (float)*(undefined8 *)(pfVar6 + 5) + (float)*(undefined8 *)(pfVar6 + 9) * 0.0
             + (float)*(undefined8 *)(pfVar6 + 0xd);
    fVar17 = fVar19 * (float)((ulonglong)*(undefined8 *)(pfVar6 + 1) >> 0x20) +
             fVar18 * (float)((ulonglong)*(undefined8 *)(pfVar6 + 5) >> 0x20) +
             (float)((ulonglong)*(undefined8 *)(pfVar6 + 9) >> 0x20) * 0.0 +
             (float)((ulonglong)*(undefined8 *)(pfVar6 + 0xd) >> 0x20);
    uStack_9c = CONCAT44(fVar17,fVar16);
    pfVar6[0xc] = fVar19 * fVar2 + fVar18 * fVar1 + fVar3 * 0.0 + pfVar6[0xc];
    pfVar6[0xd] = fVar16;
    pfVar6[0xe] = fVar17;
    pfVar6[0xf] = fVar19 * pfVar6[3] + fVar18 * pfVar6[7] + pfVar6[0xb] * 0.0 + pfVar6[0xf];
    auStack_128[0] = 0;
    lStack_120 = 0;
    uStack_118 = 0;
    lStack_120 = func_0x00014028aff0(0x38);
    *(longlong *)lStack_120 = lStack_120;
    *(longlong *)(lStack_120 + 8) = lStack_120;
    alStack_110[1] = 0;
    alStack_110[2] = 0;
    alStack_110[0] = 0;
    alStack_110[3] = 7;
    alStack_110[4] = 8;
    auStack_128[0] = 0x3f800000;
    FUN_140012020(alStack_110,0x10,lStack_120);
    puStack_e8 = &local_res10;
    puStack_e0 = auStack_128;
    plStack_d8 = param_1;
    if ((*(longlong *)(local_res10 + 0x78) != 0) &&
       (lVar11 = *(longlong *)(lVar10 + 0x70), lVar11 != 0)) {
      plVar12 = *(longlong **)(lVar11 + 0x18);
      if (plVar12 == (longlong *)0x0) {
        func_0x0001401ac8c0(*param_1,lVar11);
        plVar12 = *(longlong **)(lVar11 + 0x18);
        *(undefined1 *)(lVar11 + 0x20) = 0;
      }
      if (*(char *)(lVar11 + 0x20) != '\0') {
        *(undefined1 *)(lVar11 + 0x20) = 0;
        (**(code **)(*plVar12 + 0x48))(plVar12,*(undefined8 *)(lVar11 + 0x10));
      }
      if (*(char *)(lVar10 + 0x20) == '\0') {
        if (*(char *)(local_res10 + 0x19) == '\0') {
          lVar9 = param_1[0x15];
          if (lVar9 == 0) {
            lVar9 = FUN_140150040(*param_1 + 0x1630,"materials/fonts/basefont.json");
            param_1[0x15] = lVar9;
          }
        }
        else {
          lVar9 = param_1[0x16];
          if (lVar9 == 0) {
            lVar9 = FUN_140150040(*param_1 + 0x1630,"materials/fonts/basefont_depth.json");
            param_1[0x16] = lVar9;
          }
        }
      }
      else {
        iVar8 = func_0x0001401b3c30(&puStack_e8);
        lVar15 = (longlong)iVar8;
        if (*(char *)(local_res10 + 0x19) == '\0') {
          lVar9 = param_1[lVar15 + 0x17];
          if (lVar9 == 0) {
            lVar9 = FUN_1401501e0(*param_1 + 0x1630,"materials/fonts/basefont_msdf.json",auStack_128
                                  ,0);
            param_1[lVar15 + 0x17] = lVar9;
          }
        }
        else {
          lVar9 = param_1[lVar15 + 0x1f];
          if (lVar9 == 0) {
            lVar9 = FUN_1401501e0(*param_1 + 0x1630,"materials/fonts/basefont_msdf_depth.json",
                                  auStack_128,0);
            param_1[lVar15 + 0x1f] = lVar9;
          }
        }
      }
      *(undefined8 *)(lVar9 + 0xd0) = *(undefined8 *)(lVar11 + 0x18);
      *(char *)(lVar9 + 0x1f0) = (char)param_1[0x27];
      FUN_140156090(lVar9);
      (**(code **)(**(longlong **)(local_res10 + 0x78) + 8))();
      FUN_140157500(lVar9);
    }
    if ((*(longlong *)(local_res10 + 0x80) != 0) &&
       (lVar11 = *(longlong *)(local_res10 + 0xb0), lVar11 != 0)) {
      plVar12 = *(longlong **)(lVar11 + 0x18);
      if (plVar12 == (longlong *)0x0) {
        func_0x0001401ac8c0(*param_1,lVar11);
        plVar12 = *(longlong **)(lVar11 + 0x18);
        *(undefined1 *)(lVar11 + 0x20) = 0;
      }
      if (*(char *)(lVar11 + 0x20) != '\0') {
        *(undefined1 *)(lVar11 + 0x20) = 0;
        (**(code **)(*plVar12 + 0x48))(plVar12,*(undefined8 *)(lVar11 + 0x10));
        plVar12 = *(longlong **)(lVar11 + 0x30);
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x48))(plVar12,*(undefined8 *)(lVar11 + 0x28));
        }
      }
      if (*(char *)(lVar10 + 0x20) == '\0') {
        if (*(char *)(local_res10 + 0x19) == '\0') {
          lVar10 = param_1[3];
          if (lVar10 == 0) {
            lVar10 = FUN_140150040(*param_1 + 0x1630,"materials/fonts/basefontrgba.json");
            param_1[3] = lVar10;
          }
        }
        else {
          lVar10 = param_1[4];
          if (lVar10 == 0) {
            lVar10 = FUN_140150040(*param_1 + 0x1630,"materials/fonts/basefontrgba_depth.json");
            param_1[4] = lVar10;
          }
        }
      }
      else {
        iVar8 = func_0x0001401b3c30(&puStack_e8);
        lVar9 = (longlong)iVar8;
        if (*(char *)(local_res10 + 0x19) == '\0') {
          lVar10 = param_1[lVar9 + 5];
          if (lVar10 == 0) {
            lVar10 = FUN_1401501e0(*param_1 + 0x1630,"materials/fonts/basefontrgba_msdf.json",
                                   auStack_128,0);
            param_1[lVar9 + 5] = lVar10;
          }
        }
        else {
          lVar10 = param_1[lVar9 + 0xd];
          if (lVar10 == 0) {
            lVar10 = FUN_1401501e0(*param_1 + 0x1630,"materials/fonts/basefontrgba_msdf_depth.json",
                                   auStack_128,0);
            param_1[lVar9 + 0xd] = lVar10;
          }
        }
      }
      *(undefined8 *)(lVar10 + 0xd0) = *(undefined8 *)(lVar11 + 0x18);
      *(undefined8 *)(lVar10 + 0xd8) = *(undefined8 *)(lVar11 + 0x30);
      *(char *)(lVar10 + 0x1f0) = (char)param_1[0x27];
      FUN_140156090(lVar10);
      (**(code **)(**(longlong **)(local_res10 + 0x80) + 8))();
      FUN_140157500(lVar10);
    }
    lVar10 = *param_1;
    plVar12 = (longlong *)(lVar10 + 0x30);
    *plVar12 = *plVar12 + -0x40;
    *(undefined1 *)(lVar10 + 0x1ca) = 1;
    if (alStack_110[0] != 0) {
      lVar10 = alStack_110[0];
      puVar13 = auStack_148;
      if ((0xfff < (ulonglong)((alStack_110[2] - alStack_110[0] >> 3) * 8)) &&
         (lVar10 = *(longlong *)(alStack_110[0] + -8), puVar13 = auStack_148,
         0x1f < (alStack_110[0] - lVar10) - 8U)) {
        lVar10 = 5;
        pcVar7 = (code *)swi(0x29);
        (*pcVar7)(5);
        puVar13 = auStack_140;
      }
      *(undefined **)(puVar13 + -8) = &UNK_1401b3bb3;
      func_0x00014028b040(lVar10);
      *(undefined8 *)(puVar13 + 0x38) = 0;
      *(undefined8 *)(puVar13 + 0x40) = 0;
      *(undefined8 *)(puVar13 + 0x48) = 0;
    }
    plVar12 = *(longlong **)(puVar13 + 0x28);
    *(undefined8 *)plVar12[1] = 0;
    lVar10 = *plVar12;
    if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar13 + -8) = &UNK_1401b3bec;
      FUN_140017310(lVar10 + 0x10);
    }
    *(undefined **)(puVar13 + -8) = &UNK_1401b3c10;
    func_0x00014028b040(*(undefined8 *)(puVar13 + 0x28),0x38);
  }
  return;
}

