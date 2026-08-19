// Function: FUN_140236da0
// Addr: 140236da0
// Size: 1784 bytes


/* WARNING: Removing unreachable block (ram,0x000140237120) */

void FUN_140236da0(longlong *param_1,float param_2,undefined4 param_3)

{
  char cVar1;
  float *pfVar2;
  uint *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong *plVar17;
  char *pcVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong *plVar23;
  uint uVar24;
  int iVar25;
  longlong *plVar26;
  longlong *plVar27;
  uint *puVar28;
  int *piVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  longlong *local_res8;
  undefined1 auStack_a8 [112];
  
  plVar26 = param_1 + 0x84;
  if (*plVar26 != param_1[0x85]) {
    param_1[0x85] = *plVar26;
  }
  local_res8 = (longlong *)((ulonglong)local_res8 & 0xffffffff00000000);
  if ((int)param_1[0x68] != 0) {
    pfVar2 = (float *)param_1[0x4c];
    fVar30 = *pfVar2;
    fVar31 = pfVar2[1];
    fVar7 = pfVar2[2];
    fVar8 = pfVar2[3];
    pfVar2 = (float *)param_1[0x4b];
    fVar9 = *pfVar2;
    fVar10 = pfVar2[1];
    fVar11 = pfVar2[2];
    fVar12 = pfVar2[3];
    *pfVar2 = param_2 + fVar9;
    pfVar2[1] = param_2 + fVar10;
    pfVar2[2] = param_2 + fVar11;
    pfVar2[3] = param_2 + fVar12;
    auVar6._4_4_ = -(uint)(fVar31 < param_2 + fVar10 && fVar31 != 0.0);
    auVar6._0_4_ = -(uint)(fVar30 < param_2 + fVar9 && fVar30 != 0.0);
    auVar6._8_4_ = -(uint)(fVar7 < param_2 + fVar11 && fVar7 != 0.0);
    auVar6._12_4_ = -(uint)(fVar8 < param_2 + fVar12 && fVar8 != 0.0);
    iVar25 = movmskps(param_3,auVar6);
                    /* WARNING: Could not recover jumptable at 0x000140236e82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_140000080.field_0x50 + *(uint *)(&DAT_1402378e4 + (longlong)iVar25 * 4)))
              (&DAT_140000080.field_0x50 + *(uint *)(&DAT_1402378e4 + (longlong)iVar25 * 4));
    return;
  }
  if (param_1[0x41] != 0) {
    for (piVar29 = (int *)*plVar26; piVar29 != (int *)param_1[0x85]; piVar29 = piVar29 + 1) {
      uVar20 = 0;
      lVar22 = param_1[0x43];
      uVar19 = (uint)(param_1[0x44] - lVar22 >> 2);
      lVar21 = lVar22;
      if (uVar19 != 0) {
        do {
          if (*piVar29 == *(int *)(lVar22 + uVar20 * 4)) {
            lVar21 = lVar21 + uVar20 * 4;
            lVar22 = lVar21 + 4;
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(lVar21,lVar22,param_1[0x44] - lVar22);
          }
          uVar24 = (int)uVar20 + 1;
          uVar20 = (ulonglong)uVar24;
          lVar21 = param_1[0x43];
        } while (uVar24 < uVar19);
      }
    }
  }
  iVar25 = 0;
  puVar28 = (uint *)*plVar26;
  if (puVar28 != (uint *)param_1[0x85]) {
    *(int *)(param_1 + 0x6a) = (int)param_1[0x6a] + (int)(param_1[0x85] - (longlong)puVar28 >> 2);
    fVar30 = DAT_1404926ac;
    for (plVar26 = (longlong *)param_1[0x93]; plVar26 != (longlong *)param_1[0x94];
        plVar26 = plVar26 + 7) {
      if (*(int *)(*plVar26 + 0x60) == 4) {
        iVar25 = iVar25 + (*(int *)(*plVar26 + 0x70) - (int)(plVar26[2] - plVar26[1] >> 3));
      }
    }
    puVar3 = (uint *)param_1[0x85];
    for (; puVar28 != puVar3; puVar28 = puVar28 + 1) {
      uVar19 = *puVar28;
      uVar20 = (((((ulonglong)(uVar19 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                 (ulonglong)(uVar19 >> 8 & 0xff)) * 0x100000001b3 ^
                (ulonglong)(uVar19 >> 0x10 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar19 >> 0x18)) *
               0x100000001b3 & param_1[0x8d];
      plVar26 = *(longlong **)(param_1[0x8a] + 8 + uVar20 * 0x10);
      if (plVar26 == (longlong *)param_1[0x88]) {
LAB_140237311:
        plVar26 = (longlong *)0x0;
      }
      else {
        uVar24 = *(uint *)(plVar26 + 2);
        while (uVar19 != uVar24) {
          if (plVar26 == *(longlong **)(param_1[0x8a] + uVar20 * 0x10)) goto LAB_140237311;
          plVar26 = (longlong *)plVar26[1];
          uVar24 = *(uint *)(plVar26 + 2);
        }
      }
      if ((plVar26 != (longlong *)0x0) && (plVar26 != (longlong *)param_1[0x88])) {
        piVar29 = (int *)((longlong)plVar26 + 0x14);
        *piVar29 = *piVar29 + -1;
        if (*piVar29 == 0) {
          lVar21 = param_1[0x8a];
          uVar20 = (((((ulonglong)*(byte *)(plVar26 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar26 + 0x11)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar26 + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar26 + 0x13)) * 0x100000001b3 & param_1[0x8d];
          plVar4 = *(longlong **)(lVar21 + uVar20 * 0x10);
          if (*(longlong **)(lVar21 + 8 + uVar20 * 0x10) == plVar26) {
            if (plVar4 == plVar26) {
              lVar22 = param_1[0x88];
              *(longlong *)(lVar21 + uVar20 * 0x10) = lVar22;
              *(longlong *)(lVar21 + 8 + uVar20 * 0x10) = lVar22;
            }
            else {
              *(longlong *)(lVar21 + 8 + uVar20 * 0x10) = plVar26[1];
            }
          }
          else if (plVar4 == plVar26) {
            *(longlong *)(lVar21 + uVar20 * 0x10) = *plVar26;
          }
          lVar21 = *plVar26;
          param_1[0x89] = param_1[0x89] + -1;
          *(longlong *)plVar26[1] = lVar21;
          *(longlong *)(lVar21 + 8) = plVar26[1];
          func_0x00014028b040(plVar26,0x18);
          return;
        }
        plVar4 = (longlong *)param_1[0x94];
        for (plVar26 = (longlong *)param_1[0x93]; plVar26 != plVar4; plVar26 = plVar26 + 7) {
          if (*(int *)(*plVar26 + 0x60) == 2) {
            plVar23 = (longlong *)plVar26[2];
            for (plVar27 = (longlong *)plVar26[1]; plVar27 != plVar23; plVar27 = plVar27 + 1) {
              lVar21 = *plVar27;
              if (*(uint *)(lVar21 + 0x478) == uVar19) {
                pcVar18 = *(char **)(lVar21 + 0x70);
                *(undefined4 *)(lVar21 + 0x478) = 0xffffffff;
                *(undefined1 *)(lVar21 + 0x3f4) = 0;
                cVar1 = *pcVar18;
                while (cVar1 != '\0') {
                  cVar1 = *pcVar18;
                  if (((cVar1 != '\x01') && (cVar1 != '\x02')) && (cVar1 != '\x03'))
                  goto LAB_140237482;
                  *(uint *)(pcVar18 + 0x4c) = *(uint *)(pcVar18 + 0x4c) | 0x80000000;
                  pcVar18 = pcVar18 + *(ushort *)(pcVar18 + 2);
                  cVar1 = *pcVar18;
                }
                lVar22 = *(longlong *)(lVar21 + 0x488);
                lVar21 = *(longlong *)(lVar21 + 0x480);
                if (lVar21 != lVar22) {
                  do {
                    FUN_14022f710(*(undefined8 *)(lVar21 + 8));
                    lVar21 = lVar21 + 0x10;
                  } while (lVar21 != lVar22);
                }
              }
LAB_140237482:
            }
          }
        }
      }
      if (iVar25 != 0) {
        plVar4 = (longlong *)param_1[0x94];
        for (plVar26 = (longlong *)param_1[0x93]; plVar26 != plVar4; plVar26 = plVar26 + 7) {
          if (*(int *)(*plVar26 + 0x60) == 4) {
            lVar21 = *param_1;
            uVar24 = FUN_14007f680(lVar21 + 0x1cd0);
            fVar31 = (*(float *)(lVar21 + 0x24) - *(float *)(lVar21 + 0x20)) *
                     (float)(uVar24 >> 8) * fVar30 + *(float *)(lVar21 + 0x20);
            if (fVar31 < *(float *)(*plVar26 + 0x6c) || fVar31 == *(float *)(*plVar26 + 0x6c)) {
              lVar21 = plVar26[5];
              if (plVar26[4] == lVar21) {
                func_0x00014028aff0(0x4b0);
                return;
              }
              plVar27 = *(longlong **)(lVar21 + -8);
              plVar26[5] = lVar21 + -8;
              local_res8 = plVar27;
              FUN_14022a430(param_1,uVar19,plVar27);
              *(uint *)(plVar27 + 0x8f) = uVar19;
              func_0x00014022f790(plVar27);
              *(char *)(plVar27 + 0x7f) = (char)param_1[0x7f] + '\x01';
              *(undefined1 *)((longlong)plVar27 + 0x3f7) =
                   *(undefined1 *)((longlong)param_1 + 0x3f7);
              pcVar18 = (char *)plVar27[0xe];
              *(undefined1 *)((longlong)plVar27 + 0x3f4) = 0;
              cVar1 = *pcVar18;
              while (cVar1 != '\0') {
                cVar1 = *pcVar18;
                if (((cVar1 != '\x01') && (cVar1 != '\x02')) && (cVar1 != '\x03'))
                goto LAB_1402376a2;
                *(uint *)(pcVar18 + 0x4c) = *(uint *)(pcVar18 + 0x4c) & 0x7fffffff;
                *(char *)((longlong)plVar27 + 0x3f4) = *(char *)((longlong)plVar27 + 0x3f4) + '\x01'
                ;
                pcVar18 = pcVar18 + *(ushort *)(pcVar18 + 2);
                cVar1 = *pcVar18;
              }
              lVar21 = plVar27[0x91];
              lVar22 = plVar27[0x90];
              if (lVar22 != lVar21) {
                do {
                  FUN_14022f680(*(undefined8 *)(lVar22 + 8));
                  lVar22 = lVar22 + 0x10;
                } while (lVar22 != lVar21);
              }
LAB_1402376a2:
              if (0.0 < *(float *)(plVar27 + 5)) {
                lVar21 = *plVar27;
                puVar5 = *(undefined8 **)(lVar21 + 0x30);
                *(undefined1 *)(lVar21 + 0x1ca) = 1;
                *(undefined8 **)(lVar21 + 0x30) = puVar5 + 8;
                puVar5[8] = *puVar5;
                puVar5[9] = puVar5[1];
                puVar5[10] = puVar5[2];
                puVar5[0xb] = puVar5[3];
                puVar5[0xc] = puVar5[4];
                puVar5[0xd] = puVar5[5];
                *(undefined4 *)(puVar5 + 0xe) = *(undefined4 *)(puVar5 + 6);
                *(undefined4 *)((longlong)puVar5 + 0x74) = *(undefined4 *)((longlong)puVar5 + 0x34);
                *(undefined4 *)(puVar5 + 0xf) = *(undefined4 *)(puVar5 + 7);
                *(undefined4 *)((longlong)puVar5 + 0x7c) = *(undefined4 *)((longlong)puVar5 + 0x3c);
                plVar23 = *(longlong **)(*plVar27 + 0x30);
                if ((*(byte *)(plVar27 + 4) & 1) == 0) {
                  plVar17 = (longlong *)FUN_14005ed80(auStack_a8);
                  lVar21 = plVar17[1];
                  *plVar23 = *plVar17;
                  plVar23[1] = lVar21;
                  lVar21 = plVar17[3];
                  plVar23[2] = plVar17[2];
                  plVar23[3] = lVar21;
                  lVar21 = plVar17[5];
                  plVar23[4] = plVar17[4];
                  plVar23[5] = lVar21;
                  uVar32 = (undefined4)plVar17[6];
                  uVar33 = *(undefined4 *)((longlong)plVar17 + 0x34);
                  uVar34 = (undefined4)plVar17[7];
                  uVar35 = *(undefined4 *)((longlong)plVar17 + 0x3c);
                }
                else {
                  lVar21 = plVar27[0x75];
                  *plVar23 = plVar27[0x74];
                  plVar23[1] = lVar21;
                  lVar21 = plVar27[0x77];
                  plVar23[2] = plVar27[0x76];
                  plVar23[3] = lVar21;
                  lVar21 = plVar27[0x79];
                  plVar23[4] = plVar27[0x78];
                  plVar23[5] = lVar21;
                  uVar32 = (undefined4)plVar27[0x7a];
                  uVar33 = *(undefined4 *)((longlong)plVar27 + 0x3d4);
                  uVar34 = (undefined4)plVar27[0x7b];
                  uVar35 = *(undefined4 *)((longlong)plVar27 + 0x3dc);
                }
                *(undefined4 *)(plVar23 + 6) = uVar32;
                *(undefined4 *)((longlong)plVar23 + 0x34) = uVar33;
                *(undefined4 *)(plVar23 + 7) = uVar34;
                *(undefined4 *)((longlong)plVar23 + 0x3c) = uVar35;
                func_0x00014022f500(plVar27);
                lVar21 = *plVar27;
                plVar23 = (longlong *)(lVar21 + 0x30);
                *plVar23 = *plVar23 + -0x40;
                *(undefined1 *)(lVar21 + 0x1ca) = 1;
              }
              plVar23 = (longlong *)plVar26[2];
              if (plVar23 == (longlong *)plVar26[3]) {
                FUN_140060070(plVar26 + 1,plVar23,&local_res8);
              }
              else {
                *plVar23 = (longlong)plVar27;
                plVar26[2] = plVar26[2] + 8;
              }
              iVar25 = iVar25 + -1;
              if (plVar26[2] - plVar26[1] >> 3 == (ulonglong)*(uint *)(*plVar26 + 0x70)) break;
            }
          }
        }
      }
    }
  }
  FUN_14022e4b0(param_1);
  if ((char)param_3 != '\0') {
    FUN_140237970(param_1,param_2,0);
  }
  lVar21 = *param_1;
  fVar30 = (float)FUN_14041e420();
  fVar30 = fVar30 * param_2;
  if (*(int *)(lVar21 + 0x148) - 1U < 0x14) {
    param_2 = param_2 * DAT_140492790;
    fVar30 = fVar30 * DAT_140492790;
    FUN_14023fc90(param_1,param_2,fVar30);
  }
  FUN_14023fc90(param_1,param_2,fVar30);
  uVar19 = 0;
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    do {
      uVar20 = (ulonglong)uVar19;
      uVar19 = uVar19 + 1;
      lVar22 = uVar20 * 0xd0;
      lVar21 = param_1[0x80];
      uVar13 = ((undefined8 *)(lVar21 + lVar22))[1];
      puVar5 = (undefined8 *)(lVar21 + 0x10 + lVar22);
      uVar14 = *puVar5;
      uVar15 = puVar5[1];
      puVar5 = (undefined8 *)(lVar21 + 0x40 + lVar22);
      *puVar5 = *(undefined8 *)(lVar21 + lVar22);
      puVar5[1] = uVar13;
      puVar5 = (undefined8 *)(lVar21 + 0x20 + lVar22);
      uVar13 = *puVar5;
      uVar16 = puVar5[1];
      puVar5 = (undefined8 *)(lVar21 + 0x50 + lVar22);
      *puVar5 = uVar14;
      puVar5[1] = uVar15;
      puVar5 = (undefined8 *)(lVar21 + 0x30 + lVar22);
      uVar14 = *puVar5;
      uVar15 = puVar5[1];
      puVar5 = (undefined8 *)(lVar21 + 0x60 + lVar22);
      *puVar5 = uVar13;
      puVar5[1] = uVar16;
      puVar5 = (undefined8 *)(lVar21 + 0x70 + lVar22);
      *puVar5 = uVar14;
      puVar5[1] = uVar15;
    } while (uVar19 < *(uint *)((longlong)param_1 + 0x44));
  }
  return;
}

