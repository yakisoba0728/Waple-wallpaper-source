// Function: FUN_14028f710
// Addr: 14028f710
// Size: 75 bytes


void FUN_14028f710(undefined8 param_1,ulonglong *param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined1 auStack_48 [28];
  uint uStack_2c;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_1404dc110 ^ (ulonglong)auStack_68;
  iVar1 = (*DAT_1404265d8)(param_1,0x12,param_2,0x18);
  if ((iVar1 == 0) && ((iVar1 = (*DAT_1404266a8)(), iVar1 == 0x32 || (iVar1 == 0x57)))) {
    iVar1 = (*DAT_140426630)(param_1,auStack_48);
    if (iVar1 == 0) {
      (*DAT_1404266a8)();
    }
    else {
      *param_2 = (ulonglong)uStack_2c;
      *(undefined4 *)(param_2 + 1) = uStack_1c;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_18;
      param_2[2] = 0;
    }
  }
  func_0x0001402ed2f0(local_10 ^ (ulonglong)auStack_68);
  return;
}

