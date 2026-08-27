// Function: FUN_1404233c5
// Addr: 1404233c5
// Size: 141 bytes


void FUN_1404233c5(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_1402bb4f0(*(undefined8 *)(param_2 + 0x48));
  if ((((*(int *)(param_2 + 0x20) == 0) &&
       (piVar1 = *(int **)(param_2 + 0x28), *piVar1 == -0x1f928c9d)) && (piVar1[6] == 4)) &&
     (((piVar1[8] == 0x19930520 || (piVar1[8] == 0x19930521)) || (piVar1[8] == 0x19930522)))) {
    iVar3 = FUN_1402ba760(*(undefined8 *)(piVar1 + 10));
    if (iVar3 != 0) {
      __DestructExceptionObject(piVar1,1);
    }
  }
  lVar2 = FUN_1402bbec0();
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(param_2 + 0x78);
  lVar2 = FUN_1402bbec0();
  *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(param_2 + 0x80);
  lVar2 = FUN_1402bbec0();
  *(undefined4 *)(lVar2 + 0x78) = *(undefined4 *)(param_2 + 0x30);
  return;
}

