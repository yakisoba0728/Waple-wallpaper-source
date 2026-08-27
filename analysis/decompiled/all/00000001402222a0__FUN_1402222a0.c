// Function: FUN_1402222a0
// Addr: 1402222a0
// Size: 3601 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1402222a0(longlong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  byte bVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  code *pcVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  char cVar27;
  float *pfVar28;
  float *pfVar29;
  undefined8 uVar30;
  undefined4 *puVar31;
  ulonglong uVar32;
  undefined1 *puVar33;
  uint uVar34;
  longlong lVar35;
  ulonglong *puVar36;
  ulonglong *puVar37;
  int iVar38;
  ulonglong uVar39;
  ulonglong *puVar40;
  ulonglong uVar41;
  undefined1 *puVar42;
  ulonglong *puVar43;
  ulonglong *puVar44;
  uint uVar45;
  byte bVar46;
  ulonglong *puVar47;
  longlong lVar48;
  longlong lVar49;
  ulonglong uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  int local_res8;
  undefined4 uStackX_c;
  longlong local_res10;
  longlong local_res18;
  undefined8 local_res20;
  undefined1 auStack_1158 [8];
  undefined1 auStack_1150 [24];
  ulonglong local_1138;
  undefined1 *local_1130;
  undefined8 local_1128;
  float local_1120;
  undefined1 local_1118 [64];
  undefined1 *local_10d8;
  ulonglong local_10d0;
  undefined1 local_10c8 [4232];
  
  puVar42 = auStack_1158;
  lVar48 = param_1[0x19];
  uVar45 = 0;
  if ((*(byte *)(lVar48 + 0x11c) & 1) != 0) {
    fVar51 = *(float *)((longlong)param_1 + 0x2fc);
    fVar52 = *(float *)(param_1 + 0x60);
    fVar53 = *(float *)(param_1 + 0x5f);
    pfVar28 = (float *)(**(code **)(*param_1 + 0x80))();
    fVar1 = pfVar28[2];
    fVar2 = pfVar28[6];
    fVar54 = pfVar28[5];
    fVar56 = pfVar28[1];
    fVar3 = pfVar28[4];
    fVar4 = *pfVar28;
    pfVar29 = (float *)FUN_14005f5b0(pfVar28,2);
    fVar55 = pfVar29[2];
    fVar5 = pfVar29[1];
    fVar6 = *pfVar29;
    pfVar28 = (float *)FUN_14005f5b0(pfVar28,3);
    fVar55 = fVar53 * fVar1 + fVar51 * fVar2 + fVar52 * fVar55 + pfVar28[2];
    fVar1 = *(float *)(param_1 + 0x61);
    fVar56 = fVar53 * fVar56 + fVar51 * fVar54 + fVar52 * fVar5 + pfVar28[1];
    fVar2 = *(float *)((longlong)param_1 + 0x30c);
    fVar54 = fVar53 * fVar4 + fVar51 * fVar3 + fVar52 * fVar6 + *pfVar28;
    fVar51 = *(float *)((longlong)param_1 + 0x304);
    pfVar28 = (float *)(**(code **)(*param_1 + 0x80))(param_1);
    local_1120 = ((fVar51 * pfVar28[2] + fVar1 * pfVar28[6] + fVar2 * pfVar28[10] + pfVar28[0xe]) -
                 fVar55) * DAT_1404926c0;
    fVar53 = ((fVar51 * pfVar28[1] + fVar1 * pfVar28[5] + fVar2 * pfVar28[9] + pfVar28[0xd]) -
             fVar56) * DAT_1404926c0;
    fVar52 = ((fVar51 * *pfVar28 + fVar1 * pfVar28[4] + fVar2 * pfVar28[8] + pfVar28[0xc]) - fVar54)
             * DAT_1404926c0;
    fVar51 = fVar53 * fVar53 + fVar52 * fVar52 + local_1120 * local_1120;
    if (fVar51 < 0.0) {
      fVar51 = (float)FUN_14041ad10(fVar51);
    }
    else {
      fVar51 = SQRT(fVar51);
    }
    lVar48 = param_1[0x19];
    fVar52 = fVar52 + fVar54;
    fVar53 = fVar53 + fVar56;
    local_1120 = local_1120 + fVar55;
    bVar8 = *(byte *)(lVar48 + 0x1c8);
    local_1128 = CONCAT44(fVar53,fVar52);
    if (bVar8 == 0) {
      cVar27 = FUN_1401e5a10(lVar48 + 0xec0,&local_1128,fVar51);
      if (cVar27 != '\0') {
        return;
      }
    }
    else {
      fVar51 = (float)((uint)fVar51 ^ DAT_140492ff0);
      uVar34 = 0;
      uVar39 = 0;
      do {
        lVar35 = uVar39 * 0x60;
        if (((((fVar52 * *(float *)(lVar48 + 0xf20 + lVar35) +
                fVar53 * *(float *)(lVar48 + 0xf24 + lVar35) +
                local_1120 * *(float *)(lVar48 + 0xf28 + lVar35) +
                *(float *)(lVar48 + 0xf2c + lVar35) < fVar51) ||
              (fVar52 * *(float *)(lVar48 + 0xf30 + lVar35) +
               fVar53 * *(float *)(lVar48 + 0xf34 + lVar35) +
               local_1120 * *(float *)(lVar48 + 0xf38 + lVar35) +
               *(float *)(lVar48 + 0xf3c + lVar35) < fVar51)) ||
             (fVar53 * *(float *)(lVar48 + 0xf44 + lVar35) +
              fVar52 * *(float *)(lVar48 + 0xf40 + lVar35) +
              local_1120 * *(float *)(lVar48 + 0xf48 + lVar35) + *(float *)(lVar48 + 0xf4c + lVar35)
              < fVar51)) ||
            ((fVar53 * *(float *)(lVar48 + 0xf54 + lVar35) +
              fVar52 * *(float *)(lVar48 + 0xf50 + lVar35) +
              local_1120 * *(float *)(lVar48 + 0xf58 + lVar35) + *(float *)(lVar48 + 0xf5c + lVar35)
              < fVar51 ||
             (fVar53 * *(float *)(lVar48 + 0xf64 + lVar35) +
              fVar52 * *(float *)(lVar48 + 0xf60 + lVar35) +
              local_1120 * *(float *)(lVar48 + 0xf68 + lVar35) + *(float *)(lVar48 + 0xf6c + lVar35)
              < fVar51)))) ||
           (fVar53 * *(float *)(lVar48 + 0xf74 + lVar35) +
            fVar52 * *(float *)(lVar48 + 0xf70 + lVar35) +
            local_1120 * *(float *)(lVar48 + 0xf78 + lVar35) + *(float *)(lVar48 + 0xf7c + lVar35) <
            fVar51)) {
          uVar34 = (uint)(byte)((char)uVar34 + 1);
        }
        else {
          uVar45 = uVar45 | (int)uVar39 << (((char)uVar39 - (char)uVar34) * '\x03' & 0x1fU);
        }
        bVar46 = (char)uVar39 + 1;
        uVar39 = (ulonglong)bVar46;
      } while (bVar46 < bVar8);
      if ((byte)uVar34 == bVar8) {
        return;
      }
      (**(code **)(**(longlong **)(lVar48 + 0x1518) + 0x150))
                (*(longlong **)(lVar48 + 0x1518),bVar8 - (byte)uVar34);
      plVar9 = *(longlong **)(param_1[0x19] + 0x1518);
      (**(code **)(*plVar9 + 0x98))(plVar9,*(byte *)(param_1[0x19] + 0x1c8) - uVar34,uVar45);
      lVar48 = param_1[0x19];
    }
  }
  if ((*(byte *)(param_1 + 0x24) & 0x80) != 0) {
    puVar10 = *(undefined8 **)(lVar48 + 0x40);
    *(undefined1 *)(lVar48 + 0x1ca) = 1;
    *(undefined8 **)(lVar48 + 0x40) = puVar10 + 8;
    puVar10[8] = *puVar10;
    puVar10[9] = puVar10[1];
    puVar10[10] = puVar10[2];
    puVar10[0xb] = puVar10[3];
    puVar10[0xc] = puVar10[4];
    puVar10[0xd] = puVar10[5];
    puVar10[0xe] = puVar10[6];
    puVar10[0xf] = puVar10[7];
    lVar48 = param_1[0x19];
    puVar10 = *(undefined8 **)(lVar48 + 0x38);
    *(undefined1 *)(lVar48 + 0x1ca) = 1;
    *(undefined8 **)(lVar48 + 0x38) = puVar10 + 8;
    puVar10[8] = *puVar10;
    puVar10[9] = puVar10[1];
    puVar10[10] = puVar10[2];
    puVar10[0xb] = puVar10[3];
    *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(puVar10 + 4);
    *(undefined4 *)((longlong)puVar10 + 100) = *(undefined4 *)((longlong)puVar10 + 0x24);
    *(undefined4 *)(puVar10 + 0xd) = *(undefined4 *)(puVar10 + 5);
    *(undefined4 *)((longlong)puVar10 + 0x6c) = *(undefined4 *)((longlong)puVar10 + 0x2c);
    *(undefined4 *)(puVar10 + 0xe) = *(undefined4 *)(puVar10 + 6);
    *(undefined4 *)((longlong)puVar10 + 0x74) = *(undefined4 *)((longlong)puVar10 + 0x34);
    *(undefined4 *)(puVar10 + 0xf) = *(undefined4 *)(puVar10 + 7);
    *(undefined4 *)((longlong)puVar10 + 0x7c) = *(undefined4 *)((longlong)puVar10 + 0x3c);
    FUN_1401e5b60(param_1[0x19]);
  }
  *(undefined4 *)(param_1[0x19] + 0x120) = 0x3f800000;
  lVar48 = param_1[0x19];
  *(undefined4 *)(lVar48 + 0x124) = 0x3f800000;
  *(undefined4 *)(lVar48 + 0x128) = 0x3f800000;
  *(undefined4 *)(lVar48 + 300) = 0x3f800000;
  lVar48 = param_1[0x19];
  puVar10 = *(undefined8 **)(lVar48 + 0x30);
  *(undefined1 *)(lVar48 + 0x1ca) = 1;
  *(undefined8 **)(lVar48 + 0x30) = puVar10 + 8;
  puVar10[8] = *puVar10;
  puVar10[9] = puVar10[1];
  puVar10[10] = puVar10[2];
  puVar10[0xb] = puVar10[3];
  *(undefined4 *)(puVar10 + 0xc) = *(undefined4 *)(puVar10 + 4);
  *(undefined4 *)((longlong)puVar10 + 100) = *(undefined4 *)((longlong)puVar10 + 0x24);
  *(undefined4 *)(puVar10 + 0xd) = *(undefined4 *)(puVar10 + 5);
  *(undefined4 *)((longlong)puVar10 + 0x6c) = *(undefined4 *)((longlong)puVar10 + 0x2c);
  *(undefined4 *)(puVar10 + 0xe) = *(undefined4 *)(puVar10 + 6);
  *(undefined4 *)((longlong)puVar10 + 0x74) = *(undefined4 *)((longlong)puVar10 + 0x34);
  *(undefined4 *)(puVar10 + 0xf) = *(undefined4 *)(puVar10 + 7);
  *(undefined4 *)((longlong)puVar10 + 0x7c) = *(undefined4 *)((longlong)puVar10 + 0x3c);
  uVar30 = (**(code **)(*param_1 + 0x80))(param_1);
  puVar31 = (undefined4 *)FUN_14005ecb0(local_1118,*(undefined8 *)(param_1[0x19] + 0x30),uVar30);
  uVar7 = puVar31[1];
  uVar13 = puVar31[2];
  uVar14 = puVar31[3];
  puVar11 = *(undefined4 **)(param_1[0x19] + 0x30);
  uVar15 = puVar31[4];
  uVar16 = puVar31[5];
  uVar17 = puVar31[6];
  uVar18 = puVar31[7];
  uVar19 = puVar31[8];
  uVar20 = puVar31[9];
  uVar21 = puVar31[10];
  uVar22 = puVar31[0xb];
  uVar23 = puVar31[0xc];
  uVar24 = puVar31[0xd];
  uVar25 = puVar31[0xe];
  uVar26 = puVar31[0xf];
  *puVar11 = *puVar31;
  puVar11[1] = uVar7;
  puVar11[2] = uVar13;
  puVar11[3] = uVar14;
  puVar11[4] = uVar15;
  puVar11[5] = uVar16;
  puVar11[6] = uVar17;
  puVar11[7] = uVar18;
  puVar11[8] = uVar19;
  puVar11[9] = uVar20;
  puVar11[10] = uVar21;
  puVar11[0xb] = uVar22;
  puVar11[0xc] = uVar23;
  puVar11[0xd] = uVar24;
  puVar11[0xe] = uVar25;
  puVar11[0xf] = uVar26;
  if (((param_1[0x5b] == 0) || (plVar9 = (longlong *)param_1[0x5d], plVar9 == (longlong *)0x0)) ||
     (*plVar9 == 0)) goto LAB_1402229d3;
  uVar34 = (int)(plVar9[7] - plVar9[6] >> 4) * -0x11111111;
  uVar45 = 0x10;
  if (0x10 < uVar34) {
    uVar45 = uVar34;
  }
  uVar45 = (int)(uVar45 - 1) >> 1 | uVar45 - 1;
  uVar45 = (int)uVar45 >> 2 | uVar45;
  uVar45 = (int)uVar45 >> 4 | uVar45;
  uVar45 = (int)uVar45 >> 8 | uVar45;
  iVar38 = (uVar45 | (int)uVar45 >> 0x10) + 1;
  if (iVar38 < 0x80) {
    if (iVar38 != 0) goto LAB_14022293e;
  }
  else {
    iVar38 = 0x80;
LAB_14022293e:
    cVar27 = (**(code **)(**(longlong **)(param_1[0x19] + 0x1518) + 0x138))
                       (*(longlong **)(param_1[0x19] + 0x1518),&local_res8,iVar38 * 0x30);
    if (cVar27 != '\0') {
      lVar48 = *(longlong *)(param_1[0x5b] + 0x48);
      (**(code **)(**(longlong **)(param_1[0x19] + 0x1518) + 0x140))
                (*(longlong **)(param_1[0x19] + 0x1518),CONCAT44(uStackX_c,local_res8),lVar48,
                 *(longlong *)(param_1[0x5b] + 0x50) - lVar48 >> 6);
      (**(code **)(**(longlong **)(param_1[0x19] + 0x1518) + 0x148))();
    }
  }
  *(char *)(param_1[0x19] + 0x12e8) =
       (char)((longlong)
              (ulonglong)(uint)(*(int *)(param_1[0x5b] + 0x50) - *(int *)(param_1[0x5b] + 0x48)) >>
             6);
