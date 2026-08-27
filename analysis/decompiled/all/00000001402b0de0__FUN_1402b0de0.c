// Function: FUN_1402b0de0
// Addr: 1402b0de0
// Size: 275 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
FUN_1402b0de0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4,
             undefined2 param_5,undefined4 param_6)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 auStack_c8 [32];
  undefined2 local_a8;
  undefined1 *local_a0;
  longlong local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  byte local_77 [15];
  undefined1 local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1404dc040 ^ (ulonglong)auStack_c8;
  uVar1 = *(uint *)(param_4 + 0x18);
  local_78 = 0x25;
  pbVar4 = local_77;
  if ((uVar1 & 0x20) != 0) {
    local_77[0] = 0x2b;
    pbVar4 = local_77 + 1;
  }
  if ((uVar1 & 8) != 0) {
    *pbVar4 = 0x23;
    pbVar4 = pbVar4 + 1;
  }
  *pbVar4 = 0x6c;
  if ((uVar1 & 0xe00) == 0x400) {
    bVar2 = 0x6f;
  }
  else if ((uVar1 & 0xe00) == 0x800) {
    bVar2 = ~((char)uVar1 << 3) & 0x20U | 0x58;
  }
  else {
    bVar2 = 0x75;
  }
  pbVar4[1] = bVar2;
  pbVar4[2] = 0;
  iVar3 = FUN_1400162a0(local_68,0x40,&local_78,param_6);
  local_88 = *param_3;
  uStack_84 = param_3[1];
  uStack_80 = param_3[2];
  uStack_7c = param_3[3];
  if (iVar3 < 0) {
    *param_2 = local_88;
    param_2[1] = uStack_84;
    param_2[2] = uStack_80;
    param_2[3] = uStack_7c;
  }
  else {
    local_98 = (longlong)iVar3;
    local_a0 = local_68;
    local_a8 = param_5;
    FUN_1402a4c50(param_1,param_2,&local_88,param_4);
  }
  return param_2;
}

