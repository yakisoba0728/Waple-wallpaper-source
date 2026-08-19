// Function: FUN_1403d3d90
// Addr: 1403d3d90
// Size: 355 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403d3d90(undefined8 param_1,longlong param_2,uint param_3,uint param_4,longlong param_5,
                  longlong param_6,longlong param_7)

{
  ushort uVar1;
  uint uVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  
  *(undefined4 *)(param_6 + 4) = 0;
  *(undefined4 *)(param_7 + 4) = 0;
  if (*(int *)(param_2 + 4) == 0) {
    puVar6 = &DAT_1404e4ff0;
    puVar3 = DAT_14045dde0;
    DAT_1404e4ff8._0_4_ = _DAT_14045dde8;
    DAT_1404e4ff8._4_4_ = _DAT_14045ddec;
    DAT_1404e5000 = (undefined4)DAT_14045ddf0;
    DAT_1404e5004 = DAT_14045ddf0._4_4_;
  }
  else {
    puVar6 = *(undefined8 **)(param_2 + 8);
    puVar3 = DAT_1404e4ff0;
  }
  while( true ) {
    if (param_4 <= param_3) {
      DAT_1404e4ff0 = puVar3;
      return;
    }
    uVar1 = *(ushort *)(param_5 + (ulonglong)param_3 * 2);
    uVar7 = *(uint *)(puVar6 + 2);
    while (uVar1 < uVar7) {
      uVar7 = *(uint *)(puVar6 + -1);
      puVar6 = puVar6 + -3;
    }
    uVar7 = *(uint *)((longlong)puVar6 + 0x14);
    while (uVar7 < uVar1) {
      uVar7 = *(uint *)((longlong)puVar6 + 0x2c);
      puVar6 = puVar6 + 3;
    }
    uVar7 = *(uint *)(param_6 + 4);
    DAT_1404e4ff0 = puVar3;
    if (uVar7 == 0) break;
    puVar5 = DAT_14045dde0;
    DAT_1404e4ff0 = DAT_14045dde0;
    if (uVar7 - 1 < uVar7) {
      puVar5 = *(undefined8 **)(*(longlong *)(param_6 + 8) + (ulonglong)(uVar7 - 1) * 8);
      DAT_1404e4ff0 = puVar3;
    }
    if (puVar6 != puVar5) break;
    uVar7 = *(uint *)(param_7 + 4) - 1;
    if (uVar7 < *(uint *)(param_7 + 4)) {
      *(int *)(*(longlong *)(param_7 + 8) + (ulonglong)uVar7 * 4) =
           *(int *)(*(longlong *)(param_7 + 8) + (ulonglong)uVar7 * 4) + 1;
    }
    else {
      DAT_1404e4ff0 =
           (undefined8 *)CONCAT44((int)((ulonglong)DAT_1404e4ff0 >> 0x20),(int)DAT_14045dde0 + 1);
    }
    param_3 = param_3 + 1;
    puVar3 = DAT_1404e4ff0;
  }
  uVar7 = *(int *)(param_6 + 4) + 1;
  if ((int)uVar7 < 0) {
    uVar7 = 0;
  }
  cVar4 = FUN_1403a4770(param_6,uVar7,0);
  if (cVar4 == '\0') {
    DAT_1404e4ff0 = DAT_14045dde0;
  }
  else {
    uVar2 = *(uint *)(param_6 + 4);
    if ((uVar2 < uVar7) && ((uVar7 - uVar2 & 0x1fffffff) != 0)) {
      func_0x000140421870(*(longlong *)(param_6 + 8) + (ulonglong)uVar2 * 8,0,(uVar7 - uVar2) * 8);
    }
    *(uint *)(param_6 + 4) = uVar7;
  }
  iVar8 = *(int *)(param_7 + 4) + 1;
  if (iVar8 < 0) {
    iVar8 = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1403a4650(param_7,iVar8,0);
}

