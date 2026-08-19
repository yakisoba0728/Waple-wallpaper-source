// Function: FUN_1402d1280
// Addr: 1402d1280
// Size: 78 bytes


undefined8 FUN_1402d1280(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  
  if ((param_1 < 0x1fffffffffffffff) &&
     (auVar1._8_8_ = 0, auVar1._0_8_ = param_3,
     param_2 < SUB168((ZEXT816(0) << 0x40 | ZEXT816(0xffffffffffffffff)) / auVar1,0))) {
    if (param_2 * param_3 < ~(param_1 * 8)) {
                    /* WARNING: Subroutine does not return */
      FUN_1402dd8b0(param_1 * 8 + param_2 * param_3,1);
    }
  }
  return 0;
}

