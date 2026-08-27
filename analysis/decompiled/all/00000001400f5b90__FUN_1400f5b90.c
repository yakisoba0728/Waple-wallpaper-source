// Function: FUN_1400f5b90
// Addr: 1400f5b90
// Size: 274 bytes


void FUN_1400f5b90(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar4 = 0;
  uVar7 = (int)(param_1[1] - *param_1 >> 3) * -0x49249249;
  if (uVar7 != 0) {
    do {
      lVar1 = *param_1;
      lVar6 = uVar4 * 0x38;
      if ((*(int *)(lVar6 + 0x28 + lVar1) != 0) && (*(char *)(lVar6 + 0x2c + lVar1) != '\0')) {
        FUN_1400532a0(param_3,&DAT_140487cc4,4);
        puVar5 = (undefined8 *)(lVar1 + 8 + lVar6);
        puVar2 = puVar5;
        if (0xf < *(ulonglong *)(lVar6 + 0x20 + lVar1)) {
          puVar2 = (undefined8 *)*puVar5;
        }
        FUN_1400532a0(param_3,puVar2,*(undefined8 *)(lVar6 + 0x18 + lVar1));
        FUN_1400532a0(param_3," = accessArray",0xe);
        if (0xf < *(ulonglong *)(lVar6 + 0x20 + lVar1)) {
          puVar5 = (undefined8 *)*puVar5;
        }
        FUN_1400532a0(param_3,puVar5,*(undefined8 *)(lVar6 + 0x18 + lVar1));
        FUN_1400532a0(param_3,&DAT_140487a64,2);
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < uVar7);
  }
  return;
}

