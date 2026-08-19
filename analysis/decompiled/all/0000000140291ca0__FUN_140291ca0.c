// Function: FUN_140291ca0
// Addr: 140291ca0
// Size: 116 bytes


undefined8 FUN_140291ca0(undefined1 *param_1,ushort param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  ushort local_18 [4];
  int local_10 [4];
  
  local_18[0] = param_2;
  if (param_4[2] == 0) {
    local_10[0] = 0;
    uVar1 = (*DAT_140426608)(*param_4,0,local_18,1,param_1,param_4[1],0,local_10);
    if (((int)uVar1 != 0) && (local_10[0] == 0)) {
      return uVar1;
    }
  }
  else if (param_2 < 0x100) {
    *param_1 = (char)param_2;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402cb004();
}

