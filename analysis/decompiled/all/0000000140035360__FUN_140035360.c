// Function: FUN_140035360
// Addr: 140035360
// Size: 50 bytes


void FUN_140035360(undefined8 param_1,longlong *param_2)

{
  *(undefined8 *)param_2[1] = 0;
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140017310(*param_2 + 0x10);
  }
  return;
}

