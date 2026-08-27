// Function: FUN_140368800
// Addr: 140368800
// Size: 492 bytes


void FUN_140368800(undefined2 *param_1,undefined2 *param_2,longlong param_3,undefined8 param_4)

{
  undefined2 *puVar1;
  ulonglong uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined2 *local_res8 [4];
  undefined2 *local_58;
  undefined2 *local_50;
  
  uVar2 = (longlong)param_2 - (longlong)param_1;
  while( true ) {
    if ((longlong)(uVar2 & 0xfffffffffffffffe) < 0x41) {
      FUN_140362c00(param_1,param_2,param_4);
      return;
    }
    uVar2 = (longlong)param_2 - (longlong)param_1;
    if (param_3 < 1) break;
    local_res8[0] = param_1 + ((longlong)uVar2 >> 2);
    puVar4 = param_2 + -1;
    lVar5 = (longlong)puVar4 - (longlong)param_1 >> 1;
    puVar3 = param_1;
    if (0x28 < lVar5) {
      uVar2 = lVar5 + 1 >> 2 & 0xfffffffffffffffe;
      puVar3 = (undefined2 *)(uVar2 + (longlong)param_1);
      FUN_140364810(param_1,puVar3,param_1 + uVar2,param_4);
      FUN_140364810((longlong)local_res8[0] - uVar2,local_res8[0],uVar2 + (longlong)local_res8[0],
                    param_4);
      puVar4 = (undefined2 *)((longlong)puVar4 - uVar2);
      FUN_140364810(param_2 + -1 + -uVar2,puVar4,param_2 + -1,param_4);
    }
    puVar1 = local_res8[0];
    FUN_140364810(puVar3,local_res8[0],puVar4,param_4);
    FUN_1403652d0(&local_58,param_1,puVar1,param_2,param_4);
    puVar3 = local_50;
    puVar4 = local_58;
    param_3 = (param_3 >> 1) + (param_3 >> 2);
    if ((longlong)((longlong)local_58 - (longlong)param_1 & 0xfffffffffffffffeU) <
        (longlong)((longlong)param_2 - (longlong)local_50 & 0xfffffffffffffffeU)) {
      FUN_140368800(param_1,local_58,param_3,param_4);
      puVar4 = param_2;
      param_1 = puVar3;
    }
    else {
      FUN_140368800(local_50,param_2,param_3,param_4);
    }
    uVar2 = (longlong)puVar4 - (longlong)param_1;
    param_2 = puVar4;
  }
  FUN_140363510(param_1,param_2,param_4);
  while (3 < (longlong)(uVar2 & 0xfffffffffffffffe)) {
    puVar4 = param_2 + -1;
    if (3 < (longlong)((longlong)param_2 - (longlong)param_1 & 0xfffffffffffffffeU)) {
      uVar2 = (ulonglong)local_res8[0] >> 0x10;
      local_res8[0] = (undefined2 *)CONCAT62((int6)uVar2,*puVar4);
      *puVar4 = *param_1;
      FUN_1403678c0(param_1,0,(longlong)puVar4 - (longlong)param_1 >> 1,local_res8,param_4);
    }
    param_2 = puVar4;
    uVar2 = (longlong)puVar4 - (longlong)param_1;
  }
  return;
}

