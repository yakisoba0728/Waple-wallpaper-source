// Function: FUN_1400f9630
// Addr: 1400f9630
// Size: 16 bytes


undefined8 *
FUN_1400f9630(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(DAT_1404e7f78 + 8 + (DAT_1404e7f90 & param_4) * 0x10);
  if (puVar7 == DAT_1404e7f68) {
    *param_2 = DAT_1404e7f68;
    param_2[1] = 0;
    return param_2;
  }
  puVar1 = *(undefined8 **)(DAT_1404e7f78 + (DAT_1404e7f90 & param_4) * 0x10);
  lVar2 = param_3[2];
  uVar3 = param_3[3];
  while( true ) {
    plVar6 = puVar7 + 2;
    if (0xf < (ulonglong)puVar7[5]) {
      plVar6 = (longlong *)*plVar6;
    }
    puVar5 = param_3;
    if (0xf < uVar3) {
      puVar5 = (undefined8 *)*param_3;
    }
    if ((lVar2 == puVar7[4]) &&
       ((lVar2 == 0 || (iVar4 = func_0x0001404210c0(puVar5,plVar6,lVar2), iVar4 == 0)))) break;
    if (puVar7 == puVar1) {
      *param_2 = puVar7;
      param_2[1] = 0;
      return param_2;
    }
    puVar7 = (undefined8 *)puVar7[1];
  }
  *param_2 = *puVar7;
  param_2[1] = puVar7;
  return param_2;
}

