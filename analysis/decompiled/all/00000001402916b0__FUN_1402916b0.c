// Function: FUN_1402916b0
// Addr: 1402916b0
// Size: 59 bytes


void FUN_1402916b0(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_malloc_base(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = DAT_1404e3cd8;
    puVar1[1] = param_1;
    DAT_1404e3cd8 = puVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14028b8c0();
}

