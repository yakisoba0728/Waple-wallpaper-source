// Function: FUN_1403d3cc0
// Addr: 1403d3cc0
// Size: 538 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403d3cc0(undefined8 param_1,longlong param_2,uint param_3,uint param_4,longlong param_5,
                  longlong param_6,longlong param_7)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  
  *(undefined4 *)(param_6 + 4) = 0;
  *(undefined4 *)(param_7 + 4) = 0;
  if (*(int *)(param_2 + 4) == 0) {
    puVar6 = &DAT_1404e4f20;
    puVar4 = DAT_14045dd10;
    DAT_1404e4f28 = (undefined4)DAT_14045dd18;
    _DAT_1404e4f2c = DAT_14045dd18._4_4_;
    DAT_1404e4f30 = (undefined4)DAT_14045dd20;
    DAT_1404e4f34 = DAT_14045dd20._4_4_;
  }
  else {
    puVar6 = *(undefined8 **)(param_2 + 8);
    puVar4 = DAT_1404e4f20;
  }
  do {
    if (param_4 <= param_3) {
      DAT_1404e4f20 = puVar4;
      return;
    }
    puVar7 = &DAT_1404e4f20;
    uVar1 = *(ushort *)(param_5 + (ulonglong)param_3 * 2);
    uVar8 = *(uint *)(puVar6 + 2);
    while (uVar1 < uVar8) {
      uVar8 = *(uint *)(puVar6 + -1);
      puVar6 = puVar6 + -3;
    }
    uVar8 = *(uint *)((longlong)puVar6 + 0x14);
    while (uVar8 < uVar1) {
      uVar8 = *(uint *)((longlong)puVar6 + 0x2c);
      puVar6 = puVar6 + 3;
    }
    uVar8 = *(uint *)(param_6 + 4);
    DAT_1404e4f20 = puVar4;
    if (uVar8 == 0) {
LAB_1403d3dc1:
      uVar8 = *(int *)(param_6 + 4) + 1;
      if ((int)uVar8 < 0) {
        uVar8 = 0;
      }
      cVar3 = FUN_1403a46a0(param_6,uVar8,0);
      if (cVar3 == '\0') {
        DAT_1404e4f20 = DAT_14045dd10;
      }
      else {
        uVar2 = *(uint *)(param_6 + 4);
        if ((uVar2 < uVar8) && ((uVar8 - uVar2 & 0x1fffffff) != 0)) {
          FUN_1404217a0(*(longlong *)(param_6 + 8) + (ulonglong)uVar2 * 8,0);
        }
        *(uint *)(param_6 + 4) = uVar8;
        puVar7 = (undefined8 *)(*(longlong *)(param_6 + 8) + (ulonglong)(uVar8 - 1) * 8);
      }
      uVar8 = *(int *)(param_7 + 4) + 1;
      if ((int)uVar8 < 0) {
        uVar8 = 0;
      }
      cVar3 = FUN_1403a4580(param_7,uVar8);
      if (cVar3 == '\0') {
        DAT_1404e4f20 = (undefined8 *)CONCAT44(DAT_1404e4f20._4_4_,(int)DAT_14045dd10);
        puVar4 = &DAT_1404e4f20;
      }
      else {
        uVar2 = *(uint *)(param_7 + 4);
        if ((uVar2 < uVar8) && ((uVar8 - uVar2 & 0x3fffffff) != 0)) {
          FUN_1404217a0(*(longlong *)(param_7 + 8) + (ulonglong)uVar2 * 4,0);
        }
        *(uint *)(param_7 + 4) = uVar8;
        puVar4 = (undefined8 *)(*(longlong *)(param_7 + 8) + (ulonglong)(uVar8 - 1) * 4);
      }
      if ((puVar7 == (undefined8 *)0x0) || (puVar4 == (undefined8 *)0x0)) {
        *(undefined4 *)(param_6 + 4) = 0;
        *(undefined4 *)(param_7 + 4) = 0;
        return;
      }
      *puVar7 = puVar6;
      *(undefined4 *)puVar4 = 1;
    }
    else {
      puVar5 = DAT_14045dd10;
      DAT_1404e4f20 = DAT_14045dd10;
      if (uVar8 - 1 < uVar8) {
        puVar5 = *(undefined8 **)(*(longlong *)(param_6 + 8) + (ulonglong)(uVar8 - 1) * 8);
        DAT_1404e4f20 = puVar4;
      }
      if (puVar6 != puVar5) goto LAB_1403d3dc1;
      uVar8 = *(uint *)(param_7 + 4) - 1;
      if (uVar8 < *(uint *)(param_7 + 4)) {
        *(int *)(*(longlong *)(param_7 + 8) + (ulonglong)uVar8 * 4) =
             *(int *)(*(longlong *)(param_7 + 8) + (ulonglong)uVar8 * 4) + 1;
      }
      else {
        DAT_1404e4f20 =
             (undefined8 *)CONCAT44((int)((ulonglong)DAT_1404e4f20 >> 0x20),(int)DAT_14045dd10 + 1);
      }
    }
    param_3 = param_3 + 1;
    puVar4 = DAT_1404e4f20;
  } while( true );
}

