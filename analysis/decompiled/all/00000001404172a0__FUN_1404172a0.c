// Function: FUN_1404172a0
// Addr: 1404172a0
// Size: 823 bytes


void FUN_1404172a0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined8 uVar7;
  byte *pbVar8;
  undefined4 uVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  undefined4 local_d8;
  undefined1 local_d4;
  longlong local_d0;
  undefined1 local_c8 [4];
  undefined8 local_c4;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  char local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  int local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  if (param_2 == 0x47504f53) {
    puVar5 = (undefined8 *)FUN_1403c4ed0(param_1 + 0x148);
  }
  else {
    if (param_2 != 0x47535542) {
      pbVar10 = (byte *)&DAT_14045dd10;
      goto LAB_140417329;
    }
    puVar5 = (undefined8 *)FUN_1403c4f70(param_1 + 0x140);
  }
  puVar11 = &DAT_14045dd10;
  if ((undefined8 *)*puVar5 != (undefined8 *)0x0) {
    puVar11 = (undefined8 *)*puVar5;
  }
  if (*(uint *)(puVar11 + 3) < 4) {
    pbVar10 = (byte *)&DAT_14045dd10;
  }
  else {
    pbVar10 = (byte *)puVar11[2];
  }
LAB_140417329:
  local_d8 = 1;
  local_d4 = 1;
  local_d0 = 0;
  local_c8[0] = 1;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = '\0';
  FUN_140416d70(param_1,param_2,param_3,param_4,param_5,&local_d8);
  uStack_88 = local_c8;
  local_80 = -1;
  if (local_98 == '\0') {
    uVar4 = FUN_1403ce3b0(local_c8);
  }
  else {
    uVar4 = FUN_1403ce3b0(local_c8);
    uVar4 = ~uVar4;
  }
  iStack_7c = uVar4 + 1;
  FUN_1403ecb40(local_c8,&local_80);
  iVar3 = local_80;
  if (iStack_7c != 0) {
    iStack_7c = iStack_7c + -1;
  }
  local_78 = local_90;
  uStack_74 = uStack_8c;
  uStack_70 = (undefined4)uStack_88;
  uStack_6c = uStack_88._4_4_;
  local_68 = CONCAT44(iStack_7c,local_80);
  uStack_88 = local_c8;
  local_80 = -1;
  if (local_98 == '\0') {
    uVar4 = FUN_1403ce3b0(local_c8);
  }
  else {
    uVar4 = FUN_1403ce3b0(local_c8);
    uVar4 = ~uVar4;
  }
  iStack_7c = uVar4 + 1;
  FUN_1403ecb40(local_c8,&local_80);
  if (iVar3 != -1) {
    do {
      if ((uint)*pbVar10 * 0x100 + (uint)pbVar10[1] == 1) {
        uVar4 = (uint)pbVar10[7] + (uint)pbVar10[6] * 0x100;
        if (uVar4 == 0) {
          pbVar8 = (byte *)&DAT_14045dd10;
        }
        else {
          pbVar8 = pbVar10 + uVar4;
        }
      }
      else {
        pbVar8 = (byte *)&DAT_14045dd10;
      }
      if ((uint)local_68 < (uint)*pbVar8 * 0x100 + (uint)pbVar8[1]) {
        pbVar6 = pbVar8 + ((ulonglong)(uint)local_68 + 1) * 6;
      }
      else {
        pbVar6 = (byte *)((longlong)&DAT_14045dd10 + 4);
      }
      uVar4 = (uint)*pbVar6 * 0x100 + (uint)pbVar6[1];
      if (uVar4 == 0) {
        pbVar8 = (byte *)&DAT_14045dd10;
      }
      else {
        pbVar8 = pbVar8 + uVar4;
      }
      if (*(char *)(param_6 + 0x40) == '\0') {
        FUN_14036b6f0(param_6 + 0x10,pbVar8 + 4,(uint)pbVar8[3] + (uint)pbVar8[2] * 0x100,2);
      }
      else {
        FUN_140373360();
      }
      FUN_1403ecb40(CONCAT44(uStack_6c,uStack_70),&local_68);
      if (local_68._4_4_ != 0) {
        local_68 = CONCAT44(local_68._4_4_ + -1,(uint)local_68);
      }
    } while ((uint)local_68 != 0xffffffff);
  }
  uVar7 = FUN_1403c91d0(pbVar10);
  FUN_1403b4630(uVar7,&local_d8,0,param_6);
  lVar2 = local_d0;
  local_d8 = 0xffff2153;
  if (local_d0 != 0) {
    FUN_1403c3220(local_d0);
    thunk_FUN_1402d9040(lVar2);
    local_d0 = 0;
  }
  lVar2 = local_d0;
  uVar9 = (undefined4)local_d0;
  if (1 < (int)local_b8 + 1U) {
    local_b8 = CONCAT44(uVar9,(int)local_b8);
    thunk_FUN_1402d9040(local_b0);
  }
  local_b8 = 0;
  local_b0 = lVar2;
  lVar1 = lVar2;
  if (1 < (int)local_a8 + 1U) {
    local_a8 = CONCAT44(uVar9,(int)local_a8);
    thunk_FUN_1402d9040(local_a0);
    lVar1 = local_b8;
  }
  local_a8 = 0;
  if (1 < (int)lVar1 + 1U) {
    local_b8 = CONCAT44(uVar9,(int)local_b8);
    local_a0 = lVar2;
    thunk_FUN_1402d9040(local_b0);
  }
  return;
}

