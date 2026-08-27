// Function: FUN_1401e00b0
// Addr: 1401e00b0
// Size: 204 bytes


void FUN_1401e00b0(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1510);
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x18))(plVar4,*param_3,*param_4);
  uVar1 = param_3[1];
  if ((((uVar1 & 2) == 0) || (*(char *)param_4[1] == '\0')) &&
     (((*(byte *)(param_3 + 2) & 2) == 0 || (*(char *)param_4[2] == '\0')))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  if (plVar4 == (longlong *)0x0) {
    FUN_1401de750(param_1,0,uVar5,0xffffffff);
    return;
  }
  if ((uVar1 & 8) == 0) {
    uVar3 = 0xffffffff;
    if ((uVar1 >> 9 & 1) != 0) {
      uVar3 = (**(code **)(*plVar4 + 0x70))(plVar4,param_4[1]);
    }
  }
  else {
    uVar3 = *(undefined4 *)param_4[1];
  }
  cVar2 = FUN_1401de750(param_1,plVar4,uVar5,uVar3);
  if (cVar2 == '\0') {
    (**(code **)*param_6)(param_6,"Invalid parent configuration.");
  }
  return;
}

