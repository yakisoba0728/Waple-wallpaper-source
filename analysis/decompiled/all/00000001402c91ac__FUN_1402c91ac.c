// Function: FUN_1402c91ac
// Addr: 1402c91ac
// Size: 225 bytes


longlong FUN_1402c91ac(undefined8 *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  
  lVar4 = param_1[2];
  if ((lVar4 == 0) || (param_1[4] == 0)) {
    return 0;
  }
  if (*(char *)(param_1 + 5) != '\0') goto LAB_1402c9257;
  lVar4 = _malloc_base(param_1[4] * 2);
  uVar1 = param_1[3];
  lVar2 = param_1[2];
  uVar3 = param_1[4];
  if (uVar1 == 0) goto LAB_1402c9257;
  if (lVar4 == 0) {
LAB_1402c9209:
    puVar5 = (undefined4 *)FUN_1402caf34();
    *puVar5 = 0x16;
  }
  else {
    if ((lVar2 != 0) && (uVar1 <= uVar3)) {
      FUN_1404210f0(lVar4,lVar2,uVar1);
      goto LAB_1402c9257;
    }
    FUN_1404217a0(lVar4,0,uVar3);
    if (lVar2 == 0) goto LAB_1402c9209;
    if (uVar1 <= uVar3) goto LAB_1402c9257;
    puVar5 = (undefined4 *)FUN_1402caf34();
    *puVar5 = 0x22;
  }
  FUN_1402cad8c();
LAB_1402c9257:
  param_1[4] = 0;
  param_1[2] = *param_1;
  param_1[3] = param_1[1];
  return lVar4;
}

