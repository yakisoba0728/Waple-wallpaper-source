// Function: FUN_140218670
// Addr: 140218670
// Size: 756 bytes


void FUN_140218670(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  code *param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *local_58;
  longlong local_50;
  
  lVar11 = param_3;
  puVar6 = param_1;
  if (param_3 < 0x21) {
    FUN_1402174d0(param_1,param_2,param_5);
    return;
  }
  do {
    puVar8 = puVar6 + 0x20;
    if (puVar6 != puVar8) {
      for (puVar7 = puVar6 + 1; puVar7 != puVar8; puVar7 = puVar7 + 1) {
        local_58 = (undefined8 *)*puVar7;
        cVar4 = (*param_5)(&local_58,puVar6);
        if (cVar4 == '\0') {
          cVar4 = (*param_5)(&local_58,puVar7 + -1);
          puVar9 = puVar7 + -1;
          puVar2 = puVar7;
          while (puVar10 = puVar9, cVar4 != '\0') {
            *puVar2 = *puVar10;
            cVar4 = (*param_5)(&local_58,puVar10 + -1);
            puVar9 = puVar10 + -1;
            puVar2 = puVar10;
          }
          *puVar2 = local_58;
        }
        else {
          FUN_1404210f0(puVar6 + 1,puVar6,(longlong)puVar7 - (longlong)puVar6);
          *puVar6 = local_58;
        }
      }
    }
    lVar11 = lVar11 + -0x20;
    puVar6 = puVar8;
  } while (0x20 < lVar11);
  FUN_1402174d0(puVar8,param_2,param_5);
  puVar6 = param_1;
  puVar8 = param_4;
  lVar11 = param_3;
  do {
    lVar1 = lVar11 + -0x20;
    puVar7 = puVar6 + 0x20;
    puVar2 = puVar6 + 0x1f;
    local_50 = lVar11 + -0x40;
    if (lVar1 < 0x20) {
      local_50 = 0;
    }
    lVar5 = 0x200;
    if (lVar1 < 0x20) {
      lVar5 = lVar11 * 8;
    }
    local_58 = (undefined8 *)(lVar5 + (longlong)puVar6);
    lVar5 = 0x1f8;
    if (lVar1 < 0x20) {
      lVar5 = lVar11 * 8 + -8;
    }
    puVar10 = (undefined8 *)(lVar5 + (longlong)puVar6);
    puVar9 = puVar7;
    while( true ) {
      while (cVar4 = (*param_5)(puVar9,puVar6), puVar3 = local_58, cVar4 != '\0') {
        *puVar8 = *puVar9;
        if (puVar9 == puVar10) {
          lVar11 = (longlong)puVar7 - (longlong)puVar6;
          FUN_1404210f0(puVar8 + 1,puVar6,lVar11);
          puVar6 = local_58;
          goto LAB_140218869;
        }
        puVar9 = puVar9 + 1;
        puVar8 = puVar8 + 1;
      }
      *puVar8 = *puVar6;
      if (puVar6 == puVar2) break;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    lVar11 = (longlong)local_58 - (longlong)puVar9;
    FUN_1404210f0(puVar8 + 1,puVar9,lVar11);
    puVar6 = puVar3;
LAB_140218869:
    puVar8 = (undefined8 *)((longlong)puVar8 + lVar11 + 8);
    lVar11 = local_50;
    if (local_50 < 0x21) {
      FUN_1404210f0(puVar8,puVar6,param_2 - (longlong)puVar6);
      lVar11 = 0x40;
      FUN_140219b90(param_4,param_4 + param_3,param_1,0x40,param_3,param_5);
      if (0x7f < param_3 + -1) {
        do {
          FUN_140219b90(param_1,param_2,param_4,lVar11 * 2,param_3,param_5);
          lVar11 = lVar11 * 4;
          FUN_140219b90(param_4,param_4 + param_3,param_1,lVar11,param_3,param_5);
        } while (lVar11 <= (param_3 + -1) / 2);
      }
      return;
    }
  } while( true );
}

