// Function: FUN_1402abf20
// Addr: 1402abf20
// Size: 177 bytes


void FUN_1402abf20(undefined8 param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,uint *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_3a8 [32];
  undefined1 *local_388;
  undefined1 local_378 [8];
  longlong local_370;
  undefined1 local_368 [800];
  ulonglong local_48;
  
  local_48 = DAT_1404dc110 ^ (ulonglong)auStack_3a8;
  local_370 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
  (*(code *)PTR_FUN_140426bb8)();
  local_388 = local_378;
  cVar3 = FUN_140298f30(local_368,0x300,param_3,param_4);
  if ((local_370 != 0) && (lVar4 = (*(code *)PTR_FUN_140426bb8)(), lVar4 != 0)) {
    (*(code *)PTR_FUN_140426bb8)(lVar4,1);
  }
  if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  *param_6 = 2;
  *param_7 = 0;
  if ((char)param_3[1] == '\0') {
    func_0x0001402a7f30(param_3);
  }
  if ((char)param_4[1] == '\0') {
    func_0x0001402a7f30(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 != 0) goto LAB_1402ac06b;
  }
  else if (*param_4 == 0) goto LAB_1402ac06b;
  *param_6 = *param_6 | 1;
LAB_1402ac06b:
  uVar1 = *(undefined4 *)((longlong)param_3 + 4);
  lVar4 = param_3[1];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
  *param_2 = (int)*param_3;
  param_2[1] = uVar1;
  param_2[2] = (int)lVar4;
  param_2[3] = uVar2;
  func_0x0001402ed2f0(local_48 ^ (ulonglong)auStack_3a8);
  return;
}

