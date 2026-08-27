// Function: FUN_140157780
// Addr: 140157780
// Size: 87 bytes


void FUN_140157780(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 local_res8;
  
  puVar1 = *(undefined8 **)(param_1 + 0x2c0);
  puVar2 = (undefined8 *)*puVar1;
  while( true ) {
    if (puVar2 == puVar1) {
      return;
    }
    plVar3 = (longlong *)puVar2[10];
    local_res8 = param_2;
    if (plVar3 == (longlong *)0x0) break;
    (**(code **)(*plVar3 + 0x10))(plVar3,&local_res8);
    puVar2 = (undefined8 *)*puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14028c2c0();
}

