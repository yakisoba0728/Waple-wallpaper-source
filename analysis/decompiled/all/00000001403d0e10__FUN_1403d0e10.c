// Function: FUN_1403d0e10
// Addr: 1403d0e10
// Size: 76 bytes


undefined8 FUN_1403d0e10(longlong param_1,uint param_2)

{
  char cVar1;
  
  if (*(undefined **)(*(longlong *)(param_1 + 0x90) + 0x20 + (ulonglong)param_2 * 8) !=
      (&PTR_UNWIND_INFO_14035f43d_UnwindCodes_15__UnwindOpCode_1404df518)[param_2]) {
    return 1;
  }
  if (((*(undefined **)(param_1 + 0x18) != (undefined *)0x0) &&
      (*(undefined **)(param_1 + 0x18) != &DAT_1404dee58)) &&
     (cVar1 = FUN_1403d0e10(), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

