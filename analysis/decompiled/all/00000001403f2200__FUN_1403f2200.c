// Function: FUN_1403f2200
// Addr: 1403f2200
// Size: 771 bytes


void FUN_1403f2200(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  bool bVar14;
  undefined4 uVar15;
  
  if (*(char *)(param_1 + 0x1202) != '\0') {
    return;
  }
  puVar5 = (undefined8 *)**(undefined8 **)(param_1 + 0x11f8);
  if (puVar5 == (undefined8 *)0x0) {
LAB_1403f2258:
    puVar5 = (undefined8 *)_calloc_base(1,0x10);
    if (puVar5 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x11f0) = 0;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + 1;
      goto LAB_1403f24dd;
    }
    *puVar5 = 0;
    puVar5[1] = 0;
  }
  else {
    LOCK();
    bVar14 = puVar5 == (undefined8 *)**(undefined8 **)(param_1 + 0x11f8);
    if (bVar14) {
      **(undefined8 **)(param_1 + 0x11f8) = 0;
    }
    UNLOCK();
    if (!bVar14) goto LAB_1403f2258;
  }
  lVar2 = *(longlong *)(param_1 + 0x11e0);
  puVar10 = &DAT_14045dd10;
  lVar12 = lVar2 + 2;
  *(undefined8 **)(param_1 + 0x11f0) = puVar5;
  if (*(uint *)(param_1 + 0x11ec) < (uint)*(byte *)(lVar2 + 8) * 0x100 + (uint)*(byte *)(lVar2 + 9))
  {
    pbVar9 = (byte *)(lVar12 + ((ulonglong)*(uint *)(param_1 + 0x11ec) + 2) * 4);
  }
  else {
    pbVar9 = (byte *)&DAT_14045dd10;
  }
  uVar7 = (uint)pbVar9[3] +
          (uint)pbVar9[1] * 0x10000 + (uint)pbVar9[2] * 0x100 + (uint)*pbVar9 * 0x1000000;
  if (uVar7 == 0) {
    puVar6 = &DAT_14045dd10;
  }
  else {
    puVar6 = (undefined8 *)((ulonglong)uVar7 + lVar12);
  }
  uVar7 = (uint)*(byte *)((longlong)puVar6 + 4) * 0x100 + (uint)*(byte *)((longlong)puVar6 + 5);
  *(uint *)(param_1 + 0x11e8) = uVar7;
  if (*(char *)(param_1 + 0x1200) != '\0') {
    cVar4 = FUN_1403a4580(puVar5,uVar7,CONCAT71((int7)((ulonglong)lVar12 >> 8),1));
    if (cVar4 == '\0') {
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x10) + 1;
    }
    else {
      uVar13 = *(uint *)((longlong)puVar5 + 4);
      if ((uVar13 < uVar7) && ((uVar7 - uVar13 & 0x3fffffff) != 0)) {
        FUN_1404217a0(puVar5[1] + (ulonglong)uVar13 * 4,0,(uVar7 - uVar13) * 4);
      }
      *(uint *)((longlong)puVar5 + 4) = uVar7;
      if (*(int *)(*(longlong *)(param_1 + 0x11f0) + 4) == 0) {
        puVar5 = &DAT_1404e4f20;
        DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
      }
      else {
        puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 0x11f0) + 8);
      }
      uVar1 = *(undefined4 *)(param_1 + 0x11d8);
      lVar2 = *(longlong *)(param_1 + 0x11e0);
      uVar3 = *(undefined8 *)(param_1 + 0x11d0);
      lVar12 = lVar2 + 2;
      uVar7 = *(uint *)(param_1 + 0x11e8);
      uVar13 = (uint)*(byte *)(lVar2 + 5) * 0x10000 + (uint)*(byte *)(lVar2 + 6) * 0x100 +
               (uint)*(byte *)(lVar2 + 4) * 0x1000000 + (uint)*(byte *)(lVar2 + 7);
      if (uVar13 == 0) {
        puVar6 = &DAT_14045dd10;
      }
      else {
        puVar6 = (undefined8 *)((ulonglong)uVar13 + lVar12);
      }
      if (*(uint *)(param_1 + 0x11ec) <
          (uint)*(byte *)(lVar2 + 9) + (uint)*(byte *)(lVar2 + 8) * 0x100) {
        pbVar9 = (byte *)(lVar12 + ((ulonglong)*(uint *)(param_1 + 0x11ec) + 2) * 4);
      }
      else {
        pbVar9 = (byte *)&DAT_14045dd10;
      }
      uVar13 = (uint)pbVar9[3] +
               (uint)pbVar9[1] * 0x10000 + (uint)pbVar9[2] * 0x100 + (uint)*pbVar9 * 0x1000000;
      if (uVar13 != 0) {
        puVar10 = (undefined8 *)((ulonglong)uVar13 + lVar12);
      }
      uVar8 = (uint)*(byte *)((longlong)puVar10 + 5) +
              (uint)*(byte *)((longlong)puVar10 + 4) * 0x100;
      uVar13 = uVar7;
      if (uVar8 < uVar7) {
        uVar13 = uVar8;
      }
      uVar11 = 0;
      if (uVar13 != 0) {
        do {
          uVar8 = (uint)*(byte *)((longlong)puVar10 + uVar11 * 2 + 7) +
                  (uint)*(byte *)((longlong)puVar10 + uVar11 * 2 + 6) * 0x100;
          if (uVar8 < (uint)*(byte *)((longlong)puVar6 + 2) * 0x100 +
                      (uint)*(byte *)((longlong)puVar6 + 3)) {
            uVar15 = FUN_1403bf460(puVar6,uVar8,uVar3,uVar1);
          }
          else {
            uVar15 = 0;
          }
          *(undefined4 *)((longlong)puVar5 + uVar11 * 4) = uVar15;
          uVar8 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar8;
        } while (uVar8 < uVar13);
      }
      if (uVar13 < uVar7) {
        FUN_1404217a0((longlong)puVar5 + (ulonglong)uVar13 * 4,0,(ulonglong)(uVar7 - uVar13) << 2);
      }
    }
  }
LAB_1403f24dd:
  *(undefined1 *)(param_1 + 0x1202) = 1;
  return;
}

