// Function: FUN_140332790
// Addr: 140332790
// Size: 364 bytes


void FUN_140332790(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
                  char param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  undefined4 uVar5;
  
  lVar2 = *(longlong *)(param_2 + 0x3e0);
  FUN_1404217a0(param_1,0,0x448);
  param_1[1] = param_2;
  *(undefined1 *)((longlong)param_1 + 0x59) = 1;
  param_1[2] = param_4;
  *param_1 = *(undefined8 *)(param_2 + 0x98);
  if (param_4 != 0) {
    lVar3 = **(longlong **)(param_4 + 0xf0);
    param_1[3] = lVar3;
    param_1[4] = lVar3 + 0x18;
    param_1[5] = lVar3 + 0x60;
    FUN_1402f1060();
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    if (((param_5 != '\0') && (param_3 != 0)) &&
       ((undefined8 *)**(longlong **)(param_3 + 0x38) != (undefined8 *)0x0)) {
      param_1[0xd] = *(undefined8 *)**(longlong **)(param_3 + 0x38);
      param_1[0xc] = *(undefined8 *)(*(longlong *)(param_4 + 0xf0) + 0x28);
    }
  }
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar4 = PTR_LAB_140441218;
  param_1[0xe] = PTR_FUN_140441210;
  param_1[0xf] = puVar4;
  puVar4 = PTR_FUN_140441228;
  param_1[0x10] = PTR_LAB_140441220;
  param_1[0x11] = puVar4;
  puVar4 = PTR_FUN_140441238;
  param_1[0x12] = PTR_FUN_140441230;
  param_1[0x13] = puVar4;
  puVar4 = PTR_FUN_140441248;
  param_1[0x14] = PTR_FUN_140441240;
  param_1[0x15] = puVar4;
  param_1[0x16] = lVar2;
  uVar1 = *(uint *)(lVar2 + 0xa0);
  *(uint *)((longlong)param_1 + 0x3fc) = uVar1;
  param_1[0x82] = *(undefined8 *)(lVar2 + 0x5b8);
  if (*(int *)(lVar2 + 0x608) == 1) {
    uVar5 = 0;
  }
  else if (uVar1 < 0x4d8) {
    uVar5 = 0x6b;
  }
  else {
    uVar5 = 0x8000;
    if (uVar1 < 0x846c) {
      uVar5 = 0x46b;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x404) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x424) = param_6;
  param_1[0x87] = param_7;
  param_1[0x88] = param_8;
  return;
}

