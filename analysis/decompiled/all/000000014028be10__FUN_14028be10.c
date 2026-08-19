// Function: FUN_14028be10
// Addr: 14028be10
// Size: 58 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14028be10(void)

{
  uint uVar1;
  ulonglong local_res8;
  ulonglong auStackX_10 [3];
  ulonglong auStack_18 [2];
  
  if (DAT_1404dc110 != 0x2b992ddfa232) {
    _DAT_1404dc150 = ~DAT_1404dc110;
    return;
  }
  local_res8 = 0;
  (*_UNK_1404262c0)(&local_res8);
  auStack_18[0] = local_res8;
  uVar1 = (*DAT_1404266f8)();
  auStack_18[0] = auStack_18[0] ^ uVar1;
  uVar1 = (*DAT_140426448)();
  auStack_18[0] = auStack_18[0] ^ uVar1;
  (*DAT_140426658)(auStackX_10);
  DAT_1404dc110 =
       (auStackX_10[0] << 0x20 ^ auStackX_10[0] ^ auStack_18[0] ^ (ulonglong)auStack_18) &
       0xffffffffffff;
  if (DAT_1404dc110 == 0x2b992ddfa232) {
    DAT_1404dc110 = 0x2b992ddfa233;
  }
  _DAT_1404dc150 = ~DAT_1404dc110;
  return;
}

