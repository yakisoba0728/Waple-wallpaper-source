// Function: FUN_1401c03f0
// Addr: 1401c03f0
// Size: 327 bytes


void FUN_1401c03f0(undefined8 param_1,float *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 ****ppppuVar4;
  ulonglong uVar5;
  float fVar6;
  undefined8 ***local_48 [2];
  longlong local_38;
  ulonglong local_30;
  
  uVar3 = FUN_140086de0(param_1,"collisionbehavior","");
  FUN_140085cc0(uVar3,local_48);
  uVar3 = FUN_140086de0(param_1,"bouncefactor","");
  fVar6 = (float)FUN_140086220(uVar3);
  fVar6 = DAT_1404929b8 - fVar6;
  ppppuVar4 = local_48;
  if (0xf < local_30) {
    ppppuVar4 = (undefined8 ****)local_48[0];
  }
  *param_2 = fVar6;
  param_2[1] = fVar6;
  param_2[2] = fVar6;
  param_2[3] = fVar6;
  if (local_38 == 5) {
    iVar2 = memcmp(ppppuVar4,"slide",5);
    if (iVar2 == 0) {
      param_2[4] = 1.4013e-45;
      goto LAB_1401c04f3;
    }
  }
  ppppuVar4 = local_48;
  if (0xf < local_30) {
    ppppuVar4 = (undefined8 ****)local_48[0];
  }
  if (local_38 == 4) {
    iVar2 = memcmp(ppppuVar4,&DAT_140473b34,4);
    if (iVar2 == 0) {
      param_2[4] = 2.8026e-45;
      goto LAB_1401c04f3;
    }
  }
  ppppuVar4 = local_48;
  if (0xf < local_30) {
    ppppuVar4 = (undefined8 ****)local_48[0];
  }
  if (local_38 == 6) {
    iVar2 = memcmp(ppppuVar4,"delete",6);
    if (iVar2 == 0) {
      param_2[4] = 4.2039e-45;
      goto LAB_1401c04f3;
    }
  }
  param_2[4] = 0.0;
LAB_1401c04f3:
  if (0xf < local_30) {
    uVar5 = local_30 + 1;
    ppppuVar4 = (undefined8 ****)local_48[0];
    if (0xfff < uVar5) {
      ppppuVar4 = (undefined8 ****)local_48[0][-1];
      if (0x1f < (ulonglong)((longlong)local_48[0] + (-8 - (longlong)ppppuVar4))) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = local_30 + 0x28;
    }
    thunk_FUN_14028af80(ppppuVar4,uVar5);
  }
  return;
}

