// Function: FUN_1400c1890
// Addr: 1400c1890
// Size: 1941 bytes


void FUN_1400c1890(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  uint *puVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  bool bVar17;
  longlong local_res8;
  undefined1 auStack_5f8 [8];
  undefined1 auStack_5f0 [24];
  longlong *local_5d8;
  undefined4 local_5c8;
  longlong local_5c0 [7];
  longlong *local_588;
  longlong local_580 [7];
  longlong *local_548;
  char local_540;
  undefined4 local_538;
  longlong local_530 [7];
  longlong *local_4f8;
  longlong local_4f0 [7];
  longlong *local_4b8;
  undefined1 local_4b0;
  uint local_4a8 [2];
  undefined1 local_4a0 [40];
  undefined1 local_478 [32];
  undefined1 local_458 [32];
  undefined1 local_438 [32];
  undefined1 local_418 [32];
  undefined1 local_3f8 [32];
  undefined1 local_3d8 [32];
  undefined1 local_3b8 [32];
  ulonglong local_398;
  ulonglong uStack_390;
  longlong local_388;
  int local_360;
  int local_35c [13];
  uint local_328 [2];
  undefined1 local_320 [40];
  undefined1 local_2f8 [32];
  undefined1 local_2d8 [32];
  undefined1 local_2b8 [32];
  undefined1 local_298 [32];
  undefined1 local_278 [32];
  undefined1 local_258 [32];
  undefined1 local_238 [32];
  undefined1 local_218 [88];
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined1 local_1b4;
  uint local_1a8 [2];
  undefined1 local_1a0 [40];
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [32];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  longlong local_98;
  longlong local_90;
  
  puVar14 = auStack_5f8;
  if ((*(longlong *)(param_1 + 0x668) != -1) && (FUN_140084700(), *(int *)(param_1 + 0x4f0) != 0)) {
    FUN_1400c1390(local_1a8);
    if ((*(byte *)(param_1 + 0x4f0) & 0x1d) != 0) {
      FUN_1400c1390(local_328);
      local_1b4 = *(undefined1 *)(param_1 + 0x664);
      local_328[0] = *(uint *)(param_1 + 0x4f0) & 0x1d;
      local_1c0 = *(undefined4 *)(param_1 + 0x658);
      FUN_1400c2030(local_2f8,param_1 + 0x520);
      local_1bc = *(undefined4 *)(param_1 + 0x65c);
      plVar11 = (longlong *)(param_1 + 0x4f8);
      local_1b8 = *(undefined4 *)(param_1 + 0x660);
      if ((longlong *)local_320 != plVar11) {
        if (0xf < *(ulonglong *)(param_1 + 0x510)) {
          plVar11 = (longlong *)*plVar11;
        }
        FUN_14000f880(local_320,plVar11,*(undefined8 *)(param_1 + 0x508));
      }
      *(uint *)(param_1 + 0x4f0) = *(uint *)(param_1 + 0x4f0) & 0xffffffe2;
      iVar6 = FUN_140290d80(param_1 + 0x450);
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(5);
      }
      if (*(int *)(param_1 + 0x49c) == 0x7fffffff) {
        *(undefined4 *)(param_1 + 0x49c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(6);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x4b0);
      for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
        puVar3 = (undefined8 *)puVar2[10];
        local_538 = *(undefined4 *)(puVar2 + 2);
        local_4f8 = (longlong *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          local_4f8 = (longlong *)(**(code **)*puVar3)(puVar3,local_530);
        }
        puVar3 = (undefined8 *)puVar2[0x12];
        local_4b8 = (longlong *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          local_4b8 = (longlong *)(**(code **)*puVar3)(puVar3,local_4f0);
        }
        local_4b0 = *(undefined1 *)(puVar2 + 0x13);
        if (local_4f8 != (longlong *)0x0) {
          (**(code **)(*local_4f8 + 0x10))(local_4f8,local_328);
        }
        if (local_4b8 != (longlong *)0x0) {
          (**(code **)(*local_4b8 + 0x20))(local_4b8,local_4b8 != local_4f0);
          local_4b8 = (longlong *)0x0;
        }
        if (local_4f8 != (longlong *)0x0) {
          (**(code **)(*local_4f8 + 0x20))
                    (local_4f8,CONCAT71((int7)((ulonglong)local_530 >> 8),local_4f8 != local_530));
        }
      }
      FUN_140290ea0(param_1 + 0x450);
      FUN_1400c1530(local_218);
      FUN_140017240(local_238);
      FUN_140017240(local_258);
      FUN_140017240(local_278);
      FUN_140017240(local_298);
      FUN_140017240(local_2b8);
      FUN_140017240(local_2d8);
      FUN_140017240(local_2f8);
      FUN_140017240(local_320);
    }
    uVar7 = *(uint *)(param_1 + 0x4f0) & 2;
    if (uVar7 != 0) {
      plVar11 = (longlong *)(param_1 + 0x4f8);
      local_1a8[0] = uVar7;
      FUN_1400c2130(&local_98,param_1 + 0x600);
      if ((longlong *)local_1a0 != plVar11) {
        if (0xf < *(ulonglong *)(param_1 + 0x510)) {
          plVar11 = (longlong *)*plVar11;
        }
        FUN_14000f880(local_1a0,plVar11,*(undefined8 *)(param_1 + 0x508));
      }
      *(uint *)(param_1 + 0x4f0) = *(uint *)(param_1 + 0x4f0) & 0xfffffffd;
      FUN_1400c22d0(local_4a8,local_1a8);
      if (local_398 != uStack_390) {
        uStack_390 = local_398;
      }
      iVar6 = FUN_140290d80(param_1 + 0x450);
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(5);
      }
      if (*(int *)(param_1 + 0x49c) == 0x7fffffff) {
        *(undefined4 *)(param_1 + 0x49c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_140290d30(6);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x4b0);
      for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
        puVar3 = (undefined8 *)puVar2[10];
        local_5c8 = *(undefined4 *)(puVar2 + 2);
        local_588 = (longlong *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          local_588 = (longlong *)(**(code **)*puVar3)(puVar3,local_5c0);
        }
        puVar3 = (undefined8 *)puVar2[0x12];
        local_548 = (longlong *)0x0;
        if (puVar3 != (undefined8 *)0x0) {
          local_548 = (longlong *)(**(code **)*puVar3)(puVar3,local_580);
        }
        local_540 = *(char *)(puVar2 + 0x13);
        if (local_588 == (longlong *)0x0) {
          if (local_548 != (longlong *)0x0) {
            bVar17 = local_548 == local_580;
            lVar9 = *local_548;
LAB_1400c1e8f:
            (**(code **)(lVar9 + 0x20))(local_548,!bVar17);
            local_548 = (longlong *)0x0;
            goto LAB_1400c1e99;
          }
        }
        else {
          if (local_540 == '\0') {
LAB_1400c1e65:
            if (local_588 == (longlong *)0x0) {
LAB_1400c1fe4:
                    /* WARNING: Subroutine does not return */
              FUN_14028c2c0();
            }
            puVar13 = local_1a8;
          }
          else {
            if ((local_398 == uStack_390) && (local_98 != local_90)) {
              local_5d8 = &local_res8;
              local_res8 = 0;
              cVar5 = FUN_1400c0710(local_98,local_90 - local_98,&local_360,local_35c);
              lVar9 = local_res8;
              if (cVar5 != '\0') {
                uVar12 = local_388 - local_398;
                uVar7 = local_35c[0] * local_360 * 4;
                uVar15 = (ulonglong)uVar7;
                if (uVar12 < uVar15) {
                  if (0x7fffffffffffffff < uVar15) goto LAB_1400c1fde;
                  if (0x7fffffffffffffff - (uVar12 >> 1) < uVar12) {
                    uVar16 = 0x7fffffffffffffff;
                  }
                  else {
                    uVar16 = (uVar12 >> 1) + uVar12;
                    if (uVar16 < uVar15) {
                      uVar16 = uVar15;
                    }
                  }
                  if (local_398 != 0) {
                    uVar10 = local_398;
                    if (uVar12 < 0x1000) {
LAB_1400c1d64:
                      thunk_FUN_14028af80(uVar10,uVar12);
                      local_388 = 0;
                      local_398 = 0;
                      uStack_390 = 0;
                      goto LAB_1400c1d7f;
                    }
                    uVar10 = *(ulonglong *)(local_398 - 8);
                    if ((local_398 - uVar10) - 8 < 0x20) {
                      uVar12 = uVar12 + 0x27;
                      goto LAB_1400c1d64;
                    }
LAB_1400c1fd7:
                    pcVar4 = (code *)swi(0x29);
                    (*pcVar4)(5);
                    puVar14 = auStack_5f0;
LAB_1400c1fde:
                    /* WARNING: Subroutine does not return */
                    *(undefined **)(puVar14 + -8) = &UNK_1400c1fe3;
                    FUN_140013050();
                  }
LAB_1400c1d7f:
                  if (uVar16 == 0) {
                    local_398 = 0;
                  }
                  else if (uVar16 < 0x1000) {
                    local_398 = FUN_14028af20(uVar16);
                  }
                  else {
                    if (uVar16 + 0x27 <= uVar16) {
                    /* WARNING: Subroutine does not return */
                      FUN_140017370();
                    }
                    lVar8 = FUN_14028af20();
                    if (lVar8 == 0) goto LAB_1400c1fd7;
                    local_398 = lVar8 + 0x27U & 0xffffffffffffffe0;
                    *(longlong *)(local_398 - 8) = lVar8;
                  }
                  local_388 = local_398 + uVar16;
                  lVar8 = lVar9;
                  uStack_390 = local_398;
LAB_1400c1e0b:
                  uVar12 = uStack_390;
                  FUN_1404210f0(uStack_390,lVar8,uVar15);
                  uStack_390 = uVar15 + uVar12;
                }
                else {
                  uVar12 = uStack_390 - local_398;
                  if (uVar12 < uVar15) {
                    FUN_1404210f0(local_398,local_res8,uVar12);
                    lVar8 = uVar12 + lVar9;
                    uVar15 = uVar15 - uVar12;
                    goto LAB_1400c1e0b;
                  }
                  uVar12 = local_398 + uVar7;
                  FUN_1404210f0(local_398,local_res8,uVar15);
                  uStack_390 = uVar12;
                }
                thunk_FUN_14028af80(lVar9);
              }
            }
            if (local_540 == '\0') goto LAB_1400c1e65;
            if (local_588 == (longlong *)0x0) goto LAB_1400c1fe4;
            puVar13 = local_4a8;
          }
          (**(code **)(*local_588 + 0x10))(local_588,puVar13);
          if (local_548 != (longlong *)0x0) {
            bVar17 = local_548 == local_580;
            lVar9 = *local_548;
            goto LAB_1400c1e8f;
          }
LAB_1400c1e99:
          if (local_588 != (longlong *)0x0) {
            (**(code **)(*local_588 + 0x20))(local_588,local_588 != local_5c0);
          }
        }
      }
      FUN_140290ea0(param_1 + 0x450);
      FUN_1400c1530(&local_398);
      FUN_140017240(local_3b8);
      FUN_140017240(local_3d8);
      FUN_140017240(local_3f8);
      FUN_140017240(local_418);
      FUN_140017240(local_438);
      FUN_140017240(local_458);
      FUN_140017240(local_478);
      FUN_140017240(local_4a0);
    }
    FUN_1400c1530(&local_98);
    FUN_140017240(local_b8);
    FUN_140017240(local_d8);
    FUN_140017240(local_f8);
    FUN_140017240(local_118);
    FUN_140017240(local_138);
    FUN_140017240(local_158);
    FUN_140017240(local_178);
    FUN_140017240(local_1a0);
  }
  return;
}

