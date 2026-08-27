// Function: FUN_14028f410
// Addr: 14028f410
// Size: 218 bytes


void FUN_14028f410(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  if ((0x1f < (ulonglong)((longlong)param_2 - (longlong)param_1)) &&
     (((byte)DAT_1404dc00c & 0x20) != 0)) {
    puVar9 = (undefined8 *)
             (((longlong)param_2 - (longlong)param_1 & 0xffffffffffffffe0U) + (longlong)param_1);
    do {
      uVar2 = param_3[1];
      uVar3 = param_3[2];
      uVar4 = param_3[3];
      uVar5 = *param_1;
      uVar6 = param_1[1];
      uVar7 = param_1[2];
      uVar8 = param_1[3];
      *param_1 = *param_3;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      param_1[3] = uVar4;
      *param_3 = uVar5;
      param_3[1] = uVar6;
      param_3[2] = uVar7;
      param_3[3] = uVar8;
      param_3 = param_3 + 4;
      param_1 = param_1 + 4;
    } while (param_1 != puVar9);
  }
  if ((0xf < (ulonglong)((longlong)param_2 - (longlong)param_1)) && (((byte)DAT_1404dc00c & 4) != 0)
     ) {
    puVar9 = (undefined8 *)
             (((longlong)param_2 - (longlong)param_1 & 0xfffffffffffffff0U) + (longlong)param_1);
    do {
      uVar2 = param_3[1];
      uVar3 = *param_1;
      uVar4 = param_1[1];
      *param_1 = *param_3;
      param_1[1] = uVar2;
      param_1 = param_1 + 2;
      *param_3 = uVar3;
      param_3[1] = uVar4;
      param_3 = param_3 + 2;
    } while (param_1 != puVar9);
  }
  if (7 < (ulonglong)((longlong)param_2 - (longlong)param_1)) {
    puVar9 = (undefined8 *)
             (((longlong)param_2 - (longlong)param_1 & 0xfffffffffffffff8U) + (longlong)param_1);
    do {
      uVar2 = *param_1;
      *param_1 = *param_3;
      param_1 = param_1 + 1;
      *param_3 = uVar2;
      param_3 = param_3 + 1;
    } while (param_1 != puVar9);
  }
  for (; param_1 != param_2; param_1 = (undefined8 *)((longlong)param_1 + 1)) {
    uVar1 = *(undefined1 *)param_1;
    *(undefined1 *)param_1 = *(undefined1 *)param_3;
    *(undefined1 *)param_3 = uVar1;
    param_3 = (undefined8 *)((longlong)param_3 + 1);
  }
  return;
}

