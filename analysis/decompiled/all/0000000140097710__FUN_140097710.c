// Function: FUN_140097710
// Addr: 140097710
// Size: 155 bytes


void FUN_140097710(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = FUN_1402c9f30(param_3,&DAT_1404856d8,2);
  if (iVar1 == 0) {
    bVar2 = 1;
  }
  else {
    iVar1 = FUN_1402c9f30(param_3,&DAT_1404856f0,4);
    bVar2 = -(iVar1 != 0) & 2;
  }
  FUN_140097a70(param_1,*param_1,bVar2);
  func_0x000140421ed0(param_3);
  return;
}

