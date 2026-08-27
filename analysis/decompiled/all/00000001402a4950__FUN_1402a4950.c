// Function: FUN_1402a4950
// Addr: 1402a4950
// Size: 762 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1402a4950(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined2 *puVar10;
  undefined4 *puVar11;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined1 local_d8 [8];
  undefined2 local_d0 [4];
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined1 local_b0 [48];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_1404dc040 ^ (ulonglong)auStack_108;
  puVar2 = (undefined8 *)FUN_1402ca9c0();
  puVar3 = (undefined8 *)FUN_140291ac0(local_b0);
  local_80 = *puVar3;
  uStack_78 = puVar3[1];
  local_70 = *(undefined4 *)(puVar3 + 2);
  uStack_6c = *(undefined4 *)((longlong)puVar3 + 0x14);
  uStack_68 = *(undefined4 *)(puVar3 + 3);
  uStack_64 = *(undefined4 *)((longlong)puVar3 + 0x1c);
  uStack_60 = *(undefined4 *)(puVar3 + 4);
  uStack_5c = *(undefined4 *)((longlong)puVar3 + 0x24);
  uStack_58 = *(undefined4 *)(puVar3 + 5);
  lVar8 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar7 = &DAT_140474480;
  if (param_3 == '\0') {
    puVar7 = (undefined1 *)puVar2[2];
  }
  lVar5 = -1;
  do {
    lVar4 = lVar5;
    lVar5 = lVar4 + 1;
  } while (puVar7[lVar5] != '\0');
  lVar4 = lVar4 + 2;
  local_b8 = param_1;
  lVar5 = _calloc_base(lVar4,1);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14028b8c0();
  }
  if (lVar4 != 0) {
    FUN_1404210f0(lVar5,puVar7,lVar4);
  }
  *(longlong *)(param_1 + 0x10) = lVar5;
  puVar11 = &DAT_140474458;
  puVar9 = &DAT_140474458;
  local_c0 = 0;
  lVar5 = 6;
  do {
    local_e8 = &local_80;
    iVar1 = FUN_1402911d0(local_d0,puVar9,lVar5,&local_c0);
    if (iVar1 < 1) break;
    puVar9 = (undefined4 *)((longlong)puVar9 + (longlong)iVar1);
    lVar8 = lVar8 + 1;
    lVar5 = lVar5 - iVar1;
  } while (lVar5 != 0);
  lVar8 = lVar8 + 1;
  puVar6 = (undefined2 *)_calloc_base(lVar8,2);
  if (puVar6 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_14028b8c0();
  }
  local_c8 = 0;
  puVar10 = puVar6;
  for (; lVar8 != 0; lVar8 = lVar8 + -1) {
    local_e8 = &local_80;
    iVar1 = FUN_1402911d0(puVar10,puVar11,6,&local_c8);
    if (iVar1 < 1) break;
    puVar11 = (undefined4 *)((longlong)puVar11 + (longlong)iVar1);
    puVar10 = puVar10 + 1;
  }
  *puVar10 = 0;
  *(undefined2 **)(param_1 + 0x20) = puVar6;
  lVar8 = 0;
  puVar11 = &DAT_140474460;
  puVar9 = &DAT_140474460;
  local_c8 = 0;
  lVar5 = 5;
  do {
    local_e8 = &local_80;
    iVar1 = FUN_1402911d0(local_d0,puVar9,lVar5,&local_c8);
    if (iVar1 < 1) break;
    puVar9 = (undefined4 *)((longlong)puVar9 + (longlong)iVar1);
    lVar8 = lVar8 + 1;
    lVar5 = lVar5 - iVar1;
  } while (lVar5 != 0);
  lVar8 = lVar8 + 1;
  puVar6 = (undefined2 *)_calloc_base(lVar8,2);
  if (puVar6 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_14028b8c0();
  }
  local_c0 = 0;
  puVar10 = puVar6;
  for (; lVar8 != 0; lVar8 = lVar8 + -1) {
    local_e8 = &local_80;
    iVar1 = FUN_1402911d0(puVar10,puVar11,5,&local_c0);
    if (iVar1 < 1) break;
    puVar11 = (undefined4 *)((longlong)puVar11 + (longlong)iVar1);
    puVar10 = puVar10 + 1;
  }
  *puVar10 = 0;
  *(undefined2 **)(param_1 + 0x28) = puVar6;
  local_d0[0] = 0;
  local_c8 = 0;
  if (param_3 == '\0') {
    local_d8[0] = *(undefined1 *)*puVar2;
    local_e8 = &local_80;
    FUN_1402911d0(local_d0,local_d8,1,&local_c8);
    *(undefined2 *)(param_1 + 0x18) = local_d0[0];
    local_d8[0] = *(undefined1 *)puVar2[1];
  }
  else {
    local_d8[0] = 0x2e;
    local_e8 = &local_80;
    FUN_1402911d0(local_d0,local_d8,1,&local_c8);
    *(undefined2 *)(param_1 + 0x18) = local_d0[0];
    local_d8[0] = 0x2c;
  }
  local_e8 = &local_80;
  local_d0[0] = 0;
  local_c8 = 0;
  FUN_1402911d0(local_d0,local_d8,1,&local_c8);
  *(undefined2 *)(param_1 + 0x1a) = local_d0[0];
  return;
}

