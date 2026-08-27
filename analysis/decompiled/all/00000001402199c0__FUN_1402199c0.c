// Function: FUN_1402199c0
// Addr: 1402199c0
// Size: 461 bytes


void FUN_1402199c0(undefined4 *param_1,undefined8 param_2,undefined4 *param_3,longlong param_4,
                  longlong param_5,code *param_6)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  
joined_r0x0001402199e6:
  if (param_5 <= param_4) {
    FUN_140219d50(param_1,param_2,param_3);
    return;
  }
  puVar4 = param_1 + param_4 * 0x10;
  lVar2 = param_5 - param_4;
  lVar3 = param_4;
  if (lVar2 < param_4) {
    lVar3 = lVar2;
  }
  lVar7 = param_4 * 2;
  if (lVar2 < param_4) {
    lVar7 = param_5;
  }
  puVar6 = param_1;
  do {
    cVar1 = (*param_6)(puVar4,puVar6);
    if (cVar1 == '\0') {
      *param_3 = *puVar6;
      param_3[1] = puVar6[1];
      param_3[2] = puVar6[2];
      param_3[3] = puVar6[3];
      FUN_140219470(param_3 + 4,puVar6 + 4);
      FUN_140219470(param_3 + 10,puVar6 + 10);
      puVar5 = puVar6 + 0x10;
      puVar6 = puVar4;
      lVar8 = lVar7;
      if (puVar5 == param_1 + param_4 * 0x10) break;
    }
    else {
      *param_3 = *puVar4;
      param_3[1] = puVar4[1];
      param_3[2] = puVar4[2];
      param_3[3] = puVar4[3];
      FUN_140219470(param_3 + 4,puVar4 + 4);
      FUN_140219470(param_3 + 10,puVar4 + 10);
      puVar4 = puVar4 + 0x10;
      puVar5 = puVar6;
      lVar8 = param_4;
      if (puVar4 == param_1 + lVar7 * 0x10) break;
    }
    param_3 = param_3 + 0x10;
    puVar6 = puVar5;
  } while( true );
  param_3 = (undefined4 *)FUN_140219d50(puVar6,param_1 + lVar8 * 0x10,param_3 + 0x10);
  param_1 = param_1 + lVar7 * 0x10;
  param_5 = lVar2 - lVar3;
  goto joined_r0x0001402199e6;
}

