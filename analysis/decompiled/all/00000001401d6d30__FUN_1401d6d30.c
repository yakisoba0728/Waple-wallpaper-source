// Function: FUN_1401d6d30
// Addr: 1401d6d30
// Size: 2415 bytes


void FUN_1401d6d30(undefined8 param_1,longlong param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 uVar22;
  longlong lVar23;
  undefined1 *puVar24;
  ulonglong uVar25;
  uint uVar26;
  float *pfVar27;
  ulonglong uVar28;
  byte bVar29;
  uint uVar30;
  longlong lVar31;
  uint uVar32;
  ulonglong uVar33;
  uint uVar34;
  uint uVar35;
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
  undefined1 auStack_1b8 [8];
  undefined1 auStack_1b0 [24];
  longlong local_198 [15];
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  
  puVar24 = auStack_1b8;
  if ((*(longlong **)(param_2 + 0x38) != (longlong *)0x0) &&
     (iVar18 = (**(code **)(**(longlong **)(param_2 + 0x38) + 0x60))(), iVar18 == 1)) {
    lVar20 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x4b8);
    if ((lVar20 == 0) || (*(longlong *)(lVar20 + 8) == 0)) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (bVar17) {
      lVar31 = *(longlong *)(lVar20 + 0x68);
      lVar23 = *(longlong *)(lVar20 + 0x70);
      uVar25 = (*(longlong *)(lVar20 + 0x40) - *(longlong *)(lVar20 + 0x38) >> 4) *
               -0x1111111111111111;
      local_198[3] = 0;
      local_198[4] = 0;
      local_198[5] = 0;
      uVar35 = (uint)uVar25;
      FUN_1401d9660(local_198 + 3,uVar25 & 0xffffffff);
      uVar30 = 0;
      if (uVar35 != 0) {
        do {
          lVar19 = (longlong)(int)uVar30 * 0xf0;
          lVar21 = (longlong)(int)uVar30 * 0x40;
          if (lVar31 == lVar23) {
            pfVar27 = (float *)(*(longlong *)(lVar20 + 0x38) + 0x20 + lVar19);
          }
          else {
            pfVar27 = (float *)(*(longlong *)(lVar20 + 0x68) + lVar21);
          }
          uVar34 = *(uint *)(lVar19 + 0x60 + *(longlong *)(lVar20 + 0x38));
          if (uVar34 == 0xffffffff) {
            uVar10 = *(undefined8 *)(pfVar27 + 2);
            uVar11 = *(undefined8 *)(pfVar27 + 4);
            uVar12 = *(undefined8 *)(pfVar27 + 6);
            uVar13 = *(undefined8 *)(pfVar27 + 8);
            uVar14 = *(undefined8 *)(pfVar27 + 10);
            uVar15 = *(undefined8 *)(pfVar27 + 0xc);
            uVar16 = *(undefined8 *)(pfVar27 + 0xe);
            *(undefined8 *)(lVar21 + local_198[3]) = *(undefined8 *)pfVar27;
            ((undefined8 *)(lVar21 + local_198[3]))[1] = uVar10;
            puVar2 = (undefined8 *)(lVar21 + 0x10 + local_198[3]);
            *puVar2 = uVar11;
            puVar2[1] = uVar12;
            puVar2 = (undefined8 *)(lVar21 + 0x20 + local_198[3]);
            *puVar2 = uVar13;
            puVar2[1] = uVar14;
            puVar2 = (undefined8 *)(lVar21 + 0x30 + local_198[3]);
            *puVar2 = uVar15;
            puVar2[1] = uVar16;
          }
          else {
            fVar41 = *pfVar27;
            fVar36 = pfVar27[1];
            fVar37 = pfVar27[2];
            lVar19 = (ulonglong)uVar34 * 0x40;
            pfVar3 = (float *)(lVar19 + 0x10 + local_198[3]);
            fVar39 = *pfVar3;
            fVar43 = pfVar3[1];
            fVar42 = pfVar3[2];
            fVar44 = pfVar3[3];
            pfVar3 = (float *)(lVar19 + 0x20 + local_198[3]);
            fVar49 = *pfVar3;
            fVar38 = pfVar3[1];
            fVar40 = pfVar3[2];
            fVar45 = pfVar3[3];
            pfVar3 = (float *)(lVar19 + local_198[3]);
            fVar46 = *pfVar3;
            fVar47 = pfVar3[1];
            fVar48 = pfVar3[2];
            fVar50 = pfVar3[3];
            pfVar3 = (float *)(lVar19 + 0x30 + local_198[3]);
            fVar51 = *pfVar3;
            fVar7 = pfVar3[1];
            fVar8 = pfVar3[2];
            fVar9 = pfVar3[3];
            pfVar3 = (float *)(lVar21 + local_198[3]);
            *pfVar3 = fVar37 * fVar49 + fVar36 * fVar39 + fVar41 * fVar46;
            pfVar3[1] = fVar37 * fVar38 + fVar36 * fVar43 + fVar41 * fVar47;
            pfVar3[2] = fVar37 * fVar40 + fVar36 * fVar42 + fVar41 * fVar48;
            pfVar3[3] = fVar37 * fVar45 + fVar36 * fVar44 + fVar41 * fVar50;
            fVar41 = pfVar27[4];
            fVar36 = pfVar27[5];
            fVar37 = pfVar27[6];
            pfVar3 = (float *)(lVar21 + 0x10 + local_198[3]);
            *pfVar3 = fVar37 * fVar49 + fVar36 * fVar39 + fVar41 * fVar46;
            pfVar3[1] = fVar37 * fVar38 + fVar36 * fVar43 + fVar41 * fVar47;
            pfVar3[2] = fVar37 * fVar40 + fVar36 * fVar42 + fVar41 * fVar48;
            pfVar3[3] = fVar37 * fVar45 + fVar36 * fVar44 + fVar41 * fVar50;
            fVar41 = pfVar27[8];
            fVar36 = pfVar27[9];
            fVar37 = pfVar27[10];
            pfVar3 = (float *)(lVar21 + 0x20 + local_198[3]);
            *pfVar3 = fVar41 * fVar46 + fVar36 * fVar39 + fVar37 * fVar49;
            pfVar3[1] = fVar41 * fVar47 + fVar36 * fVar43 + fVar37 * fVar38;
            pfVar3[2] = fVar41 * fVar48 + fVar36 * fVar42 + fVar37 * fVar40;
            pfVar3[3] = fVar41 * fVar50 + fVar36 * fVar44 + fVar37 * fVar45;
            fVar41 = pfVar27[0xc];
            fVar36 = pfVar27[0xd];
            fVar37 = pfVar27[0xe];
            pfVar27 = (float *)(lVar21 + 0x30 + local_198[3]);
            *pfVar27 = fVar41 * fVar46 + fVar36 * fVar39 + fVar37 * fVar49 + fVar51;
            pfVar27[1] = fVar41 * fVar47 + fVar36 * fVar43 + fVar37 * fVar38 + fVar7;
            pfVar27[2] = fVar41 * fVar48 + fVar36 * fVar42 + fVar37 * fVar40 + fVar8;
            pfVar27[3] = fVar41 * fVar50 + fVar36 * fVar44 + fVar37 * fVar45 + fVar9;
          }
          uVar30 = uVar30 + 1;
        } while (uVar30 < uVar35);
      }
      FUN_1401d9b80(param_2 + 0x68,uVar25 & 0xffffffff);
      uVar34 = 0;
      uVar30 = uVar34;
      if (uVar35 != 0) {
        do {
          lVar23 = (longlong)(int)uVar30 * 0x40;
          FUN_14005f730(local_198 + 0xe,local_198[3] + lVar23);
          lVar31 = *(longlong *)(param_2 + 0x68);
          uVar30 = uVar30 + 1;
          *(undefined8 *)(lVar31 + lVar23) = local_198[0xe];
          ((undefined8 *)(lVar31 + lVar23))[1] = uStack_120;
          puVar2 = (undefined8 *)(lVar31 + 0x10 + lVar23);
          *puVar2 = local_118;
          puVar2[1] = uStack_110;
          puVar2 = (undefined8 *)(lVar31 + 0x20 + lVar23);
          *puVar2 = local_108;
          puVar2[1] = uStack_100;
          puVar2 = (undefined8 *)(lVar31 + 0x30 + lVar23);
          *puVar2 = local_f8;
          puVar2[1] = uStack_f0;
        } while (uVar30 < uVar35);
      }
      local_198[0] = 0;
      local_198[1] = 0;
      local_198[2] = 0;
      local_198[6] = 0;
      local_198[7] = 0;
      local_198[8] = 0;
      local_198[9] = 0;
      local_198[10] = 0;
      local_198[0xb] = 0;
      local_198[0xc] = 0;
      local_198[0xd] = 0;
      FUN_1401aa940(local_198,*(longlong *)(param_2 + 0x88) - *(longlong *)(param_2 + 0x80) >> 3);
      FUN_1400e9030(local_198 + 6,*(longlong *)(param_2 + 0x88) - *(longlong *)(param_2 + 0x80) >> 3
                   );
      FUN_1400e9030(local_198 + 10,
                    *(longlong *)(param_2 + 0x88) - *(longlong *)(param_2 + 0x80) >> 3);
      uVar35 = DAT_140492ff0;
      uVar30 = uVar34;
      if ((*(longlong *)(lVar20 + 0x1b0) - *(longlong *)(lVar20 + 0x1a8) >> 2) * -0x79435e50d79435e5
          != 0) {
        do {
          lVar23 = (longlong)(int)uVar30 * 0x40;
          lVar19 = (longlong)(int)uVar30 * 0x4c;
          pfVar27 = (float *)(lVar23 + 0x10 + local_198[3]);
          fVar37 = *pfVar27;
          fVar39 = pfVar27[1];
          pfVar27 = (float *)(lVar23 + 0x20 + local_198[3]);
          fVar43 = *pfVar27;
          fVar42 = pfVar27[1];
          lVar31 = *(longlong *)(lVar20 + 0x1a8);
          fVar44 = *(float *)(lVar23 + local_198[3]);
          fVar49 = ((float *)(lVar23 + local_198[3]))[1];
          pfVar27 = (float *)(lVar31 + 0xc + lVar19);
          pfVar3 = (float *)(lVar31 + 0x1c + lVar19);
          pfVar4 = (float *)(lVar31 + 0x2c + lVar19);
          pfVar5 = (float *)(lVar31 + 0x3c + lVar19);
          fVar47 = pfVar27[2] * fVar43 + pfVar27[1] * fVar37 + *pfVar27 * fVar44;
          fVar48 = pfVar27[2] * fVar42 + pfVar27[1] * fVar39 + *pfVar27 * fVar49;
          fVar45 = pfVar3[2] * fVar43 + pfVar3[1] * fVar37 + *pfVar3 * fVar44;
          fVar46 = pfVar3[2] * fVar42 + pfVar3[1] * fVar39 + *pfVar3 * fVar49;
          pfVar27 = (float *)(lVar23 + 0x30 + local_198[3]);
          fVar41 = *(float *)(lVar31 + 4 + lVar19);
          fVar36 = *(float *)(lVar31 + lVar19);
          fVar38 = fVar46 * fVar41;
          fVar40 = fVar45 * fVar41;
          fVar44 = (*pfVar4 * fVar44 + pfVar4[1] * fVar37 + pfVar4[2] * fVar43) * 0.0 +
                   *pfVar5 * fVar44 + pfVar5[1] * fVar37 + pfVar5[2] * fVar43 + *pfVar27;
          fVar43 = (*pfVar4 * fVar49 + pfVar4[1] * fVar39 + pfVar4[2] * fVar42) * 0.0 +
                   *pfVar5 * fVar49 + pfVar5[1] * fVar39 + pfVar5[2] * fVar42 + pfVar27[1];
          fVar51 = fVar47 * fVar36 + fVar40 + fVar44;
          fVar50 = fVar48 * fVar36 + fVar38 + fVar43;
          lVar31 = *(longlong *)(param_2 + 0x80);
          fVar48 = fVar48 * (float)((uint)fVar36 ^ uVar35);
          fVar47 = fVar47 * (float)((uint)fVar36 ^ uVar35);
          fVar36 = fVar48 + fVar38 + fVar43;
          fVar37 = fVar47 + fVar40 + fVar44;
          fVar39 = fVar36 - fVar50;
          fVar49 = (fVar48 + fVar46 * (float)((uint)fVar41 ^ uVar35) + fVar43) - fVar36;
          fVar43 = fVar37 - fVar51;
          fVar44 = (fVar47 + fVar45 * (float)((uint)fVar41 ^ uVar35) + fVar44) - fVar37;
          fVar42 = fVar39 * fVar39 + fVar43 * fVar43;
          fVar41 = fVar49 * fVar49 + fVar44 * fVar44;
          uVar32 = uVar34;
          if (*(longlong *)(param_2 + 0x88) - lVar31 >> 3 != 0) {
            do {
              uVar25 = (ulonglong)(int)uVar32;
              fVar38 = (float)(int)*(short *)(lVar31 + 4 + uVar25 * 8);
              fVar40 = (float)-(int)*(short *)(lVar31 + 6 + uVar25 * 8);
              fVar45 = (fVar40 - fVar50) * fVar39 + (fVar38 - fVar51) * fVar43;
              fVar38 = (fVar40 - fVar36) * fVar49 + (fVar38 - fVar37) * fVar44;
              bVar29 = (byte)uVar32;
              if ((((fVar45 < 0.0) || (fVar42 < fVar45)) || (fVar38 < 0.0)) || (fVar41 < fVar38)) {
                if ((*(uint *)(local_198[10] + (uVar25 >> 5) * 4) >> (bVar29 & 0x1f) & 1) == 0) {
                  if (0.0 <= fVar45) {
                    fVar40 = 0.0;
                  }
                  else {
                    fVar40 = (float)((uint)fVar45 ^ uVar35);
                  }
                  if ((fVar42 < fVar45) && (fVar40 < fVar45 - fVar42)) {
                    fVar40 = fVar45 - fVar42;
                  }
                  if ((fVar38 < 0.0) && (fVar40 < (float)((uint)fVar38 ^ uVar35))) {
                    fVar40 = (float)((uint)fVar38 ^ uVar35);
                  }
                  if ((fVar41 < fVar38) && (fVar40 < fVar38 - fVar41)) {
                    fVar40 = fVar38 - fVar41;
                  }
                  fVar38 = *(float *)(local_198[0] + uVar25 * 4);
                  if ((fVar38 == 0.0) || (fVar40 < fVar38)) {
                    *(float *)(local_198[0] + uVar25 * 4) = fVar40;
                    *(char *)(lVar31 + 3 + uVar25 * 8) = (char)uVar30;
                  }
                }
              }
              else {
                if (*(char *)(lVar31 + 3 + uVar25 * 8) != -1) {
                  uVar26 = 1 << (bVar29 & 0x1f);
                  if ((*(uint *)(local_198[10] + (uVar25 >> 5) * 4) & uVar26) != 0) {
                    puVar1 = (uint *)(local_198[6] + (uVar25 >> 5) * 4);
                    *puVar1 = *puVar1 | uVar26;
                  }
                }
                *(char *)(lVar31 + 3 + uVar25 * 8) = (char)uVar30;
                puVar1 = (uint *)(local_198[10] + (uVar25 >> 5) * 4);
                *puVar1 = *puVar1 | 1 << (bVar29 & 0x1f);
              }
              lVar31 = *(longlong *)(param_2 + 0x80);
              uVar32 = uVar32 + 1;
            } while ((ulonglong)(longlong)(int)uVar32 <
                     (ulonglong)(*(longlong *)(param_2 + 0x88) - lVar31 >> 3));
          }
          uVar30 = uVar30 + 1;
        } while ((ulonglong)(longlong)(int)uVar30 <
                 (ulonglong)
                 ((*(longlong *)(lVar20 + 0x1b0) - *(longlong *)(lVar20 + 0x1a8) >> 2) *
                 -0x79435e50d79435e5));
      }
      fVar41 = DAT_14049297c;
      uVar35 = uVar34;
      if (local_198[9] != 0) {
        do {
          uVar25 = (ulonglong)(int)uVar35;
          if ((*(uint *)(local_198[6] + (uVar25 >> 5) * 4) >> ((byte)uVar35 & 0x1f) & 1) != 0) {
            lVar20 = *(longlong *)(param_2 + 0x80);
            uVar22 = 0xff;
            uVar33 = *(longlong *)(param_2 + 0x88) - lVar20 >> 3;
            fVar36 = fVar41;
            uVar30 = uVar34;
            if (uVar33 != 0) {
              do {
                uVar28 = (ulonglong)(int)uVar30;
                if (((*(uint *)(local_198[6] + (uVar28 >> 5) * 4) >> ((byte)uVar30 & 0x1f) & 1) == 0
                    ) && (fVar39 = (float)(int)*(short *)(lVar20 + 6 + uVar28 * 8) -
                                   (float)(int)*(short *)(lVar20 + 6 + uVar25 * 8),
                         fVar37 = (float)(int)*(short *)(lVar20 + 4 + uVar28 * 8) -
                                  (float)(int)*(short *)(lVar20 + 4 + uVar25 * 8),
                         fVar37 = fVar39 * fVar39 + fVar37 * fVar37, fVar37 < fVar36)) {
                  uVar22 = *(undefined1 *)(lVar20 + 3 + uVar28 * 8);
                  fVar36 = fVar37;
                }
                uVar30 = uVar30 + 1;
              } while ((ulonglong)(longlong)(int)uVar30 < uVar33);
            }
            *(undefined1 *)(lVar20 + 3 + uVar25 * 8) = uVar22;
          }
          uVar35 = uVar35 + 1;
        } while ((ulonglong)(longlong)(int)uVar35 < (ulonglong)local_198[9]);
      }
      FUN_140031b80(local_198 + 10);
      FUN_140031b80(local_198 + 6);
      if (local_198[0] != 0) {
        lVar20 = local_198[0];
        puVar24 = auStack_1b8;
        if ((0xfff < (ulonglong)((local_198[2] - local_198[0] >> 2) * 4)) &&
           (lVar20 = *(longlong *)(local_198[0] + -8), puVar24 = auStack_1b8,
           0x1f < (local_198[0] - lVar20) - 8U)) {
          lVar20 = 5;
          pcVar6 = (code *)swi(0x29);
          (*pcVar6)(5);
          puVar24 = auStack_1b0;
        }
        *(undefined8 *)(puVar24 + -8) = 0x1401d7668;
        thunk_FUN_14028af80(lVar20);
        *(undefined8 *)(puVar24 + 0x30) = 0;
        *(undefined8 *)(puVar24 + 0x20) = 0;
        *(undefined8 *)(puVar24 + 0x28) = 0;
      }
      if (*(longlong *)(puVar24 + 0x38) != 0) {
        *(undefined8 *)(puVar24 + -8) = 0x1401d7685;
        FUN_1402d3dd0();
      }
    }
  }
  return;
}

