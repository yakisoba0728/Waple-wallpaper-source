// Function: FUN_1401d15a0
// Addr: 1401d15a0
// Size: 3430 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401d15a0(longlong *param_1,longlong param_2,longlong param_3,float *param_4,
                  longlong param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  longlong lVar5;
  double dVar6;
  float fVar7;
  float *pfVar8;
  longlong lVar9;
  char *pcVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_res8;
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float local_104;
  float local_100;
  undefined1 local_f8 [12];
  undefined1 local_ec [12];
  undefined1 local_e0 [12];
  undefined1 local_d4 [172];
  
  fVar14 = DAT_140492860;
  dVar6 = DAT_1404927b0;
  fVar7 = DAT_140492704;
  fVar28 = DAT_140492704;
  if (((*(uint *)(*param_1 + 0x118) & 0x2000) != 0) && ((*(byte *)(param_2 + 8) & 8) == 0)) {
    fVar28 = *(float *)(param_3 + 0xe0);
  }
  fVar16 = *param_4;
  fVar12 = param_4[1];
  fVar15 = param_4[2];
  cVar1 = *(char *)(param_4 + 3);
  fVar11 = fVar28;
  fVar27 = fVar28;
  if (((*(uint *)(param_2 + 8) & 0x200000) != 0) && (cVar1 != '\0')) {
    fVar11 = fVar15 * fVar28;
    fVar27 = fVar16 * fVar28;
    fVar28 = fVar12 * fVar28;
  }
  uVar22 = SUB84(DAT_1404927b0,0);
  uVar24 = (undefined4)((ulonglong)DAT_1404927b0 >> 0x20);
  *(float *)(param_5 + 0x3e0) = fVar27;
  *(float *)(param_5 + 0x3e4) = fVar28;
  *(float *)(param_5 + 1000) = fVar11;
  *(undefined4 *)(param_5 + 0x3ec) = *(undefined4 *)(param_3 + 200);
  if (cVar1 != '\0') {
    fVar11 = fVar16;
    if (fVar16 <= fVar12) {
      fVar11 = fVar12;
    }
    fVar27 = fVar16;
    if (fVar12 <= fVar16) {
      fVar27 = fVar12;
    }
    if (fVar11 <= fVar15) {
      fVar11 = fVar15;
    }
    if (fVar15 <= fVar27) {
      fVar27 = fVar15;
    }
    fVar27 = fVar11 - fVar27;
    if ((fVar27 < DAT_1404925ec) || (fVar11 <= 0.0)) {
      fVar27 = 0.0;
      fVar28 = 0.0;
    }
    else {
      fVar28 = fVar27 / fVar11;
      if (fVar16 < fVar11) {
        if (fVar12 < fVar11) {
          dVar6 = (double)((fVar16 - fVar12) / fVar27) + _DAT_1404927d8;
        }
        else {
          dVar6 = (double)((fVar15 - fVar16) / fVar27) + dVar6;
        }
        fVar27 = (float)dVar6;
      }
      else {
        fVar27 = (fVar12 - fVar15) / fVar27;
      }
      fVar27 = fVar27 / fVar14;
      if (fVar27 < 0.0) {
        fVar27 = fVar27 + fVar7;
      }
    }
  }
  pcVar4 = *(char **)(param_2 + 0x98);
  if (pcVar4 != (char *)0x0) {
    cVar2 = *pcVar4;
    fVar16 = DAT_1404926c0;
    while (cVar2 != '\0') {
      uVar23 = SUB84(DAT_1404927b0,0);
      uVar25 = (undefined4)((ulonglong)DAT_1404927b0 >> 0x20);
      pcVar10 = pcVar4;
      switch(*pcVar4) {
      case '\x01':
        pcVar10 = pcVar4 + *(int *)(pcVar4 + 0xc);
        *(int *)((longlong)*(int *)(pcVar4 + 0x1c) + *(longlong *)(pcVar4 + 4)) =
             (int)(longlong)
                  ((float)*(uint *)(pcVar4 + 0x14) *
                  *(float *)((ulonglong)*(uint *)(pcVar4 + 0x18) + param_3));
        break;
      case '\x02':
        pcVar10 = pcVar4 + *(int *)(pcVar4 + 0xc);
        *(float *)((longlong)*(int *)(pcVar4 + 0x1c) + *(longlong *)(pcVar4 + 4)) =
             *(float *)((ulonglong)*(uint *)(pcVar4 + 0x18) + param_3) * *(float *)(pcVar4 + 0x14);
        break;
      case '\x03':
        pcVar10 = pcVar4 + *(int *)(pcVar4 + 0xc);
        fVar12 = *(float *)((ulonglong)*(uint *)(pcVar4 + 0x18) + param_3) *
                 *(float *)(pcVar4 + 0x14);
        if (fVar12 <= DAT_1404925fc) {
          fVar12 = DAT_1404925fc;
        }
        *(float *)((longlong)*(int *)(pcVar4 + 0x1c) + *(longlong *)(pcVar4 + 4)) = fVar7 / fVar12;
        break;
      case '\x04':
        pcVar10 = pcVar4 + *(int *)(pcVar4 + 0xc);
        fVar12 = *(float *)((ulonglong)*(uint *)(pcVar4 + 0x1c) + param_3) *
                 *(float *)(pcVar4 + 0x14) + *(float *)(pcVar4 + 0x18);
        if (fVar12 <= DAT_1404925fc) {
          fVar12 = DAT_1404925fc;
        }
        *(float *)((longlong)*(int *)(pcVar4 + 0x20) + *(longlong *)(pcVar4 + 4)) = fVar7 / fVar12;
        break;
      case '\x05':
        pcVar10 = pcVar4 + *(int *)(pcVar4 + 0xc);
        fVar12 = *(float *)((ulonglong)*(uint *)(pcVar4 + 0x18) + param_3) *
                 *(float *)(pcVar4 + 0x14);
        pfVar8 = (float *)((longlong)*(int *)(pcVar4 + 0x1c) + *(longlong *)(pcVar4 + 4));
        *pfVar8 = fVar12;
        pfVar8[1] = fVar12;
        pfVar8[2] = fVar12;
        pfVar8[3] = fVar12;
        break;
      case '\x06':
        pcVar10 = pcVar4 + *(int *)(pcVar4 + 0xc);
        fVar12 = *(float *)((ulonglong)*(uint *)(pcVar4 + 0x1c) + param_3);
        fVar18 = fVar12 * *(float *)(pcVar4 + 0x14);
        fVar15 = *(float *)(pcVar4 + 0x18);
        *(float *)((longlong)*(int *)(pcVar4 + 0x20) + *(longlong *)(pcVar4 + 4)) = fVar18;
        *(float *)((longlong)*(int *)(pcVar4 + 0x24) + *(longlong *)(pcVar4 + 4)) =
             fVar12 * fVar15 - fVar18;
        break;
      case '\a':
        pcVar10 = pcVar4 + *(int *)(pcVar4 + 0xc);
        fVar12 = *(float *)((ulonglong)*(uint *)(pcVar4 + 0x1c) + param_3);
        fVar18 = fVar12 * *(float *)(pcVar4 + 0x14);
        fVar15 = *(float *)(pcVar4 + 0x18);
        pfVar8 = (float *)((longlong)*(int *)(pcVar4 + 0x20) + *(longlong *)(pcVar4 + 4));
        *pfVar8 = fVar18;
        pfVar8[1] = fVar18;
        pfVar8[2] = fVar18;
        pfVar8[3] = fVar18;
        fVar18 = fVar12 * fVar15 - fVar18;
        pfVar8 = (float *)((longlong)*(int *)(pcVar4 + 0x24) + *(longlong *)(pcVar4 + 4));
        *pfVar8 = fVar18;
        pfVar8[1] = fVar18;
        pfVar8[2] = fVar18;
        pfVar8[3] = fVar18;
        break;
      case '\b':
        pcVar10 = pcVar4 + *(int *)(pcVar4 + 0xc);
        iVar3 = *(int *)(pcVar4 + 0x24);
        fVar16 = *(float *)((ulonglong)*(uint *)(pcVar4 + 0x20) + param_3);
        lVar5 = *(longlong *)(pcVar4 + 4);
        fVar12 = *(float *)(pcVar4 + 0x1c);
        *(ulonglong *)(lVar5 + iVar3) =
             CONCAT44((float)((ulonglong)*(undefined8 *)(pcVar4 + 0x14) >> 0x20) * fVar16,
                      (float)*(undefined8 *)(pcVar4 + 0x14) * fVar16);
        *(float *)(lVar5 + 8 + (longlong)iVar3) = fVar16 * fVar12;
        fVar16 = DAT_1404926c0;
        break;
      case '\t':
        pcVar10 = pcVar4 + *(int *)(pcVar4 + 0xc);
        fVar12 = *(float *)((ulonglong)*(uint *)(pcVar4 + 0x20) + param_3);
        fVar18 = fVar12 * *(float *)(pcVar4 + 0x18);
        fVar15 = fVar12 * *(float *)(pcVar4 + 0x14);
        fVar12 = fVar12 * *(float *)(pcVar4 + 0x1c);
        pfVar8 = (float *)((longlong)*(int *)(pcVar4 + 0x24) + *(longlong *)(pcVar4 + 4));
        *pfVar8 = fVar15;
        pfVar8[1] = fVar15;
        pfVar8[2] = fVar15;
        pfVar8[3] = fVar15;
        pfVar8 = (float *)((longlong)*(int *)(pcVar4 + 0x28) + *(longlong *)(pcVar4 + 4));
        *pfVar8 = fVar18;
        pfVar8[1] = fVar18;
        pfVar8[2] = fVar18;
        pfVar8[3] = fVar18;
        pfVar8 = (float *)((longlong)*(int *)(pcVar4 + 0x2c) + *(longlong *)(pcVar4 + 4));
        *pfVar8 = fVar12;
        pfVar8[1] = fVar12;
        pfVar8[2] = fVar12;
        pfVar8[3] = fVar12;
        break;
      case '\n':
        pcVar10 = pcVar4 + *(int *)(pcVar4 + 0xc);
        iVar3 = *(int *)(pcVar4 + 0x30);
        fVar12 = *(float *)((ulonglong)*(uint *)(pcVar4 + 0x2c) + param_3);
        lVar5 = *(longlong *)(pcVar4 + 4);
        fVar15 = *(float *)(pcVar4 + 0x20);
        fVar18 = *(float *)(pcVar4 + 0x1c);
        fVar13 = (float)*(undefined8 *)(pcVar4 + 0x14) * fVar12;
        fVar21 = (float)((ulonglong)*(undefined8 *)(pcVar4 + 0x14) >> 0x20) * fVar12;
        fVar17 = *(float *)(pcVar4 + 0x24);
        fVar19 = *(float *)(pcVar4 + 0x28);
        *(ulonglong *)(lVar5 + iVar3) = CONCAT44(fVar21,fVar13);
        *(float *)(lVar5 + 8 + (longlong)iVar3) = fVar12 * fVar18;
        fVar16 = DAT_1404926c0;
        lVar9 = (longlong)*(int *)(pcVar4 + 0x34);
        lVar5 = *(longlong *)(pcVar4 + 4);
        *(float *)(lVar5 + lVar9) = fVar12 * fVar15 - fVar13;
        *(float *)(lVar5 + 4 + lVar9) = fVar12 * fVar17 - fVar21;
        *(float *)(lVar5 + 8 + lVar9) = fVar12 * fVar19 - fVar12 * fVar18;
        break;
      case '\v':
        fVar16 = *(float *)(pcVar4 + 0x14);
        pcVar10 = pcVar4 + *(int *)(pcVar4 + 0xc);
        fVar12 = *(float *)(pcVar4 + 0x18);
        fVar15 = *(float *)(pcVar4 + 0x1c);
        fVar18 = *(float *)(pcVar4 + 0x20);
        fVar17 = *(float *)(pcVar4 + 0x24);
        fVar19 = *(float *)(pcVar4 + 0x28);
        if (cVar1 != '\0') {
          fVar13 = fVar16;
          if (fVar16 <= fVar12) {
            fVar13 = fVar12;
          }
          fVar21 = fVar16;
          if (fVar12 <= fVar16) {
            fVar21 = fVar12;
          }
          if (fVar13 <= fVar15) {
            fVar13 = fVar15;
          }
          if (fVar15 <= fVar21) {
            fVar21 = fVar15;
          }
          fVar21 = fVar13 - fVar21;
          if ((fVar21 < DAT_1404925ec) || (fVar13 <= 0.0)) {
            local_res8 = 0.0;
            fVar21 = 0.0;
            uVar23 = uVar22;
            uVar25 = uVar24;
          }
          else {
            local_res8 = fVar21 / fVar13;
            if (fVar16 < fVar13) {
              if (fVar12 < fVar13) {
                dVar6 = (double)((fVar16 - fVar12) / fVar21) + _DAT_1404927d8;
              }
              else {
                dVar6 = (double)((fVar15 - fVar16) / fVar21) + DAT_1404927b0;
              }
              fVar21 = (float)dVar6;
            }
            else {
              fVar21 = (fVar12 - fVar15) / fVar21;
            }
            fVar21 = fVar21 / fVar14;
            if (fVar21 < 0.0) {
              fVar21 = fVar21 + fVar7;
            }
          }
          fVar26 = fVar18;
          if (fVar18 <= fVar17) {
            fVar26 = fVar17;
          }
          fVar20 = fVar18;
          if (fVar17 <= fVar18) {
            fVar20 = fVar17;
          }
          if (fVar26 <= fVar19) {
            fVar26 = fVar19;
          }
          if (fVar19 <= fVar20) {
            fVar20 = fVar19;
          }
          fVar20 = fVar26 - fVar20;
          if ((fVar20 < DAT_1404925ec) || (fVar26 <= 0.0)) {
            param_5._0_4_ = 0.0;
            fVar20 = 0.0;
          }
          else {
            param_5._0_4_ = fVar20 / fVar26;
            if (fVar18 < fVar26) {
              if (fVar17 < fVar26) {
                dVar6 = (double)((fVar18 - fVar17) / fVar20) + _DAT_1404927d8;
              }
              else {
                dVar6 = (double)((fVar19 - fVar18) / fVar20) + (double)CONCAT44(uVar25,uVar23);
              }
              fVar20 = (float)dVar6;
            }
            else {
              fVar20 = (fVar17 - fVar19) / fVar20;
            }
            fVar20 = fVar20 / fVar14;
            if (fVar20 < 0.0) {
              fVar20 = fVar20 + fVar7;
            }
          }
          fVar14 = *(float *)(pcVar4 + 0x30);
          fVar18 = *(float *)(pcVar4 + 0x34);
          fVar20 = (fVar27 - *(float *)(pcVar4 + 0x2c)) + fVar20;
          fVar21 = (fVar27 - *(float *)(pcVar4 + 0x2c)) + fVar21;
          local_138 = (float)FUN_14041a5c0(fVar21);
          local_138 = fVar21 - local_138;
          local_res8 = (fVar28 - fVar14) + local_res8;
          fVar16 = 0.0;
          if (0.0 <= local_res8) {
            fVar16 = local_res8;
          }
          fVar13 = (fVar11 - fVar18) + fVar13;
          local_134 = fVar7;
          if (fVar16 <= fVar7) {
            local_134 = fVar16;
          }
          fVar16 = 0.0;
          if (0.0 <= fVar13) {
            fVar16 = fVar13;
          }
          local_130 = fVar7;
          if (fVar16 <= fVar7) {
            local_130 = fVar16;
          }
          pfVar8 = (float *)FUN_1401b8c70(local_f8,&local_138);
          fVar15 = pfVar8[2];
          fVar16 = *pfVar8;
          fVar12 = pfVar8[1];
          local_128 = (float)FUN_14041a5c0(fVar20);
          param_5._0_4_ = (fVar28 - fVar14) + (float)param_5;
          fVar26 = (fVar11 - fVar18) + fVar26;
          local_128 = fVar20 - local_128;
          fVar14 = 0.0;
          if (0.0 <= (float)param_5) {
            fVar14 = (float)param_5;
          }
          local_124 = fVar7;
          if (fVar14 <= fVar7) {
            local_124 = fVar14;
          }
          fVar14 = 0.0;
          if (0.0 <= fVar26) {
            fVar14 = fVar26;
          }
          local_120 = fVar7;
          if (fVar14 <= fVar7) {
            local_120 = fVar14;
          }
          pfVar8 = (float *)FUN_1401b8c70(local_ec,&local_128);
          uVar22 = SUB84(DAT_1404927b0,0);
          uVar24 = (undefined4)((ulonglong)DAT_1404927b0 >> 0x20);
          fVar18 = *pfVar8;
          fVar17 = pfVar8[1];
          fVar19 = pfVar8[2];
          fVar14 = DAT_140492860;
        }
        lVar9 = (longlong)*(int *)(pcVar4 + 0x38);
        lVar5 = *(longlong *)(pcVar4 + 4);
        *(float *)(lVar5 + lVar9) = fVar16;
        *(float *)(lVar5 + 4 + lVar9) = fVar12;
        *(float *)(lVar5 + 8 + lVar9) = fVar15;
        lVar9 = (longlong)*(int *)(pcVar4 + 0x3c);
        lVar5 = *(longlong *)(pcVar4 + 4);
        *(float *)(lVar5 + lVar9) = fVar18 - fVar16;
        *(float *)(lVar5 + 4 + lVar9) = fVar17 - fVar12;
        *(float *)(lVar5 + 8 + lVar9) = fVar19 - fVar15;
        fVar16 = DAT_1404926c0;
        break;
      case '\f':
        fVar16 = *(float *)(pcVar4 + 0x14);
        pcVar10 = pcVar4 + *(int *)(pcVar4 + 0xc);
        fVar12 = *(float *)(pcVar4 + 0x18);
        fVar15 = *(float *)(pcVar4 + 0x1c);
        fVar18 = *(float *)(pcVar4 + 0x20);
        fVar17 = *(float *)(pcVar4 + 0x24);
        fVar19 = *(float *)(pcVar4 + 0x28);
        if (cVar1 != '\0') {
          fVar13 = fVar16;
          if (fVar16 <= fVar12) {
            fVar13 = fVar12;
          }
          fVar21 = fVar16;
          if (fVar12 <= fVar16) {
            fVar21 = fVar12;
          }
          if (fVar13 <= fVar15) {
            fVar13 = fVar15;
          }
          if (fVar15 <= fVar21) {
            fVar21 = fVar15;
          }
          fVar21 = fVar13 - fVar21;
          if ((fVar21 < DAT_1404925ec) || (fVar13 <= 0.0)) {
            local_res8 = 0.0;
            fVar21 = 0.0;
            uVar23 = uVar22;
            uVar25 = uVar24;
          }
          else {
            local_res8 = fVar21 / fVar13;
            if (fVar16 < fVar13) {
              if (fVar12 < fVar13) {
                dVar6 = (double)((fVar16 - fVar12) / fVar21) + _DAT_1404927d8;
              }
              else {
                dVar6 = (double)((fVar15 - fVar16) / fVar21) + DAT_1404927b0;
              }
              fVar21 = (float)dVar6;
            }
            else {
              fVar21 = (fVar12 - fVar15) / fVar21;
            }
            fVar21 = fVar21 / fVar14;
            if (fVar21 < 0.0) {
              fVar21 = fVar21 + fVar7;
            }
          }
          fVar26 = fVar18;
          if (fVar18 <= fVar17) {
            fVar26 = fVar17;
          }
          fVar20 = fVar18;
          if (fVar17 <= fVar18) {
            fVar20 = fVar17;
          }
          if (fVar26 <= fVar19) {
            fVar26 = fVar19;
          }
          if (fVar19 <= fVar20) {
            fVar20 = fVar19;
          }
          fVar20 = fVar26 - fVar20;
          if ((fVar20 < DAT_1404925ec) || (fVar26 <= 0.0)) {
            param_5._0_4_ = 0.0;
            fVar20 = 0.0;
          }
          else {
            param_5._0_4_ = fVar20 / fVar26;
            if (fVar18 < fVar26) {
              if (fVar17 < fVar26) {
                dVar6 = (double)((fVar18 - fVar17) / fVar20) + _DAT_1404927d8;
              }
              else {
                dVar6 = (double)((fVar19 - fVar18) / fVar20) + (double)CONCAT44(uVar25,uVar23);
              }
              fVar20 = (float)dVar6;
            }
            else {
              fVar20 = (fVar17 - fVar19) / fVar20;
            }
            fVar20 = fVar20 / fVar14;
            if (fVar20 < 0.0) {
              fVar20 = fVar20 + fVar7;
            }
          }
          fVar14 = *(float *)(pcVar4 + 0x30);
          fVar18 = *(float *)(pcVar4 + 0x34);
          fVar20 = (fVar27 - *(float *)(pcVar4 + 0x2c)) + fVar20;
          fVar21 = (fVar27 - *(float *)(pcVar4 + 0x2c)) + fVar21;
          local_118 = (float)FUN_14041a5c0(fVar21);
          local_118 = fVar21 - local_118;
          local_res8 = (fVar28 - fVar14) + local_res8;
          fVar16 = 0.0;
          if (0.0 <= local_res8) {
            fVar16 = local_res8;
          }
          fVar13 = (fVar11 - fVar18) + fVar13;
          local_114 = fVar7;
          if (fVar16 <= fVar7) {
            local_114 = fVar16;
          }
          fVar16 = 0.0;
          if (0.0 <= fVar13) {
            fVar16 = fVar13;
          }
          local_110 = fVar7;
          if (fVar16 <= fVar7) {
            local_110 = fVar16;
          }
          pfVar8 = (float *)FUN_1401b8c70(local_e0,&local_118);
          fVar15 = pfVar8[2];
          fVar16 = *pfVar8;
          fVar12 = pfVar8[1];
          local_108 = (float)FUN_14041a5c0(fVar20);
          param_5._0_4_ = (fVar28 - fVar14) + (float)param_5;
          fVar26 = (fVar11 - fVar18) + fVar26;
          local_108 = fVar20 - local_108;
          fVar14 = 0.0;
          if (0.0 <= (float)param_5) {
            fVar14 = (float)param_5;
          }
          local_104 = fVar7;
          if (fVar14 <= fVar7) {
            local_104 = fVar14;
          }
          fVar14 = 0.0;
          if (0.0 <= fVar26) {
            fVar14 = fVar26;
          }
          local_100 = fVar7;
          if (fVar14 <= fVar7) {
            local_100 = fVar14;
          }
          pfVar8 = (float *)FUN_1401b8c70(local_d4,&local_108);
          uVar22 = SUB84(DAT_1404927b0,0);
          uVar24 = (undefined4)((ulonglong)DAT_1404927b0 >> 0x20);
          fVar18 = *pfVar8;
          fVar17 = pfVar8[1];
          fVar19 = pfVar8[2];
          fVar14 = DAT_140492860;
        }
        fVar18 = fVar18 - fVar16;
        fVar17 = fVar17 - fVar12;
        fVar19 = fVar19 - fVar15;
        pfVar8 = (float *)((longlong)*(int *)(pcVar4 + 0x38) + *(longlong *)(pcVar4 + 4));
        *pfVar8 = fVar16;
        pfVar8[1] = fVar16;
        pfVar8[2] = fVar16;
        pfVar8[3] = fVar16;
        pfVar8 = (float *)((longlong)*(int *)(pcVar4 + 0x3c) + *(longlong *)(pcVar4 + 4));
        *pfVar8 = fVar12;
        pfVar8[1] = fVar12;
        pfVar8[2] = fVar12;
        pfVar8[3] = fVar12;
        pfVar8 = (float *)((longlong)*(int *)(pcVar4 + 0x40) + *(longlong *)(pcVar4 + 4));
        *pfVar8 = fVar15;
        pfVar8[1] = fVar15;
        pfVar8[2] = fVar15;
        pfVar8[3] = fVar15;
        pfVar8 = (float *)((longlong)*(int *)(pcVar4 + 0x44) + *(longlong *)(pcVar4 + 4));
        *pfVar8 = fVar18;
        pfVar8[1] = fVar18;
        pfVar8[2] = fVar18;
        pfVar8[3] = fVar18;
        fVar16 = DAT_1404926c0;
        pfVar8 = (float *)((longlong)*(int *)(pcVar4 + 0x48) + *(longlong *)(pcVar4 + 4));
        *pfVar8 = fVar17;
        pfVar8[1] = fVar17;
        pfVar8[2] = fVar17;
        pfVar8[3] = fVar17;
        pfVar8 = (float *)((longlong)*(int *)(pcVar4 + 0x4c) + *(longlong *)(pcVar4 + 4));
        *pfVar8 = fVar19;
        pfVar8[1] = fVar19;
        pfVar8[2] = fVar19;
        pfVar8[3] = fVar19;
        break;
      case '\r':
        lVar9 = (longlong)*(int *)(pcVar4 + 0x30);
        pcVar10 = pcVar4 + *(int *)(pcVar4 + 0xc);
        lVar5 = *(longlong *)(pcVar4 + 4);
        if (cVar1 == '\0') {
          *(undefined4 *)(lVar5 + 0xc + lVar9) = *(undefined4 *)(pcVar4 + 0x20);
          *(undefined4 *)(lVar5 + 0x10 + lVar9) = *(undefined4 *)(pcVar4 + 0x24);
          *(undefined4 *)(lVar5 + 0x14 + lVar9) = *(undefined4 *)(pcVar4 + 0x28);
          *(undefined4 *)(lVar5 + 0x18 + lVar9) = *(undefined4 *)(pcVar4 + 0x2c);
          *(undefined4 *)(lVar5 + lVar9) = *(undefined4 *)(pcVar4 + 0x14);
        }
        else {
          fVar15 = (fVar28 - (*(float *)(pcVar4 + 0x24) * fVar16 + *(float *)(pcVar4 + 0x20))) +
                   *(float *)(pcVar4 + 0x20);
          fVar12 = 0.0;
          if (0.0 <= fVar15) {
            fVar12 = fVar15;
          }
          fVar15 = fVar7;
          if (fVar12 <= fVar7) {
            fVar15 = fVar12;
          }
          *(float *)(lVar5 + 0xc + lVar9) = fVar15;
          fVar12 = *(float *)(pcVar4 + 0x24);
          if (fVar7 < fVar15 + fVar12) {
            if (fVar7 <= fVar15) {
              fVar15 = fVar7;
            }
            fVar12 = fVar7 - fVar15;
          }
          *(float *)(lVar5 + 0x10 + lVar9) = fVar12;
          fVar15 = (fVar11 - (*(float *)(pcVar4 + 0x2c) * fVar16 + *(float *)(pcVar4 + 0x28))) +
                   *(float *)(pcVar4 + 0x28);
          fVar12 = 0.0;
          if (0.0 <= fVar15) {
            fVar12 = fVar15;
          }
          fVar15 = fVar7;
          if (fVar12 <= fVar7) {
            fVar15 = fVar12;
          }
          *(float *)(lVar5 + 0x14 + lVar9) = fVar15;
          fVar12 = *(float *)(pcVar4 + 0x2c);
          if (fVar7 < fVar15 + fVar12) {
            if (fVar7 <= fVar15) {
              fVar15 = fVar7;
            }
            fVar12 = fVar7 - fVar15;
          }
          *(float *)(lVar5 + 0x18 + lVar9) = fVar12;
          *(float *)(lVar5 + lVar9) =
               (fVar27 - (*(float *)(pcVar4 + 0x18) * fVar16 + *(float *)(pcVar4 + 0x14))) +
               *(float *)(pcVar4 + 0x14);
        }
        break;
      case '\x0e':
        pcVar10 = pcVar4 + *(int *)(pcVar4 + 0xc);
        if (cVar1 == '\0') {
          fVar12 = 0.0;
          fVar15 = 0.0;
          fVar18 = 0.0;
        }
        else {
          fVar12 = fVar11 - *(float *)(pcVar4 + 0x1c);
          fVar15 = fVar28 - *(float *)(pcVar4 + 0x18);
          fVar18 = fVar27 - *(float *)(pcVar4 + 0x14);
        }
        lVar9 = (longlong)*(int *)(pcVar4 + 0x20);
        lVar5 = *(longlong *)(pcVar4 + 4);
        *(float *)(lVar5 + lVar9) = fVar18;
        *(float *)(lVar5 + 4 + lVar9) = fVar15;
        *(float *)(lVar5 + 8 + lVar9) = fVar12;
      }
      pcVar4 = pcVar10;
      cVar2 = *pcVar10;
    }
  }
  return;
}

