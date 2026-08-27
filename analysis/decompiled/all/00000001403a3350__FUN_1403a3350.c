// Function: FUN_1403a3350
// Addr: 1403a3350
// Size: 320 bytes


undefined1 FUN_1403a3350(char *param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = param_2 & 0xffffffff;
  if (*param_1 == '\0') {
    return 1;
  }
  if ((((uint)param_2 <= (uint)param_3) && ((uint)param_2 != 0xffffffff)) &&
     ((uint)param_3 != 0xffffffff)) {
    param_1[4] = -1;
    param_1[5] = -1;
    param_1[6] = -1;
    param_1[7] = -1;
    uVar2 = (uint)(param_2 >> 9);
    uVar7 = uVar2 & 0x7fffff;
    uVar1 = (uint)(param_3 >> 9);
    uVar6 = uVar1 & 0x7fffff;
    lVar3 = FUN_1403ed560(param_1,param_2,1);
    if (uVar7 == uVar6) {
      if (lVar3 != 0) {
LAB_1403a347c:
        FUN_1403a3290(lVar3,uVar5,param_3 & 0xffffffff);
        return 1;
      }
    }
    else if (lVar3 != 0) {
      FUN_1403a3290(lVar3,param_2 & 0xffffffff,uVar2 * 0x200 + 0x1ff);
      while (uVar7 = uVar7 + 1, uVar7 < uVar6) {
        puVar4 = (undefined4 *)FUN_1403ed560(param_1,uVar7 * 0x200,1);
        if (puVar4 == (undefined4 *)0x0) {
          return 0;
        }
        *(undefined8 *)(puVar4 + 2) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 4) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 6) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0xc) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0xe) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *puVar4 = 0x200;
      }
      lVar3 = FUN_1403ed560(param_1,param_3 & 0xffffffff,1);
      if (lVar3 != 0) {
        uVar5 = (ulonglong)(uVar1 << 9);
        goto LAB_1403a347c;
      }
    }
  }
  return 0;
}

