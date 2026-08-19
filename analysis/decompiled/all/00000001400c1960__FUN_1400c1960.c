// Function: FUN_1400c1960
// Addr: 1400c1960
// Size: 1547 bytes


void FUN_1400c1960(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  uint *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined8 local_res8;
  undefined1 auStack_5f8 [8];
  undefined1 auStack_5f0 [24];
  undefined8 *local_5d8;
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
  uint local_4a8 [60];
  undefined1 local_3b8 [32];
  ulonglong local_398;
  ulonglong uStack_390;
  longlong local_388;
  int local_360;
  int local_35c [13];
  uint local_328 [2];
  undefined1 local_320 [40];
  undefined1 local_2f8 [192];
  undefined1 local_238 [32];
  undefined1 local_218 [88];
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined1 local_1b4;
  uint local_1a8 [2];
  undefined1 local_1a0 [232];
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  
  puVar13 = auStack_5f8;
  if ((*(longlong *)(param_1 + 0x668) == -1) || (FUN_1400847d0(), *(int *)(param_1 + 0x4f0) == 0)) {
    return;
  }
  FUN_1400c1460(local_1a8);
  if ((*(byte *)(param_1 + 0x4f0) & 0x1d) != 0) {
    FUN_1400c1460(local_328);
    local_1b4 = *(undefined1 *)(param_1 + 0x664);
    local_328[0] = *(uint *)(param_1 + 0x4f0) & 0x1d;
    local_1c0 = *(undefined4 *)(param_1 + 0x658);
    FUN_1400c2100(local_2f8,param_1 + 0x520);
    local_1bc = *(undefined4 *)(param_1 + 0x65c);
    plVar10 = (longlong *)(param_1 + 0x4f8);
    local_1b8 = *(undefined4 *)(param_1 + 0x660);
    if ((longlong *)local_320 != plVar10) {
      if (0xf < *(ulonglong *)(param_1 + 0x510)) {
        plVar10 = (longlong *)*plVar10;
      }
                    /* WARNING: Subroutine does not return */
      FUN_14000f950(local_320,plVar10,*(undefined8 *)(param_1 + 0x508));
    }
    *(uint *)(param_1 + 0x4f0) = *(uint *)(param_1 + 0x4f0) & 0xffffffe2;
    iVar7 = func_0x000140290e50(param_1 + 0x450);
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(5);
    }
    if (*(int *)(param_1 + 0x49c) == 0x7fffffff) {
      *(undefined4 *)(param_1 + 0x49c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(6);
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
    FUN_140290f70(param_1 + 0x450);
    FUN_1400c1600(local_218);
                    /* WARNING: Subroutine does not return */
    FUN_140017310(local_238);
  }
  local_1a8[0] = *(uint *)(param_1 + 0x4f0) & 2;
  if (local_1a8[0] == 0) {
    FUN_1400c1600(&local_98);
                    /* WARNING: Subroutine does not return */
    FUN_140017310(auStack_b8);
  }
  plVar10 = (longlong *)(param_1 + 0x4f8);
  FUN_1400c2200(&local_98,param_1 + 0x600);
  if ((longlong *)local_1a0 != plVar10) {
    if (0xf < *(ulonglong *)(param_1 + 0x510)) {
      plVar10 = (longlong *)*plVar10;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14000f950(local_1a0,plVar10,*(undefined8 *)(param_1 + 0x508));
  }
  *(uint *)(param_1 + 0x4f0) = *(uint *)(param_1 + 0x4f0) & 0xfffffffd;
  FUN_1400c23a0(local_4a8,local_1a8);
  if (local_398 != uStack_390) {
    uStack_390 = local_398;
  }
  iVar7 = func_0x000140290e50(param_1 + 0x450);
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(5);
  }
  if (*(int *)(param_1 + 0x49c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x49c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290e00(6);
  }
  puVar1 = *(undefined8 **)(param_1 + 0x4b0);
  puVar2 = (undefined8 *)*puVar1;
  do {
    if (puVar2 == puVar1) {
      FUN_140290f70(param_1 + 0x450);
      FUN_1400c1600(&local_398);
                    /* WARNING: Subroutine does not return */
      FUN_140017310(local_3b8);
    }
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
        bVar16 = local_548 == local_580;
        lVar8 = *local_548;
LAB_1400c1f5f:
        (**(code **)(lVar8 + 0x20))(local_548,!bVar16);
        local_548 = (longlong *)0x0;
        goto LAB_1400c1f69;
      }
    }
    else {
      if (local_540 == '\0') {
LAB_1400c1f35:
        if (local_588 == (longlong *)0x0) {
LAB_1400c20b4:
                    /* WARNING: Subroutine does not return */
          FUN_14028c390();
        }
        puVar12 = local_1a8;
      }
      else {
        if ((local_398 == uStack_390) && (local_98 != local_90)) {
          local_5d8 = &local_res8;
          local_res8 = 0;
          cVar6 = FUN_1400c07e0(local_98,local_90 - local_98,&local_360,local_35c);
          uVar5 = local_res8;
          if (cVar6 != '\0') {
            uVar11 = local_388 - local_398;
            uVar14 = (ulonglong)(uint)(local_35c[0] * local_360 * 4);
            if (uVar14 <= uVar11) {
              if (uVar14 <= uStack_390 - local_398) {
                    /* WARNING: Subroutine does not return */
                FUN_1404211c0(local_398,local_res8,uVar14);
              }
                    /* WARNING: Subroutine does not return */
              FUN_1404211c0(local_398,local_res8,uStack_390 - local_398);
            }
            if (0x7fffffffffffffff < uVar14) goto LAB_1400c20ae;
            if (0x7fffffffffffffff - (uVar11 >> 1) < uVar11) {
              uVar15 = 0x7fffffffffffffff;
            }
            else {
              uVar15 = (uVar11 >> 1) + uVar11;
              if (uVar15 < uVar14) {
                uVar15 = uVar14;
              }
            }
            if (local_398 == 0) {
LAB_1400c1e4f:
              if (uVar15 == 0) {
                local_398 = 0;
LAB_1400c1e95:
                local_388 = local_398 + uVar15;
                uStack_390 = local_398;
                    /* WARNING: Subroutine does not return */
                FUN_1404211c0(local_398,uVar5,uVar14);
              }
              if (uVar15 < 0x1000) {
                local_398 = func_0x00014028aff0(uVar15);
                goto LAB_1400c1e95;
              }
              if (uVar15 + 0x27 <= uVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_140017440();
              }
              lVar8 = func_0x00014028aff0();
              if (lVar8 != 0) {
                local_398 = lVar8 + 0x27U & 0xffffffffffffffe0;
                *(longlong *)(local_398 - 8) = lVar8;
                goto LAB_1400c1e95;
              }
            }
            else {
              uVar9 = local_398;
              if (uVar11 < 0x1000) {
LAB_1400c1e34:
                func_0x00014028b040(uVar9,uVar11);
                local_388 = 0;
                local_398 = 0;
                uStack_390 = 0;
                goto LAB_1400c1e4f;
              }
              uVar9 = *(ulonglong *)(local_398 - 8);
              if ((local_398 - uVar9) - 8 < 0x20) {
                uVar11 = uVar11 + 0x27;
                goto LAB_1400c1e34;
              }
            }
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            puVar13 = auStack_5f0;
LAB_1400c20ae:
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar13 + -8) = &UNK_1400c20b3;
            FUN_140013120();
          }
        }
        if (local_540 == '\0') goto LAB_1400c1f35;
        if (local_588 == (longlong *)0x0) goto LAB_1400c20b4;
        puVar12 = local_4a8;
      }
      (**(code **)(*local_588 + 0x10))(local_588,puVar12);
      if (local_548 != (longlong *)0x0) {
        bVar16 = local_548 == local_580;
        lVar8 = *local_548;
        goto LAB_1400c1f5f;
      }
LAB_1400c1f69:
      if (local_588 != (longlong *)0x0) {
        (**(code **)(*local_588 + 0x20))(local_588,local_588 != local_5c0);
      }
    }
    puVar2 = (undefined8 *)*puVar2;
  } while( true );
}

