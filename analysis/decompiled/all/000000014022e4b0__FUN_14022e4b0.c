// Function: FUN_14022e4b0
// Addr: 14022e4b0
// Size: 1432 bytes


void FUN_14022e4b0(longlong *param_1)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined8 uVar93;
  undefined8 uVar94;
  undefined8 uVar95;
  undefined8 *puVar96;
  longlong lVar97;
  uint uVar98;
  float *pfVar99;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [192];
  
  uVar98 = 0;
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    do {
      lVar22 = param_1[0x80];
      lVar97 = (ulonglong)uVar98 * 0xd0;
      uVar20 = *(uint *)(lVar22 + 0xc0 + lVar97);
      if ((uVar20 >> 0x10 & 1) == 0) {
        if ((uVar20 & 1) != 0) {
          puVar2 = (undefined8 *)(lVar22 + 0x80 + lVar97);
          uVar95 = puVar2[1];
          puVar96 = (undefined8 *)(lVar22 + 0x90 + lVar97);
          uVar93 = *puVar96;
          uVar94 = puVar96[1];
          *(undefined8 *)(lVar22 + lVar97) = *puVar2;
          ((undefined8 *)(lVar22 + lVar97))[1] = uVar95;
          puVar3 = (undefined4 *)(lVar22 + 0xa0 + lVar97);
          uVar25 = *puVar3;
          uVar26 = puVar3[1];
          uVar27 = puVar3[2];
          uVar28 = puVar3[3];
          puVar2 = (undefined8 *)(lVar22 + 0x10 + lVar97);
          *puVar2 = uVar93;
          puVar2[1] = uVar94;
          puVar3 = (undefined4 *)(lVar22 + 0xb0 + lVar97);
          uVar29 = *puVar3;
          uVar30 = puVar3[1];
          uVar31 = puVar3[2];
          uVar32 = puVar3[3];
          puVar3 = (undefined4 *)(lVar22 + 0x20 + lVar97);
          *puVar3 = uVar25;
          puVar3[1] = uVar26;
          puVar3[2] = uVar27;
          puVar3[3] = uVar28;
          puVar3 = (undefined4 *)(lVar22 + 0x30 + lVar97);
          *puVar3 = uVar29;
          puVar3[1] = uVar30;
          puVar3[2] = uVar31;
          puVar3[3] = uVar32;
          uVar95 = FUN_14005ed80(local_d8,*(undefined8 *)(*param_1 + 0x40),
                                 *(undefined8 *)(*param_1 + 0x38));
                    /* WARNING: Subroutine does not return */
          FUN_14005f800(&local_118,uVar95);
        }
        if ((uVar20 & 4) == 0) {
          if (((uVar20 & 0x10005) == 0) &&
             (((*(byte *)((longlong)param_1 + 0x3f6) & 1) == 0 ||
              (uVar98 < *(byte *)((longlong)param_1 + 0x3f5)))))
          goto UNWIND_INFO_14022ebd1_UnwindCodes_35__UnwindOpCode;
        }
        else {
          lVar23 = param_1[2];
          if ((lVar23 == 0) ||
             (uVar21 = *(uint *)(lVar22 + 0xc4 + lVar97), *(uint *)(lVar23 + 0x44) <= uVar21)) {
UNWIND_INFO_14022ebd1_UnwindCodes_35__UnwindOpCode:
            func_0x00014022a140(param_1,uVar98,*(undefined8 *)(*param_1 + 0x30));
          }
          else {
            pfVar99 = (float *)((ulonglong)uVar21 * 0xd0 + *(longlong *)(lVar23 + 0x400));
            if ((((*(byte *)(param_1 + 4) & 1) == 0) || ((*(byte *)(lVar23 + 0x20) & 1) == 0)) &&
               ((uVar20 & 8) == 0)) {
              lVar24 = *param_1;
              if ((*(byte *)(param_1 + 4) & 1) == 0) {
                if ((*(byte *)(lVar23 + 0x20) & 1) == 0) {
                  lVar23 = *(longlong *)(lVar24 + 0x30);
                  func_0x0001402291a0(lVar23,&local_118);
                  puVar96 = (undefined8 *)FUN_14024f1b0(local_d8,lVar23 + -0x40,pfVar99);
                  uVar95 = puVar96[1];
                  *(undefined8 *)(lVar22 + lVar97) = *puVar96;
                  ((undefined8 *)(lVar22 + lVar97))[1] = uVar95;
                  uVar95 = puVar96[3];
                  puVar2 = (undefined8 *)(lVar22 + 0x10 + lVar97);
                  *puVar2 = puVar96[2];
                  puVar2[1] = uVar95;
                  uVar95 = puVar96[5];
                  puVar2 = (undefined8 *)(lVar22 + 0x20 + lVar97);
                  *puVar2 = puVar96[4];
                  puVar2[1] = uVar95;
                  uVar95 = puVar96[7];
                  puVar2 = (undefined8 *)(lVar22 + 0x30 + lVar97);
                  *puVar2 = puVar96[6];
                  puVar2[1] = uVar95;
                  fVar4 = *(float *)(lVar22 + 8 + lVar97);
                  fVar5 = *(float *)(lVar22 + 4 + lVar97);
                  fVar6 = *(float *)(lVar22 + 0xc + lVar97);
                  fVar7 = *(float *)(lVar22 + lVar97);
                  fVar8 = *(float *)(lVar22 + 0x1c + lVar97);
                  fVar9 = *(float *)(lVar22 + 0x18 + lVar97);
                  fVar10 = *(float *)(lVar22 + 0x10 + lVar97);
                  fVar11 = *(float *)(lVar22 + 0x28 + lVar97);
                  fVar12 = *(float *)(lVar22 + 0x14 + lVar97);
                  fVar13 = *(float *)(lVar22 + 0x2c + lVar97);
                  fVar14 = *(float *)(lVar22 + 0x20 + lVar97);
                  fVar15 = *(float *)(lVar22 + 0x38 + lVar97);
                  fVar16 = *(float *)(lVar22 + 0x24 + lVar97);
                  fVar17 = *(float *)(lVar22 + 0x3c + lVar97);
                  fVar18 = *(float *)(lVar22 + 0x34 + lVar97);
                  fVar19 = *(float *)(lVar22 + 0x30 + lVar97);
                  pfVar99 = (float *)(lVar22 + lVar97);
                  *pfVar99 = local_118 * fVar7 + local_108 * fVar5 + local_f8 * fVar4 +
                             fVar6 * local_e8;
                  pfVar99[1] = fStack_114 * fVar7 + fStack_104 * fVar5 + fStack_f4 * fVar4 +
                               fVar6 * fStack_e4;
                  pfVar99[2] = fStack_110 * fVar7 + fStack_100 * fVar5 + fStack_f0 * fVar4 +
                               fVar6 * fStack_e0;
                  pfVar99[3] = fStack_10c * fVar7 + fStack_fc * fVar5 + fStack_ec * fVar4 +
                               fVar6 * fStack_dc;
                  pfVar99 = (float *)(lVar22 + 0x10 + lVar97);
                  *pfVar99 = local_118 * fVar10 + local_108 * fVar12 + local_f8 * fVar9 +
                             local_e8 * fVar8;
                  pfVar99[1] = fStack_114 * fVar10 + fStack_104 * fVar12 + fStack_f4 * fVar9 +
                               fStack_e4 * fVar8;
                  pfVar99[2] = fStack_110 * fVar10 + fStack_100 * fVar12 + fStack_f0 * fVar9 +
                               fStack_e0 * fVar8;
                  pfVar99[3] = fStack_10c * fVar10 + fStack_fc * fVar12 + fStack_ec * fVar9 +
                               fStack_dc * fVar8;
                  pfVar99 = (float *)(lVar22 + 0x20 + lVar97);
                  *pfVar99 = local_118 * fVar14 + local_108 * fVar16 + local_f8 * fVar11 +
                             local_e8 * fVar13;
                  pfVar99[1] = fStack_114 * fVar14 + fStack_104 * fVar16 + fStack_f4 * fVar11 +
                               fStack_e4 * fVar13;
                  pfVar99[2] = fStack_110 * fVar14 + fStack_100 * fVar16 + fStack_f0 * fVar11 +
                               fStack_e0 * fVar13;
                  pfVar99[3] = fStack_10c * fVar14 + fStack_fc * fVar16 + fStack_ec * fVar11 +
                               fStack_dc * fVar13;
                  pfVar99 = (float *)(lVar22 + 0x30 + lVar97);
                  *pfVar99 = fVar19 * local_118 + fVar18 * local_108 + local_f8 * fVar15 +
                             local_e8 * fVar17;
                  pfVar99[1] = fVar19 * fStack_114 + fVar18 * fStack_104 + fStack_f4 * fVar15 +
                               fStack_e4 * fVar17;
                  pfVar99[2] = fVar19 * fStack_110 + fVar18 * fStack_100 + fStack_f0 * fVar15 +
                               fStack_e0 * fVar17;
                  pfVar99[3] = fVar19 * fStack_10c + fVar18 * fStack_fc + fStack_ec * fVar15 +
                               fStack_dc * fVar17;
                }
                else {
                  func_0x0001402291a0(*(undefined8 *)(lVar24 + 0x30),&local_118);
                  fVar4 = pfVar99[1];
                  fVar5 = *pfVar99;
                  fVar6 = pfVar99[2];
                  fVar7 = pfVar99[3];
                  fVar8 = pfVar99[7];
                  fVar9 = pfVar99[5];
                  fVar10 = pfVar99[6];
                  fVar11 = pfVar99[4];
                  fVar12 = pfVar99[10];
                  fVar13 = pfVar99[0xb];
                  fVar14 = pfVar99[8];
                  fVar15 = pfVar99[0xe];
                  fVar16 = pfVar99[9];
                  fVar17 = pfVar99[0xf];
                  fVar18 = pfVar99[0xd];
                  fVar19 = pfVar99[0xc];
                  pfVar99 = (float *)(lVar22 + lVar97);
                  *pfVar99 = fVar5 * local_118 + fVar4 * local_108 + fVar6 * local_f8 +
                             fVar7 * local_e8;
                  pfVar99[1] = fVar5 * fStack_114 + fVar4 * fStack_104 + fVar6 * fStack_f4 +
                               fVar7 * fStack_e4;
                  pfVar99[2] = fVar5 * fStack_110 + fVar4 * fStack_100 + fVar6 * fStack_f0 +
                               fVar7 * fStack_e0;
                  pfVar99[3] = fVar5 * fStack_10c + fVar4 * fStack_fc + fVar6 * fStack_ec +
                               fVar7 * fStack_dc;
                  pfVar99 = (float *)(lVar22 + 0x10 + lVar97);
                  *pfVar99 = local_118 * fVar11 + local_108 * fVar9 + local_f8 * fVar10 +
                             local_e8 * fVar8;
                  pfVar99[1] = fStack_114 * fVar11 + fStack_104 * fVar9 + fStack_f4 * fVar10 +
                               fStack_e4 * fVar8;
                  pfVar99[2] = fStack_110 * fVar11 + fStack_100 * fVar9 + fStack_f0 * fVar10 +
                               fStack_e0 * fVar8;
                  pfVar99[3] = fStack_10c * fVar11 + fStack_fc * fVar9 + fStack_ec * fVar10 +
                               fStack_dc * fVar8;
                  pfVar99 = (float *)(lVar22 + 0x20 + lVar97);
                  *pfVar99 = local_118 * fVar14 + local_108 * fVar16 + local_f8 * fVar12 +
                             local_e8 * fVar13;
                  pfVar99[1] = fStack_114 * fVar14 + fStack_104 * fVar16 + fStack_f4 * fVar12 +
                               fStack_e4 * fVar13;
                  pfVar99[2] = fStack_110 * fVar14 + fStack_100 * fVar16 + fStack_f0 * fVar12 +
                               fStack_e0 * fVar13;
                  pfVar99[3] = fStack_10c * fVar14 + fStack_fc * fVar16 + fStack_ec * fVar12 +
                               fStack_dc * fVar13;
                  pfVar99 = (float *)(lVar22 + 0x30 + lVar97);
                  *pfVar99 = local_118 * fVar19 + local_108 * fVar18 + local_f8 * fVar15 +
                             local_e8 * fVar17;
                  pfVar99[1] = fStack_114 * fVar19 + fStack_104 * fVar18 + fStack_f4 * fVar15 +
                               fStack_e4 * fVar17;
                  pfVar99[2] = fStack_110 * fVar19 + fStack_100 * fVar18 + fStack_f0 * fVar15 +
                               fStack_e0 * fVar17;
                  pfVar99[3] = fStack_10c * fVar19 + fStack_fc * fVar18 + fStack_ec * fVar15 +
                               fStack_dc * fVar17;
                }
              }
              else {
                lVar23 = *(longlong *)(lVar24 + 0x30);
                fVar4 = pfVar99[1];
                fVar5 = *pfVar99;
                fVar6 = pfVar99[2];
                fVar7 = pfVar99[4];
                fVar8 = pfVar99[3];
                fVar33 = *(float *)(lVar23 + -0x10);
                fVar34 = *(float *)(lVar23 + -0xc);
                fVar35 = *(float *)(lVar23 + -8);
                fVar36 = *(float *)(lVar23 + -4);
                fVar37 = *(float *)(lVar23 + -0x20);
                fVar38 = *(float *)(lVar23 + -0x1c);
                fVar39 = *(float *)(lVar23 + -0x18);
                fVar40 = *(float *)(lVar23 + -0x14);
                fVar41 = *(float *)(lVar23 + -0x40);
                fVar42 = *(float *)(lVar23 + -0x3c);
                fVar43 = *(float *)(lVar23 + -0x38);
                fVar44 = *(float *)(lVar23 + -0x34);
                fVar45 = *(float *)(lVar23 + -0x40);
                fVar46 = *(float *)(lVar23 + -0x3c);
                fVar47 = *(float *)(lVar23 + -0x38);
                fVar48 = *(float *)(lVar23 + -0x34);
                fVar49 = *(float *)(lVar23 + -0x2c);
                fVar50 = *(float *)(lVar23 + -0x28);
                fVar51 = *(float *)(lVar23 + -0x24);
                fVar52 = *(float *)(lVar23 + -0x1c);
                fVar53 = *(float *)(lVar23 + -0x18);
                fVar54 = *(float *)(lVar23 + -0x14);
                fVar55 = *(float *)(lVar23 + -0xc);
                fVar56 = *(float *)(lVar23 + -8);
                fVar57 = *(float *)(lVar23 + -4);
                fVar58 = *(float *)(lVar23 + -0x3c);
                fVar59 = *(float *)(lVar23 + -0x38);
                fVar60 = *(float *)(lVar23 + -0x34);
                fVar61 = *(float *)(lVar23 + -0x40);
                fVar62 = *(float *)(lVar23 + -0x3c);
                fVar63 = *(float *)(lVar23 + -0x38);
                fVar64 = *(float *)(lVar23 + -0x34);
                fVar9 = pfVar99[5];
                fVar65 = *(float *)(lVar23 + -0x30);
                fVar66 = *(float *)(lVar23 + -0x2c);
                fVar67 = *(float *)(lVar23 + -0x28);
                fVar68 = *(float *)(lVar23 + -0x24);
                fVar10 = pfVar99[6];
                fVar69 = *(float *)(lVar23 + -0x20);
                fVar70 = *(float *)(lVar23 + -0x1c);
                fVar71 = *(float *)(lVar23 + -0x18);
                fVar72 = *(float *)(lVar23 + -0x14);
                fVar11 = pfVar99[0xb];
                fVar12 = pfVar99[7];
                fVar13 = pfVar99[10];
                fVar14 = pfVar99[9];
                fVar15 = pfVar99[8];
                fVar73 = *(float *)(lVar23 + -0x10);
                fVar74 = *(float *)(lVar23 + -0xc);
                fVar75 = *(float *)(lVar23 + -8);
                fVar76 = *(float *)(lVar23 + -4);
                fVar16 = pfVar99[0xe];
                fVar77 = *(float *)(lVar23 + -0x30);
                fVar78 = *(float *)(lVar23 + -0x2c);
                fVar79 = *(float *)(lVar23 + -0x28);
                fVar80 = *(float *)(lVar23 + -0x24);
                fVar17 = pfVar99[0xf];
                fVar81 = *(float *)(lVar23 + -0x30);
                fVar82 = *(float *)(lVar23 + -0x2c);
                fVar83 = *(float *)(lVar23 + -0x28);
                fVar84 = *(float *)(lVar23 + -0x24);
                fVar85 = *(float *)(lVar23 + -0x20);
                fVar86 = *(float *)(lVar23 + -0x1c);
                fVar87 = *(float *)(lVar23 + -0x18);
                fVar88 = *(float *)(lVar23 + -0x14);
                fVar18 = pfVar99[0xc];
                fVar89 = *(float *)(lVar23 + -0x10);
                fVar90 = *(float *)(lVar23 + -0xc);
                fVar91 = *(float *)(lVar23 + -8);
                fVar92 = *(float *)(lVar23 + -4);
                fVar19 = pfVar99[0xd];
                pfVar99 = (float *)(lVar22 + lVar97);
                *pfVar99 = fVar5 * *(float *)(lVar23 + -0x40) + fVar4 * *(float *)(lVar23 + -0x30) +
                           fVar6 * *(float *)(lVar23 + -0x20) + fVar8 * *(float *)(lVar23 + -0x10);
                pfVar99[1] = fVar5 * fVar58 + fVar4 * fVar49 + fVar6 * fVar52 + fVar8 * fVar55;
                pfVar99[2] = fVar5 * fVar59 + fVar4 * fVar50 + fVar6 * fVar53 + fVar8 * fVar56;
                pfVar99[3] = fVar5 * fVar60 + fVar4 * fVar51 + fVar6 * fVar54 + fVar8 * fVar57;
                pfVar99 = (float *)(lVar22 + 0x10 + lVar97);
                *pfVar99 = fVar7 * fVar61 + fVar9 * fVar65 + fVar10 * fVar69 + fVar12 * fVar73;
                pfVar99[1] = fVar7 * fVar62 + fVar9 * fVar66 + fVar10 * fVar70 + fVar12 * fVar74;
                pfVar99[2] = fVar7 * fVar63 + fVar9 * fVar67 + fVar10 * fVar71 + fVar12 * fVar75;
                pfVar99[3] = fVar7 * fVar64 + fVar9 * fVar68 + fVar10 * fVar72 + fVar12 * fVar76;
                pfVar99 = (float *)(lVar22 + 0x20 + lVar97);
                *pfVar99 = fVar41 * fVar15 + fVar77 * fVar14 + fVar37 * fVar13 + fVar33 * fVar11;
                pfVar99[1] = fVar42 * fVar15 + fVar78 * fVar14 + fVar38 * fVar13 + fVar34 * fVar11;
                pfVar99[2] = fVar43 * fVar15 + fVar79 * fVar14 + fVar39 * fVar13 + fVar35 * fVar11;
                pfVar99[3] = fVar44 * fVar15 + fVar80 * fVar14 + fVar40 * fVar13 + fVar36 * fVar11;
                pfVar99 = (float *)(lVar22 + 0x30 + lVar97);
                *pfVar99 = fVar45 * fVar18 + fVar81 * fVar19 + fVar85 * fVar16 + fVar89 * fVar17;
                pfVar99[1] = fVar46 * fVar18 + fVar82 * fVar19 + fVar86 * fVar16 + fVar90 * fVar17;
                pfVar99[2] = fVar47 * fVar18 + fVar83 * fVar19 + fVar87 * fVar16 + fVar91 * fVar17;
                pfVar99[3] = fVar48 * fVar18 + fVar84 * fVar19 + fVar88 * fVar16 + fVar92 * fVar17;
              }
            }
            else {
              uVar95 = *(undefined8 *)(pfVar99 + 2);
              *(undefined8 *)(lVar22 + lVar97) = *(undefined8 *)pfVar99;
              ((undefined8 *)(lVar22 + lVar97))[1] = uVar95;
              uVar95 = *(undefined8 *)(pfVar99 + 6);
              puVar2 = (undefined8 *)(lVar22 + 0x10 + lVar97);
              *puVar2 = *(undefined8 *)(pfVar99 + 4);
              puVar2[1] = uVar95;
              fVar4 = pfVar99[9];
              fVar5 = pfVar99[10];
              fVar6 = pfVar99[0xb];
              pfVar1 = (float *)(lVar22 + 0x20 + lVar97);
              *pfVar1 = pfVar99[8];
              pfVar1[1] = fVar4;
              pfVar1[2] = fVar5;
              pfVar1[3] = fVar6;
              uVar95 = *(undefined8 *)(pfVar99 + 0xe);
              puVar2 = (undefined8 *)(lVar22 + 0x30 + lVar97);
              *puVar2 = *(undefined8 *)(pfVar99 + 0xc);
              puVar2[1] = uVar95;
            }
          }
        }
      }
      uVar98 = uVar98 + 1;
    } while (uVar98 < *(uint *)((longlong)param_1 + 0x44));
  }
  return;
}

