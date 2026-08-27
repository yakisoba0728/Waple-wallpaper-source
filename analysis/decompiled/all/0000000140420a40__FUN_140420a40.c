// Function: FUN_140420a40
// Addr: 140420a40
// Size: 61 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_140420a40(undefined8 param_1)

{
  undefined4 *puVar1;
  
  if (_DAT_140492fb0 <=
      (double)CONCAT44((uint)((ulonglong)param_1 >> 0x20) & _UNK_140492fd4,
                       (uint)param_1 & _DAT_140492fd0)) {
    puVar1 = (undefined4 *)FUN_1402caf34();
    *puVar1 = 0x22;
  }
  return (uint)param_1;
}

