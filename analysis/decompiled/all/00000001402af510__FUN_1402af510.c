// Function: FUN_1402af510
// Addr: 1402af510
// Size: 437 bytes


undefined8 *
FUN_1402af510(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             longlong param_5,uint *param_6,longlong param_7)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_58 [8];
  longlong local_50;
  
  lVar5 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
  local_50 = lVar5;
  (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar5);
  uVar4 = FUN_14029d190(local_58);
  if ((lVar5 != 0) && (lVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar5), lVar5 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar5,1);
  }
  lVar5 = param_7;
  uVar3 = FUN_140295820(param_3,param_4,0,0x17,param_7 + 8,&param_5,uVar4);
  puVar1 = param_6;
  *param_6 = *param_6 | uVar3;
  if (*param_6 == 0) {
    if (*(char *)(param_3 + 1) == '\0') {
      FUN_1402a7e60(param_3);
    }
    cVar2 = (*(code *)PTR__guard_dispatch_icall_140426ae8)
                      (uVar4,*(undefined2 *)((longlong)param_3 + 10),0);
    if (cVar2 != ':') goto LAB_1402af640;
    uVar6 = FUN_14029ddc0(param_3);
    uVar3 = FUN_140295820(uVar6,param_4,0,0x3b,lVar5 + 4,&param_5,uVar4);
    *puVar1 = *puVar1 | uVar3;
  }
  else {
LAB_1402af640:
    *puVar1 = *puVar1 | 2;
  }
  if (*puVar1 == 0) {
    if (*(char *)(param_3 + 1) == '\0') {
      FUN_1402a7e60(param_3);
    }
    cVar2 = (*(code *)PTR__guard_dispatch_icall_140426ae8)
                      (uVar4,*(undefined2 *)((longlong)param_3 + 10),0);
    if (cVar2 == ':') {
      uVar6 = FUN_14029ddc0(param_3);
      uVar3 = FUN_140295820(uVar6,param_4,0,0x3c,lVar5,&param_5,uVar4);
      *puVar1 = *puVar1 | uVar3;
      goto LAB_1402af6aa;
    }
  }
  *puVar1 = *puVar1 | 2;
LAB_1402af6aa:
  uVar4 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = uVar4;
  return param_2;
}

