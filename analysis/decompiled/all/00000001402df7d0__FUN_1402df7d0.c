// Function: FUN_1402df7d0
// Addr: 1402df7d0
// Size: 285 bytes


undefined4 FUN_1402df7d0(uint param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  bool bVar1;
  undefined4 uVar2;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_4 + 0x38) = 1;
    *(undefined4 *)(param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_1404e4c90 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(byte *)((&DAT_1404e4890)[(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        __acrt_lowio_lock_fh(param_1);
        uVar2 = 0xffffffff;
        if ((*(byte *)((&DAT_1404e4890)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          *(undefined1 *)(param_4 + 0x30) = 1;
          *(undefined4 *)(param_4 + 0x2c) = 9;
          *(undefined1 *)(param_4 + 0x38) = 1;
          *(undefined4 *)(param_4 + 0x34) = 0;
        }
        else {
          uVar2 = FUN_1402df8f0(param_1,param_2,param_3,param_4);
        }
        __acrt_lowio_unlock_fh(param_1);
        return uVar2;
      }
    }
    *(undefined1 *)(param_4 + 0x38) = 1;
    *(undefined4 *)(param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
    FUN_1402cacd4(0,0,0,0,0,param_4);
  }
  return 0xffffffff;
}

