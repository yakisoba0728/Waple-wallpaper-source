// Function: FUN_14015fec0
// Addr: 14015fec0
// Size: 87 bytes


void FUN_14015fec0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong local_res8;
  
  puVar1 = *(undefined8 **)(param_1 + 0xf8);
  puVar2 = (undefined8 *)*puVar1;
  while( true ) {
    if (puVar2 == puVar1) {
      return;
    }
    plVar3 = (longlong *)puVar2[10];
    local_res8 = param_1;
    if (plVar3 == (longlong *)0x0) break;
    (**(code **)(*plVar3 + 0x10))(plVar3,&local_res8);
    puVar2 = (undefined8 *)*puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14028c2c0();
}

