// Function: FUN_1400666c0
// Addr: 1400666c0
// Size: 980 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1400666c0(longlong *param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 uVar13;
  longlong *local_res8;
  longlong *local_res10;
  longlong local_res18;
  longlong *local_res20;
  
  local_res8 = param_1;
  FUN_14000d660(&DAT_1404e8ae0);
  plVar11 = DAT_1404e5330;
  uVar13 = DAT_1404e5338 != 0;
  plVar8 = (longlong *)*DAT_1404e5330;
  uVar7 = 0;
  local_res8 = (longlong *)CONCAT71(local_res8._1_7_,uVar13);
  local_res20 = DAT_1404e5330;
  plVar12 = DAT_1404e5330;
  for (; DAT_1404e5330 = plVar12, plVar8 != plVar11; plVar8 = (longlong *)*plVar8) {
    if ((longlong *)plVar8[6] != (longlong *)0x0) {
      (**(code **)(*(longlong *)plVar8[6] + 0x18))();
      plVar8[6] = 0;
    }
    plVar12 = DAT_1404e5330;
  }
  local_res20 = plVar12;
  if (DAT_1404e5338 != 0) {
    if (DAT_1404e5338 < DAT_1404e5360 >> 3) {
      plVar8 = (longlong *)*plVar12;
      if (plVar8 != plVar12) {
        plVar11 = plVar8 + 2;
        local_res10 = (longlong *)plVar8[1];
        if (0xf < (ulonglong)plVar8[5]) {
          plVar11 = (longlong *)*plVar11;
        }
        uVar5 = 0xcbf29ce484222325;
        if (plVar8[4] != 0) {
          do {
            pbVar1 = (byte *)((longlong)plVar11 + uVar7);
            uVar7 = uVar7 + 1;
            uVar5 = (uVar5 ^ *pbVar1) * 0x100000001b3;
          } while (uVar7 < (ulonglong)plVar8[4]);
        }
        lVar6 = (uVar5 & _DAT_1404e5358) * 0x10;
        plVar11 = *(longlong **)(lVar6 + DAT_1404e5340);
        puVar2 = (undefined8 *)(lVar6 + DAT_1404e5340);
        puVar3 = (undefined8 *)(DAT_1404e5340 + 8 + lVar6);
        plVar4 = (longlong *)*puVar3;
        plVar9 = plVar8;
        local_res18 = DAT_1404e5340;
        do {
          plVar10 = (longlong *)*plVar9;
          FUN_140017240(plVar9 + 0x18);
          FUN_140017240(plVar9 + 0x14);
          FUN_140031b80(plVar9 + 0x11);
          FUN_140031170(plVar9 + 10);
          FUN_140031170(plVar9 + 7);
          FUN_140017240(plVar9 + 2);
          thunk_FUN_14028af80(plVar9,0xe8);
          DAT_1404e5338 = DAT_1404e5338 - 1;
          if (plVar9 == plVar4) {
            plVar4 = local_res10;
            if (plVar11 == plVar8) {
              *puVar2 = plVar12;
              plVar4 = plVar12;
            }
            *puVar3 = plVar4;
            if (plVar10 != plVar12) goto LAB_1400668d0;
            goto LAB_140066884;
          }
          plVar9 = plVar10;
        } while (plVar10 != plVar12);
        if (plVar11 == plVar8) {
          *puVar2 = plVar10;
        }
LAB_140066884:
        *local_res10 = (longlong)plVar10;
        plVar10[1] = (longlong)local_res10;
        uVar13 = local_res8._0_1_;
      }
    }
    else {
      FUN_1400355f0(DAT_1404e5338,plVar12);
      *DAT_1404e5330 = (longlong)DAT_1404e5330;
      DAT_1404e5330[1] = (longlong)DAT_1404e5330;
      local_res8 = DAT_1404e5330;
      DAT_1404e5338 = 0;
      FUN_14000f7d0(DAT_1404e5340,DAT_1404e5348,&local_res8);
    }
  }
LAB_140066a4a:
  FUN_14006e0c0();
  FUN_14006e6d0();
  if ((DAT_1404e52e4 >> 0x14 & 1) != 0) {
    FUN_140074da0();
  }
  return uVar13;
LAB_1400668d0:
  do {
    plVar8 = plVar10 + 2;
    if (0xf < (ulonglong)plVar10[5]) {
      plVar8 = (longlong *)*plVar8;
    }
    uVar7 = 0;
    uVar5 = 0xcbf29ce484222325;
    if (plVar10[4] != 0) {
      do {
        pbVar1 = (byte *)(uVar7 + (longlong)plVar8);
        uVar7 = uVar7 + 1;
        uVar5 = (uVar5 ^ *pbVar1) * 0x100000001b3;
        plVar12 = local_res20;
      } while (uVar7 < (ulonglong)plVar10[4]);
    }
    uVar5 = uVar5 & _DAT_1404e5358;
    plVar8 = *(longlong **)(local_res18 + 8 + uVar5 * 0x10);
    puVar2 = (undefined8 *)(local_res18 + uVar5 * 0x10);
    plVar11 = plVar10;
    while( true ) {
      plVar10 = (longlong *)*plVar11;
      FUN_140017240(plVar11 + 0x18);
      FUN_140017240(plVar11 + 0x14);
      FUN_140031b80(plVar11 + 0x11);
      FUN_140031170(plVar11 + 10);
      FUN_140031170(plVar11 + 7);
      FUN_140017240(plVar11 + 2);
      thunk_FUN_14028af80(plVar11,0xe8);
      DAT_1404e5338 = DAT_1404e5338 - 1;
      uVar13 = local_res8._0_1_;
      if (plVar11 == plVar8) break;
      plVar11 = plVar10;
      if (plVar10 == plVar12) {
        *puVar2 = plVar10;
        *local_res10 = (longlong)plVar10;
        plVar10[1] = (longlong)local_res10;
        goto LAB_140066a4a;
      }
    }
    *puVar2 = plVar12;
    *(longlong **)(local_res18 + 8 + uVar5 * 0x10) = plVar12;
  } while (plVar10 != plVar12);
  *local_res10 = (longlong)plVar10;
  plVar10[1] = (longlong)local_res10;
  goto LAB_140066a4a;
}

