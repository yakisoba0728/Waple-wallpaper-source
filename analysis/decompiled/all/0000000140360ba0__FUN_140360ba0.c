// Function: FUN_140360ba0
// Addr: 140360ba0
// Size: 863 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140360ba0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  lVar1 = param_1 + 0x28;
  FUN_1403a31f0(lVar1,0,FUN_14040b8e0);
  uVar6 = *(int *)(param_1 + 0x7c) + 1;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  cVar3 = FUN_1403a4db0(param_1 + 0x78,uVar6,0);
  puVar8 = &DAT_1404e4f20;
  if (cVar3 == '\0') {
    _DAT_1404e4f2c = CONCAT44((undefined4)DAT_14045dd20,DAT_14045dd18._4_4_);
    puVar5 = &DAT_1404e4f20;
    DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
    DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f34 = ram0x00014045dd24;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x7c);
    if ((uVar2 < uVar6) && (iVar4 = (uVar6 - uVar2) * 0x1c, iVar4 != 0)) {
      FUN_1404217a0((ulonglong)uVar2 * 0x1c + *(longlong *)(param_1 + 0x80),0,iVar4);
    }
    *(uint *)(param_1 + 0x7c) = uVar6;
    puVar5 = (undefined8 *)((ulonglong)(uVar6 - 1) * 0x1c + *(longlong *)(param_1 + 0x80));
  }
  *(undefined4 *)puVar5 = 0x6c6f636c;
  *(undefined4 *)((longlong)puVar5 + 4) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(puVar5 + 1) = 1;
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0x41;
  *(undefined4 *)(puVar5 + 2) = 1;
  *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x74);
  uVar6 = *(int *)(param_1 + 0x7c) + 1;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  cVar3 = FUN_1403a4db0(param_1 + 0x78,uVar6,0);
  if (cVar3 == '\0') {
    _DAT_1404e4f2c = CONCAT44((undefined4)DAT_14045dd20,DAT_14045dd18._4_4_);
    puVar5 = &DAT_1404e4f20;
    DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
    DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f34 = ram0x00014045dd24;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x7c);
    if ((uVar2 < uVar6) && (iVar4 = (uVar6 - uVar2) * 0x1c, iVar4 != 0)) {
      FUN_1404217a0((ulonglong)uVar2 * 0x1c + *(longlong *)(param_1 + 0x80),0,iVar4);
    }
    *(uint *)(param_1 + 0x7c) = uVar6;
    puVar5 = (undefined8 *)((ulonglong)(uVar6 - 1) * 0x1c + *(longlong *)(param_1 + 0x80));
  }
  *(undefined4 *)puVar5 = 0x63636d70;
  *(undefined4 *)((longlong)puVar5 + 4) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(puVar5 + 1) = 1;
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0x41;
  *(undefined4 *)(puVar5 + 2) = 1;
  *(undefined4 *)((longlong)puVar5 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x74);
  uVar6 = *(int *)(param_1 + 0x7c) + 1;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  cVar3 = FUN_1403a4db0(param_1 + 0x78,uVar6,0);
  if (cVar3 == '\0') {
    _DAT_1404e4f2c = CONCAT44((undefined4)DAT_14045dd20,DAT_14045dd18._4_4_);
    DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
    DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f34 = ram0x00014045dd24;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x7c);
    if ((uVar2 < uVar6) && (iVar4 = (uVar6 - uVar2) * 0x1c, iVar4 != 0)) {
      FUN_1404217a0((ulonglong)uVar2 * 0x1c + *(longlong *)(param_1 + 0x80),0,iVar4);
    }
    *(uint *)(param_1 + 0x7c) = uVar6;
    puVar8 = (undefined8 *)((ulonglong)(uVar6 - 1) * 0x1c + *(longlong *)(param_1 + 0x80));
  }
  *(undefined4 *)puVar8 = 0x6e756b74;
  *(undefined4 *)((longlong)puVar8 + 4) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(puVar8 + 1) = 1;
  *(undefined4 *)((longlong)puVar8 + 0xc) = 0x41;
  *(undefined4 *)(puVar8 + 2) = 1;
  *(undefined4 *)((longlong)puVar8 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(param_1 + 0x74);
  FUN_1403a2cd0(lVar1,0x616b686e,0x49,1);
  FUN_1403a31f0(lVar1,0,&LAB_14039bce0);
  FUN_1403a2cd0(lVar1,0x72706866,0x48,1);
  FUN_1403a31f0(lVar1,0,FUN_1403f6da0);
  FUN_1403a31f0(lVar1,0,&LAB_14039bce0);
  FUN_1403a2cd0(lVar1,0x70726566,0x49,1);
  FUN_1403a31f0(lVar1,0,FUN_1403f6ce0);
  lVar7 = 0;
  do {
    FUN_1403a2cd0(lVar1,*(undefined4 *)("frkrfvbafwlbflahftsputavtcjc" + lVar7 * 4),0x49,1);
    lVar7 = lVar7 + 1;
  } while (lVar7 != 7);
  FUN_1403a31f0(lVar1,0,FUN_1403f7c30);
  FUN_1403a31f0(lVar1,0,&LAB_1403ddc00);
  lVar7 = 0;
  do {
    FUN_1403a2cd0(lVar1,*(undefined4 *)("lositiniidemanifsvbaswlbnlahserpstsp" + lVar7 * 4),0,1);
    lVar7 = lVar7 + 1;
  } while (lVar7 != 4);
  FUN_1403a31f0(lVar1,0,0);
  lVar7 = 0;
  do {
    FUN_1403a2cd0(lVar1,*(undefined4 *)("lositiniidemanifsvbaswlbnlahserpstsp" + lVar7 * 4 + 0x10),9
                  ,1);
    lVar7 = lVar7 + 1;
  } while (lVar7 != 5);
  return;
}

