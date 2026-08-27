// Function: FUN_1402b1c70
// Addr: 1402b1c70
// Size: 936 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
FUN_1402b1c70(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,char param_7,char param_8)

{
  longlong lVar1;
  int iVar2;
  short *psVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  short sVar8;
  int *piVar9;
  longlong lVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  undefined8 *****pppppuVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  short *psVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  short *psVar20;
  undefined2 *puVar21;
  undefined1 *puVar22;
  undefined1 uVar23;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  ulonglong local_b8;
  undefined1 local_a8;
  int local_a4;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 ****local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong local_70;
  undefined4 local_68;
  ushort local_64;
  uint local_62;
  ulonglong local_58;
  
  puVar11 = auStack_d8;
  puVar18 = auStack_d8;
  local_58 = DAT_1404dc040 ^ (ulonglong)auStack_d8;
  local_98 = param_6;
  local_68 = 0x250021;
  local_62 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 7;
  local_88 = (undefined8 *****)0x0;
  local_64 = (ushort)param_7;
  if (param_8 != '\0') {
    local_62 = (uint)local_64;
    local_64 = (short)param_8;
  }
  local_a0 = param_1;
  local_90 = param_4;
  piVar9 = (int *)FUN_1402caf34();
  local_a4 = *piVar9;
  uVar19 = 0x10;
  while( true ) {
    lVar10 = local_78;
    if (local_70 - local_78 < uVar19) {
      local_b8 = local_b8 & 0xffffffffffff0000;
      FUN_140015670(&local_88,uVar19,local_a8,uVar19);
    }
    else {
      lVar1 = local_78 + uVar19;
      if (((local_78 != lVar1) && (7 < local_70)) && (DAT_140472230 != '\0')) {
        puVar22 = (undefined1 *)((longlong)local_88 + (local_78 + 1) * 2);
        puVar15 = (undefined1 *)((longlong)local_88 + lVar1 * 2 + 2);
        puVar14 = (undefined1 *)
                  ((ulonglong)(local_70 * 2 + 9 + (longlong)local_88) & 0xfffffffffffffff8);
        puVar16 = puVar14;
        if (puVar22 <= puVar14) {
          puVar16 = puVar22;
        }
        if (puVar14 < puVar15) {
          puVar15 = puVar14;
        }
        _guard_check_icall(local_88,puVar14,puVar16,puVar15);
      }
      pppppuVar13 = &local_88;
      if (7 < local_70) {
        pppppuVar13 = (undefined8 *****)local_88;
      }
      puVar21 = (undefined2 *)((longlong)pppppuVar13 + lVar10 * 2);
      uVar12 = uVar19;
      local_78 = lVar1;
      if (uVar19 != 0) {
        for (; uVar12 != 0; uVar12 = uVar12 - 1) {
          *puVar21 = 0;
          puVar21 = puVar21 + 1;
        }
      }
      *(undefined2 *)((longlong)pppppuVar13 + lVar1 * 2) = 0;
    }
    local_b8 = *(ulonglong *)(local_a0 + 0x10);
    pppppuVar13 = &local_88;
    if (7 < local_70) {
      pppppuVar13 = (undefined8 *****)local_88;
    }
    lVar10 = FUN_1402d8e10(pppppuVar13,local_78,&local_68,local_98);
    if (lVar10 != 0) {
      *piVar9 = local_a4;
      uVar23 = *(undefined1 *)param_3;
      lVar1 = *(longlong *)(param_3 + 2);
      if (local_70 < 8) {
        psVar20 = (short *)((longlong)&local_88 + lVar10 * 2);
        pppppuVar13 = &local_88;
      }
      else {
        psVar20 = (short *)((longlong)local_88 + lVar10 * 2);
        pppppuVar13 = (undefined8 *****)local_88;
      }
      psVar17 = (short *)((longlong)pppppuVar13 + 2);
      if (psVar17 == psVar20) goto LAB_1402b1f4d;
      goto LAB_1402b1ee6;
    }
    if (*piVar9 == 0x16) break;
    uVar19 = uVar19 * 2;
  }
  FUN_1402b2680(local_90,4);
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  *param_2 = *param_3;
  param_2[1] = uVar5;
  param_2[2] = uVar6;
  param_2[3] = uVar7;
  puVar11 = auStack_d8;
  if (local_70 < 8) goto LAB_1402b1ff5;
  if (DAT_140472230 != '\0') {
    puVar18 = (undefined1 *)((longlong)local_88 + (local_70 + 1) * 2);
    puVar11 = (undefined1 *)((longlong)local_88 + (local_78 + 1) * 2);
    puVar15 = (undefined1 *)((ulonglong)(puVar18 + 7) & 0xfffffffffffffff8);
    puVar22 = puVar15;
    if (puVar11 <= puVar15) {
      puVar22 = puVar11;
    }
    if (puVar15 < puVar18) {
      puVar18 = puVar15;
    }
    _guard_check_icall(local_88,puVar15,puVar22,puVar18);
  }
  pppppuVar13 = (undefined8 *****)local_88;
  puVar18 = auStack_d8;
  if (0xfff < local_70 * 2 + 2) {
    pppppuVar13 = (undefined8 *****)local_88[-1];
    puVar11 = (undefined1 *)((longlong)local_88 + (-8 - (longlong)pppppuVar13));
joined_r0x0001402b1fdb:
    puVar18 = auStack_d8;
    if ((undefined1 *)0x1f < puVar11) {
      pppppuVar13 = (undefined8 *****)&DAT_00000005;
      pcVar4 = (code *)swi(0x29);
      (*pcVar4)(5);
      puVar18 = auStack_d0;
    }
  }
  goto LAB_1402b1ff0;
LAB_1402b1ee6:
  do {
    if (lVar1 == 0) {
LAB_1402b1f39:
      uVar23 = 1;
    }
    else {
      sVar8 = *psVar17;
      if (**(longlong **)(lVar1 + 0x40) == 0) {
LAB_1402b1f1b:
        sVar8 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar1,sVar8);
      }
      else {
        iVar2 = **(int **)(lVar1 + 0x58);
        if (iVar2 < 1) goto LAB_1402b1f1b;
        **(int **)(lVar1 + 0x58) = iVar2 + -1;
        psVar3 = (short *)**(longlong **)(lVar1 + 0x40);
        **(longlong **)(lVar1 + 0x40) = (longlong)(psVar3 + 1);
        *psVar3 = sVar8;
      }
      if (sVar8 == -1) goto LAB_1402b1f39;
    }
    psVar17 = psVar17 + 1;
  } while (psVar17 != psVar20);
