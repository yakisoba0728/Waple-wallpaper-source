// Function: FUN_140324d90
// Addr: 140324d90
// Size: 93 bytes


undefined8 FUN_140324d90(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  
  FUN_140324600();
  if (*(int *)(param_1 + 0x188) != *(int *)(param_1 + 0x18c)) {
    if (*param_4 != 0) {
      iVar1 = FUN_1402f20b0();
      *param_4 = iVar1;
    }
    if (param_4[1] != 0) {
      iVar1 = FUN_1402f20b0(param_4[1],*(undefined4 *)(param_1 + 0x188),
                            *(undefined4 *)(param_1 + 0x18c));
      param_4[1] = iVar1;
    }
  }
  return 0;
}

