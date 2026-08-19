// Function: FUN_1403c5cd0
// Addr: 1403c5cd0
// Size: 172 bytes


longlong FUN_1403c5cd0(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_2 < *(uint *)(param_1 + 1)) {
    lVar1 = *(longlong *)((ulonglong)param_2 * 8 + param_1[2]);
    if (lVar1 == 0) {
      puVar2 = &DAT_14045dde0;
      if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)*param_1;
      }
      if (*(uint *)(puVar2 + 3) < 4) {
        puVar2 = &DAT_14045dde0;
      }
      else {
        puVar2 = (undefined8 *)puVar2[2];
      }
      lVar1 = FUN_1403cbfd0(puVar2);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_1402dd8b0(1,((uint)*(byte *)(lVar1 + 4) * 0x100 + (uint)*(byte *)(lVar1 + 5)) * 0x40
                            + 0x20);
    }
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}

