// Function: FUN_14035ecd0
// Addr: 14035ecd0
// Size: 511 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14035ecd0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  
  lVar1 = param_1 + 0x28;
  FUN_1403a31f0(lVar1,0,FUN_14040b7c0);
  uVar8 = *(int *)(param_1 + 0x7c) + 1;
  if ((int)uVar8 < 0) {
    uVar8 = 0;
  }
  cVar3 = FUN_1403a4db0(param_1 + 0x78,uVar8,0);
  puVar6 = &DAT_1404e4f20;
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
    if ((uVar2 < uVar8) && (iVar4 = (uVar8 - uVar2) * 0x1c, iVar4 != 0)) {
      FUN_1404217a0((ulonglong)uVar2 * 0x1c + *(longlong *)(param_1 + 0x80),0,iVar4);
    }
    *(uint *)(param_1 + 0x7c) = uVar8;
    puVar5 = (undefined8 *)((ulonglong)(uVar8 - 1) * 0x1c + *(longlong *)(param_1 + 0x80));
  }
  *(undefined4 *)puVar5 = 0x6c6f636c;
  *(undefined4 *)((longlong)puVar5 + 4) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(puVar5 + 1) = 1;
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0x41;
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
    DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
    DAT_1404e4f20._4_4_ = DAT_14045dd10._4_4_;
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f34 = ram0x00014045dd24;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x7c);
    if ((uVar2 < uVar8) && (iVar4 = (uVar8 - uVar2) * 0x1c, iVar4 != 0)) {
      FUN_1404217a0((ulonglong)uVar2 * 0x1c + *(longlong *)(param_1 + 0x80),0,iVar4);
    }
    *(uint *)(param_1 + 0x7c) = uVar8;
    puVar6 = (undefined8 *)((ulonglong)(uVar8 - 1) * 0x1c + *(longlong *)(param_1 + 0x80));
  }
  *(undefined4 *)puVar6 = 0x63636d70;
  *(undefined4 *)((longlong)puVar6 + 4) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(puVar6 + 1) = 1;
  *(undefined4 *)((longlong)puVar6 + 0xc) = 0x41;
  *(undefined4 *)(puVar6 + 2) = 1;
  *(undefined4 *)((longlong)puVar6 + 0x14) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(param_1 + 0x74);
  FUN_1403a31f0(lVar1,0,FUN_1403f78b0);
  lVar7 = 0;
  do {
    FUN_1403a2cd0(lVar1,(&DAT_14045d198)[lVar7],0x49,1);
    FUN_1403a31f0(lVar1,0,0);
    lVar7 = lVar7 + 1;
  } while (lVar7 != 4);
  FUN_1403a31f0(lVar1,0,&LAB_1403ddc00);
  lVar7 = 0;
  do {
    FUN_1403a2cd0(lVar1,*(undefined4 *)("serpsvbaswlbstsp.notdef" + lVar7 * 4),9,1);
    lVar7 = lVar7 + 1;
  } while (lVar7 != 4);
  return;
}

