// Function: FUN_1400fec60
// Addr: 1400fec60
// Size: 199 bytes


ulonglong FUN_1400fec60(longlong param_1,int *param_2,int *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  char cVar2;
  ulonglong in_RAX;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 local_res8;
  undefined8 local_28 [2];
  
  plVar1 = *(longlong **)(param_1 + 0x160);
  if (plVar1 == (longlong *)0x0) {
    return in_RAX & 0xffffffffffffff00;
  }
  local_28[0] = 0;
  local_res8 = 0;
  uVar4 = 0;
  cVar2 = (**(code **)(*plVar1 + 0x88))(plVar1,local_28,&local_res8,param_2,param_3);
  if (cVar2 != '\0') {
    if ((*param_2 != 0) && (*param_3 != 0)) {
      uVar3 = thunk_FUN_14028af20(*param_3 * *param_2 * 4);
      *param_4 = uVar3;
      FUN_1404210f0(uVar3,local_res8,*param_2 * *param_3 * 4);
      uVar4 = 1;
    }
    (**(code **)(**(longlong **)(param_1 + 0x160) + 0x90))
              (*(longlong **)(param_1 + 0x160),local_28[0]);
  }
  return uVar4;
}

