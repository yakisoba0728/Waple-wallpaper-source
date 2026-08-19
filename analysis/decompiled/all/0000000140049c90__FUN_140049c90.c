// Function: FUN_140049c90
// Addr: 140049c90
// Size: 1 bytes


longlong * FUN_140049c90(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lStackX_8;
  
  lStackX_8 = param_3[1] + *param_3;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    cVar3 = func_0x00014004c2f0();
    if (cVar3 != '\0') {
      iVar4 = FUN_1402cc1d4(*(undefined8 *)(param_1 + 0x80),&lStackX_8);
      if (iVar4 == 0) {
        *(longlong *)(param_1 + 0x74) = param_3[2];
        if (**(longlong **)(param_1 + 0x18) == param_1 + 0x70) {
          lVar1 = *(longlong *)(param_1 + 0x88);
          uVar2 = *(undefined8 *)(param_1 + 0x90);
          **(longlong **)(param_1 + 0x18) = lVar1;
          **(longlong **)(param_1 + 0x38) = lVar1;
          **(int **)(param_1 + 0x50) = (int)uVar2 - (int)lVar1;
        }
        lVar1 = *(longlong *)(param_1 + 0x74);
        *param_2 = lStackX_8;
        param_2[1] = 0;
        param_2[2] = lVar1;
        return param_2;
      }
    }
  }
  *param_2 = -1;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}

