// Function: FUN_1402e47e0
// Addr: 1402e47e0
// Size: 117 bytes


undefined8 FUN_1402e47e0(uint param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_1402caf10();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_1402caf34();
    *puVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_1404e4c90)) {
      if ((*(byte *)((&DAT_1404e4890)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        return *(undefined8 *)
                ((&DAT_1404e4890)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
                (ulonglong)(param_1 & 0x3f) * 0x48);
      }
    }
    puVar1 = (undefined4 *)FUN_1402caf10();
    *puVar1 = 0;
    puVar1 = (undefined4 *)FUN_1402caf34();
    *puVar1 = 9;
    FUN_1402cad8c();
  }
  return 0xffffffffffffffff;
}

