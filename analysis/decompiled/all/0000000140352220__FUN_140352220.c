// Function: FUN_140352220
// Addr: 140352220
// Size: 374 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140352220(undefined4 *param_1)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_4038 [32];
  undefined1 local_4018 [16384];
  ulonglong local_18 [2];
  
  local_18[1] = 0x14035222c;
  local_18[0] = DAT_1404dc040 ^ (ulonglong)auStack_4038;
  uVar1 = param_1[0x26];
  *(undefined1 **)(param_1 + 6) = local_4018;
  *(ulonglong **)(param_1 + 8) = local_18;
  uVar5 = 0x100;
  if (((uVar1 & 0x100) == 0) || (0xff < (int)(param_1[0x29] + param_1[0x28]))) {
    uVar5 = 0x20;
    uVar3 = 6;
  }
  else {
    uVar3 = 0xc;
  }
  *param_1 = uVar3;
  param_1[4] = uVar5;
  iVar6 = 1 << (sbyte)uVar3;
  param_1[1] = iVar6;
  param_1[2] = iVar6 >> 1;
  bVar2 = 0;
  param_1[3] = iVar6 >> 6;
  *(undefined1 *)(param_1 + 0xf) = 0;
  if ((uVar1 & 8) != 0) {
    *(undefined1 *)(param_1 + 0xf) = 2;
    bVar2 = 2;
  }
  if ((uVar1 & 0x10) != 0) {
    bVar2 = bVar2 | 4;
    *(byte *)(param_1 + 0xf) = bVar2;
  }
  if ((uVar1 & 0x20) == 0) {
    *(byte *)(param_1 + 0xf) = bVar2 | 1;
  }
  *(undefined1 **)(param_1 + 0x30) = &LAB_140352720;
  *(undefined1 **)(param_1 + 0x32) = &LAB_140352740;
  *(undefined1 **)(param_1 + 0x34) = &LAB_1403526a0;
  *(undefined1 **)(param_1 + 0x36) = &LAB_1403527f0;
  uVar4 = FUN_1403523a0(param_1,0,0,param_1[0x28]);
  if ((int)uVar4 == 0) {
    if ((param_1[0x26] & 0x200) == 0) {
      *(code **)(param_1 + 0x30) = FUN_1402fc370;
      *(code **)(param_1 + 0x32) = FUN_140351e10;
      *(code **)(param_1 + 0x34) = FUN_140351d60;
      *(code **)(param_1 + 0x36) = FUN_1402fc370;
      uVar4 = FUN_1403523a0(param_1,1,0,param_1[0x29]);
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

