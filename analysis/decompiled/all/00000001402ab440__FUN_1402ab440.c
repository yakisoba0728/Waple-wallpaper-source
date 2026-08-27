// Function: FUN_1402ab440
// Addr: 1402ab440
// Size: 950 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_1402ab440(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             ulonglong param_5,uint *param_6,undefined1 *param_7)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 ****ppppuVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [24];
  undefined1 local_c8;
  undefined2 local_b8;
  int local_b4;
  longlong *local_b0;
  longlong local_a8;
  undefined8 ***local_a0;
  undefined8 uStack_98;
  ulonglong local_90;
  ulonglong local_88;
  undefined1 local_80 [8];
  undefined8 local_78;
  longlong local_60 [4];
  ulonglong local_40;
  
  puVar14 = auStack_e8;
  local_40 = DAT_1404dc040 ^ (ulonglong)auStack_e8;
  lVar9 = *(longlong *)(param_5 + 0x40);
  local_b0 = param_2;
  if ((*(uint *)(param_5 + 0x18) & 0x4000) == 0) {
LAB_1402ab6de:
    local_a8 = *(longlong *)(lVar9 + 8);
    *(undefined8 *)(puVar14 + -8) = 0x1402ab6f3;
    (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    *(longlong ***)(puVar14 + 0x20) = &local_b0;
    uVar2 = *(undefined4 *)(param_5 + 0x18);
    *(undefined8 *)(puVar14 + -8) = 0x1402ab710;
    uVar5 = FUN_14029ac00(local_60,param_3,param_4,uVar2);
    local_b8 = uVar5;
    if (local_a8 != 0) {
      *(undefined8 *)(puVar14 + -8) = 0x1402ab72d;
      lVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      if (lVar9 != 0) {
        *(undefined8 *)(puVar14 + -8) = 0x1402ab746;
        (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar9,1);
      }
    }
    if ((char)uVar5 < '\0') {
      *param_7 = 0;
    }
    else {
      *(undefined8 *)(puVar14 + -8) = 0x1402ab764;
      uVar7 = FUN_140292770(local_60,&local_b0,(int)(char)uVar5,&local_b4);
      *param_7 = uVar7 != 0;
      if (((local_b0 != local_60) && (local_b4 == 0)) && ((local_b8._1_1_ == '\0' && (uVar7 < 2))))
      goto LAB_1402ab78e;
    }
    *param_6 = 2;
  }
  else {
    uVar3 = *(undefined8 *)(lVar9 + 8);
    local_78 = uVar3;
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar3);
    uVar8 = FUN_14029d730(local_80);
    lVar9 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar3);
    if (lVar9 != 0) {
      (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar9,1);
    }
    local_a0 = (undefined8 ***)0x0;
    uStack_98 = 0;
    local_90 = 1;
    local_88 = 7;
    ppppuVar10 = &local_a0;
    lVar9 = 1;
    do {
      *(undefined2 *)ppppuVar10 = 0;
      ppppuVar10 = (undefined8 ****)((longlong)ppppuVar10 + 2);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    local_a0._0_4_ = (uint)(ushort)local_a0;
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar8,local_80);
    FUN_14029dec0(&local_a0,local_80);
    FUN_1402a9c30(local_80);
    param_5 = local_90;
    if (local_90 < local_88) {
      uVar13 = local_90 + 1;
      if (((local_90 != uVar13) && (7 < local_88)) && (DAT_140472230 != '\0')) {
        uVar1 = (longlong)local_a0 + (local_90 + 1) * 2;
        uVar15 = (longlong)local_a0 + uVar13 * 2 + 2;
        uVar11 = local_88 * 2 + 9 + (longlong)local_a0 & 0xfffffffffffffff8;
        uVar12 = uVar11;
        if (uVar1 <= uVar11) {
          uVar12 = uVar1;
        }
        if (uVar11 < uVar15) {
          uVar15 = uVar11;
        }
        _guard_check_icall(local_a0,uVar11,uVar12,uVar15);
      }
      ppppuVar10 = &local_a0;
      if (7 < local_88) {
        ppppuVar10 = (undefined8 ****)local_a0;
      }
      local_90 = uVar13;
      *(undefined4 *)((longlong)ppppuVar10 + param_5 * 2) = 0;
      param_2 = local_b0;
    }
    else {
      FUN_14029cf60(&local_a0,1,(undefined1)local_b8,0);
    }
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(uVar8,local_80);
    FUN_14029dec0(&local_a0,local_80);
    FUN_1402a9c30(local_80);
    ppppuVar10 = &local_a0;
    if (7 < local_88) {
      ppppuVar10 = (undefined8 ****)local_a0;
    }
    local_c8 = 1;
    iVar6 = FUN_140296360(param_3,param_4,2,ppppuVar10);
    if (iVar6 == 0) {
      *param_7 = 0;
    }
    else if (iVar6 == 1) {
      *param_7 = 1;
    }
    else {
      *param_7 = 0;
      *param_6 = 2;
    }
    puVar14 = auStack_e8;
    if (7 < local_88) {
      if (DAT_140472230 != '\0') {
        uVar13 = (longlong)local_a0 + (local_88 + 1) * 2;
        uVar1 = (longlong)local_a0 + (local_90 + 1) * 2;
        uVar12 = uVar13 + 7 & 0xfffffffffffffff8;
        uVar15 = uVar12;
        if (uVar1 <= uVar12) {
          uVar15 = uVar1;
        }
        if (uVar12 < uVar13) {
          uVar13 = uVar12;
        }
        _guard_check_icall(local_a0,uVar12,uVar15,uVar13);
      }
      uVar13 = local_88 * 2 + 2;
      ppppuVar10 = (undefined8 ****)local_a0;
      if (0xfff < uVar13) {
        ppppuVar10 = (undefined8 ****)local_a0[-1];
        if (0x1f < (ulonglong)((longlong)local_a0 + (-8 - (longlong)ppppuVar10))) {
          lVar9 = 5;
          pcVar4 = (code *)swi(0x29);
          (*pcVar4)();
          puVar14 = auStack_e0;
          goto LAB_1402ab6de;
        }
        uVar13 = local_88 * 2 + 0x29;
      }
      thunk_FUN_14028af80(ppppuVar10,uVar13);
      puVar14 = auStack_e8;
    }
  }
LAB_1402ab78e:
  if ((char)param_3[1] == '\0') {
    *(undefined8 *)(puVar14 + -8) = 0x1402ab79d;
    FUN_1402a7e60(param_3);
  }
  if ((char)param_4[1] == '\0') {
    *(undefined8 *)(puVar14 + -8) = 0x1402ab7ac;
    FUN_1402a7e60(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 != 0) goto LAB_1402ab7c3;
  }
  else if (*param_4 == 0) goto LAB_1402ab7c3;
  *param_6 = *param_6 | 1;
LAB_1402ab7c3:
  lVar9 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = lVar9;
  *(undefined8 *)(puVar14 + -8) = 0x1402ab7db;
  return param_2;
}

