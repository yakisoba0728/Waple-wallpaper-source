// Function: FUN_140361320
// Addr: 140361320
// Size: 1795 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140361320(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  uVar6 = *(int *)(param_1 + 0x7c) + 1;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  cVar3 = FUN_1403a4db0(param_1 + 0x78,uVar6,0);
  puVar10 = &DAT_1404e4f20;
  if (cVar3 == '\0') {
    puVar5 = &DAT_1404e4f20;
    DAT_1404e4f20 = CONCAT44(DAT_14045dd10._4_4_,(undefined4)DAT_14045dd10);
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f2c = DAT_14045dd18._4_4_;
    DAT_1404e4f30 = (undefined4)DAT_14045dd20;
    _DAT_1404e4f34 = ram0x00014045dd24;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x7c);
    if ((uVar1 < uVar6) && (iVar4 = (uVar6 - uVar1) * 0x1c, iVar4 != 0)) {
      FUN_1404217a0((ulonglong)uVar1 * 0x1c + *(longlong *)(param_1 + 0x80),0,iVar4);
    }
    *(uint *)(param_1 + 0x7c) = uVar6;
    puVar5 = (undefined8 *)((ulonglong)(uVar6 - 1) * 0x1c + *(longlong *)(param_1 + 0x80));
  }
  *(undefined4 *)puVar5 = 0x73746368;
  *(undefined4 *)((longlong)puVar5 + 4) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(puVar5 + 1) = 1;
  *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
  *(undefined4 *)(puVar5 + 2) = 1;
  *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x74);
  FUN_1403a31f0(param_1 + 0x28,0,FUN_1403f6e90);
  uVar6 = *(int *)(param_1 + 0x7c) + 1;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  cVar3 = FUN_1403a4db0(param_1 + 0x78,uVar6,0);
  if (cVar3 == '\0') {
    puVar5 = &DAT_1404e4f20;
    DAT_1404e4f20 = CONCAT44(DAT_14045dd10._4_4_,(undefined4)DAT_14045dd10);
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f2c = DAT_14045dd18._4_4_;
    DAT_1404e4f30 = (undefined4)DAT_14045dd20;
    _DAT_1404e4f34 = ram0x00014045dd24;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x7c);
    if ((uVar1 < uVar6) && (iVar4 = (uVar6 - uVar1) * 0x1c, iVar4 != 0)) {
      FUN_1404217a0((ulonglong)uVar1 * 0x1c + *(longlong *)(param_1 + 0x80),0,iVar4);
    }
    *(uint *)(param_1 + 0x7c) = uVar6;
    puVar5 = (undefined8 *)((ulonglong)(uVar6 - 1) * 0x1c + *(longlong *)(param_1 + 0x80));
  }
  plVar8 = (longlong *)(param_1 + 0x80);
  *(undefined4 *)puVar5 = 0x63636d70;
  *(undefined4 *)((longlong)puVar5 + 4) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(puVar5 + 1) = 1;
  *(undefined4 *)((longlong)puVar5 + 0xc) = 9;
  *(undefined4 *)(puVar5 + 2) = 1;
  *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x74);
  uVar6 = *(int *)(param_1 + 0x7c) + 1;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  cVar3 = FUN_1403a4db0(param_1 + 0x78,uVar6,0);
  if (cVar3 == '\0') {
    puVar5 = &DAT_1404e4f20;
    DAT_1404e4f20 = CONCAT44(DAT_14045dd10._4_4_,(undefined4)DAT_14045dd10);
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f2c = DAT_14045dd18._4_4_;
    DAT_1404e4f30 = (undefined4)DAT_14045dd20;
    _DAT_1404e4f34 = ram0x00014045dd24;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x7c);
    if ((uVar1 < uVar6) && (iVar4 = (uVar6 - uVar1) * 0x1c, iVar4 != 0)) {
      FUN_1404217a0((ulonglong)uVar1 * 0x1c + *plVar8,0,iVar4);
    }
    *(uint *)(param_1 + 0x7c) = uVar6;
    puVar5 = (undefined8 *)((ulonglong)(uVar6 - 1) * 0x1c + *plVar8);
  }
  *(undefined4 *)puVar5 = 0x6c6f636c;
  *(undefined4 *)((longlong)puVar5 + 4) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(puVar5 + 1) = 1;
  *(undefined4 *)((longlong)puVar5 + 0xc) = 9;
  *(undefined4 *)(puVar5 + 2) = 1;
  *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x74);
  FUN_1403a31f0(param_1 + 0x28,0,0);
  uVar9 = 10;
  if (*(int *)(param_1 + 0xc) != 0x41726162) {
    uVar9 = 8;
  }
  FUN_1403a2cd0(param_1 + 0x28,0x69736f6c,uVar9,1);
  FUN_1403a31f0(param_1 + 0x28,0,0);
  uVar2 = 10;
  if (*(int *)(param_1 + 0xc) != 0x41726162) {
    uVar2 = 8;
  }
  FUN_1403a2cd0(param_1 + 0x28,0x66696e61,uVar2,1);
  FUN_1403a31f0(param_1 + 0x28,0,0);
  FUN_1403a2cd0(param_1 + 0x28,0x66696e32,8,1);
  FUN_1403a31f0(param_1 + 0x28,0,0);
  FUN_1403a2cd0(param_1 + 0x28,0x66696e33,8,1);
  FUN_1403a31f0(param_1 + 0x28,0,0);
  uVar7 = 10;
  uVar2 = uVar7;
  if (*(int *)(param_1 + 0xc) != 0x41726162) {
    uVar2 = 8;
  }
  FUN_1403a2cd0(param_1 + 0x28,0x6d656469,uVar2,1);
  FUN_1403a31f0(param_1 + 0x28,0,0);
  FUN_1403a2cd0(param_1 + 0x28,0x6d656432,8,1);
  FUN_1403a31f0(param_1 + 0x28,0,0);
  if (*(int *)(param_1 + 0xc) != 0x41726162) {
    uVar7 = 8;
  }
  FUN_1403a2cd0(param_1 + 0x28,0x696e6974,uVar7,1);
  FUN_1403a31f0(param_1 + 0x28,0,0);
  FUN_1403a31f0(param_1 + 0x28,0,&LAB_1403bd050);
  uVar6 = *(int *)(param_1 + 0x7c) + 1;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  cVar3 = FUN_1403a4db0(param_1 + 0x78,uVar6,0);
  if (cVar3 == '\0') {
    puVar5 = &DAT_1404e4f20;
    DAT_1404e4f20 = CONCAT44(DAT_14045dd10._4_4_,(undefined4)DAT_14045dd10);
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f2c = DAT_14045dd18._4_4_;
    DAT_1404e4f30 = (undefined4)DAT_14045dd20;
    _DAT_1404e4f34 = ram0x00014045dd24;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x7c);
    if ((uVar1 < uVar6) && (iVar4 = (uVar6 - uVar1) * 0x1c, iVar4 != 0)) {
      FUN_1404217a0((ulonglong)uVar1 * 0x1c + *plVar8,0,iVar4);
    }
    *(uint *)(param_1 + 0x7c) = uVar6;
    puVar5 = (undefined8 *)((ulonglong)(uVar6 - 1) * 0x1c + *plVar8);
  }
  *(undefined4 *)puVar5 = 0x726c6967;
  *(undefined4 *)((longlong)puVar5 + 4) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(puVar5 + 1) = 1;
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0xb;
  *(undefined4 *)(puVar5 + 2) = 1;
  *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x74);
  if (*(int *)(param_1 + 0xc) == 0x41726162) {
    FUN_1403a31f0(param_1 + 0x28,0,FUN_1403b17c0);
  }
  uVar6 = *(int *)(param_1 + 0x7c) + 1;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  cVar3 = FUN_1403a4db0(param_1 + 0x78,uVar6,0);
  if (cVar3 == '\0') {
    puVar5 = &DAT_1404e4f20;
    DAT_1404e4f20 = CONCAT44(DAT_14045dd10._4_4_,(undefined4)DAT_14045dd10);
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f2c = DAT_14045dd18._4_4_;
    DAT_1404e4f30 = (undefined4)DAT_14045dd20;
    _DAT_1404e4f34 = ram0x00014045dd24;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x7c);
    if ((uVar1 < uVar6) && (iVar4 = (uVar6 - uVar1) * 0x1c, iVar4 != 0)) {
      FUN_1404217a0((ulonglong)uVar1 * 0x1c + *plVar8,0,iVar4);
    }
    *(uint *)(param_1 + 0x7c) = uVar6;
    puVar5 = (undefined8 *)((ulonglong)(uVar6 - 1) * 0x1c + *plVar8);
  }
  *(undefined4 *)puVar5 = 0x63616c74;
  *(undefined4 *)((longlong)puVar5 + 4) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(puVar5 + 1) = 1;
  *(undefined4 *)((longlong)puVar5 + 0xc) = 9;
  *(undefined4 *)(puVar5 + 2) = 1;
  *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x74);
  cVar3 = FUN_1403d0bc0(param_1 + 0x28,0x72636c74);
  if (cVar3 == '\0') {
    FUN_1403a31f0(param_1 + 0x28,0,0);
  }
  uVar6 = *(int *)(param_1 + 0x7c) + 1;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  cVar3 = FUN_1403a4db0(param_1 + 0x78,uVar6,0);
  if (cVar3 == '\0') {
    puVar5 = &DAT_1404e4f20;
    DAT_1404e4f20 = CONCAT44(DAT_14045dd10._4_4_,(undefined4)DAT_14045dd10);
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f2c = DAT_14045dd18._4_4_;
    DAT_1404e4f30 = (undefined4)DAT_14045dd20;
    _DAT_1404e4f34 = ram0x00014045dd24;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x7c);
    if ((uVar1 < uVar6) && (iVar4 = (uVar6 - uVar1) * 0x1c, iVar4 != 0)) {
      FUN_1404217a0((ulonglong)uVar1 * 0x1c + *plVar8,0,iVar4);
    }
    *(uint *)(param_1 + 0x7c) = uVar6;
    puVar5 = (undefined8 *)((ulonglong)(uVar6 - 1) * 0x1c + *plVar8);
  }
  *(undefined4 *)puVar5 = 0x6c696761;
  *(undefined4 *)((longlong)puVar5 + 4) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(puVar5 + 1) = 1;
  *(undefined4 *)((longlong)puVar5 + 0xc) = 9;
  *(undefined4 *)(puVar5 + 2) = 1;
  *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x74);
  uVar6 = *(int *)(param_1 + 0x7c) + 1;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  cVar3 = FUN_1403a4db0(param_1 + 0x78,uVar6,0);
  if (cVar3 == '\0') {
    puVar5 = &DAT_1404e4f20;
    DAT_1404e4f20 = CONCAT44(DAT_14045dd10._4_4_,(undefined4)DAT_14045dd10);
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f2c = DAT_14045dd18._4_4_;
    DAT_1404e4f30 = (undefined4)DAT_14045dd20;
    _DAT_1404e4f34 = ram0x00014045dd24;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x7c);
    if ((uVar1 < uVar6) && (iVar4 = (uVar6 - uVar1) * 0x1c, iVar4 != 0)) {
      FUN_1404217a0((ulonglong)uVar1 * 0x1c + *plVar8,0,iVar4);
    }
    *(uint *)(param_1 + 0x7c) = uVar6;
    puVar5 = (undefined8 *)((ulonglong)(uVar6 - 1) * 0x1c + *plVar8);
  }
  *(undefined4 *)puVar5 = 0x636c6967;
  *(undefined4 *)((longlong)puVar5 + 4) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(puVar5 + 1) = 1;
  *(undefined4 *)((longlong)puVar5 + 0xc) = 9;
  *(undefined4 *)(puVar5 + 2) = 1;
  *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x74);
  uVar6 = *(int *)(param_1 + 0x7c) + 1;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  cVar3 = FUN_1403a4db0(param_1 + 0x78,uVar6,0);
  if (cVar3 == '\0') {
    DAT_1404e4f20 = CONCAT44(DAT_14045dd10._4_4_,(undefined4)DAT_14045dd10);
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f2c = DAT_14045dd18._4_4_;
    DAT_1404e4f30 = (undefined4)DAT_14045dd20;
    _DAT_1404e4f34 = ram0x00014045dd24;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x7c);
    if ((uVar1 < uVar6) && (iVar4 = (uVar6 - uVar1) * 0x1c, iVar4 != 0)) {
      FUN_1404217a0((ulonglong)uVar1 * 0x1c + *plVar8,0,iVar4);
    }
    *(uint *)(param_1 + 0x7c) = uVar6;
    puVar10 = (undefined8 *)((ulonglong)(uVar6 - 1) * 0x1c + *plVar8);
  }
  *(undefined4 *)puVar10 = 0x6d736574;
  *(undefined4 *)((longlong)puVar10 + 4) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(puVar10 + 1) = 1;
  *(undefined4 *)((longlong)puVar10 + 0xc) = 9;
  *(undefined4 *)(puVar10 + 2) = 1;
  *(undefined4 *)((longlong)puVar10 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar10 + 3) = *(undefined4 *)(param_1 + 0x74);
  return;
}

