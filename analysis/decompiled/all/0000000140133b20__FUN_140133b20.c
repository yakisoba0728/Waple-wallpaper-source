// Function: FUN_140133b20
// Addr: 140133b20
// Size: 374 bytes


void FUN_140133b20(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  code *param_5)

{
  undefined4 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(param_3 - 1) >> 1;
  lVar4 = param_2;
  while (lVar4 < lVar6) {
    cVar2 = (*param_5)(param_1 + 0x110 + lVar4 * 0x110,param_1 + 0x88 + lVar4 * 0x110);
    lVar5 = lVar4 * 0x88;
    lVar4 = (2 - (ulonglong)(cVar2 != '\0')) + lVar4 * 2;
    lVar3 = lVar4 * 0x88;
    *(undefined4 *)(param_1 + lVar5) = *(undefined4 *)(param_1 + lVar3);
    *(undefined4 *)(param_1 + 4 + lVar5) = *(undefined4 *)(param_1 + 4 + lVar3);
    *(undefined4 *)(param_1 + 8 + lVar5) = *(undefined4 *)(param_1 + 8 + lVar3);
    *(undefined4 *)(param_1 + 0xc + lVar5) = *(undefined4 *)(param_1 + 0xc + lVar3);
    *(undefined4 *)(param_1 + 0x10 + lVar5) = *(undefined4 *)(param_1 + 0x10 + lVar3);
    *(undefined4 *)(param_1 + 0x14 + lVar5) = *(undefined4 *)(param_1 + 0x14 + lVar3);
    FUN_14000df10(param_1 + 0x18 + lVar5,param_1 + 0x18 + lVar3);
    FUN_14000df10(param_1 + 0x38 + lVar5,param_1 + 0x38 + lVar3);
    FUN_14000df10(param_1 + 0x58 + lVar5,param_1 + 0x58 + lVar3);
    *(undefined8 *)(param_1 + 0x78 + lVar5) = *(undefined8 *)(param_1 + 0x78 + lVar3);
    *(undefined4 *)(param_1 + 0x80 + lVar5) = *(undefined4 *)(param_1 + 0x80 + lVar3);
  }
  if ((lVar4 == lVar6) && ((param_3 & 1) == 0)) {
    FUN_140132c10(lVar4 * 0x88 + param_1,param_3 * 0x88 + -0x88 + param_1);
    lVar4 = param_3 - 1;
  }
  while (param_2 < lVar4) {
    lVar6 = lVar4 + -1 >> 1;
    lVar3 = lVar6 * 0x88;
    puVar1 = (undefined4 *)(lVar3 + param_1);
    cVar2 = (*param_5)(puVar1,param_4);
    if (cVar2 == '\0') break;
    lVar4 = lVar4 * 0x88;
    *(undefined4 *)(param_1 + lVar4) = *puVar1;
    *(undefined4 *)(param_1 + 4 + lVar4) = puVar1[1];
    *(undefined4 *)(param_1 + 8 + lVar4) = puVar1[2];
    *(undefined4 *)(param_1 + 0xc + lVar4) = puVar1[3];
    *(undefined4 *)(param_1 + 0x10 + lVar4) = puVar1[4];
    *(undefined4 *)(param_1 + 0x14 + lVar4) = puVar1[5];
    FUN_14000df10(lVar4 + param_1 + 0x18,lVar3 + param_1 + 0x18);
    FUN_14000df10(param_1 + 0x38 + lVar4,param_1 + 0x38 + lVar3);
    FUN_14000df10(param_1 + 0x58 + lVar4,param_1 + 0x58 + lVar3);
    *(undefined8 *)(param_1 + 0x78 + lVar4) = *(undefined8 *)(puVar1 + 0x1e);
    *(undefined4 *)(param_1 + 0x80 + lVar4) = puVar1[0x20];
    lVar4 = lVar6;
  }
  FUN_140132c10(lVar4 * 0x88 + param_1,param_4);
  return;
}

