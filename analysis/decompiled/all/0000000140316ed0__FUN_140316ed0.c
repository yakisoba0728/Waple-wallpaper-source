// Function: FUN_140316ed0
// Addr: 140316ed0
// Size: 444 bytes


void FUN_140316ed0(longlong param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar7;
  
  puVar2 = *(uint **)(param_1 + 0x2e0);
  if (puVar2 != (uint *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    uVar8 = *puVar2;
    uVar1 = puVar2[1];
    FUN_1402f7f90(uVar3,*(undefined8 *)(puVar2 + 10));
    uVar9 = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    if (1 < uVar8) {
      FUN_1404217a0(puVar2 + 0xc,0,(ulonglong)(uVar8 - 1) << 3);
    }
    FUN_1402f7f90(uVar3,*(undefined8 *)(puVar2 + 0x6a));
    puVar2[0x6a] = 0;
    puVar2[0x6b] = 0;
    FUN_1402f7f90(uVar3,*(undefined8 *)(puVar2 + 0x48));
    puVar2[0x48] = 0;
    puVar2[0x49] = 0;
    FUN_1402f7f90(uVar3,*(undefined8 *)(puVar2 + 0x8e));
    puVar2[0x8e] = 0;
    puVar2[0x8f] = 0;
    uVar5 = uVar9;
    uVar7 = uVar9;
    if (uVar8 != 0) {
      do {
        uVar6 = (int)uVar7 + 1;
        (puVar2 + uVar5 * 2 + 0x68)[0] = 0;
        (puVar2 + uVar5 * 2 + 0x68)[1] = 0;
        (puVar2 + uVar5 * 2 + 0x46)[0] = 0;
        (puVar2 + uVar5 * 2 + 0x46)[1] = 0;
        (puVar2 + uVar5 * 2 + 0x8c)[0] = 0;
        (puVar2 + uVar5 * 2 + 0x8c)[1] = 0;
        uVar5 = uVar5 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < uVar8);
    }
    FUN_1402f7f90(uVar3,*(undefined8 *)(puVar2 + 0x42));
    puVar2[0x42] = 0;
    puVar2[0x43] = 0;
    puVar2[0x44] = 0;
    puVar2[0x45] = 0;
    uVar5 = uVar9;
    if (uVar1 != 0) {
      do {
        FUN_1402f7f90(uVar3,*(undefined8 *)(puVar2 + uVar5 * 2 + 2));
        uVar8 = (int)uVar5 + 1;
        (puVar2 + uVar5 * 2 + 2)[0] = 0;
        (puVar2 + uVar5 * 2 + 2)[1] = 0;
        uVar5 = (ulonglong)uVar8;
        uVar7 = uVar9;
      } while (uVar8 < uVar1);
      do {
        FUN_1402f7f90(uVar3,*(undefined8 *)(puVar2 + uVar9 * 6 + 0x2e));
        uVar4 = *(undefined8 *)(puVar2 + uVar9 * 6 + 0x2c);
        (puVar2 + uVar9 * 6 + 0x2e)[0] = 0;
        (puVar2 + uVar9 * 6 + 0x2e)[1] = 0;
        FUN_1402f7f90(uVar3,uVar4);
        (puVar2 + uVar9 * 6 + 0x2c)[0] = 0;
        (puVar2 + uVar9 * 6 + 0x2c)[1] = 0;
        uVar8 = (int)uVar7 + 1;
        *(undefined1 *)(puVar2 + uVar9 * 6 + 0x2a) = 0;
        uVar9 = uVar9 + 1;
        uVar7 = (ulonglong)uVar8;
      } while (uVar8 < uVar1);
    }
    FUN_1402f7f90(uVar3,*(undefined8 *)(param_1 + 0x2e0));
    *(undefined8 *)(param_1 + 0x2e0) = 0;
  }
  return;
}

