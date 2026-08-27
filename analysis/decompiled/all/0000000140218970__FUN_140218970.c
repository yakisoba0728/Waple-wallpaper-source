// Function: FUN_140218970
// Addr: 140218970
// Size: 1076 bytes


void FUN_140218970(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 *param_6,longlong param_7,code *param_8)

{
  undefined8 uVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  
  if (param_2 == param_3) {
    return;
  }
  while( true ) {
    if (param_1 == param_2) {
      return;
    }
    cVar3 = (*param_8)(param_2,param_1);
    if (cVar3 != '\0') break;
    param_1 = param_1 + 1;
    param_4 = param_4 + -1;
  }
  while( true ) {
    puVar7 = param_3 + -1;
    if (param_2 == puVar7) {
      uVar1 = *param_2;
      FUN_1404210f0((longlong)puVar7 + (8 - ((longlong)param_2 - (longlong)param_1)),param_1,
                    (longlong)param_2 - (longlong)param_1);
      *param_1 = uVar1;
      return;
    }
    cVar3 = (*param_8)(puVar7,param_2 + -1);
    if (cVar3 != '\0') break;
    param_5 = param_5 + -1;
    param_3 = puVar7;
  }
  if (param_4 != 1) {
    if ((param_4 <= param_5) && (param_4 <= param_7)) {
      lVar5 = (longlong)param_2 - (longlong)param_1;
      FUN_1404210f0(param_6,param_1,lVar5);
      *param_1 = *param_2;
      param_2 = param_2 + 1;
      puVar7 = param_6;
      do {
        while( true ) {
          puVar6 = param_1;
          param_1 = puVar6 + 1;
          cVar3 = (*param_8)(param_2,puVar7);
          if (cVar3 != '\0') break;
          *param_1 = *puVar7;
          if (puVar7 == (undefined8 *)((longlong)param_6 + lVar5 + -0x10)) {
            uVar1 = *(undefined8 *)((longlong)param_6 + lVar5 + -8);
            FUN_1404210f0(puVar6 + 2,param_2,(longlong)param_3 - (longlong)param_2);
            *(undefined8 *)(((longlong)param_3 - (longlong)param_2) + 8 + (longlong)param_1) = uVar1
            ;
            return;
          }
          puVar7 = puVar7 + 1;
        }
        uVar1 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = uVar1;
      } while (param_2 != param_3);
      FUN_1404210f0(puVar6 + 2,puVar7,(longlong)param_6 + (lVar5 - (longlong)puVar7));
      return;
    }
    if (param_7 < param_5) {
      if (param_5 < param_4) {
        lVar5 = param_5 >> 1;
        puVar6 = param_2 + lVar5;
        uVar8 = (longlong)param_2 - (longlong)param_1 >> 3;
        puVar7 = param_1;
        while (uVar2 = uVar8, 0 < (longlong)uVar2) {
          uVar8 = uVar2 >> 1;
          cVar3 = (*param_8)(puVar6,puVar7 + uVar8);
          if (cVar3 == '\0') {
            puVar7 = puVar7 + uVar8 + 1;
            uVar8 = uVar2 + (-1 - uVar8);
          }
        }
        lVar4 = (longlong)puVar7 - (longlong)param_1 >> 3;
      }
      else {
        lVar4 = param_4 >> 1;
        puVar7 = param_1 + lVar4;
        uVar8 = (longlong)param_3 - (longlong)param_2 >> 3;
        puVar6 = param_2;
        while (uVar2 = uVar8, 0 < (longlong)uVar2) {
          uVar8 = uVar2 >> 1;
          cVar3 = (*param_8)(puVar6 + uVar8,puVar7);
          if (cVar3 != '\0') {
            puVar6 = puVar6 + uVar8 + 1;
            uVar8 = uVar2 + (-1 - uVar8);
          }
        }
        lVar5 = (longlong)puVar6 - (longlong)param_2 >> 3;
      }
      FUN_14021a0b0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar7,puVar6,
                    lVar4,lVar5);
      return;
    }
    FUN_1404210f0(param_6,param_2,(longlong)param_3 - (longlong)param_2);
    puVar6 = (undefined8 *)((longlong)param_6 + ((longlong)param_3 - (longlong)param_2) + -8);
    *puVar7 = param_2[-1];
    param_2 = param_2 + -2;
    while( true ) {
      while (cVar3 = (*param_8)(puVar6,param_2), cVar3 != '\0') {
        puVar7[-1] = *param_2;
        if (param_1 == param_2) {
          puVar7[-2] = *puVar6;
          FUN_1404210f0((longlong)(puVar7 + -2) - ((longlong)puVar6 - (longlong)param_6),param_6,
                        (longlong)puVar6 - (longlong)param_6);
          return;
        }
        param_2 = param_2 + -1;
        puVar7 = puVar7 + -1;
      }
      uVar1 = *puVar6;
      puVar6 = puVar6 + -1;
      puVar7[-1] = uVar1;
      if (param_6 == puVar6) break;
      puVar7 = puVar7 + -1;
    }
    puVar7[-2] = *param_2;
    FUN_1404210f0((longlong)(puVar7 + -2) - ((longlong)param_2 - (longlong)param_1),param_1,
                  (longlong)param_2 - (longlong)param_1);
    *param_1 = *param_6;
    return;
  }
  uVar1 = *param_1;
  FUN_1404210f0(param_1,param_2,(longlong)param_3 - (longlong)param_2);
  *(undefined8 *)(((longlong)param_3 - (longlong)param_2) + (longlong)param_1) = uVar1;
  return;
}

