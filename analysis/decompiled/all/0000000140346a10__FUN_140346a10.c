// Function: FUN_140346a10
// Addr: 140346a10
// Size: 63 bytes


void FUN_140346a10(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x4e8);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    FUN_1402f5cd0(*(undefined8 *)(param_1 + 0xa0),lVar1 + 0x10);
                    /* WARNING: Subroutine does not return */
    FUN_1402f8060(uVar2,lVar1);
  }
  return;
}