LAB_1402b1f4d:
  *(undefined1 *)param_2 = uVar23;
  *(undefined4 *)((longlong)param_2 + 1) = *(undefined4 *)((longlong)param_3 + 1);
  *(undefined2 *)((longlong)param_2 + 5) = *(undefined2 *)((longlong)param_3 + 5);
  *(undefined1 *)((longlong)param_2 + 7) = *(undefined1 *)((longlong)param_3 + 7);
  *(longlong *)(param_2 + 2) = lVar1;
  if (local_70 < 8) goto LAB_1402b1ff5;
  if (DAT_140472230 != '\0') {
    puVar11 = (undefined1 *)((longlong)local_88 + (local_70 + 1) * 2);
    puVar22 = (undefined1 *)((longlong)local_88 + (local_78 + 1) * 2);
    puVar16 = (undefined1 *)((ulonglong)(puVar11 + 7) & 0xfffffffffffffff8);
    puVar15 = puVar16;
    if (puVar22 <= puVar16) {
      puVar15 = puVar22;
    }
    if (puVar16 < puVar11) {
      puVar11 = puVar16;
    }
    _guard_check_icall(local_88,puVar16,puVar15,puVar11);
  }
  pppppuVar13 = (undefined8 *****)local_88;
  if (0xfff < local_70 * 2 + 2) {
    pppppuVar13 = (undefined8 *****)local_88[-1];
    puVar11 = (undefined1 *)((longlong)local_88 + (-8 - (longlong)pppppuVar13));
    goto joined_r0x0001402b1fdb;
  }
LAB_1402b1ff0:
  *(undefined8 *)(puVar18 + -8) = 0x1402b1ff5;
  thunk_FUN_14028af80(pppppuVar13);
  puVar11 = puVar18;
LAB_1402b1ff5:
  *(undefined8 *)(puVar11 + -8) = 0x1402b2004;
  return param_2;
}

