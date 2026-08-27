// Function: FUN_14016f6d0
// Addr: 14016f6d0
// Size: 109 bytes


void FUN_14016f6d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  
  uVar1 = *param_1;
  uVar2 = *param_2;
  cVar3 = FUN_140038c30(uVar2,uVar1);
  if (cVar3 < '\0') {
    *param_2 = uVar1;
    *param_1 = uVar2;
  }
  uVar1 = *param_2;
  uVar2 = *param_3;
  cVar3 = FUN_140038c30(uVar2,uVar1);
  if (cVar3 < '\0') {
    *param_3 = uVar1;
    *param_2 = uVar2;
    uVar1 = *param_1;
    cVar3 = FUN_140038c30(uVar2,uVar1);
    if (cVar3 < '\0') {
      *param_2 = uVar1;
      *param_1 = uVar2;
    }
  }
  return;
}

