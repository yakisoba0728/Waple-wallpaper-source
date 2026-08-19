// Function: FUN_14038dc50
// Addr: 14038dc50
// Size: 105 bytes


char FUN_14038dc50(undefined2 *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *param_1 = 0;
  uVar3 = FUN_14038afe0(param_2);
  local_48 = *param_3;
  uStack_40 = param_3[1];
  local_38 = param_3[2];
  uStack_30 = param_3[3];
  local_28 = *(undefined4 *)(param_3 + 4);
  uStack_24 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_20 = *(undefined4 *)(param_3 + 5);
  uStack_1c = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_18 = *(undefined4 *)(param_3 + 6);
  uStack_14 = *(undefined4 *)((longlong)param_3 + 0x34);
  uStack_10 = *(undefined4 *)(param_3 + 7);
  uStack_c = *(undefined4 *)((longlong)param_3 + 0x3c);
  cVar1 = FUN_14038d1f0(uVar3,param_2,&local_48);
  if (cVar1 == '\0') {
    FUN_1403f0d50(param_2);
  }
  else {
    uVar2 = FUN_1403f0e00(param_2,1);
    func_0x00014036b9d0(param_2,param_1,uVar2,0,0);
  }
  return cVar1;
}

