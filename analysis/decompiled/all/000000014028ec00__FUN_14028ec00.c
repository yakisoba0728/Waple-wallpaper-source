// Function: FUN_14028ec00
// Addr: 14028ec00
// Size: 284 bytes


void FUN_14028ec00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  
  if ((0x1f < (ulonglong)((longlong)param_2 - (longlong)param_1)) &&
     (((byte)DAT_1404dc00c & 0x20) != 0)) {
    puVar13 = (undefined8 *)
              (((longlong)param_2 - (longlong)param_1 & 0xffffffffffffffe0U) + (longlong)param_1);
    do {
      uVar2 = param_3[1];
      uVar3 = param_3[2];
      uVar4 = param_3[3];
      uVar9 = *param_1;
      uVar10 = param_1[1];
      uVar11 = param_1[2];
      uVar12 = param_1[3];
      uVar5 = *param_4;
      uVar6 = param_4[1];
      uVar7 = param_4[2];
      uVar8 = param_4[3];
      *param_1 = *param_3;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      param_1[3] = uVar4;
      *param_3 = uVar5;
      param_3[1] = uVar6;
      param_3[2] = uVar7;
      param_3[3] = uVar8;
      *param_4 = uVar9;
      param_4[1] = uVar10;
      param_4[2] = uVar11;
      param_4[3] = uVar12;
      param_4 = param_4 + 4;
      param_1 = param_1 + 4;
      param_3 = param_3 + 4;
    } while (param_1 != puVar13);
  }
  if ((0xf < (ulonglong)((longlong)param_2 - (longlong)param_1)) && (((byte)DAT_1404dc00c & 4) != 0)
     ) {
    puVar13 = (undefined8 *)
              (((longlong)param_2 - (longlong)param_1 & 0xfffffffffffffff0U) + (longlong)param_1);
    do {
      uVar2 = param_3[1];
      uVar3 = *param_4;
      uVar4 = param_4[1];
      uVar5 = *param_1;
      uVar6 = param_1[1];
      *param_1 = *param_3;
      param_1[1] = uVar2;
      param_1 = param_1 + 2;
      *param_3 = uVar3;
      param_3[1] = uVar4;
      param_3 = param_3 + 2;
      *param_4 = uVar5;
      param_4[1] = uVar6;
      param_4 = param_4 + 2;
    } while (param_1 != puVar13);
  }
  if (7 < (ulonglong)((longlong)param_2 - (longlong)param_1)) {
    puVar13 = (undefined8 *)
              (((longlong)param_2 - (longlong)param_1 & 0xfffffffffffffff8U) + (longlong)param_1);
    do {
      uVar2 = *param_1;
      uVar3 = *param_4;
      *param_1 = *param_3;
      param_1 = param_1 + 1;
      *param_3 = uVar3;
      param_3 = param_3 + 1;
      *param_4 = uVar2;
      param_4 = param_4 + 1;
    } while (param_1 != puVar13);
  }
  for (; param_1 != param_2; param_1 = (undefined8 *)((longlong)param_1 + 1)) {
    uVar1 = *(undefined1 *)param_1;
    *(undefined1 *)param_1 = *(undefined1 *)param_3;
    *(undefined1 *)param_3 = *(undefined1 *)param_4;
    *(undefined1 *)param_4 = uVar1;
    param_4 = (undefined8 *)((longlong)param_4 + 1);
    param_3 = (undefined8 *)((longlong)param_3 + 1);
  }
  return;
}

