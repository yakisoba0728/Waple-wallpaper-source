// Function: FUN_1402dd950
// Addr: 1402dd950
// Size: 119 bytes


undefined4
FUN_1402dd950(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  __acrt_lowio_lock_fh(*param_2);
  lVar1 = param_3[1];
  if ((*(byte *)((&DAT_1404e4890)[(longlong)(int)*(uint *)*param_3 >> 6] + 0x38 +
                (ulonglong)(*(uint *)*param_3 & 0x3f) * 0x48) & 1) == 0) {
    *(undefined1 *)(lVar1 + 0x30) = 1;
    *(undefined4 *)(lVar1 + 0x2c) = 9;
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_1402ddb24();
  }
  __acrt_lowio_unlock_fh(*param_4);
  return uVar2;
}

