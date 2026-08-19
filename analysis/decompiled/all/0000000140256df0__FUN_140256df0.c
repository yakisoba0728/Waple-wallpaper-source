// Function: FUN_140256df0
// Addr: 140256df0
// Size: 25 bytes


void FUN_140256df0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_DAT_140491a20;
  puVar1 = (undefined8 *)param_1[0xb6];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1401b3310();
                    /* WARNING: Subroutine does not return */
  FUN_140017310(param_1 + 0x96);
}

