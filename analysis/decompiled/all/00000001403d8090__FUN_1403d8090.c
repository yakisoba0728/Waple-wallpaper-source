// Function: FUN_1403d8090
// Addr: 1403d8090
// Size: 2656 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403d8090(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  
  *(undefined1 *)(param_1 + 0x50) = 1;
  uVar8 = *(int *)(param_1 + 0x7c) + 1;
  uVar12 = 0;
  if ((int)uVar8 < 0) {
    uVar8 = uVar12;
  }
  cVar3 = FUN_1403a4db0(param_1 + 0x78,uVar8,0);
  puVar10 = &DAT_1404e4f20;
  if (cVar3 == '\0') {
    _DAT_1404e4f2c = CONCAT44((undefined4)DAT_14045dd20,DAT_14045dd18._4_4_);
    puVar5 = &DAT_1404e4f20;
    DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
    DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f34 = ram0x00014045dd24;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x7c);
    if ((uVar1 < uVar8) && (iVar6 = (uVar8 - uVar1) * 0x1c, iVar6 != 0)) {
      FUN_1404217a0((ulonglong)uVar1 * 0x1c + *(longlong *)(param_1 + 0x80),0,iVar6);
    }
    *(uint *)(param_1 + 0x7c) = uVar8;
    puVar5 = (undefined8 *)((ulonglong)(uVar8 - 1) * 0x1c + *(longlong *)(param_1 + 0x80));
  }
  *(undefined4 *)puVar5 = 0x7276726e;
  *(undefined4 *)((longlong)puVar5 + 4) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(puVar5 + 1) = 1;
  *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
  *(undefined4 *)(puVar5 + 2) = 1;
  *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x74);
  FUN_1403a31f0(param_1 + 0x28,0,0);
  if (*(int *)(param_1 + 8) == 4) {
    uVar8 = *(int *)(param_1 + 0x7c) + 1;
    if ((int)uVar8 < 0) {
      uVar8 = uVar12;
    }
    cVar3 = FUN_1403a4db0(param_1 + 0x78,uVar8,0);
    if (cVar3 == '\0') {
      _DAT_1404e4f2c = CONCAT44((undefined4)DAT_14045dd20,DAT_14045dd18._4_4_);
      puVar5 = &DAT_1404e4f20;
      DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
      DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
      DAT_1404e4f28 = (undefined4)DAT_14045dd18;
      _DAT_1404e4f34 = ram0x00014045dd24;
    }
    else {
      uVar1 = *(uint *)(param_1 + 0x7c);
      if ((uVar1 < uVar8) && (iVar6 = (uVar8 - uVar1) * 0x1c, iVar6 != 0)) {
        FUN_1404217a0((ulonglong)uVar1 * 0x1c + *(longlong *)(param_1 + 0x80),0,iVar6);
      }
      *(uint *)(param_1 + 0x7c) = uVar8;
      puVar5 = (undefined8 *)((ulonglong)(uVar8 - 1) * 0x1c + *(longlong *)(param_1 + 0x80));
    }
    *(undefined4 *)puVar5 = 0x6c747261;
    *(undefined4 *)((longlong)puVar5 + 4) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(puVar5 + 1) = 1;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
    *(undefined4 *)(puVar5 + 2) = 1;
    *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x74);
    uVar8 = *(int *)(param_1 + 0x7c) + 1;
    if ((int)uVar8 < 0) {
      uVar8 = uVar12;
    }
    cVar3 = FUN_1403a4db0(param_1 + 0x78,uVar8,0);
    if (cVar3 == '\0') {
      _DAT_1404e4f2c = CONCAT44((undefined4)DAT_14045dd20,DAT_14045dd18._4_4_);
      puVar5 = &DAT_1404e4f20;
      DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
      DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
      DAT_1404e4f28 = (undefined4)DAT_14045dd18;
      _DAT_1404e4f34 = ram0x00014045dd24;
    }
    else {
      uVar12 = *(uint *)(param_1 + 0x7c);
      if ((uVar12 < uVar8) && (iVar6 = (uVar8 - uVar12) * 0x1c, iVar6 != 0)) {
        FUN_1404217a0((ulonglong)uVar12 * 0x1c + *(longlong *)(param_1 + 0x80),0,iVar6);
      }
      *(uint *)(param_1 + 0x7c) = uVar8;
      puVar5 = (undefined8 *)((ulonglong)(uVar8 - 1) * 0x1c + *(longlong *)(param_1 + 0x80));
    }
    *(undefined4 *)puVar5 = 0x6c74726d;
    uVar4 = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(puVar5 + 1) = 1;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
    *(undefined4 *)(puVar5 + 2) = 1;
  }
  else {
    if (*(int *)(param_1 + 8) != 5) goto LAB_1403d8411;
    uVar8 = *(int *)(param_1 + 0x7c) + 1;
    if ((int)uVar8 < 0) {
      uVar8 = 0;
    }
    cVar3 = FUN_1403a4db0(param_1 + 0x78,uVar8,0);
    if (cVar3 == '\0') {
      _DAT_1404e4f2c = CONCAT44((undefined4)DAT_14045dd20,DAT_14045dd18._4_4_);
      puVar5 = &DAT_1404e4f20;
      DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
      DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
      DAT_1404e4f28 = (undefined4)DAT_14045dd18;
      _DAT_1404e4f34 = ram0x00014045dd24;
    }
    else {
      uVar12 = *(uint *)(param_1 + 0x7c);
      if ((uVar12 < uVar8) && (iVar6 = (uVar8 - uVar12) * 0x1c, iVar6 != 0)) {
        FUN_1404217a0((ulonglong)uVar12 * 0x1c + *(longlong *)(param_1 + 0x80),0,iVar6);
      }
      *(uint *)(param_1 + 0x7c) = uVar8;
      puVar5 = (undefined8 *)((ulonglong)(uVar8 - 1) * 0x1c + *(longlong *)(param_1 + 0x80));
    }
    *(undefined4 *)puVar5 = 0x72746c61;
    *(undefined4 *)((longlong)puVar5 + 4) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(puVar5 + 1) = 1;
    *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
    *(undefined4 *)(puVar5 + 2) = 1;
    *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x74);
    uVar8 = *(int *)(param_1 + 0x7c) + 1;
    if ((int)uVar8 < 0) {
      uVar8 = 0;
    }
    cVar3 = FUN_1403a4db0(param_1 + 0x78,uVar8,0);
    if (cVar3 == '\0') {
      _DAT_1404e4f2c = CONCAT44((undefined4)DAT_14045dd20,DAT_14045dd18._4_4_);
      puVar5 = &DAT_1404e4f20;
      DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
      DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
      DAT_1404e4f28 = (undefined4)DAT_14045dd18;
      _DAT_1404e4f34 = ram0x00014045dd24;
    }
    else {
      uVar12 = *(uint *)(param_1 + 0x7c);
      if ((uVar12 < uVar8) && (iVar6 = (uVar8 - uVar12) * 0x1c, iVar6 != 0)) {
        FUN_1404217a0((ulonglong)uVar12 * 0x1c + *(longlong *)(param_1 + 0x80),0,iVar6);
      }
      *(uint *)(param_1 + 0x7c) = uVar8;
      puVar5 = (undefined8 *)((ulonglong)(uVar8 - 1) * 0x1c + *(longlong *)(param_1 + 0x80));
    }
    *(undefined4 *)puVar5 = 0x72746c6d;
    uVar4 = *(undefined4 *)(param_1 + 0x7c);
    puVar5[1] = 1;
    *(undefined4 *)(puVar5 + 2) = 0;
  }
  *(undefined4 *)((longlong)puVar5 + 4) = uVar4;
  *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x74);
