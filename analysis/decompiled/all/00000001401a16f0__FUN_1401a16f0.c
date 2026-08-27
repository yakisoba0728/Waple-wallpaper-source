// Function: FUN_1401a16f0
// Addr: 1401a16f0
// Size: 741 bytes


void FUN_1401a16f0(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  code *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  
  lVar5 = param_3;
  puVar8 = param_1;
  if (param_3 < 0x21) {
    FUN_14019fde0(param_1,param_2,param_5);
    return;
  }
  do {
    puVar10 = puVar8 + 0x20;
    if (puVar8 != puVar10) {
      for (puVar9 = puVar8 + 1; puVar9 != puVar10; puVar9 = puVar9 + 1) {
        uVar2 = *puVar9;
        cVar4 = (*param_5)(uVar2,*puVar8);
        if (cVar4 == '\0') {
          cVar4 = (*param_5)(uVar2,puVar9[-1]);
          puVar3 = puVar9;
          while (cVar4 != '\0') {
            *puVar3 = puVar3[-1];
            cVar4 = (*param_5)(uVar2,puVar3[-2]);
            puVar3 = puVar3 + -1;
          }
          *puVar3 = uVar2;
        }
        else {
          FUN_1404210f0(puVar8 + 1,puVar8,(longlong)puVar9 - (longlong)puVar8);
          *puVar8 = uVar2;
        }
      }
    }
    lVar5 = lVar5 + -0x20;
    puVar8 = puVar10;
  } while (0x20 < lVar5);
  FUN_14019fde0(puVar10,param_2,param_5);
  puVar8 = param_1;
  puVar10 = param_4;
  lVar5 = param_3;
  do {
    lVar1 = lVar5 + -0x20;
    puVar9 = puVar8 + 0x20;
    puVar3 = puVar8 + 0x1f;
    lVar12 = lVar5 + -0x40;
    if (lVar1 < 0x20) {
      lVar12 = 0;
    }
    lVar6 = 0x200;
    if (lVar1 < 0x20) {
      lVar6 = lVar5 * 8;
    }
    puVar7 = (undefined8 *)(lVar6 + (longlong)puVar8);
    lVar6 = 0x1f8;
    if (lVar1 < 0x20) {
      lVar6 = lVar5 * 8 + -8;
    }
    puVar13 = (undefined8 *)(lVar6 + (longlong)puVar8);
    puVar11 = puVar9;
    while( true ) {
      while (cVar4 = (*param_5)(*puVar11,*puVar8), cVar4 != '\0') {
        *puVar10 = *puVar11;
        if (puVar11 == puVar13) {
          lVar5 = (longlong)puVar9 - (longlong)puVar8;
          FUN_1404210f0(puVar10 + 1,puVar8,lVar5);
          goto LAB_1401a18d9;
        }
        puVar11 = puVar11 + 1;
        puVar10 = puVar10 + 1;
      }
      *puVar10 = *puVar8;
      if (puVar8 == puVar3) break;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    lVar5 = (longlong)puVar7 - (longlong)puVar11;
    FUN_1404210f0(puVar10 + 1,puVar11,lVar5);
LAB_1401a18d9:
    puVar10 = (undefined8 *)((longlong)puVar10 + lVar5 + 8);
    puVar8 = puVar7;
    lVar5 = lVar12;
    if (lVar12 < 0x21) {
      FUN_1404210f0(puVar10,puVar7,param_2 - (longlong)puVar7);
      lVar5 = 0x40;
      FUN_1401a2b40(param_4,param_4 + param_3,param_1,0x40,param_3,param_5);
      if (0x7f < param_3 + -1) {
        do {
          FUN_1401a2b40(param_1,param_2,param_4,lVar5 * 2,param_3,param_5);
          lVar5 = lVar5 * 4;
          FUN_1401a2b40(param_4,param_4 + param_3,param_1,lVar5,param_3,param_5);
        } while (lVar5 <= (param_3 + -1) / 2);
      }
      return;
    }
  } while( true );
}

