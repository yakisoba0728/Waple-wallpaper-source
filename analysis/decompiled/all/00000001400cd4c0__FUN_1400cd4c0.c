// Function: FUN_1400cd4c0
// Addr: 1400cd4c0
// Size: 111 bytes


void FUN_1400cd4c0(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14028af20(0x10);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  lVar2 = FUN_1402ca17c(0,0,FUN_1400ce4f0,puVar1,0,param_2 + 1);
  *param_2 = lVar2;
  if (lVar2 != 0) {
    return;
  }
  *(undefined4 *)(param_2 + 1) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_140290d30(6);
}