LAB_1403d8411:
  lVar9 = 0;
  uVar8 = *(int *)(param_1 + 0x7c) + 1;
  uVar12 = 0;
  if ((int)uVar8 < 0) {
    uVar8 = uVar12;
  }
  cVar3 = FUN_1403a4db0(param_1 + 0x78,uVar8,0);
  if (cVar3 == '\0') {
    _DAT_1404e4f2c = CONCAT44((undefined4)DAT_14045dd20,DAT_14045dd18._4_4_);
    puVar5 = &DAT_1404e4f20;
    DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
    DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f34 = ram0x00014045dd24;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x7c);
    if ((uVar1 < uVar8) && (iVar6 = (uVar8 - uVar1) * 0x1c, iVar6 != 0)) {
      FUN_1404217a0((ulonglong)uVar1 * 0x1c + *(longlong *)(param_1 + 0x80),0,iVar6);
    }
    *(uint *)(param_1 + 0x7c) = uVar8;
    puVar5 = (undefined8 *)((ulonglong)(uVar8 - 1) * 0x1c + *(longlong *)(param_1 + 0x80));
  }
  *(undefined4 *)puVar5 = 0x66726163;
  *(undefined4 *)((longlong)puVar5 + 4) = *(undefined4 *)(param_1 + 0x7c);
  puVar5[1] = 1;
  *(undefined4 *)(puVar5 + 2) = 0;
  *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x74);
  uVar8 = *(int *)(param_1 + 0x7c) + 1;
  if ((int)uVar8 < 0) {
    uVar8 = uVar12;
  }
  cVar3 = FUN_1403a4db0(param_1 + 0x78,uVar8,0);
  if (cVar3 == '\0') {
    _DAT_1404e4f2c = CONCAT44((undefined4)DAT_14045dd20,DAT_14045dd18._4_4_);
    puVar5 = &DAT_1404e4f20;
    DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
    DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f34 = ram0x00014045dd24;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x7c);
    if ((uVar1 < uVar8) && (iVar6 = (uVar8 - uVar1) * 0x1c, iVar6 != 0)) {
      FUN_1404217a0((ulonglong)uVar1 * 0x1c + *(longlong *)(param_1 + 0x80),0,iVar6);
    }
    *(uint *)(param_1 + 0x7c) = uVar8;
    puVar5 = (undefined8 *)((ulonglong)(uVar8 - 1) * 0x1c + *(longlong *)(param_1 + 0x80));
  }
  *(undefined4 *)puVar5 = 0x6e756d72;
  *(undefined4 *)((longlong)puVar5 + 4) = *(undefined4 *)(param_1 + 0x7c);
  puVar5[1] = 1;
  *(undefined4 *)(puVar5 + 2) = 0;
  *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x74);
  uVar8 = *(int *)(param_1 + 0x7c) + 1;
  if ((int)uVar8 < 0) {
    uVar8 = uVar12;
  }
  cVar3 = FUN_1403a4db0(param_1 + 0x78,uVar8,0);
  if (cVar3 == '\0') {
    _DAT_1404e4f2c = CONCAT44((undefined4)DAT_14045dd20,DAT_14045dd18._4_4_);
    puVar5 = &DAT_1404e4f20;
    DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
    DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f34 = ram0x00014045dd24;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x7c);
    if ((uVar1 < uVar8) && (iVar6 = (uVar8 - uVar1) * 0x1c, iVar6 != 0)) {
      FUN_1404217a0((ulonglong)uVar1 * 0x1c + *(longlong *)(param_1 + 0x80),0,iVar6);
    }
    *(uint *)(param_1 + 0x7c) = uVar8;
    puVar5 = (undefined8 *)((ulonglong)(uVar8 - 1) * 0x1c + *(longlong *)(param_1 + 0x80));
  }
  *(undefined4 *)puVar5 = 0x646e6f6d;
  *(undefined4 *)((longlong)puVar5 + 4) = *(undefined4 *)(param_1 + 0x7c);
  puVar5[1] = 1;
  *(undefined4 *)(puVar5 + 2) = 0;
  *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x74);
  uVar8 = *(int *)(param_1 + 0x7c) + 1;
  if ((int)uVar8 < 0) {
    uVar8 = uVar12;
  }
  cVar3 = FUN_1403a4db0(param_1 + 0x78,uVar8,0);
  if (cVar3 == '\0') {
    _DAT_1404e4f2c = CONCAT44((undefined4)DAT_14045dd20,DAT_14045dd18._4_4_);
    puVar5 = &DAT_1404e4f20;
    DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
    DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f34 = ram0x00014045dd24;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x7c);
    if ((uVar1 < uVar8) && (iVar6 = (uVar8 - uVar1) * 0x1c, iVar6 != 0)) {
      FUN_1404217a0((ulonglong)uVar1 * 0x1c + *(longlong *)(param_1 + 0x80),0,iVar6);
    }
    *(uint *)(param_1 + 0x7c) = uVar8;
    puVar5 = (undefined8 *)((ulonglong)(uVar8 - 1) * 0x1c + *(longlong *)(param_1 + 0x80));
  }
  *(undefined4 *)puVar5 = 0x72616e64;
  *(undefined4 *)((longlong)puVar5 + 4) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(puVar5 + 1) = 0xff;
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0x21;
  *(undefined4 *)(puVar5 + 2) = 0xff;
  *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x74);
  uVar8 = *(int *)(param_1 + 0x7c) + 1;
  if ((int)uVar8 < 0) {
    uVar8 = uVar12;
  }
  cVar3 = FUN_1403a4db0(param_1 + 0x78,uVar8,0);
  if (cVar3 == '\0') {
    _DAT_1404e4f2c = CONCAT44((undefined4)DAT_14045dd20,DAT_14045dd18._4_4_);
    puVar5 = &DAT_1404e4f20;
    DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
    DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f34 = ram0x00014045dd24;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x7c);
    if ((uVar1 < uVar8) && (iVar6 = (uVar8 - uVar1) * 0x1c, iVar6 != 0)) {
      FUN_1404217a0((ulonglong)uVar1 * 0x1c + *(longlong *)(param_1 + 0x80),0,iVar6);
    }
    *(uint *)(param_1 + 0x7c) = uVar8;
    puVar5 = (undefined8 *)((ulonglong)(uVar8 - 1) * 0x1c + *(longlong *)(param_1 + 0x80));
  }
  *(undefined4 *)puVar5 = 0x48617266;
  *(undefined4 *)((longlong)puVar5 + 4) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(puVar5 + 1) = 1;
  *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
  *(undefined4 *)(puVar5 + 2) = 1;
  *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x74);
  uVar8 = *(int *)(param_1 + 0x7c) + 1;
  if ((int)uVar8 < 0) {
    uVar8 = uVar12;
  }
  cVar3 = FUN_1403a4db0(param_1 + 0x78,uVar8,0);
  if (cVar3 == '\0') {
    _DAT_1404e4f2c = CONCAT44((undefined4)DAT_14045dd20,DAT_14045dd18._4_4_);
    puVar5 = &DAT_1404e4f20;
    DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
    DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f34 = ram0x00014045dd24;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x7c);
    if ((uVar1 < uVar8) && (iVar6 = (uVar8 - uVar1) * 0x1c, iVar6 != 0)) {
      FUN_1404217a0((ulonglong)uVar1 * 0x1c + *(longlong *)(param_1 + 0x80),0,iVar6);
    }
    *(uint *)(param_1 + 0x7c) = uVar8;
    puVar5 = (undefined8 *)((ulonglong)(uVar8 - 1) * 0x1c + *(longlong *)(param_1 + 0x80));
  }
  *(undefined4 *)puVar5 = 0x48415246;
  *(undefined4 *)((longlong)puVar5 + 4) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(puVar5 + 1) = 1;
  *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
  *(undefined4 *)(puVar5 + 2) = 1;
  *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x74);
  if (**(longlong **)(param_1 + 0x100) != 0) {
    *(undefined1 *)(param_1 + 0x50) = 0;
    (*(code *)**(undefined8 **)(param_1 + 0x100))(param_1);
  }
  uVar8 = *(int *)(param_1 + 0x7c) + 1;
  if ((int)uVar8 < 0) {
    uVar8 = uVar12;
  }
  cVar3 = FUN_1403a4db0(param_1 + 0x78,uVar8,0);
  if (cVar3 == '\0') {
    _DAT_1404e4f2c = CONCAT44((undefined4)DAT_14045dd20,DAT_14045dd18._4_4_);
    puVar5 = &DAT_1404e4f20;
    DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
    DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f34 = ram0x00014045dd24;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x7c);
    if ((uVar1 < uVar8) && (iVar6 = (uVar8 - uVar1) * 0x1c, iVar6 != 0)) {
      FUN_1404217a0((ulonglong)uVar1 * 0x1c + *(longlong *)(param_1 + 0x80),0,iVar6);
    }
    *(uint *)(param_1 + 0x7c) = uVar8;
    puVar5 = (undefined8 *)((ulonglong)(uVar8 - 1) * 0x1c + *(longlong *)(param_1 + 0x80));
  }
  *(undefined4 *)puVar5 = 0x42757a7a;
  *(undefined4 *)((longlong)puVar5 + 4) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(puVar5 + 1) = 1;
  *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
  *(undefined4 *)(puVar5 + 2) = 1;
  *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x74);
  uVar8 = *(int *)(param_1 + 0x7c) + 1;
  if ((int)uVar8 < 0) {
    uVar8 = uVar12;
  }
  cVar3 = FUN_1403a4db0(param_1 + 0x78,uVar8,0);
  if (cVar3 == '\0') {
    _DAT_1404e4f2c = CONCAT44((undefined4)DAT_14045dd20,DAT_14045dd18._4_4_);
    puVar5 = &DAT_1404e4f20;
    DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
    DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f34 = ram0x00014045dd24;
  }
  else {
    uVar12 = *(uint *)(param_1 + 0x7c);
    if ((uVar12 < uVar8) && (iVar6 = (uVar8 - uVar12) * 0x1c, iVar6 != 0)) {
      FUN_1404217a0((ulonglong)uVar12 * 0x1c + *(longlong *)(param_1 + 0x80),0,iVar6);
    }
    *(uint *)(param_1 + 0x7c) = uVar8;
    puVar5 = (undefined8 *)((ulonglong)(uVar8 - 1) * 0x1c + *(longlong *)(param_1 + 0x80));
  }
  *(undefined4 *)puVar5 = 0x42555a5a;
  *(undefined4 *)((longlong)puVar5 + 4) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(puVar5 + 1) = 1;
  *(undefined4 *)((longlong)puVar5 + 0xc) = 1;
  *(undefined4 *)(puVar5 + 2) = 1;
  *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x74);
  do {
    FUN_1403a2cd0(param_1 + 0x28,(&DAT_14046d230)[lVar9 * 2],(&DAT_14046d234)[lVar9 * 2],1);
    lVar9 = lVar9 + 1;
  } while (lVar9 != 7);
  if ((*(uint *)(param_1 + 8) & 0xfffffffe) == 4) {
    lVar9 = 0;
    do {
      FUN_1403a2cd0(param_1 + 0x28,(&DAT_14046d268)[lVar9 * 2],(&DAT_14046d26c)[lVar9 * 2],1);
      lVar9 = lVar9 + 1;
    } while (lVar9 != 7);
  }
  else {
    uVar8 = *(int *)(param_1 + 0x7c) + 1;
    if ((int)uVar8 < 0) {
      uVar8 = 0;
    }
    cVar3 = FUN_1403a4db0(param_1 + 0x78,uVar8,0);
    if (cVar3 == '\0') {
      _DAT_1404e4f2c = CONCAT44((undefined4)DAT_14045dd20,DAT_14045dd18._4_4_);
      DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
      DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
      DAT_1404e4f28 = (undefined4)DAT_14045dd18;
      _DAT_1404e4f34 = ram0x00014045dd24;
    }
    else {
      uVar12 = *(uint *)(param_1 + 0x7c);
      if ((uVar12 < uVar8) && (iVar6 = (uVar8 - uVar12) * 0x1c, iVar6 != 0)) {
        FUN_1404217a0((ulonglong)uVar12 * 0x1c + *(longlong *)(param_1 + 0x80),0,iVar6);
      }
      *(uint *)(param_1 + 0x7c) = uVar8;
      puVar10 = (undefined8 *)((ulonglong)(uVar8 - 1) * 0x1c + *(longlong *)(param_1 + 0x80));
    }
    *(undefined4 *)puVar10 = 0x76657274;
    *(undefined4 *)((longlong)puVar10 + 4) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(puVar10 + 1) = 1;
    *(undefined4 *)((longlong)puVar10 + 0xc) = 0x11;
    *(undefined4 *)(puVar10 + 2) = 1;
    *(undefined4 *)((longlong)puVar10 + 0x14) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(puVar10 + 3) = *(undefined4 *)(param_1 + 0x74);
  }
  if (param_3 != 0) {
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  uVar7 = 0;
  if (param_3 != 0) {
    do {
      if ((*(int *)(param_2 + 8 + uVar7 * 0x10) == 0) &&
         (*(int *)(param_2 + 0xc + uVar7 * 0x10) == -1)) {
        uVar11 = 1;
      }
      else {
        uVar11 = 0;
      }
      FUN_1403a2cd0(param_1 + 0x28,*(undefined4 *)(param_2 + uVar7 * 0x10),uVar11,
                    *(undefined4 *)(param_2 + 4 + uVar7 * 0x10));
      uVar8 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar8;
    } while (uVar8 < param_3);
  }
  pcVar2 = *(code **)(*(longlong *)(param_1 + 0x100) + 8);
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1);
  }
  return;
}

