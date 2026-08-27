// Function: FUN_1402945b0
// Addr: 1402945b0
// Size: 58 bytes


void FUN_1402945b0(PVOID param_1)

{
  PVOID pvVar1;
  
  if (DAT_1404dc370 != 0) {
    pvVar1 = EncodePointer(param_1);
    DAT_1404dc370 = DAT_1404dc370 + -1;
    *(PVOID *)(&DAT_1404e4130 + DAT_1404dc370 * 8) = pvVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402c97e4();
}

