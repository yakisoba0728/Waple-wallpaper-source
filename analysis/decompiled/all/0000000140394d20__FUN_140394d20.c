// Function: FUN_140394d20
// Addr: 140394d20
// Size: 21 bytes


undefined8 *
FUN_140394d20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 *param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  param_1[3] = param_5;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  uVar3 = *param_6;
  uVar4 = param_6[1];
  uVar5 = param_6[2];
  uVar6 = param_6[3];
  *(undefined4 *)(param_1 + 0xe) = 0x40;
  uVar1 = *(undefined8 *)(param_6 + 4);
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  *(undefined4 *)(param_1 + 5) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar6;
  *(undefined4 *)(param_1 + 7) = param_7;
  param_1[6] = uVar1;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = param_8;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x800;
  piVar2 = (int *)param_1[1];
  if ((char)piVar2[0xc] == '\0') {
    if (piVar2 == (int *)0x0) {
      return param_1;
    }
    if (*piVar2 != 0) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      return param_1;
    }
  }
  else {
    lVar7 = func_0x000140415e50();
    param_1[1] = lVar7;
    if ((*(char *)(lVar7 + 4) != '\0') &&
       (((*(float *)(lVar7 + 0x34) != 0.0 || (*(float *)(lVar7 + 0x38) != 0.0)) ||
        (*(char *)(lVar7 + 0x3c) != '\x01')))) {
      *(undefined8 *)(lVar7 + 0x34) = 0;
      *(undefined1 *)(lVar7 + 0x3c) = 1;
      FUN_1403b3040(lVar7);
    }
    lVar7 = param_1[1];
    if ((*(char *)(lVar7 + 4) != '\0') && (*(float *)(lVar7 + 0x48) != 0.0)) {
      *(undefined4 *)(lVar7 + 0x48) = 0;
      FUN_1403b3040();
    }
  }
  return param_1;
}

