// Function: FUN_1400dfc30
// Addr: 1400dfc30
// Size: 101 bytes


void FUN_1400dfc30(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  if (*(char *)(param_3 + 0x19) == '\0') {
    FUN_1400dfc30(param_1,param_2,*(undefined8 *)(param_3 + 0x10));
                    /* WARNING: Subroutine does not return */
    FUN_140017310(param_3 + 0x88);
  }
  return;
}

