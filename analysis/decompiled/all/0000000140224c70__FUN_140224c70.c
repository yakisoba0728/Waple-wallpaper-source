// Function: FUN_140224c70
// Addr: 140224c70
// Size: 1946 bytes


void FUN_140224c70(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  size_t sVar13;
  longlong *plVar14;
  longlong *plVar15;
  undefined4 *puVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  char *pcVar20;
  undefined8 ****ppppuVar21;
  ulonglong uVar22;
  undefined4 uVar23;
  int iVar24;
  undefined1 *puVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  uint local_res8;
  int local_res10;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [24];
  char *local_f8;
  ulonglong uStack_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  undefined8 ***local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 local_98 [2];
  undefined8 *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    uVar8 = 0;
    local_res8 = 0;
    *(ushort *)(param_1 + 0x120) = *(ushort *)(param_1 + 0x120) & 0xfbf7 | 0x100;
    lVar10 = FUN_140087490(param_1 + 0x1b0,&DAT_1404912fc,&DAT_140491300);
    if (lVar10 != 0) {
      uVar11 = FUN_140086de0(param_1 + 0x1b0,&DAT_1404912fc,&DAT_140491300);
      cVar6 = FUN_140088760(uVar11);
      if (cVar6 != '\0') {
        uVar8 = FUN_140085f70(uVar11);
      }
    }
    lVar10 = *(longlong *)(param_1 + 0x2e8);
    plVar14 = (longlong *)(param_1 + 0x2c0);
    *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(lVar10 + 0x1b8);
    *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(lVar10 + 0x1c0);
    *(undefined8 *)(param_1 + 0x304) = *(undefined8 *)(lVar10 + 0x1c4);
    *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(lVar10 + 0x1cc);
    puVar25 = auStack_118;
    uVar19 = 0;
    if ((*(longlong *)(lVar10 + 0x18) - *(longlong *)(lVar10 + 0x10) >> 3) * -0x70a3d70a3d70a3d7 !=
        0) {
      local_res10 = 0;
      do {
        lVar10 = *(longlong *)(lVar10 + 0x10);
        uVar27 = (ulonglong)local_res10;
        lVar26 = uVar27 * 200;
        local_d8 = (undefined8 ****)0x0;
        uStack_d0 = 0;
        local_c8 = 0;
        local_c0 = 0;
        uVar12 = (*(longlong *)(lVar26 + 8 + lVar10) - *(longlong *)(lVar26 + lVar10) >> 3) - 1;
        uVar22 = (ulonglong)uVar8;
        if (uVar12 < uVar8) {
          uVar22 = uVar12;
        }
        pcVar20 = *(char **)(*(longlong *)(lVar26 + lVar10) + uVar22 * 8);
        sVar13 = strlen(pcVar20);
        FUN_140017480(&local_d8,pcVar20,sVar13);
        uStack_b0 = (longlong *)0x0;
        uStack_a8 = 0;
        if (*(longlong *)(*(longlong *)(param_1 + 0x2e8) + 0x30) !=
            *(longlong *)(*(longlong *)(param_1 + 0x2e8) + 0x38)) {
          plVar1 = *(longlong **)(lVar26 + 0x68 + lVar10);
          uVar23 = 0;
          plVar14 = *(longlong **)(lVar26 + 0x70 + lVar10);
          local_90 = (undefined8 *)0x0;
          local_88 = 0;
          local_98[0] = 0;
          local_90 = (undefined8 *)FUN_14028af20(0x38);
          *local_90 = local_90;
          local_90[1] = local_90;
          local_80 = 0;
          local_78 = 0;
          lStack_70 = 0;
          local_68 = 7;
          local_60 = 8;
          local_98[0] = 0x3f800000;
          FUN_140011f50(&local_80,0x10,local_90);
          if (((*(uint *)(lVar26 + 0x38 + lVar10) & 0x800000) != 0) &&
             (*(longlong *)(*(longlong *)(param_1 + 0x2e8) + 0x30) !=
              *(longlong *)(*(longlong *)(param_1 + 0x2e8) + 0x38))) {
            uVar23 = 1;
          }
          local_e8 = 8;
          local_f8 = (char *)s_SKINNING_140490cc0._0_8_;
          uStack_f0 = 0;
          local_e0 = 0xf;
          plVar15 = (longlong *)FUN_14015b140(local_98,local_58,&local_f8);
          *(undefined4 *)(*plVar15 + 0x30) = uVar23;
          if (local_e0 < 0x10) {
LAB_140224f4a:
            uVar18 = (int)(*(longlong *)(*(longlong *)(param_1 + 0x2e8) + 0x38) -
                           *(longlong *)(*(longlong *)(param_1 + 0x2e8) + 0x30) >> 4) * -0x11111111;
            local_f8 = (char *)s_BONECOUNT_140487640._0_8_;
            local_e8 = 9;
            local_e0 = 0xf;
            uVar19 = 0x10;
            if (0x10 < uVar18) {
              uVar19 = uVar18;
            }
            uVar19 = (int)(uVar19 - 1) >> 1 | uVar19 - 1;
            uVar19 = (int)uVar19 >> 2 | uVar19;
            uVar19 = (int)uVar19 >> 4 | uVar19;
            uVar19 = (int)uVar19 >> 8 | uVar19;
            iVar9 = ((int)uVar19 >> 0x10 | uVar19) + 1;
            iVar24 = 0x80;
            if (iVar9 < 0x80) {
              iVar24 = iVar9;
            }
            uStack_f0 = (ulonglong)(byte)s_BONECOUNT_140487640[8];
            plVar15 = (longlong *)FUN_14015b140(local_98,local_48,&local_f8);
            *(int *)(*plVar15 + 0x30) = iVar24;
            if (0xf < local_e0) {
              uVar22 = local_e0 + 1;
              pcVar20 = local_f8;
              if (0xfff < uVar22) {
                pcVar20 = *(char **)(local_f8 + -8);
                if ((char *)0x1f < local_f8 + (-8 - (longlong)pcVar20)) goto LAB_140225375;
                uVar22 = local_e0 + 0x28;
              }
              thunk_FUN_14028af80(pcVar20,uVar22);
            }
            if (plVar1 != plVar14) {
              local_e8 = 8;
              local_f8 = (char *)s_MORPHING_140490ce0._0_8_;
              uStack_f0 = 0;
              local_e0 = 0xf;
              puVar16 = (undefined4 *)FUN_14015a440(local_98,&local_f8);
              *puVar16 = 1;
              if (0xf < local_e0) {
                uVar22 = local_e0 + 1;
                pcVar20 = local_f8;
                if (0xfff < uVar22) {
                  pcVar20 = *(char **)(local_f8 + -8);
                  if ((char *)0x1f < local_f8 + (-8 - (longlong)pcVar20)) goto LAB_140225375;
                  uVar22 = local_e0 + 0x28;
                }
                thunk_FUN_14028af80(pcVar20,uVar22);
              }
            }
            if ((*(uint *)(lVar26 + 0x18 + lVar10) & 0x400) != 0) {
              local_e8 = 0;
              local_e0 = 0;
              local_f8 = (char *)0x0;
              uStack_f0 = 0;
              local_f8 = (char *)FUN_14028af20(0x20);
              uVar5 = s_MORPHING_NORMALS_1404912d8._12_4_;
              uVar4 = s_MORPHING_NORMALS_1404912d8._8_4_;
              uVar23 = s_MORPHING_NORMALS_1404912d8._4_4_;
              local_e8 = 0x10;
              local_e0 = 0x1f;
              *(undefined4 *)local_f8 = s_MORPHING_NORMALS_1404912d8._0_4_;
              *(undefined4 *)(local_f8 + 4) = uVar23;
              *(undefined4 *)(local_f8 + 8) = uVar4;
              *(undefined4 *)(local_f8 + 0xc) = uVar5;
              local_f8[0x10] = '\0';
              puVar16 = (undefined4 *)FUN_14015a440(local_98,&local_f8);
              *puVar16 = 1;
              if (0xf < local_e0) {
                uVar22 = local_e0 + 1;
                pcVar20 = local_f8;
                if (0xfff < uVar22) {
                  pcVar20 = *(char **)(local_f8 + -8);
                  if ((char *)0x1f < local_f8 + (-8 - (longlong)pcVar20)) goto LAB_140225375;
                  uVar22 = local_e0 + 0x28;
                }
                thunk_FUN_14028af80(pcVar20,uVar22);
              }
            }
            ppppuVar21 = &local_d8;
            if (0xf < local_c0) {
              ppppuVar21 = (undefined8 ****)local_d8;
            }
            plVar14 = (longlong *)
                      FUN_140150110(*(longlong *)(param_1 + 200) + 0x1630,ppppuVar21,local_98);
            uStack_b0 = plVar14;
            if (local_80 != 0) {
              uVar22 = (lStack_70 - local_80 >> 3) * 8;
              lVar17 = local_80;
              if (0xfff < uVar22) {
                if (0x1f < (local_80 - *(longlong *)(local_80 + -8)) - 8U) goto LAB_140225375;
                uVar22 = uVar22 + 0x27;
                lVar17 = *(longlong *)(local_80 + -8);
              }
              thunk_FUN_14028af80(lVar17,uVar22);
              local_80 = 0;
              local_78 = 0;
              lStack_70 = 0;
            }
            *(undefined8 *)local_90[1] = 0;
            puVar28 = (undefined8 *)*local_90;
            while (puVar28 != (undefined8 *)0x0) {
              puVar2 = (undefined8 *)*puVar28;
              FUN_140017240(puVar28 + 2);
              thunk_FUN_14028af80(puVar28,0x38);
              puVar28 = puVar2;
            }
            thunk_FUN_14028af80(local_90,0x38);
            goto LAB_140225224;
          }
          uVar22 = local_e0 + 1;
          pcVar20 = local_f8;
          if (uVar22 < 0x1000) {
LAB_140224f45:
            thunk_FUN_14028af80(pcVar20,uVar22);
            goto LAB_140224f4a;
          }
          pcVar20 = *(char **)(local_f8 + -8);
          if (local_f8 + (-8 - (longlong)pcVar20) < (char *)0x20) {
            uVar22 = local_e0 + 0x28;
            goto LAB_140224f45;
          }
LAB_140225375:
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar25 = auStack_110;
          uVar19 = local_res8;
          break;
        }
        ppppuVar21 = &local_d8;
        if (0xf < local_c0) {
          ppppuVar21 = (undefined8 ****)local_d8;
        }
        plVar14 = (longlong *)FUN_14014ff70(*(longlong *)(param_1 + 200) + 0x1630,ppppuVar21);
        uStack_b0 = plVar14;
LAB_140225224:
        local_res8 = local_res8 | *(uint *)((longlong)plVar14 + 0x1fc);
        if (((char)plVar14[0x3e] == '\0') || ((char)plVar14[0x3e] == '\x03')) {
          *(ushort *)(param_1 + 0x120) = *(ushort *)(param_1 + 0x120) & 0xfeff;
          *(ushort *)(param_1 + 0x120) = *(ushort *)(param_1 + 0x120) | 0x400;
        }
        lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x2f0) + 0x238);
        if (uVar27 < (ulonglong)
                     (*(longlong *)(*(longlong *)(param_1 + 0x2f0) + 0x240) - lVar17 >> 5)) {
          puVar28 = (undefined8 *)(uVar27 * 0x20 + lVar17);
        }
        else {
          puVar28 = (undefined8 *)0x0;
        }
        local_b8 = *puVar28;
        if (puVar28[3] != 0) {
          *(int *)(param_1 + 0x2e0) =
               *(int *)(lVar26 + 0x40 + lVar10) / *(int *)(lVar26 + 0x3c + lVar10);
          uStack_a8 = puVar28[3];
        }
        if ((*(byte *)((longlong)plVar14 + 0x1fc) & 1) != 0) {
          *(ushort *)(param_1 + 0x120) = *(ushort *)(param_1 + 0x120) | 8;
        }
        puVar16 = *(undefined4 **)(param_1 + 0x2c8);
        plVar14 = (longlong *)(param_1 + 0x2c0);
        if (puVar16 == *(undefined4 **)(param_1 + 0x2d0)) {
          FUN_140228cc0(plVar14,puVar16,&local_b8);
        }
        else {
          local_b8._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
          *puVar16 = (undefined4)local_b8;
          puVar16[1] = local_b8._4_4_;
          puVar16[2] = (undefined4)uStack_b0;
          puVar16[3] = uStack_b0._4_4_;
          *(undefined8 *)(puVar16 + 4) = uStack_a8;
          *(longlong *)(param_1 + 0x2c8) = *(longlong *)(param_1 + 0x2c8) + 0x18;
        }
        if (0xf < local_c0) {
          uVar22 = local_c0 + 1;
          ppppuVar21 = (undefined8 ****)local_d8;
          if (0xfff < uVar22) {
            ppppuVar21 = (undefined8 ****)local_d8[-1];
            if (0x1f < (ulonglong)((longlong)local_d8 + (-8 - (longlong)ppppuVar21)))
            goto LAB_140225375;
            uVar22 = local_c0 + 0x28;
          }
          thunk_FUN_14028af80(ppppuVar21,uVar22);
        }
        lVar10 = *(longlong *)(param_1 + 0x2e8);
        local_res10 = local_res10 + 1;
        puVar25 = auStack_118;
        uVar19 = local_res8;
      } while ((ulonglong)(longlong)local_res10 <
               (ulonglong)
               ((*(longlong *)(lVar10 + 0x18) - *(longlong *)(lVar10 + 0x10) >> 3) *
               -0x70a3d70a3d70a3d7));
    }
    lVar10 = *(longlong *)(param_1 + 0x2c8);
    lVar26 = *plVar14;
    *(undefined8 *)(puVar25 + -8) = 0x1402253ae;
    FUN_140228440(lVar26,lVar10,(lVar10 - lVar26 >> 3) * -0x5555555555555555,&LAB_14021a620);
    if ((uVar19 & 8) == 0) {
      uVar7 = *(ushort *)(param_1 + 0x120) & 0xffbf;
    }
    else {
      uVar7 = *(ushort *)(param_1 + 0x120) | 0x40;
    }
    *(ushort *)(param_1 + 0x120) = uVar7;
  }
  return;
}

