// Function: FUN_1403f79e0
// Addr: 1403f79e0
// Size: 587 bytes


void FUN_1403f79e0(longlong param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  lVar3 = *(longlong *)(param_1 + 0x70);
  uVar9 = (ulonglong)param_2;
  uVar11 = (ulonglong)param_2;
  puVar1 = (undefined8 *)(lVar3 + uVar9 * 0x14);
  if ((1 << (*(byte *)(lVar3 + 0xf + uVar9 * 0x14) & 0xf) & 0xa7U) == 0) {
    return;
  }
  uVar10 = uVar9;
  if ((*(char *)((longlong)puVar1 + 0x12) == '\x12') && (uVar8 = param_2, 1 < param_3 - param_2)) {
    do {
      uVar6 = uVar8 + 1;
      if (param_3 <= uVar6) goto joined_r0x0001403f7b1f;
      bVar7 = *(byte *)(lVar3 + 0x12 + (ulonglong)uVar6 * 0x14);
    } while (((0x3f < bVar7) ||
             (((0xe0ee7fc00000U >> ((ulonglong)bVar7 & 0x3f) & 1) == 0 &&
              (((0x35 < bVar7 || ((0x20100000001000U >> ((ulonglong)bVar7 & 0x3f) & 1) == 0)) ||
               ((*(byte *)(lVar3 + (ulonglong)uVar6 * 0x14 + 0xc) & 0x20) != 0)))))) &&
            (uVar8 = uVar6, uVar6 != param_3 - 1));
    if (1 < (uVar8 + 1) - param_2) {
      if (*(uint *)(param_1 + 0x1c) < 2) {
        FUN_1403ec280(param_1,uVar9);
      }
      else {
        FUN_14040eef0();
      }
    }
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    uVar2 = *(undefined4 *)(puVar1 + 2);
    FUN_1404210f0(puVar1,lVar3 + (ulonglong)(param_2 + 1) * 0x14,(ulonglong)(uVar8 - param_2) * 0x14
                 );
    puVar1 = (undefined8 *)(lVar3 + (ulonglong)uVar8 * 0x14);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    *(undefined4 *)(lVar3 + 0x10 + (ulonglong)uVar8 * 0x14) = uVar2;
  }
joined_r0x0001403f7b1f:
  do {
    if (param_3 <= param_2) {
      return;
    }
    bVar7 = *(byte *)(lVar3 + 0x12 + uVar11 * 0x14);
    puVar1 = (undefined8 *)(lVar3 + uVar11 * 0x14);
    param_2 = (uint)uVar9;
    if (bVar7 < 0x20) {
      uVar8 = 1 << (bVar7 & 0x1f);
      if (bVar7 != 0xc) goto LAB_1403f7b52;
LAB_1403f7b5c:
      if ((*(byte *)((longlong)puVar1 + 0xc) & 0x20) != 0) goto LAB_1403f7b66;
      uVar10 = (ulonglong)(param_2 + 1);
    }
    else {
      uVar8 = 0;
LAB_1403f7b52:
      if ((bVar7 == 0x35) || (bVar7 == 0x2c)) goto LAB_1403f7b5c;
LAB_1403f7b66:
      if ((uVar8 & 0xc00000) != 0) {
        bVar7 = 0;
        if ((*(byte *)((longlong)puVar1 + 0xe) & 0x10) == 0) {
          bVar7 = *(byte *)((longlong)puVar1 + 0xe) & 0xf;
        }
        if ((bVar7 == 0) && (uVar8 = (uint)uVar10, uVar8 < param_2)) {
          if (1 < (param_2 - uVar8) + 1) {
            if (*(uint *)(param_1 + 0x1c) < 2) {
              FUN_1403ec280(param_1,uVar10,param_2 + 1);
            }
            else {
              FUN_14040eef0();
            }
          }
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          uVar2 = *(undefined4 *)(puVar1 + 2);
          puVar1 = (undefined8 *)(lVar3 + uVar10 * 0x14);
          FUN_1404210f0(lVar3 + (ulonglong)(uVar8 + 1) * 0x14,puVar1,
                        (ulonglong)(param_2 - uVar8) * 0x14);
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          *(undefined4 *)(puVar1 + 2) = uVar2;
        }
      }
    }
    param_2 = param_2 + 1;
    uVar9 = (ulonglong)param_2;
    uVar11 = uVar11 + 1;
  } while( true );
}

