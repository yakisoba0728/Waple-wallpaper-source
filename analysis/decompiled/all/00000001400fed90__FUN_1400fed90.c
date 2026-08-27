// Function: FUN_1400fed90
// Addr: 1400fed90
// Size: 101 bytes


void FUN_1400fed90(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  BOOL BVar3;
  undefined1 local_38 [48];
  
  uVar1 = FUN_140085090(local_38);
  iVar2 = FUN_1400ff750(param_1,uVar1);
  BVar3 = IsWindow(*(HWND *)(param_1 + 0x168));
  if ((BVar3 != 0) && (iVar2 != 0)) {
    FUN_140100720(param_1,iVar2,0);
  }
  FUN_140085440(param_2);
  return;
}

