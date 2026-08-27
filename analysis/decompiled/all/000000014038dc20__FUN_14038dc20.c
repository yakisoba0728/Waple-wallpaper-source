// Function: FUN_14038dc20
// Addr: 14038dc20
// Size: 155 bytes


char FUN_14038dc20(undefined2 *param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *param_1 = 0;
  uVar3 = FUN_14038af10(param_2);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = param_3[4];
  uStack_14 = param_3[5];
  uStack_10 = param_3[6];
  uStack_c = param_3[7];
  cVar1 = FUN_14038d580(uVar3,param_2,&local_28);
  if (cVar1 != '\0') {
    uVar2 = FUN_1403f0d30(param_2,1);
    FUN_14036b900(param_2,param_1,uVar2,0,0);
    return cVar1;
  }
  FUN_1403f0c80(param_2);
  return '\0';
}

