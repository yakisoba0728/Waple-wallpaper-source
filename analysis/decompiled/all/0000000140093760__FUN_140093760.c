// Function: FUN_140093760
// Addr: 140093760
// Size: 48 bytes


longlong *
FUN_140093760(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
             longlong param_5,uint *param_6,undefined4 *param_7)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined1 auStack_348 [8];
  longlong *plStack_340;
  undefined1 auStack_338 [800];
  
  plStack_340 = *(longlong **)(*(longlong *)(param_5 + 0x40) + 8);
  (**(code **)(*plStack_340 + 8))();
  cVar2 = func_0x0001400954b0(auStack_338,0x300,param_3,param_4,auStack_348);
  if ((plStack_340 != (longlong *)0x0) &&
     (puVar3 = (undefined8 *)(**(code **)(*plStack_340 + 0x10))(), puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)(puVar3,1);
  }
  if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  *param_6 = 2;
  *param_7 = 0;
  if ((char)param_3[1] == '\0') {
    FUN_1400975d0(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_1400975d0(param_4);
  }
  if (*param_3 == 0) {
    if (*param_4 != 0) goto code_r0x0001400938be;
  }
  else if (*param_4 == 0) goto code_r0x0001400938be;
  *param_6 = *param_6 | 1;
code_r0x0001400938be:
  lVar1 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = lVar1;
  return param_2;
}

