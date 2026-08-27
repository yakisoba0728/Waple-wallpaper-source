// Function: FUN_14022a360
// Addr: 14022a360
// Size: 453 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14022a360(longlong *param_1,uint param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  undefined1 local_48 [64];
  
  uVar4 = (ulonglong)param_2;
  local_d8 = *(undefined4 *)(param_1[0x56] + uVar4 * 4);
  local_d4 = *(undefined4 *)(param_1[0x57] + uVar4 * 4);
  local_d0 = *(undefined4 *)(param_1[0x58] + uVar4 * 4);
  if ((*(byte *)(param_3 + 0x20) & 1) == 0) {
    if ((*(byte *)(param_1 + 4) & 1) == 0) goto LAB_14022a493;
    local_108 = _DAT_140492a60;
    uStack_100 = _UNK_140492a68;
    local_f8 = _DAT_140492a90;
    uStack_f0 = _UNK_140492a98;
    local_cc = 0x3f800000;
    local_e8 = _DAT_140492b40;
    uStack_e0 = _UNK_140492b48;
    FUN_14005f730(local_c8,*(undefined8 *)(*param_1 + 0x30));
    puVar2 = (undefined8 *)FUN_14005ecb0(local_88,local_c8,&local_108);
  }
  else {
    if ((*(byte *)(param_1 + 4) & 1) == 0) {
      local_108 = _DAT_140492a60;
      uStack_100 = _UNK_140492a68;
      local_f8 = _DAT_140492a90;
      uStack_f0 = _UNK_140492a98;
      local_cc = 0x3f800000;
      local_e8 = _DAT_140492b40;
      uStack_e0 = _UNK_140492b48;
      puVar2 = (undefined8 *)FUN_14005ecb0(local_c8,*(undefined8 *)(*param_1 + 0x30),&local_108);
      puVar3 = local_88;
      goto LAB_14022a4e4;
    }
LAB_14022a493:
    puVar2 = &local_108;
    local_108 = _DAT_140492a60;
    uStack_100 = _UNK_140492a68;
    local_cc = 0x3f800000;
    local_e8 = _DAT_140492b40;
    uStack_e0 = _UNK_140492b48;
    local_f8 = _DAT_140492a90;
    uStack_f0 = _UNK_140492a98;
  }
  puVar3 = local_48;
LAB_14022a4e4:
  puVar2 = (undefined8 *)FUN_14005ecb0(puVar3,puVar2,param_3 + 0x360);
  uVar1 = puVar2[1];
  *(undefined8 *)(param_3 + 0x3a0) = *puVar2;
  *(undefined8 *)(param_3 + 0x3a8) = uVar1;
  uVar1 = puVar2[3];
  *(undefined8 *)(param_3 + 0x3b0) = puVar2[2];
  *(undefined8 *)(param_3 + 0x3b8) = uVar1;
  uVar1 = puVar2[5];
  *(undefined8 *)(param_3 + 0x3c0) = puVar2[4];
  *(undefined8 *)(param_3 + 0x3c8) = uVar1;
  uVar1 = puVar2[7];
  *(undefined8 *)(param_3 + 0x3d0) = puVar2[6];
  *(undefined8 *)(param_3 + 0x3d8) = uVar1;
  return;
}

