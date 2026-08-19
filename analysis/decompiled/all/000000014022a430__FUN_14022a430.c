// Function: FUN_14022a430
// Addr: 14022a430
// Size: 307 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14022a430(longlong *param_1,uint param_2,longlong param_3)

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
  undefined1 auStack_48 [64];
  
  uVar4 = (ulonglong)param_2;
  local_d8 = *(undefined4 *)(param_1[0x56] + uVar4 * 4);
  local_d4 = *(undefined4 *)(param_1[0x57] + uVar4 * 4);
  local_d0 = *(undefined4 *)(param_1[0x58] + uVar4 * 4);
  if ((*(byte *)(param_3 + 0x20) & 1) == 0) {
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      local_108 = _DAT_140492b30;
      uStack_100 = _UNK_140492b38;
      local_f8 = _DAT_140492b60;
      uStack_f0 = _UNK_140492b68;
      local_cc = 0x3f800000;
      local_e8 = _DAT_140492c10;
      uStack_e0 = _UNK_140492c18;
                    /* WARNING: Subroutine does not return */
      FUN_14005f800(local_c8,*(undefined8 *)(*param_1 + 0x30));
    }
  }
  else if ((*(byte *)(param_1 + 4) & 1) == 0) {
    local_108 = _DAT_140492b30;
    uStack_100 = _UNK_140492b38;
    local_f8 = _DAT_140492b60;
    uStack_f0 = _UNK_140492b68;
    local_cc = 0x3f800000;
    local_e8 = _DAT_140492c10;
    uStack_e0 = _UNK_140492c18;
    puVar2 = (undefined8 *)FUN_14005ed80(local_c8,*(undefined8 *)(*param_1 + 0x30),&local_108);
    puVar3 = local_88;
    goto UNWIND_INFO_14022a5a6_UnwindCodes_5__OffsetInProlog;
  }
  puVar2 = &local_108;
  local_108 = _DAT_140492b30;
  uStack_100 = _UNK_140492b38;
  local_cc = 0x3f800000;
  local_e8 = _DAT_140492c10;
  uStack_e0 = _UNK_140492c18;
  local_f8 = _DAT_140492b60;
  uStack_f0 = _UNK_140492b68;
  puVar3 = auStack_48;
UNWIND_INFO_14022a5a6_UnwindCodes_5__OffsetInProlog:
  puVar2 = (undefined8 *)FUN_14005ed80(puVar3,puVar2,param_3 + 0x360);
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

