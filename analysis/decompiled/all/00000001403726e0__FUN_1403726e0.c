// Function: FUN_1403726e0
// Addr: 1403726e0
// Size: 118 bytes


void FUN_1403726e0(longlong param_1,int param_2,byte *param_3,undefined4 param_4,undefined8 param_5,
                  undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  
  iVar4 = param_2 + -1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = param_6[1];
  pcVar3 = (code *)*param_6;
  if (param_2 == 0) {
    iVar4 = 0;
  }
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    (*pcVar3)(uVar1,(uint)*param_3 * 0x100 + (uint)param_3[1],uVar2);
    param_3 = param_3 + 2;
  }
  FUN_14038b010(param_1,param_4,param_5);
  return;
}

