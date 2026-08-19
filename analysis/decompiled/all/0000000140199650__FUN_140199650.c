// Function: FUN_140199650
// Addr: 140199650
// Size: 163 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140199650(longlong param_1)

{
  float fVar1;
  
  FUN_14041e420(*(undefined4 *)(param_1 + 0x330),DAT_140492900);
  fVar1 = *(float *)(param_1 + 0x328) * *(float *)(param_1 + 0x328) *
          *(float *)(*(longlong *)(param_1 + 0xd8) + 0x130);
  FUN_14041a3b0(fVar1);
                    /* WARNING: Subroutine does not return */
  FUN_14041aa90(fVar1 * _DAT_1404927f8);
}

