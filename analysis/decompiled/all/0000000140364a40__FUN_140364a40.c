// Function: FUN_140364a40
// Addr: 140364a40
// Size: 203 bytes


void FUN_140364a40(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = *param_2;
  uVar1 = *param_1;
  uVar6 = (uVar5 >> 0x10 & 0xff) * 0x100 + (uVar5 >> 8 & 0xff) * 0x10000 + uVar5 * 0x1000000 +
          (uVar5 >> 0x18);
  uVar5 = (uVar1 >> 8 & 0xff) * 0x10000 + (uVar1 >> 0x10 & 0xff) * 0x100 + uVar1 * 0x1000000 +
          (uVar1 >> 0x18);
  if ((int)((uint)(uVar5 < uVar6) - (uint)(uVar6 < uVar5)) < 0) {
    uVar2 = *(undefined8 *)(param_1 + 2);
    uVar3 = *(undefined8 *)param_2;
    uVar4 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_2 = *(undefined8 *)param_1;
    *(undefined8 *)(param_2 + 2) = uVar2;
    *(undefined8 *)param_1 = uVar3;
    *(undefined8 *)(param_1 + 2) = uVar4;
  }
  uVar5 = *param_3;
  uVar1 = *param_2;
  uVar6 = (uVar5 >> 0x10 & 0xff) * 0x100 + (uVar5 >> 8 & 0xff) * 0x10000 + uVar5 * 0x1000000 +
          (uVar5 >> 0x18);
  uVar5 = (uVar1 >> 8 & 0xff) * 0x10000 + (uVar1 >> 0x10 & 0xff) * 0x100 + uVar1 * 0x1000000 +
          (uVar1 >> 0x18);
  if ((int)((uint)(uVar5 < uVar6) - (uint)(uVar6 < uVar5)) < 0) {
    uVar2 = *(undefined8 *)(param_2 + 2);
    uVar3 = *(undefined8 *)param_3;
    uVar4 = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)param_3 = *(undefined8 *)param_2;
    *(undefined8 *)(param_3 + 2) = uVar2;
    *(undefined8 *)param_2 = uVar3;
    *(undefined8 *)(param_2 + 2) = uVar4;
    uVar5 = *param_2;
    uVar1 = *param_1;
    uVar6 = (uVar5 >> 0x10 & 0xff) * 0x100 + (uVar5 >> 8 & 0xff) * 0x10000 + uVar5 * 0x1000000 +
            (uVar5 >> 0x18);
    uVar5 = (uVar1 >> 8 & 0xff) * 0x10000 + (uVar1 >> 0x10 & 0xff) * 0x100 + uVar1 * 0x1000000 +
            (uVar1 >> 0x18);
    if ((int)((uint)(uVar5 < uVar6) - (uint)(uVar6 < uVar5)) < 0) {
      uVar2 = *(undefined8 *)(param_1 + 2);
      *(undefined8 *)param_2 = *(undefined8 *)param_1;
      *(undefined8 *)(param_2 + 2) = uVar2;
      *(undefined8 *)param_1 = uVar3;
      *(undefined8 *)(param_1 + 2) = uVar4;
    }
  }
  return;
}

