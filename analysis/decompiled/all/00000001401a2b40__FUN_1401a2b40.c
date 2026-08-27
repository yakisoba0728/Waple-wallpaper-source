// Function: FUN_1401a2b40
// Addr: 1401a2b40
// Size: 286 bytes


void FUN_1401a2b40(undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,code *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  
joined_r0x0001401a2b63:
  if (param_5 <= param_4) {
    FUN_1404210f0(param_3,param_1,param_2 - (longlong)param_1);
    return;
  }
  puVar1 = param_1 + param_4;
  lVar8 = param_5 - param_4;
  lVar5 = param_4;
  if (lVar8 < param_4) {
    lVar5 = lVar8;
  }
  lVar7 = param_4 * 2;
  if (lVar8 < param_4) {
    lVar7 = param_5;
  }
  puVar2 = param_1 + lVar7;
  puVar6 = puVar1;
  do {
    cVar4 = (*param_6)(*puVar6,*param_1);
    if (cVar4 == '\0') {
      uVar3 = *param_1;
      param_1 = param_1 + 1;
      *param_3 = uVar3;
      if (param_1 == puVar1) {
        lVar7 = (longlong)puVar2 - (longlong)puVar6;
        goto LAB_1401a2c03;
      }
    }
    else {
      uVar3 = *puVar6;
      puVar6 = puVar6 + 1;
      *param_3 = uVar3;
      if (puVar6 == puVar2) break;
    }
    param_3 = param_3 + 1;
  } while( true );
  lVar7 = (longlong)puVar1 - (longlong)param_1;
  puVar6 = param_1;
LAB_1401a2c03:
  FUN_1404210f0(param_3 + 1,puVar6,lVar7);
  param_3 = (undefined8 *)((longlong)param_3 + lVar7 + 8);
  param_1 = puVar2;
  param_5 = lVar8 - lVar5;
  goto joined_r0x0001401a2b63;
}

