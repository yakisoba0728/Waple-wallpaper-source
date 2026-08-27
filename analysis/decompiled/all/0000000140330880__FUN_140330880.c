// Function: FUN_140330880
// Addr: 140330880
// Size: 350 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_140330880(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined1 auStack_3c8 [32];
  undefined8 local_3a8;
  uint local_398 [2];
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  int local_370;
  uint uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined8 local_360;
  undefined8 local_358 [96];
  ulonglong local_58;
  
  local_58 = DAT_1404dc040 ^ (ulonglong)auStack_3c8;
  local_390 = *param_2;
  uStack_388 = param_2[1];
  uStack_378 = param_2[3];
  local_370 = *(int *)(param_2 + 4);
  uStack_36c = *(uint *)((longlong)param_2 + 0x24);
  uStack_368 = *(undefined4 *)(param_2 + 5);
  uStack_364 = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_380._0_4_ = (undefined4)param_2[2];
  local_380 = CONCAT44(2,(undefined4)local_380);
  local_360 = param_2[6];
  if ((*(int *)((longlong)param_2 + 0x14) == 10) || (*(int *)((longlong)param_2 + 0x14) == 7)) {
    local_380 = CONCAT44(3,(undefined4)local_380);
  }
  FUN_14032ff70(local_370,local_358,0x20,local_398);
  if ((int)local_398[0] < 0) {
    iVar3 = 0xa2;
  }
  else {
    uVar1 = param_1[2];
    iVar3 = 0;
    uVar4 = local_398[0];
    if (*(uint *)(param_2 + 5) < local_398[0]) {
      uVar4 = *(uint *)(param_2 + 5);
    }
    uVar2 = *param_1;
    if ((*(int *)((longlong)param_2 + 0x14) != 7) && (*(uint *)((longlong)param_2 + 0x2c) != 0)) {
      *(char *)((ulonglong)*(uint *)((longlong)param_2 + 0x2c) + *param_3) = (char)uVar4;
    }
    puVar5 = local_358;
    for (; 0 < (int)uVar4; uVar4 = uVar4 - 1) {
      *param_1 = *puVar5;
      param_1[2] = puVar5[1];
      local_3a8 = 0;
      iVar3 = FUN_140330220(param_1,&local_390,param_3,param_4);
      if (iVar3 != 0) break;
      local_370 = local_370 + (uStack_36c & 0xff);
      puVar5 = puVar5 + 3;
    }
    *param_1 = uVar2;
    param_1[2] = uVar1;
  }
  return iVar3;
}

