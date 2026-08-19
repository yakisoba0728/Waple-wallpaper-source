// Function: FUN_140056ef0
// Addr: 140056ef0
// Size: 72 bytes


void FUN_140056ef0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (*(char *)(param_3 + 0x19) == '\0') {
    FUN_140056ef0(param_1,param_2,*(undefined8 *)(param_3 + 0x10));
                    /* WARNING: Subroutine does not return */
    FUN_140017310(param_3 + 0x50);
  }
  return;
}

