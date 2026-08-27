// Function: FUN_14026eb60
// Addr: 14026eb60
// Size: 2387 bytes


void FUN_14026eb60(float *param_1,longlong param_2,longlong *param_3,longlong param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,float *param_8,float param_9
                  ,longlong *param_10)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 local_188;
  float local_180;
  uint local_178;
  undefined4 local_174;
  longlong local_170;
  longlong local_168;
  ulonglong local_160;
  ulonglong local_158;
  float local_150;
  float local_14c;
  float local_148;
  longlong local_140;
  longlong local_138;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  
  FUN_14005f730(&local_128,param_1);
  iVar7 = (int)(*(longlong *)(param_4 + 0x10) - *(longlong *)(param_4 + 8) >> 5);
  fVar29 = param_9 * param_9;
  do {
    if ((int)(iVar7 - 1U) < 0) {
      return;
    }
    local_158 = (ulonglong)(iVar7 - 1U);
    lVar13 = *(longlong *)(param_4 + 8);
    uVar8 = 0;
    lVar16 = local_158 * 0x20;
    local_178 = 0;
    lVar11 = (*(longlong *)(lVar13 + 0x10 + lVar16) - *(longlong *)(lVar13 + 8 + lVar16) >> 3) *
             -0x3333333333333333;
    local_170 = lVar13;
    local_168 = lVar11;
    local_138 = lVar16;
    if (0 < (int)lVar11) {
      do {
        lVar12 = *(longlong *)(lVar13 + 8 + lVar16);
        uVar14 = *(uint *)(lVar12 + 4 + uVar8 * 0x28);
        if ((uVar14 & 4) != 0) {
          lVar9 = (ulonglong)*(uint *)(lVar13 + lVar16) * 0x40;
          lVar11 = *param_5;
          fVar20 = *(float *)(lVar11 + 0x34 + lVar9);
          fVar21 = *(float *)(lVar11 + 0x30 + lVar9);
          fVar22 = *(float *)(lVar11 + 0x38 + lVar9);
          local_140 = lVar12;
          if ((uVar14 & 1) == 0) {
            lVar9 = (ulonglong)*(uint *)(lVar12 + uVar8 * 0x28) << 6;
          }
          else {
            local_174 = *(undefined4 *)(lVar12 + uVar8 * 0x28);
            piVar10 = (int *)FUN_140268e80(param_2 + 0x48,&local_174);
            lVar11 = (longlong)*piVar10 << 6;
            lVar9 = *param_6;
            lVar13 = local_170;
          }
          lVar3 = *param_3;
          lVar9 = lVar9 + lVar11;
          uVar15 = (ulonglong)*(uint *)(lVar13 + lVar16);
          lVar17 = (ulonglong)*(uint *)(lVar12 + uVar8 * 0x28) * 0xf0;
          fVar24 = *(float *)(lVar9 + 0x30);
          fVar28 = *(float *)(lVar9 + 0x34);
          fVar26 = *(float *)(lVar9 + 0x38);
          if ((*(byte *)(lVar3 + 0x68 + lVar17) & 0x80) == 0) {
            fVar23 = fVar24 - fVar21;
            fVar27 = fVar28 - fVar20;
            fVar25 = fVar26 - fVar22;
            fVar19 = fVar23 * fVar23 + fVar27 * fVar27 + fVar25 * fVar25;
            if (fVar19 < 0.0) {
              fVar19 = (float)FUN_14041ad10(fVar19);
              lVar13 = local_170;
            }
            else {
              fVar19 = SQRT(fVar19);
            }
            fVar1 = *(float *)(lVar12 + 8 + uVar8 * 0x28);
            if (fVar1 < fVar19) {
              fVar24 = (fVar23 / fVar19) * fVar1 + fVar21;
              fVar28 = (fVar27 / fVar19) * fVar1 + fVar20;
              fVar26 = (fVar25 / fVar19) * fVar1 + fVar22;
            }
          }
          fVar4 = param_1[0xd];
          fVar5 = param_1[0xe];
          fVar19 = param_1[9];
          lVar11 = *param_7;
          fVar23 = param_1[10];
          fVar25 = param_1[5];
          fVar27 = param_1[1];
          fVar1 = param_1[6];
          fVar2 = param_1[2];
          *(float *)(lVar11 + 0x34 + uVar15 * 0x50) =
               fVar21 * *param_1 + fVar20 * param_1[4] + fVar22 * param_1[8] + param_1[0xc];
          *(float *)(lVar11 + 0x38 + uVar15 * 0x50) =
               fVar21 * fVar27 + fVar20 * fVar25 + fVar22 * fVar19 + fVar4;
          *(float *)(lVar11 + 0x3c + uVar15 * 0x50) =
               fVar21 * fVar2 + fVar20 * fVar1 + fVar22 * fVar23 + fVar5;
          local_160 = *(longlong *)(lVar12 + 0x18 + uVar8 * 0x28) -
                      *(longlong *)(lVar12 + 0x10 + uVar8 * 0x28) >> 2;
          if ((*(uint *)(lVar3 + 0x68 + lVar17) & 0x100) == 0) {
            lVar11 = *param_5;
            lVar9 = (ulonglong)*(uint *)(lVar12 + uVar8 * 0x28) * 0x40;
            *(float *)(lVar11 + 0x30 + lVar9) = fVar24;
            *(float *)(lVar11 + 0x34 + lVar9) = fVar28;
            *(float *)(lVar11 + 0x38 + lVar9) = fVar26;
            fVar27 = param_1[0xd];
            fVar1 = param_1[0xe];
            uVar15 = (ulonglong)*(uint *)(lVar12 + uVar8 * 0x28);
            fVar20 = param_1[9];
            fVar21 = param_1[1];
            lVar11 = *param_7;
            local_160 = (ulonglong)((int)local_160 - 1);
            fVar22 = param_1[10];
            fVar19 = param_1[5];
            fVar23 = param_1[6];
            fVar25 = param_1[2];
            *(float *)(lVar11 + 0x34 + uVar15 * 0x50) =
                 fVar24 * *param_1 + fVar28 * param_1[4] + fVar26 * param_1[8] + param_1[0xc];
            *(float *)(lVar11 + 0x38 + uVar15 * 0x50) =
                 fVar24 * fVar21 + fVar28 * fVar19 + fVar26 * fVar20 + fVar27;
            *(float *)(lVar11 + 0x3c + uVar15 * 0x50) =
                 fVar24 * fVar25 + fVar28 * fVar23 + fVar26 * fVar22 + fVar1;
          }
          iVar7 = (int)local_160;
          if (*(char *)(*param_7 + 0x4c + (ulonglong)*(uint *)(lVar13 + lVar16) * 0x50) == '\0') {
            uVar15 = 1;
            *(undefined1 *)(*param_7 + 0x4c + (ulonglong)*(uint *)(lVar13 + lVar16) * 0x50) = 1;
            if (iVar7 < 2) goto LAB_14026f0b6;
            do {
              fVar27 = param_1[0xc];
              fVar1 = param_1[0xd];
              uVar14 = (int)uVar15 + 1;
              lVar16 = (longlong)*(int *)(*(longlong *)(lVar12 + 0x10 + uVar8 * 0x28) + uVar15 * 4);
              lVar13 = *param_5;
              lVar11 = *param_7;
              lVar9 = lVar16 * 0x40;
              fVar20 = *(float *)(lVar13 + 0x38 + lVar9);
              fVar21 = *(float *)(lVar13 + 0x30 + lVar9);
              fVar22 = param_1[9];
              fVar24 = *(float *)(lVar13 + 0x34 + lVar9);
              fVar28 = param_1[1];
              fVar26 = param_1[8];
              fVar19 = param_1[5];
              fVar23 = param_1[4];
              fVar25 = *param_1;
              *(float *)(lVar11 + 0x3c + lVar16 * 0x50) =
                   fVar21 * param_1[2] + fVar24 * param_1[6] + fVar20 * param_1[10] + param_1[0xe];
              uVar18 = CONCAT44(fVar21 * fVar28 + fVar24 * fVar19 + fVar20 * fVar22 + fVar1,
                                fVar21 * fVar25 + fVar24 * fVar23 + fVar20 * fVar26 + fVar27);
              *(undefined8 *)(lVar11 + 0x34 + lVar16 * 0x50) = uVar18;
              *(undefined8 *)(lVar11 + 0x40 + lVar16 * 0x50) = uVar18;
              *(undefined4 *)(lVar11 + 0x48 + lVar16 * 0x50) =
                   *(undefined4 *)(lVar11 + 0x3c + lVar16 * 0x50);
              uVar15 = (ulonglong)uVar14;
            } while ((int)uVar14 < iVar7);
            uVar14 = *(uint *)(lVar3 + 0x68 + lVar17);
          }
          else {
LAB_14026f0b6:
            uVar14 = *(uint *)(lVar3 + 0x68 + lVar17);
            lVar11 = local_168;
            if (iVar7 < 2) goto LAB_14026f3ff;
          }
          param_9 = 1.4013e-45;
          do {
            lVar13 = *param_7;
            lVar11 = (longlong)
                     *(int *)(*(longlong *)(lVar12 + 0x10 + uVar8 * 0x28) +
                             (longlong)(int)param_9 * 4);
            uVar18 = *(undefined8 *)(lVar13 + 0x34 + lVar11 * 0x50);
            fVar19 = (float)uVar18;
            fVar24 = *(float *)(lVar13 + 0x3c + lVar11 * 0x50);
            local_188._4_4_ = (float)((ulonglong)uVar18 >> 0x20);
            fVar28 = local_188._4_4_;
            fVar20 = *(float *)(lVar13 + 0x40 + lVar11 * 0x50);
            fVar21 = *(float *)(lVar13 + 0x44 + lVar11 * 0x50);
            fVar22 = *(float *)(lVar13 + 0x48 + lVar11 * 0x50);
            local_188._0_4_ = (fVar19 + fVar19) - fVar20;
            fVar26 = (local_188._4_4_ + local_188._4_4_) - fVar21;
            local_180 = (fVar24 + fVar24) - fVar22;
            if ((DAT_1404925e0 < fVar29) &&
               (fVar23 = *(float *)(lVar3 + 0x78 + lVar17), DAT_140492620 < fVar23)) {
              fVar20 = fVar20 - fVar19;
              fVar21 = fVar21 - local_188._4_4_;
              fVar22 = fVar22 - fVar24;
              if (DAT_1404925fc < fVar20 * fVar20 + fVar21 * fVar21 + fVar22 * fVar22) {
                fVar25 = DAT_140492704 / fVar29;
                local_188._0_4_ = fVar20 * fVar29 * fVar25 * fVar23 + (float)local_188;
                local_180 = fVar22 * fVar29 * fVar25 * fVar23 + local_180;
                fVar26 = fVar21 * fVar29 * fVar25 * fVar23 + fVar26;
              }
            }
            local_188._4_4_ = fVar26;
            if ((uVar14 & 4) == 0) {
              fVar21 = 0.0;
              fVar22 = 0.0;
              fVar20 = 0.0;
            }
            else {
              fVar20 = *(float *)(lVar3 + 0x90 + lVar17);
              fVar21 = fVar20 * *param_8 + 0.0;
              fVar22 = fVar20 * param_8[1] + 0.0;
              fVar20 = fVar20 * param_8[2] + 0.0;
            }
            cVar6 = (**(code **)(*param_10 + 0x38))(param_10,&local_188,&local_150);
            if (cVar6 != '\0') {
              fVar21 = fVar21 + local_150;
              fVar22 = fVar22 + local_14c;
              fVar20 = fVar20 + local_148;
            }
            lVar16 = lVar11 * 0x40;
            local_188._0_4_ = (float)local_188 + fVar21 * fVar29;
            local_188._4_4_ = local_188._4_4_ + fVar22 * fVar29;
            local_180 = local_180 + fVar20 * fVar29;
            *(float *)(lVar13 + 0x40 + lVar11 * 0x50) = fVar19;
            *(float *)(lVar13 + 0x44 + lVar11 * 0x50) = fVar28;
            *(float *)(lVar13 + 0x48 + lVar11 * 0x50) = fVar24;
            *(undefined8 *)(lVar13 + 0x34 + lVar11 * 0x50) = local_188;
            *(float *)(lVar13 + 0x3c + lVar11 * 0x50) = local_180;
            lVar13 = *param_5;
            *(float *)(lVar13 + 0x30 + lVar16) =
                 local_128 * (float)local_188 + local_118 * local_188._4_4_ +
                 local_108 * local_180 + local_f8;
            *(float *)(lVar13 + 0x34 + lVar16) =
                 local_124 * (float)local_188 + local_114 * local_188._4_4_ +
                 local_104 * local_180 + local_f4;
            *(float *)(lVar13 + 0x38 + lVar16) =
                 local_120 * (float)local_188 + local_110 * local_188._4_4_ +
                 local_100 * local_180 + local_f0;
            param_9 = (float)((int)param_9 + 1);
            lVar11 = local_168;
            lVar12 = local_140;
            lVar13 = local_170;
            lVar16 = local_138;
          } while ((int)param_9 < (int)local_160);
        }
LAB_14026f3ff:
        local_178 = local_178 + 1;
        uVar8 = (ulonglong)local_178;
      } while ((int)local_178 < (int)lVar11);
    }
    iVar7 = (int)local_158;
  } while( true );
}

