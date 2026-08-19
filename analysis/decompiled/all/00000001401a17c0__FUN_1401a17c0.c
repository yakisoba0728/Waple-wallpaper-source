// Function: FUN_1401a17c0
// Addr: 1401a17c0
// Size: 492 bytes


void FUN_1401a17c0(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
                  code *param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  lVar4 = param_3;
  puVar5 = param_1;
  if (param_3 < 0x21) {
    FUN_14019feb0(param_1,param_2,param_5);
    return;
  }
  do {
    puVar7 = puVar5 + 0x20;
    if (puVar5 != puVar7) {
      for (puVar6 = puVar5 + 1; puVar6 != puVar7; puVar6 = puVar6 + 1) {
        uVar1 = *puVar6;
        cVar3 = (*param_5)(uVar1,*puVar5);
        if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(puVar5 + 1,puVar5,(longlong)puVar6 - (longlong)puVar5);
        }
        cVar3 = (*param_5)(uVar1,puVar6[-1]);
        puVar2 = puVar6;
        while (cVar3 != '\0') {
          *puVar2 = puVar2[-1];
          cVar3 = (*param_5)(uVar1,puVar2[-2]);
          puVar2 = puVar2 + -1;
        }
        *puVar2 = uVar1;
      }
    }
    lVar4 = lVar4 + -0x20;
    puVar5 = puVar7;
  } while (0x20 < lVar4);
  FUN_14019feb0(puVar7,param_2,param_5);
  lVar8 = 0x1f8;
  lVar4 = 0x200;
  if (param_3 + -0x20 < 0x20) {
    lVar8 = param_3 * 8 + -8;
    lVar4 = param_3 * 8;
  }
  puVar5 = param_1;
  puVar7 = param_1 + 0x20;
  while( true ) {
    while (cVar3 = (*param_5)(*puVar7,*puVar5), cVar3 != '\0') {
      *param_4 = *puVar7;
      if (puVar7 == (undefined8 *)(lVar8 + (longlong)param_1)) {
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(param_4 + 1,puVar5,(longlong)(param_1 + 0x20) - (longlong)puVar5);
      }
      puVar7 = puVar7 + 1;
      param_4 = param_4 + 1;
    }
    *param_4 = *puVar5;
    if (puVar5 == param_1 + 0x1f) break;
    puVar5 = puVar5 + 1;
    param_4 = param_4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1404211c0(param_4 + 1,puVar7,(longlong)param_1 + (lVar4 - (longlong)puVar7));
}

