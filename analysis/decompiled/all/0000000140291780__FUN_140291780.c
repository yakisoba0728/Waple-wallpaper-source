// Function: FUN_140291780
// Addr: 140291780
// Size: 59 bytes


void FUN_140291780(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)thunk_FUN_1402da070(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = DAT_1404e3da8;
    puVar1[1] = param_1;
    DAT_1404e3da8 = puVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14028b990();
}

