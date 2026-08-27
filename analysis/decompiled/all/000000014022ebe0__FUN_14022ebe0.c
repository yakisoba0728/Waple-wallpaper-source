// Function: FUN_14022ebe0
// Addr: 14022ebe0
// Size: 2117 bytes


void FUN_14022ebe0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  undefined1 *puVar24;
  uint uVar25;
  undefined1 uVar26;
  int iVar27;
  undefined8 *puVar28;
  int iVar29;
  longlong lVar30;
  undefined8 *puVar31;
  float fVar32;
  float unaff_XMM6_Da;
  float fVar33;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [24];
  undefined8 *local_a8;
  longlong local_a0;
  undefined8 uStack_98;
  longlong local_90;
  longlong lStack_88;
  undefined8 local_80;
  longlong lStack_78;
  
  puVar24 = auStack_c8;
  FUN_14022f990();
  FUN_140229760(param_1);
  if (*(byte *)(param_1 + 0x7f) < 10) {
    puVar3 = (undefined8 *)param_1[0x3d];
    for (puVar31 = (undefined8 *)param_1[0x3c]; puVar31 != puVar3; puVar31 = puVar31 + 0xf) {
      puVar28 = (undefined8 *)0xfffffffffffffff;
      iVar2 = *(int *)(puVar31 + 0xc);
      if (iVar2 == 1) {
        uVar14 = FUN_14028af20(0x4b0);
        plVar15 = (longlong *)FUN_1402293a0(uVar14,*param_1,param_1[1]);
        lVar30 = puVar31[5];
        plVar15[0x6c] = puVar31[4];
        plVar15[0x6d] = lVar30;
        lVar30 = puVar31[7];
        plVar15[0x6e] = puVar31[6];
        plVar15[0x6f] = lVar30;
        lVar30 = puVar31[9];
        plVar15[0x70] = puVar31[8];
        plVar15[0x71] = lVar30;
        lVar30 = puVar31[10];
        lVar19 = puVar31[0xb];
        plVar15[2] = (longlong)param_1;
        plVar15[0x72] = lVar30;
        plVar15[0x73] = lVar19;
        plVar15[0x74] = plVar15[0x6c];
        plVar15[0x75] = plVar15[0x6d];
        plVar15[0x76] = plVar15[0x6e];
        plVar15[0x77] = plVar15[0x6f];
        lVar30 = *plVar15;
        plVar15[0x78] = plVar15[0x70];
        plVar15[0x79] = plVar15[0x71];
        plVar15[0x7a] = plVar15[0x72];
        plVar15[0x7b] = plVar15[0x73];
        puVar23 = *(undefined8 **)(lVar30 + 0x30);
        *(undefined1 *)(lVar30 + 0x1ca) = 1;
        *(undefined8 **)(lVar30 + 0x30) = puVar23 + 8;
        puVar23[8] = *puVar23;
        puVar23[9] = puVar23[1];
        puVar23[10] = puVar23[2];
        puVar23[0xb] = puVar23[3];
        *(undefined4 *)(puVar23 + 0xc) = *(undefined4 *)(puVar23 + 4);
        *(undefined4 *)((longlong)puVar23 + 100) = *(undefined4 *)((longlong)puVar23 + 0x24);
        *(undefined4 *)(puVar23 + 0xd) = *(undefined4 *)(puVar23 + 5);
        *(undefined4 *)((longlong)puVar23 + 0x6c) = *(undefined4 *)((longlong)puVar23 + 0x2c);
        *(undefined4 *)(puVar23 + 0xe) = *(undefined4 *)(puVar23 + 6);
        *(undefined4 *)((longlong)puVar23 + 0x74) = *(undefined4 *)((longlong)puVar23 + 0x34);
        *(undefined4 *)(puVar23 + 0xf) = *(undefined4 *)(puVar23 + 7);
        *(undefined4 *)((longlong)puVar23 + 0x7c) = *(undefined4 *)((longlong)puVar23 + 0x3c);
        puVar23 = *(undefined8 **)(*plVar15 + 0x30);
        puVar16 = (undefined8 *)FUN_14005ecb0(&local_a8);
        uVar14 = puVar16[1];
        *puVar23 = *puVar16;
        puVar23[1] = uVar14;
        uVar14 = puVar16[3];
        puVar23[2] = puVar16[2];
        puVar23[3] = uVar14;
        uVar6 = *(undefined4 *)((longlong)puVar16 + 0x24);
        uVar7 = *(undefined4 *)(puVar16 + 5);
        uVar8 = *(undefined4 *)((longlong)puVar16 + 0x2c);
        *(undefined4 *)(puVar23 + 4) = *(undefined4 *)(puVar16 + 4);
        *(undefined4 *)((longlong)puVar23 + 0x24) = uVar6;
        *(undefined4 *)(puVar23 + 5) = uVar7;
        *(undefined4 *)((longlong)puVar23 + 0x2c) = uVar8;
        uVar6 = *(undefined4 *)((longlong)puVar16 + 0x34);
        uVar7 = *(undefined4 *)(puVar16 + 7);
        uVar8 = *(undefined4 *)((longlong)puVar16 + 0x3c);
        *(undefined4 *)(puVar23 + 6) = *(undefined4 *)(puVar16 + 6);
        *(undefined4 *)((longlong)puVar23 + 0x34) = uVar6;
        *(undefined4 *)(puVar23 + 7) = uVar7;
        *(undefined4 *)((longlong)puVar23 + 0x3c) = uVar8;
        puVar23 = puVar31;
        if (0xf < (ulonglong)puVar31[3]) {
          puVar23 = (undefined8 *)*puVar31;
        }
        FUN_14022c3c0(plVar15,puVar23,puVar31);
        FUN_14022cfa0(plVar15,param_1[1] + 0x940);
        FUN_14022f890(param_1,plVar15,1);
        lVar30 = *plVar15;
        plVar1 = (longlong *)(lVar30 + 0x30);
        *plVar1 = *plVar1 + -0x40;
        *(undefined1 *)(lVar30 + 0x1ca) = 1;
        FUN_14022ebe0(plVar15);
        puVar23 = (undefined8 *)param_1[0x91];
        if (puVar23 == (undefined8 *)param_1[0x92]) {
          uVar22 = (longlong)puVar23 - param_1[0x90];
          lVar30 = (longlong)uVar22 >> 4;
          if (lVar30 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_140013050();
          }
          uVar13 = param_1[0x92] - param_1[0x90] >> 4;
          if (0xfffffffffffffff - (uVar13 >> 1) < uVar13) {
LAB_14022f422:
                    /* WARNING: Subroutine does not return */
            FUN_140017370();
          }
          uVar21 = lVar30 + 1;
          uVar13 = (uVar13 >> 1) + uVar13;
          uVar17 = uVar21;
          if (uVar21 <= uVar13) {
            uVar17 = uVar13;
          }
          if (0xfffffffffffffff < uVar17) goto LAB_14022f422;
          uVar13 = uVar17 * 0x10;
          if (uVar13 == 0) {
            puVar28 = (undefined8 *)0x0;
          }
          else if (uVar13 < 0x1000) {
            puVar28 = (undefined8 *)FUN_14028af20(uVar13);
          }
          else {
            if (uVar13 + 0x27 <= uVar13) goto LAB_14022f422;
            lVar30 = FUN_14028af20();
            if (lVar30 == 0) goto LAB_14022f2bf;
            puVar28 = (undefined8 *)(lVar30 + 0x27U & 0xffffffffffffffe0);
            puVar28[-1] = lVar30;
          }
          uVar22 = uVar22 & 0xfffffffffffffff0;
          *(undefined8 **)(uVar22 + (longlong)puVar28) = puVar31;
          *(longlong **)(uVar22 + 8 + (longlong)puVar28) = plVar15;
          puVar16 = (undefined8 *)param_1[0x90];
          if (puVar23 == (undefined8 *)param_1[0x91]) {
            lVar30 = param_1[0x91] - (longlong)puVar16;
            puVar18 = puVar28;
            puVar23 = puVar16;
          }
          else {
            FUN_1404210f0(puVar28,puVar16,(longlong)puVar23 - (longlong)puVar16);
            puVar18 = (undefined8 *)(uVar22 + 0x10 + (longlong)puVar28);
            lVar30 = param_1[0x91] - (longlong)puVar23;
          }
          FUN_1404210f0(puVar18,puVar23,lVar30);
          lVar30 = param_1[0x90];
          if (lVar30 != 0) {
            uVar22 = param_1[0x92] - lVar30 & 0xfffffffffffffff0;
            if (0xfff < uVar22) {
              if (0x1f < (lVar30 - *(longlong *)(lVar30 + -8)) - 8U) goto LAB_14022f2bf;
              uVar22 = uVar22 + 0x27;
              lVar30 = *(longlong *)(lVar30 + -8);
            }
            thunk_FUN_14028af80(lVar30,uVar22);
          }
          param_1[0x90] = (longlong)puVar28;
          param_1[0x91] = (longlong)(puVar28 + uVar21 * 2);
          param_1[0x92] = (longlong)(puVar28 + uVar17 * 2);
        }
        else {
          *puVar23 = puVar31;
          puVar23[1] = plVar15;
          param_1[0x91] = param_1[0x91] + 0x10;
        }
      }
      else if (((iVar2 == 2) || (iVar2 == 3)) || (iVar2 == 4)) {
        puVar28 = (undefined8 *)param_1[0x94];
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = 0;
        lStack_88 = 0;
        local_80 = 0;
        lStack_78 = 0;
        local_a8 = puVar31;
        if (puVar28 == (undefined8 *)param_1[0x95]) {
          lVar30 = ((longlong)puVar28 - param_1[0x93]) / 0x38;
          if (lVar30 == 0x492492492492492) {
                    /* WARNING: Subroutine does not return */
            FUN_140013050();
          }
          uVar22 = (param_1[0x95] - param_1[0x93] >> 3) * 0x6db6db6db6db6db7;
          uVar13 = 0x492492492492492 - (uVar22 >> 1);
          if (uVar13 <= uVar22 && uVar22 - uVar13 != 0) goto LAB_14022f422;
          uVar22 = (uVar22 >> 1) + uVar22;
          uVar13 = lVar30 + 1;
          uVar17 = uVar13;
          if (uVar13 <= uVar22) {
            uVar17 = uVar22;
          }
          if (0x492492492492492 < uVar17) goto LAB_14022f422;
          uVar22 = uVar17 * 0x38;
          if (uVar22 == 0) {
            uVar22 = 0;
          }
          else if (uVar22 < 0x1000) {
            uVar22 = FUN_14028af20(uVar22);
          }
          else {
            if (uVar22 + 0x27 <= uVar22) goto LAB_14022f422;
            lVar19 = FUN_14028af20();
            if (lVar19 == 0) goto LAB_14022f2bf;
            uVar22 = lVar19 + 0x27U & 0xffffffffffffffe0;
            *(longlong *)(uVar22 - 8) = lVar19;
          }
          *(undefined8 **)(uVar22 + lVar30 * 0x38) = puVar31;
          FUN_140256470(uVar22 + (lVar30 * 7 + 1) * 8,&local_a0);
          FUN_140256470(uVar22 + (lVar30 * 7 + 4) * 8,&lStack_88);
          puVar23 = (undefined8 *)param_1[0x94];
          puVar16 = (undefined8 *)param_1[0x93];
          uVar21 = uVar22;
          if (puVar28 != puVar23) {
            FUN_1402563e0((undefined8 *)param_1[0x93],puVar28,uVar22);
            puVar23 = (undefined8 *)param_1[0x94];
            uVar21 = uVar22 + (lVar30 * 7 + 7) * 8;
            puVar16 = puVar28;
          }
          FUN_1402563e0(puVar16,puVar23,uVar21);
          puVar28 = (undefined8 *)param_1[0x93];
          if (puVar28 != (undefined8 *)0x0) {
            puVar23 = (undefined8 *)param_1[0x94];
            for (; puVar28 != puVar23; puVar28 = puVar28 + 7) {
              FUN_14000d9e0(puVar28 + 4);
              FUN_14000d9e0(puVar28 + 1);
            }
            lVar30 = param_1[0x93];
            uVar21 = (param_1[0x95] - lVar30 >> 3) * 8;
            if (0xfff < uVar21) {
              if (0x1f < (lVar30 - *(longlong *)(lVar30 + -8)) - 8U) goto LAB_14022f2bf;
              uVar21 = uVar21 + 0x27;
              lVar30 = *(longlong *)(lVar30 + -8);
            }
            thunk_FUN_14028af80(lVar30,uVar21);
          }
          param_1[0x93] = uVar22;
          param_1[0x94] = uVar22 + uVar13 * 0x38;
          param_1[0x95] = uVar22 + uVar17 * 0x38;
        }
        else {
          *puVar28 = puVar31;
          FUN_140256470(puVar28 + 1,&local_a0);
          FUN_140256470(puVar28 + 4,&lStack_88);
          param_1[0x94] = param_1[0x94] + 0x38;
        }
        if (lStack_88 != 0) {
          uVar22 = (lStack_78 - lStack_88 >> 3) * 8;
          lVar30 = lStack_88;
          if (uVar22 < 0x1000) {
LAB_14022eedd:
            thunk_FUN_14028af80(lVar30,uVar22);
            goto LAB_14022eee5;
          }
          if ((lStack_88 - *(longlong *)(lStack_88 + -8)) - 8U < 0x20) {
            uVar22 = uVar22 + 0x27;
            lVar30 = *(longlong *)(lStack_88 + -8);
            goto LAB_14022eedd;
          }
LAB_14022f2bf:
          uVar26 = SUB81(puVar28,0);
          pcVar4 = (code *)swi(0x29);
          fVar32 = (float)(*pcVar4)(5);
          puVar24 = auStack_c0;
          fVar33 = DAT_14049267c;
          goto LAB_14022f2ce;
        }
LAB_14022eee5:
        if (local_a0 != 0) {
          uVar22 = (local_90 - local_a0 >> 3) * 8;
          if (uVar22 < 0x1000) {
            thunk_FUN_14028af80();
          }
          else {
            if (0x1f < (local_a0 - *(longlong *)(local_a0 + -8)) - 8U) goto LAB_14022f2bf;
            thunk_FUN_14028af80(*(longlong *)(local_a0 + -8),uVar22 + 0x27);
          }
        }
      }
    }
  }
  *(char *)((longlong)param_1 + 0x3f4) = (char)param_1[8];
  FUN_14022e3e0(param_1);
  uVar22 = 0;
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    do {
      uVar20 = (int)uVar22 + 1;
      lVar19 = uVar22 * 0xd0;
      lVar30 = param_1[0x80];
      uVar14 = ((undefined8 *)(lVar30 + lVar19))[1];
      puVar3 = (undefined8 *)(lVar30 + 0x10 + lVar19);
      uVar9 = *puVar3;
      uVar10 = puVar3[1];
      puVar3 = (undefined8 *)(lVar30 + 0x40 + lVar19);
      *puVar3 = *(undefined8 *)(lVar30 + lVar19);
      puVar3[1] = uVar14;
      puVar3 = (undefined8 *)(lVar30 + 0x20 + lVar19);
      uVar14 = *puVar3;
      uVar11 = puVar3[1];
      puVar3 = (undefined8 *)(lVar30 + 0x50 + lVar19);
      *puVar3 = uVar9;
      puVar3[1] = uVar10;
      puVar3 = (undefined8 *)(lVar30 + 0x30 + lVar19);
      uVar9 = *puVar3;
      uVar10 = puVar3[1];
      puVar3 = (undefined8 *)(lVar30 + 0x60 + lVar19);
      *puVar3 = uVar14;
      puVar3[1] = uVar11;
      puVar3 = (undefined8 *)(lVar30 + 0x70 + lVar19);
      *puVar3 = uVar9;
      puVar3[1] = uVar10;
      uVar22 = (ulonglong)uVar20;
    } while (uVar20 < *(uint *)((longlong)param_1 + 0x44));
  }
  fVar32 = *(float *)(param_1 + 5);
  unaff_XMM6_Da = 0.0;
  if (0.0 < fVar32) {
    uVar26 = *(undefined1 *)((longlong)param_1 + 0x41);
    *(undefined1 *)((longlong)param_1 + 0x41) = 0;
    fVar33 = DAT_14049267c;
    if (*(uint *)(param_1 + 3) < 500) {
      puVar24 = auStack_c8;
      fVar33 = DAT_140492644;
    }
LAB_14022f2ce:
    if (unaff_XMM6_Da < fVar32) {
      do {
        *(undefined8 *)(puVar24 + -8) = 0x14022f2ee;
        FUN_140236cd0(param_1,fVar33,1);
        unaff_XMM6_Da = unaff_XMM6_Da + fVar33;
      } while (unaff_XMM6_Da < *(float *)(param_1 + 5));
    }
    *(undefined1 *)((longlong)param_1 + 0x41) = uVar26;
    if (((short)param_1[0x49] != 0) && (param_1[0x46] != 0)) {
      uVar25 = 0;
      uVar20 = 0;
      if ((int)param_1[0x68] != 0) {
        do {
          iVar29 = 0;
          lVar30 = (longlong)(int)uVar25;
          *(undefined2 *)(param_1[0x47] + lVar30 * 2) = 1;
          iVar27 = *(ushort *)(param_1 + 0x49) * uVar25;
          iVar2 = iVar27 * 3;
          if (*(ushort *)(param_1 + 0x49) != 0) {
            do {
              iVar12 = iVar29 + iVar27;
              iVar5 = iVar29 * 3;
              iVar29 = iVar29 + 1;
              *(undefined4 *)(param_1[0x46] + (ulonglong)(uint)(iVar12 * 3) * 4) =
                   *(undefined4 *)(param_1[0x56] + lVar30 * 4);
              *(undefined4 *)(param_1[0x46] + (ulonglong)(uint)(iVar5 + iVar2 + 1) * 4) =
                   *(undefined4 *)(param_1[0x57] + lVar30 * 4);
              *(undefined4 *)(param_1[0x46] + (ulonglong)(uint)(iVar5 + iVar2 + 2) * 4) =
                   *(undefined4 *)(param_1[0x58] + lVar30 * 4);
            } while (iVar29 < (int)(uint)*(ushort *)(param_1 + 0x49));
          }
          uVar20 = *(uint *)(param_1 + 0x68);
          uVar25 = uVar25 + 1;
        } while (uVar25 < uVar20);
      }
      lVar30 = param_1[0x48];
      if (lVar30 != 0) {
        *(undefined8 *)(puVar24 + -8) = 0x14022f3ee;
        FUN_1404217a0(lVar30,0,(ulonglong)uVar20 * 2);
      }
    }
  }
  lVar30 = *param_1;
  plVar15 = (longlong *)(lVar30 + 0x30);
  *plVar15 = *plVar15 + -0x40;
  *(undefined1 *)(lVar30 + 0x1ca) = 1;
  return;
}

