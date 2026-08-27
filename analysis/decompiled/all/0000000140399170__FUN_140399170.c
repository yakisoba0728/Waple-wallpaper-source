// Function: FUN_140399170
// Addr: 140399170
// Size: 100 bytes


undefined1 * FUN_140399170(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar11 = *(undefined8 *)(param_1 + 8);
  uVar12 = *(undefined8 *)(param_1 + 0x10);
  uVar13 = *(undefined8 *)(param_1 + 0x18);
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  *param_2 = 0;
  uVar1 = *(undefined1 *)(param_1 + 0x78);
  *(undefined8 *)(param_2 + 8) = uVar11;
  *(undefined8 *)(param_2 + 0x10) = uVar12;
  param_2[0x78] = uVar1;
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 0x18) = uVar13;
  *(undefined8 *)(param_2 + 0x20) = uVar14;
  uVar13 = *(undefined8 *)(param_1 + 0x38);
  uVar14 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_2 + 0x28) = uVar11;
  *(undefined8 *)(param_2 + 0x30) = uVar12;
  uVar11 = *(undefined8 *)(param_1 + 0x48);
  uVar12 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_2 + 0x38) = uVar13;
  *(undefined8 *)(param_2 + 0x40) = uVar14;
  uVar3 = *(undefined4 *)(param_1 + 0x58);
  uVar4 = *(undefined4 *)(param_1 + 0x5c);
  uVar5 = *(undefined4 *)(param_1 + 0x60);
  uVar6 = *(undefined4 *)(param_1 + 100);
  *(undefined8 *)(param_2 + 0x48) = uVar11;
  *(undefined8 *)(param_2 + 0x50) = uVar12;
  uVar7 = *(undefined4 *)(param_1 + 0x68);
  uVar8 = *(undefined4 *)(param_1 + 0x6c);
  uVar9 = *(undefined4 *)(param_1 + 0x70);
  uVar10 = *(undefined4 *)(param_1 + 0x74);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) - iVar2;
  *(undefined4 *)(param_2 + 0x58) = uVar3;
  *(undefined4 *)(param_2 + 0x5c) = uVar4;
  *(undefined4 *)(param_2 + 0x60) = uVar5;
  *(undefined4 *)(param_2 + 100) = uVar6;
  *(undefined4 *)(param_2 + 0x68) = uVar7;
  *(undefined4 *)(param_2 + 0x6c) = uVar8;
  *(undefined4 *)(param_2 + 0x70) = uVar9;
  *(undefined4 *)(param_2 + 0x74) = uVar10;
  FUN_140399030(param_1 + 0x18);
  return param_2;
}

