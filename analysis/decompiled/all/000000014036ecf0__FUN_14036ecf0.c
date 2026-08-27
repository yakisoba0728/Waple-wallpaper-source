// Function: FUN_14036ecf0
// Addr: 14036ecf0
// Size: 247 bytes


void FUN_14036ecf0(longlong param_1,int param_2,byte *param_3,int param_4,byte *param_5,int param_6,
                  byte *param_7,undefined4 param_8,undefined8 param_9,undefined8 *param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = param_10[1];
  pcVar3 = (code *)*param_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    (*pcVar3)(uVar1,(uint)*param_3 * 0x100 + (uint)param_3[1],uVar2);
    param_3 = param_3 + 2;
  }
  uVar1 = param_10[2];
  iVar4 = param_4 + -1;
  pcVar3 = (code *)*param_10;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  if (param_4 == 0) {
    iVar4 = 0;
  }
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    (*pcVar3)(uVar2,(uint)param_5[1] + (uint)*param_5 * 0x100,uVar1);
    param_5 = param_5 + 2;
  }
  uVar1 = param_10[3];
  pcVar3 = (code *)*param_10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  for (; param_6 != 0; param_6 = param_6 + -1) {
    (*pcVar3)(uVar2,(uint)*param_7 * 0x100 + (uint)param_7[1],uVar1);
    param_7 = param_7 + 2;
  }
  FUN_14038b010(param_1,param_8,param_9);
  return;
}

