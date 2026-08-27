// Function: FUN_1401c1c70
// Addr: 1401c1c70
// Size: 423 bytes


void FUN_1401c1c70(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = FUN_140086de0(param_2,&DAT_1404884a4,&DAT_1404884a8);
  uVar2 = FUN_140086220(uVar1);
  *param_1 = uVar2;
  uVar1 = FUN_140086de0(param_2,"duration","");
  uVar2 = FUN_140086220(uVar1);
  param_1[1] = uVar2;
  uVar1 = FUN_140086de0(param_2,"delay","");
  uVar2 = FUN_140086220(uVar1);
  param_1[3] = param_1[1];
  param_1[2] = uVar2;
  param_1[4] = uVar2;
  uVar1 = FUN_140086de0(param_2,"instantaneous","");
  uVar2 = FUN_140085f70(uVar1);
  param_1[0xd] = uVar2;
  param_1[0xe] = uVar2;
  uVar1 = FUN_140086de0(param_2,"flags","");
  uVar2 = FUN_140085f70(uVar1);
  param_1[0xf] = uVar2;
  *(undefined8 *)(param_1 + 0xb) = 0;
  param_1[5] = 0;
  uVar1 = FUN_140086de0(param_2,"minperiodicduration","");
  uVar2 = FUN_140086220(uVar1);
  param_1[6] = uVar2;
  uVar1 = FUN_140086de0(param_2,"minperiodicdelay","");
  uVar2 = FUN_140086220(uVar1);
  param_1[8] = uVar2;
  uVar1 = FUN_140086de0(param_2,"maxperiodicduration","");
  uVar2 = FUN_140086220(uVar1);
  param_1[7] = uVar2;
  uVar1 = FUN_140086de0(param_2,"maxperiodicdelay","");
  uVar2 = FUN_140086220(uVar1);
  param_1[9] = uVar2;
  uVar1 = FUN_140086de0(param_2,"maxtoemitperperiod","");
  uVar2 = FUN_140085f70(uVar1);
  fVar3 = (float)param_1[7];
  if ((float)param_1[6] <= (float)param_1[7]) {
    fVar3 = (float)param_1[6];
  }
  param_1[10] = uVar2;
  fVar4 = (float)param_1[9];
  if ((float)param_1[8] <= (float)param_1[9]) {
    fVar4 = (float)param_1[8];
  }
  param_1[6] = fVar3;
  param_1[8] = fVar4;
  return;
}

