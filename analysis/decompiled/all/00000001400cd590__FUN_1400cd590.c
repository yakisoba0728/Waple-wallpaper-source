// Function: FUN_1400cd590
// Addr: 1400cd590
// Size: 5 bytes


void FUN_1400cd590(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)func_0x00014028aff0(0x10);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  lVar2 = FUN_1402ca24c(0,0,0x1400ce5c0,puVar1,0,param_2 + 1);
  *param_2 = lVar2;
  if (lVar2 != 0) {
    return;
  }
  *(undefined4 *)(param_2 + 1) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_140290e00(6);
}