LAB_1402229d3:
  local_res10 = param_1[0x58];
  local_res8 = 0;
  if ((param_1[0x59] - local_res10 >> 3) * -0x5555555555555555 != 0) {
    do {
      puVar43 = (ulonglong *)0x0;
      lVar48 = (longlong)local_res8;
      local_res18 = lVar48 * 3;
      if (((*(char *)(param_1[0x19] + 0x12eb) != '\0') ||
          (cVar27 = *(char *)(*(longlong *)(local_res10 + 8 + lVar48 * 0x18) + 0x1f0),
          cVar27 == '\0')) || (iVar38 = local_res8, cVar27 == '\x03')) {
        lVar35 = *(longlong *)(local_res10 + 0x10 + lVar48 * 0x18);
        if (((lVar35 != 0) && (param_1[0x5b] != 0)) &&
           (((longlong *)param_1[0x5d] != (longlong *)0x0 && (*(longlong *)param_1[0x5d] != 0)))) {
          lVar49 = lVar48 * 0x20;
          *(longlong *)(*(longlong *)(local_res10 + 8 + lVar48 * 0x18) + 0xf8) = lVar35;
          *(undefined1 *)(param_1[0x19] + 0x12ea) = 0;
          *(undefined4 *)(param_1[0x19] + 0x1330) =
               *(undefined4 *)(*(longlong *)(param_1[0x5d] + 0x10) + 0x60 + lVar48 * 200);
          lVar48 = *(longlong *)(param_1[0x5b] + 0x60);
          puVar44 = puVar43;
          puVar40 = puVar43;
          puVar36 = puVar43;
          puVar47 = puVar43;
          local_1128 = lVar48;
          if (*(longlong *)(lVar48 + 0x10 + lVar49) - *(longlong *)(lVar48 + 8 + lVar49) >> 2 != 0)
          {
            do {
              iVar38 = (int)puVar47;
              puVar40 = puVar36;
              if ((*(ulonglong *)(lVar48 + lVar49) >> ((ulonglong)puVar47 & 0x3f) & 1) != 0) {
                *(char *)(param_1[0x19] + 0x12ea) = *(char *)(param_1[0x19] + 0x12ea) + '\x01';
                uVar7 = *(undefined4 *)(*(longlong *)(lVar48 + 8 + lVar49) + (longlong)puVar47 * 4);
                if (puVar44 == puVar43) {
                  uVar39 = (longlong)puVar44 - (longlong)puVar36;
                  if ((longlong)uVar39 >> 3 == 0x1fffffffffffffff) goto LAB_1402230a7;
                  uVar41 = (longlong)puVar43 - (longlong)puVar36 >> 3;
                  if (0x1fffffffffffffff - (uVar41 >> 1) < uVar41) {
LAB_1402230ad:
                    /* WARNING: Subroutine does not return */
                    FUN_140017370();
                  }
                  local_res20 = ((longlong)uVar39 >> 3) + 1;
                  uVar32 = (uVar41 >> 1) + uVar41;
                  uVar50 = local_res20;
                  if (local_res20 <= uVar32) {
                    uVar50 = uVar32;
                  }
                  if (0x1fffffffffffffff < uVar50) goto LAB_1402230ad;
                  uVar32 = uVar50 * 8;
                  if (uVar32 == 0) {
                    puVar40 = (ulonglong *)0x0;
                  }
                  else if (uVar32 < 0x1000) {
                    puVar40 = (ulonglong *)FUN_14028af20(uVar32);
                  }
                  else {
                    if (uVar32 + 0x27 <= uVar32) goto LAB_1402230ad;
                    uVar32 = FUN_14028af20();
                    if (uVar32 == 0) goto LAB_1402230a0;
                    puVar40 = (ulonglong *)(uVar32 + 0x27 & 0xffffffffffffffe0);
                    puVar40[-1] = uVar32;
                  }
                  *(undefined4 *)((longlong)puVar40 + (uVar39 & 0xfffffffffffffff8) + 4) = uVar7;
                  *(int *)((longlong)puVar40 + (uVar39 & 0xfffffffffffffff8)) = iVar38;
                  FUN_1404210f0(puVar40,puVar36,uVar39);
                  if (puVar36 != (ulonglong *)0x0) {
                    uVar41 = uVar41 * 8;
                    if (0xfff < uVar41) {
                      if (0x1f < (ulonglong)((longlong)puVar36 + (-8 - (longlong)puVar36[-1])))
                      goto LAB_1402230a0;
                      uVar41 = uVar41 + 0x27;
                      puVar36 = (ulonglong *)puVar36[-1];
                    }
                    thunk_FUN_14028af80(puVar36,uVar41);
                  }
                  puVar43 = puVar40 + uVar50;
                  puVar44 = puVar40 + local_res20;
                  lVar48 = local_1128;
                }
                else {
                  *(int *)puVar44 = iVar38;
                  *(undefined4 *)((longlong)puVar44 + 4) = uVar7;
                  puVar44 = puVar44 + 1;
                }
                if (10 < *(byte *)(param_1[0x19] + 0x12ea)) break;
              }
              puVar47 = (ulonglong *)(ulonglong)(iVar38 + 1);
              puVar36 = puVar40;
            } while (puVar47 < (ulonglong *)
                               (*(longlong *)(lVar48 + 0x10 + lVar49) -
                                *(longlong *)(lVar48 + 8 + lVar49) >> 2));
          }
          lVar48 = (longlong)puVar44 - (longlong)puVar40 >> 3;
          puVar36 = puVar40;
          if (lVar48 < 0x21) {
            if ((puVar40 == puVar44) || (puVar47 = puVar40 + 1, puVar47 == puVar44))
            goto LAB_140222e07;
            do {
              uVar39 = *puVar47;
              local_res20._4_4_ = (float)(uVar39 >> 0x20);
              puVar37 = puVar47;
              if (local_res20._4_4_ < *(float *)((longlong)puVar40 + 4) ||
                  local_res20._4_4_ == *(float *)((longlong)puVar40 + 4)) {
                for (; *(float *)((longlong)puVar37 + -4) <= local_res20._4_4_ &&
                       local_res20._4_4_ != *(float *)((longlong)puVar37 + -4);
                    puVar37 = puVar37 + -1) {
                  *puVar37 = puVar37[-1];
                }
                *puVar37 = uVar39;
              }
              else {
                local_res20 = uVar39;
                FUN_1404210f0(puVar40 + 1,puVar40);
                *puVar40 = uVar39;
              }
              puVar47 = puVar47 + 1;
            } while (puVar47 != puVar44);
            uVar39 = 0;
          }
          else {
            uVar41 = lVar48 - (lVar48 - ((longlong)puVar44 - (longlong)puVar40 >> 0x3f) >> 1);
            uVar39 = uVar41;
            if (0x200 < uVar41) {
              uVar39 = 0x7fffffffffffffff;
              if ((longlong)uVar41 < 0x7fffffffffffffff) {
                uVar39 = uVar41;
              }
              if ((uVar39 < 0x2000000000000000) && (0 < (longlong)uVar39)) {
                do {
                  puVar33 = (undefined1 *)FUN_1402ecff0(uVar39 * 8,&PTR_140426e20);
                  if (puVar33 != (undefined1 *)0x0) {
                    if (uVar39 < 0x201) goto LAB_140222da5;
                    goto LAB_140222dba;
                  }
                  uVar39 = uVar39 >> 1;
                } while (uVar39 != 0);
              }
              puVar33 = (undefined1 *)0x0;
LAB_140222da5:
              FUN_14028af80(puVar33);
              uVar39 = 0x200;
            }
            puVar33 = local_10c8;
LAB_140222dba:
            local_1130 = &LAB_140268b60;
            local_1138 = uVar39;
            local_10d8 = puVar33;
            local_10d0 = uVar39;
            FUN_1402175c0(puVar40,puVar44,lVar48,puVar33);
            if (0x200 < local_10d0) {
              FUN_14028af80(local_10d8);
            }
LAB_140222e07:
            uVar39 = 0;
            if (puVar40 == puVar44) goto LAB_140222e83;
          }
          do {
            uVar41 = *puVar36;
            iVar38 = (int)uVar39;
            puVar36 = puVar36 + 1;
            uVar45 = iVar38 + 1;
            uVar32 = (ulonglong)uVar45;
            local_res20._4_4_ = (float)(uVar41 >> 0x20);
            *(int *)(param_1[0x19] + 0x1334 + uVar39 * 4) = (int)uVar41 * (int)param_1[0x5c];
            *(float *)(param_1[0x19] + 0x1360 + uVar39 * 4) = local_res20._4_4_;
            uVar39 = uVar32;
          } while (puVar36 != puVar44);
          local_res20 = uVar41;
          if (uVar45 < 0xb) {
            if (3 < 10U - iVar38) {
LAB_140222e83:
              do {
                iVar38 = (int)uVar39;
                *(undefined4 *)(param_1[0x19] + 0x1360 + uVar39 * 4) = 0;
                *(undefined4 *)(param_1[0x19] + 0x1360 + (ulonglong)(iVar38 + 1) * 4) = 0;
                *(undefined4 *)(param_1[0x19] + 0x1360 + (ulonglong)(iVar38 + 2) * 4) = 0;
                uVar45 = iVar38 + 4;
                uVar39 = (ulonglong)uVar45;
                *(undefined4 *)(param_1[0x19] + 0x1360 + (ulonglong)(iVar38 + 3) * 4) = 0;
                uVar32 = uVar39;
                if (7 < uVar45) goto joined_r0x000140222ede;
              } while( true );
            }
            do {
              *(undefined4 *)(param_1[0x19] + 0x1360 + uVar32 * 4) = 0;
              uVar45 = (int)uVar32 + 1;
              uVar32 = (ulonglong)uVar45;
joined_r0x000140222ede:
            } while (uVar45 < 0xb);
          }
          if (puVar40 != (ulonglong *)0x0) {
            uVar39 = ((longlong)puVar43 - (longlong)puVar40 >> 3) * 8;
            if (0xfff < uVar39) {
              if (0x1f < (ulonglong)((longlong)puVar40 + (-8 - (longlong)puVar40[-1]))) {
LAB_1402230a0:
                pcVar12 = (code *)swi(0x29);
                (*pcVar12)(5);
                puVar42 = auStack_1150;
LAB_1402230a7:
                    /* WARNING: Subroutine does not return */
                *(undefined **)(puVar42 + -8) = &UNK_1402230ac;
                FUN_140013050();
              }
              uVar39 = uVar39 + 0x27;
              puVar40 = (ulonglong *)puVar40[-1];
            }
            thunk_FUN_14028af80(puVar40,uVar39);
          }
        }
        lVar35 = local_res18;
        lVar48 = local_res10;
        iVar38 = local_res8;
        FUN_140155fc0(*(undefined8 *)(local_res10 + 8 + local_res18 * 8));
        (**(code **)(**(longlong **)(lVar48 + lVar35 * 8) + 8))();
        FUN_140157430(*(undefined8 *)(lVar48 + 8 + lVar35 * 8));
      }
      local_res10 = param_1[0x58];
      local_res8 = iVar38 + 1;
    } while ((ulonglong)(longlong)local_res8 <
             (ulonglong)((param_1[0x59] - local_res10 >> 3) * -0x5555555555555555));
  }
  lVar48 = param_1[0x19];
  plVar9 = (longlong *)(lVar48 + 0x30);
  *plVar9 = *plVar9 + -0x40;
  *(undefined1 *)(lVar48 + 0x1ca) = 1;
  if ((*(byte *)(param_1 + 0x24) & 0x80) != 0) {
    lVar48 = param_1[0x19];
    plVar9 = (longlong *)(lVar48 + 0x38);
    *plVar9 = *plVar9 + -0x40;
    *(undefined1 *)(lVar48 + 0x1ca) = 1;
    lVar48 = param_1[0x19];
    plVar9 = (longlong *)(lVar48 + 0x40);
    *plVar9 = *plVar9 + -0x40;
    *(undefined1 *)(lVar48 + 0x1ca) = 1;
  }
  if (*(char *)(param_1[0x19] + 0x1c8) != '\0') {
    (**(code **)(**(longlong **)(param_1[0x19] + 0x1518) + 0x150))();
    (**(code **)(**(longlong **)(param_1[0x19] + 0x1518) + 0x98))
              (*(longlong **)(param_1[0x19] + 0x1518),6,0x2c688);
  }
  return;
}

