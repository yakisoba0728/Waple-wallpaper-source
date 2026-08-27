// Function: FUN_140236cd0
// Addr: 140236cd0
// Size: 2260 bytes


/* WARNING: Removing unreachable block (ram,0x000140237050) */

void FUN_140236cd0(longlong *param_1,float param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  float *pfVar3;
  int *piVar4;
  uint *puVar5;
  longlong *plVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined8 uVar18;
  longlong *plVar19;
  longlong *plVar20;
  longlong lVar21;
  char *pcVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong *plVar27;
  ulonglong uVar28;
  int iVar29;
  longlong *plVar30;
  uint *puVar31;
  int *piVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  longlong *local_res8;
  undefined1 local_a8 [112];
  
  plVar30 = param_1 + 0x84;
  if (*plVar30 != param_1[0x85]) {
    param_1[0x85] = *plVar30;
  }
  local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((int)param_1[0x68] != 0) {
    pfVar3 = (float *)param_1[0x4c];
    fVar33 = *pfVar3;
    fVar34 = pfVar3[1];
    fVar8 = pfVar3[2];
    fVar9 = pfVar3[3];
    pfVar3 = (float *)param_1[0x4b];
    fVar10 = *pfVar3;
    fVar11 = pfVar3[1];
    fVar12 = pfVar3[2];
    fVar13 = pfVar3[3];
    *pfVar3 = param_2 + fVar10;
    pfVar3[1] = param_2 + fVar11;
    pfVar3[2] = param_2 + fVar12;
    pfVar3[3] = param_2 + fVar13;
    auVar7._4_4_ = -(uint)(fVar34 < param_2 + fVar11 && fVar34 != 0.0);
    auVar7._0_4_ = -(uint)(fVar33 < param_2 + fVar10 && fVar33 != 0.0);
    auVar7._8_4_ = -(uint)(fVar8 < param_2 + fVar12 && fVar8 != 0.0);
    auVar7._12_4_ = -(uint)(fVar9 < param_2 + fVar13 && fVar9 != 0.0);
    iVar29 = movmskps(param_3,auVar7);
                    /* WARNING: Could not recover jumptable at 0x000140236db2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic + *(uint *)(&LAB_140237814 + (longlong)iVar29 * 4)
              ))(IMAGE_DOS_HEADER_140000000.e_magic +
                 *(uint *)(&LAB_140237814 + (longlong)iVar29 * 4));
    return;
  }
  if (param_1[0x41] != 0) {
    piVar4 = (int *)param_1[0x85];
    for (piVar32 = (int *)*plVar30; piVar32 != piVar4; piVar32 = piVar32 + 1) {
      uVar25 = 0;
      lVar23 = param_1[0x44];
      lVar21 = param_1[0x43];
      iVar29 = *piVar32;
      uVar28 = lVar23 - lVar21 >> 2;
      lVar26 = lVar21;
      if ((int)uVar28 != 0) {
        do {
          if (iVar29 == *(int *)(lVar21 + uVar25 * 4)) {
            lVar26 = lVar26 + uVar25 * 4;
            lVar21 = lVar26 + 4;
            FUN_1404210f0(lVar26,lVar21,lVar23 - lVar21);
            param_1[0x44] = param_1[0x44] + -4;
            lVar23 = param_1[0x44];
            uVar28 = (ulonglong)((int)uVar28 - 1);
            lVar21 = param_1[0x43];
          }
          else {
            uVar25 = (ulonglong)((int)uVar25 + 1);
          }
          lVar26 = param_1[0x43];
        } while ((uint)uVar25 < (uint)uVar28);
      }
    }
  }
  iVar29 = 0;
  puVar31 = (uint *)*plVar30;
  if (puVar31 != (uint *)param_1[0x85]) {
    *(int *)(param_1 + 0x6a) = (int)param_1[0x6a] + (int)(param_1[0x85] - (longlong)puVar31 >> 2);
    fVar33 = DAT_1404925dc;
    for (plVar30 = (longlong *)param_1[0x93]; plVar30 != (longlong *)param_1[0x94];
        plVar30 = plVar30 + 7) {
      if (*(int *)(*plVar30 + 0x60) == 4) {
        iVar29 = iVar29 + (*(int *)(*plVar30 + 0x70) - (int)(plVar30[2] - plVar30[1] >> 3));
      }
    }
    puVar5 = (uint *)param_1[0x85];
    for (; puVar31 != puVar5; puVar31 = puVar31 + 1) {
      uVar24 = *puVar31;
      uVar25 = (((((ulonglong)(uVar24 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)(uVar24 >> 8 & 0xff)) * 0x100000001b3 ^
                (ulonglong)(uVar24 >> 0x10 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar24 >> 0x18)) *
               0x100000001b3 & param_1[0x8d];
      plVar30 = *(longlong **)(param_1[0x8a] + 8 + uVar25 * 0x10);
      if (plVar30 == (longlong *)param_1[0x88]) {
LAB_140237241:
        plVar30 = (longlong *)0x0;
      }
      else {
        uVar17 = *(uint *)(plVar30 + 2);
        while (uVar24 != uVar17) {
          if (plVar30 == *(longlong **)(param_1[0x8a] + uVar25 * 0x10)) goto LAB_140237241;
          plVar30 = (longlong *)plVar30[1];
          uVar17 = *(uint *)(plVar30 + 2);
        }
      }
      if ((plVar30 != (longlong *)0x0) && (plVar30 != (longlong *)param_1[0x88])) {
        piVar32 = (int *)((longlong)plVar30 + 0x14);
        *piVar32 = *piVar32 + -1;
        if (*piVar32 == 0) {
          lVar26 = param_1[0x8a];
          uVar25 = (((((ulonglong)*(byte *)(plVar30 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar30 + 0x11)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar30 + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar30 + 0x13)) * 0x100000001b3 & param_1[0x8d];
          plVar6 = *(longlong **)(lVar26 + uVar25 * 0x10);
          if (*(longlong **)(lVar26 + 8 + uVar25 * 0x10) == plVar30) {
            if (plVar6 == plVar30) {
              lVar23 = param_1[0x88];
              *(longlong *)(lVar26 + uVar25 * 0x10) = lVar23;
              *(longlong *)(lVar26 + 8 + uVar25 * 0x10) = lVar23;
            }
            else {
              *(longlong *)(lVar26 + 8 + uVar25 * 0x10) = plVar30[1];
            }
          }
          else if (plVar6 == plVar30) {
            *(longlong *)(lVar26 + uVar25 * 0x10) = *plVar30;
          }
          lVar26 = *plVar30;
          param_1[0x89] = param_1[0x89] + -1;
          *(longlong *)plVar30[1] = lVar26;
          *(longlong *)(lVar26 + 8) = plVar30[1];
          thunk_FUN_14028af80(plVar30);
        }
        plVar6 = (longlong *)param_1[0x94];
        for (plVar30 = (longlong *)param_1[0x93]; plVar30 != plVar6; plVar30 = plVar30 + 7) {
          if (*(int *)(*plVar30 + 0x60) == 2) {
            plVar19 = (longlong *)plVar30[2];
            for (plVar27 = (longlong *)plVar30[1]; plVar27 != plVar19; plVar27 = plVar27 + 1) {
              lVar26 = *plVar27;
              if (*(uint *)(lVar26 + 0x478) == uVar24) {
                pcVar22 = *(char **)(lVar26 + 0x70);
                *(undefined4 *)(lVar26 + 0x478) = 0xffffffff;
                *(undefined1 *)(lVar26 + 0x3f4) = 0;
                cVar2 = *pcVar22;
                while (cVar2 != '\0') {
                  cVar2 = *pcVar22;
                  if (((cVar2 != '\x01') && (cVar2 != '\x02')) && (cVar2 != '\x03'))
                  goto LAB_1402373b2;
                  *(uint *)(pcVar22 + 0x4c) = *(uint *)(pcVar22 + 0x4c) | 0x80000000;
                  pcVar22 = pcVar22 + *(ushort *)(pcVar22 + 2);
                  cVar2 = *pcVar22;
                }
                lVar23 = *(longlong *)(lVar26 + 0x488);
                lVar26 = *(longlong *)(lVar26 + 0x480);
                if (lVar26 != lVar23) {
                  do {
                    FUN_14022f640(*(undefined8 *)(lVar26 + 8));
                    lVar26 = lVar26 + 0x10;
                  } while (lVar26 != lVar23);
                }
              }
LAB_1402373b2:
            }
          }
        }
      }
      if (iVar29 != 0) {
        plVar6 = (longlong *)param_1[0x94];
        for (plVar30 = (longlong *)param_1[0x93]; plVar30 != plVar6; plVar30 = plVar30 + 7) {
          if (*(int *)(*plVar30 + 0x60) == 4) {
            lVar26 = *param_1;
            uVar17 = FUN_14007f5b0(lVar26 + 0x1cd0);
            fVar34 = (*(float *)(lVar26 + 0x24) - *(float *)(lVar26 + 0x20)) *
                     (float)(uVar17 >> 8) * fVar33 + *(float *)(lVar26 + 0x20);
            if (fVar34 < *(float *)(*plVar30 + 0x6c) || fVar34 == *(float *)(*plVar30 + 0x6c)) {
              lVar26 = plVar30[5];
              if (plVar30[4] == lVar26) {
                uVar18 = FUN_14028af20(0x4b0);
                plVar19 = (longlong *)FUN_1402293a0(uVar18,*param_1,param_1[1]);
                lVar26 = *plVar30;
                lVar23 = *(longlong *)(lVar26 + 0x28);
                plVar19[0x6c] = *(longlong *)(lVar26 + 0x20);
                plVar19[0x6d] = lVar23;
                lVar23 = *(longlong *)(lVar26 + 0x38);
                plVar19[0x6e] = *(longlong *)(lVar26 + 0x30);
                plVar19[0x6f] = lVar23;
                lVar23 = *(longlong *)(lVar26 + 0x48);
                plVar19[0x70] = *(longlong *)(lVar26 + 0x40);
                plVar19[0x71] = lVar23;
                uVar35 = *(undefined4 *)(lVar26 + 0x54);
                uVar36 = *(undefined4 *)(lVar26 + 0x58);
                uVar37 = *(undefined4 *)(lVar26 + 0x5c);
                *(undefined4 *)(plVar19 + 0x72) = *(undefined4 *)(lVar26 + 0x50);
                *(undefined4 *)((longlong)plVar19 + 0x394) = uVar35;
                *(undefined4 *)(plVar19 + 0x73) = uVar36;
                *(undefined4 *)((longlong)plVar19 + 0x39c) = uVar37;
                plVar19[2] = (longlong)param_1;
                *(uint *)(plVar19 + 0x8f) = uVar24;
                plVar27 = (longlong *)*plVar30;
                if (0xf < (ulonglong)plVar27[3]) {
                  plVar27 = (longlong *)*plVar27;
                }
                local_res8 = plVar19;
                FUN_14022c3c0(plVar19,plVar27);
                FUN_14022cfa0(plVar19,param_1[1] + 0x940);
                FUN_14022a360(param_1,uVar24,plVar19);
                FUN_140229760(plVar19);
                FUN_14022f890(param_1,plVar19,1);
                lVar26 = *plVar19;
                plVar27 = (longlong *)(lVar26 + 0x30);
                *plVar27 = *plVar27 + -0x40;
                *(undefined1 *)(lVar26 + 0x1ca) = 1;
                FUN_14022ebe0(plVar19);
                FUN_1400302d0(plVar30 + 1);
              }
              else {
                plVar27 = *(longlong **)(lVar26 + -8);
                plVar30[5] = lVar26 + -8;
                local_res8 = plVar27;
                FUN_14022a360(param_1,uVar24,plVar27);
                *(uint *)(plVar27 + 0x8f) = uVar24;
                FUN_14022f6c0(plVar27);
                *(char *)(plVar27 + 0x7f) = (char)param_1[0x7f] + '\x01';
                *(undefined1 *)((longlong)plVar27 + 0x3f7) =
                     *(undefined1 *)((longlong)param_1 + 0x3f7);
                pcVar22 = (char *)plVar27[0xe];
                *(undefined1 *)((longlong)plVar27 + 0x3f4) = 0;
                cVar2 = *pcVar22;
                while (cVar2 != '\0') {
                  cVar2 = *pcVar22;
                  if (((cVar2 != '\x01') && (cVar2 != '\x02')) && (cVar2 != '\x03'))
                  goto LAB_1402375d2;
                  *(uint *)(pcVar22 + 0x4c) = *(uint *)(pcVar22 + 0x4c) & 0x7fffffff;
                  *(char *)((longlong)plVar27 + 0x3f4) =
                       *(char *)((longlong)plVar27 + 0x3f4) + '\x01';
                  pcVar22 = pcVar22 + *(ushort *)(pcVar22 + 2);
                  cVar2 = *pcVar22;
                }
                lVar26 = plVar27[0x91];
                lVar23 = plVar27[0x90];
                if (lVar23 != lVar26) {
                  do {
                    FUN_14022f5b0(*(undefined8 *)(lVar23 + 8));
                    lVar23 = lVar23 + 0x10;
                  } while (lVar23 != lVar26);
                }
LAB_1402375d2:
                if (0.0 < *(float *)(plVar27 + 5)) {
                  lVar26 = *plVar27;
                  puVar1 = *(undefined8 **)(lVar26 + 0x30);
                  *(undefined1 *)(lVar26 + 0x1ca) = 1;
                  *(undefined8 **)(lVar26 + 0x30) = puVar1 + 8;
                  puVar1[8] = *puVar1;
                  puVar1[9] = puVar1[1];
                  puVar1[10] = puVar1[2];
                  puVar1[0xb] = puVar1[3];
                  puVar1[0xc] = puVar1[4];
                  puVar1[0xd] = puVar1[5];
                  *(undefined4 *)(puVar1 + 0xe) = *(undefined4 *)(puVar1 + 6);
                  *(undefined4 *)((longlong)puVar1 + 0x74) =
                       *(undefined4 *)((longlong)puVar1 + 0x34);
                  *(undefined4 *)(puVar1 + 0xf) = *(undefined4 *)(puVar1 + 7);
                  *(undefined4 *)((longlong)puVar1 + 0x7c) =
                       *(undefined4 *)((longlong)puVar1 + 0x3c);
                  plVar19 = *(longlong **)(*plVar27 + 0x30);
                  if ((*(byte *)(plVar27 + 4) & 1) == 0) {
                    plVar20 = (longlong *)FUN_14005ecb0(local_a8);
                    lVar26 = plVar20[1];
                    *plVar19 = *plVar20;
                    plVar19[1] = lVar26;
                    lVar26 = plVar20[3];
                    plVar19[2] = plVar20[2];
                    plVar19[3] = lVar26;
                    lVar26 = plVar20[5];
                    plVar19[4] = plVar20[4];
                    plVar19[5] = lVar26;
                    uVar35 = (undefined4)plVar20[6];
                    uVar36 = *(undefined4 *)((longlong)plVar20 + 0x34);
                    uVar37 = (undefined4)plVar20[7];
                    uVar38 = *(undefined4 *)((longlong)plVar20 + 0x3c);
                  }
                  else {
                    lVar26 = plVar27[0x75];
                    *plVar19 = plVar27[0x74];
                    plVar19[1] = lVar26;
                    lVar26 = plVar27[0x77];
                    plVar19[2] = plVar27[0x76];
                    plVar19[3] = lVar26;
                    lVar26 = plVar27[0x79];
                    plVar19[4] = plVar27[0x78];
                    plVar19[5] = lVar26;
                    uVar35 = (undefined4)plVar27[0x7a];
                    uVar36 = *(undefined4 *)((longlong)plVar27 + 0x3d4);
                    uVar37 = (undefined4)plVar27[0x7b];
                    uVar38 = *(undefined4 *)((longlong)plVar27 + 0x3dc);
                  }
                  *(undefined4 *)(plVar19 + 6) = uVar35;
                  *(undefined4 *)((longlong)plVar19 + 0x34) = uVar36;
                  *(undefined4 *)(plVar19 + 7) = uVar37;
                  *(undefined4 *)((longlong)plVar19 + 0x3c) = uVar38;
                  FUN_14022f430(plVar27);
                  lVar26 = *plVar27;
                  plVar19 = (longlong *)(lVar26 + 0x30);
                  *plVar19 = *plVar19 + -0x40;
                  *(undefined1 *)(lVar26 + 0x1ca) = 1;
                }
                puVar1 = (undefined8 *)plVar30[2];
                if (puVar1 == (undefined8 *)plVar30[3]) {
                  FUN_14005ffa0(plVar30 + 1,puVar1,&local_res8);
                }
                else {
                  *puVar1 = plVar27;
                  plVar30[2] = plVar30[2] + 8;
                }
              }
              iVar29 = iVar29 + -1;
              if (plVar30[2] - plVar30[1] >> 3 == (ulonglong)*(uint *)(*plVar30 + 0x70)) break;
            }
          }
        }
      }
    }
  }
  FUN_14022e3e0(param_1);
  if ((char)param_3 != '\0') {
    FUN_1402378a0(param_1,param_2,0);
  }
  lVar26 = *param_1;
  fVar33 = (float)FUN_14041e350();
  fVar33 = fVar33 * param_2;
  if (*(int *)(lVar26 + 0x148) - 1U < 0x14) {
    param_2 = param_2 * DAT_1404926c0;
    fVar33 = fVar33 * DAT_1404926c0;
    FUN_14023fbc0(param_1,param_2,fVar33);
  }
  FUN_14023fbc0(param_1,param_2,fVar33);
  uVar24 = 0;
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    do {
      uVar25 = (ulonglong)uVar24;
      uVar24 = uVar24 + 1;
      lVar23 = uVar25 * 0xd0;
      lVar26 = param_1[0x80];
      uVar18 = ((undefined8 *)(lVar26 + lVar23))[1];
      puVar1 = (undefined8 *)(lVar26 + 0x10 + lVar23);
      uVar14 = *puVar1;
      uVar15 = puVar1[1];
      puVar1 = (undefined8 *)(lVar26 + 0x40 + lVar23);
      *puVar1 = *(undefined8 *)(lVar26 + lVar23);
      puVar1[1] = uVar18;
      puVar1 = (undefined8 *)(lVar26 + 0x20 + lVar23);
      uVar18 = *puVar1;
      uVar16 = puVar1[1];
      puVar1 = (undefined8 *)(lVar26 + 0x50 + lVar23);
      *puVar1 = uVar14;
      puVar1[1] = uVar15;
      puVar1 = (undefined8 *)(lVar26 + 0x30 + lVar23);
      uVar14 = *puVar1;
      uVar15 = puVar1[1];
      puVar1 = (undefined8 *)(lVar26 + 0x60 + lVar23);
      *puVar1 = uVar18;
      puVar1[1] = uVar16;
      puVar1 = (undefined8 *)(lVar26 + 0x70 + lVar23);
      *puVar1 = uVar14;
      puVar1[1] = uVar15;
    } while (uVar24 < *(uint *)((longlong)param_1 + 0x44));
  }
  return;
}

