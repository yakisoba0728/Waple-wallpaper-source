// Function: FUN_14020e880
// Addr: 14020e880
// Size: 100 bytes


void FUN_14020e880(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *in_stack_00000028;
  
  if ((((*(longlong *)(param_1 + 0x4c0) == 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x498) + 0xd0), lVar1 != 0)) &&
      ((*(uint *)(lVar1 + 0x1c) >> 5 & 1) != 0)) && (*(longlong *)(lVar1 + 0xd8) != 0)) {
    puVar2 = (undefined8 *)func_0x00014028aff0(0x110);
    lVar1 = *(longlong *)(param_1 + 200);
    puVar2[1] = 0;
    puVar2[3] = 0;
    puVar2[2] = lVar1 + 0x1c88;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    *(undefined1 *)(puVar2 + 9) = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    *puVar2 = &UNK_1404911f8;
                    /* WARNING: Subroutine does not return */
    FUN_140153830(puVar2 + 0xc);
  }
  *in_stack_00000028 = *(undefined8 *)(param_1 + 0x4c0);
  return;
}

