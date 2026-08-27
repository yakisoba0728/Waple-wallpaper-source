// Function: FUN_14019fec0
// Addr: 14019fec0
// Size: 1088 bytes


void FUN_14019fec0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,undefined8 *param_4,
                  longlong param_5,code *param_6)

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
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  
  if ((longlong)param_3 < 0x21) {
    if (param_1 != param_2) {
      for (puVar15 = param_1 + 1; puVar15 != param_2; puVar15 = puVar15 + 1) {
        uVar2 = *puVar15;
        cVar4 = (*param_6)(uVar2,*param_1);
        if (cVar4 == '\0') {
          cVar4 = (*param_6)(uVar2,puVar15[-1]);
          puVar8 = puVar15;
          while (cVar4 != '\0') {
            *puVar8 = puVar8[-1];
            cVar4 = (*param_6)(uVar2,puVar8[-2]);
            puVar8 = puVar8 + -1;
          }
          *puVar8 = uVar2;
        }
        else {
          FUN_1404210f0(param_1 + 1,param_1,(longlong)puVar15 - (longlong)param_1);
          *param_1 = uVar2;
        }
      }
    }
  }
  else {
    uVar11 = param_3 >> 1;
    lVar16 = param_3 - uVar11;
    puVar15 = param_1 + lVar16;
    if (param_5 < lVar16) {
      FUN_14019fec0(param_1,puVar15,lVar16,param_4,param_5,param_6);
      FUN_14019fec0(puVar15,param_2,uVar11,param_4,param_5,param_6);
    }
    else {
      lVar5 = lVar16;
      puVar8 = param_1;
      if (lVar16 < 0x21) {
        FUN_14019fde0(param_1,puVar15,param_6);
      }
      else {
        do {
          puVar10 = puVar8 + 0x20;
          if (puVar8 != puVar10) {
            for (puVar9 = puVar8 + 1; puVar9 != puVar10; puVar9 = puVar9 + 1) {
              uVar2 = *puVar9;
              cVar4 = (*param_6)(uVar2,*puVar8);
              if (cVar4 == '\0') {
                cVar4 = (*param_6)(uVar2,puVar9[-1]);
                puVar3 = puVar9;
                while (cVar4 != '\0') {
                  *puVar3 = puVar3[-1];
                  cVar4 = (*param_6)(uVar2,puVar3[-2]);
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
        FUN_14019fde0(puVar10,puVar15,param_6);
        puVar8 = param_1;
        puVar10 = param_4;
        lVar5 = lVar16;
        do {
          lVar1 = lVar5 + -0x20;
          puVar9 = puVar8 + 0x20;
          puVar3 = puVar8 + 0x1f;
          lVar13 = lVar5 + -0x40;
          if (lVar1 < 0x20) {
            lVar13 = 0;
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
          puVar14 = (undefined8 *)(lVar6 + (longlong)puVar8);
          puVar12 = puVar9;
          while( true ) {
            while (cVar4 = (*param_6)(*puVar12,*puVar8), cVar4 != '\0') {
              *puVar10 = *puVar12;
              if (puVar12 == puVar14) {
                lVar5 = (longlong)puVar9 - (longlong)puVar8;
                FUN_1404210f0(puVar10 + 1,puVar8,lVar5);
                goto LAB_1401a0189;
              }
              puVar12 = puVar12 + 1;
              puVar10 = puVar10 + 1;
            }
            *puVar10 = *puVar8;
            if (puVar8 == puVar3) break;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          lVar5 = (longlong)puVar7 - (longlong)puVar12;
          FUN_1404210f0(puVar10 + 1,puVar12,lVar5);
LAB_1401a0189:
          puVar10 = (undefined8 *)((longlong)puVar10 + lVar5 + 8);
          puVar8 = puVar7;
          lVar5 = lVar13;
        } while (0x20 < lVar13);
        FUN_1404210f0(puVar10,puVar7,(longlong)puVar15 - (longlong)puVar7);
        lVar5 = 0x40;
        FUN_1401a2b40(param_4,param_4 + lVar16,param_1,0x40,lVar16,param_6);
        if (0x7f < lVar16 + -1) {
          do {
            FUN_1401a2b40(param_1,puVar15,param_4,lVar5 * 2,lVar16,param_6);
            lVar5 = lVar5 * 4;
            FUN_1401a2b40(param_4,param_4 + lVar16,param_1,lVar5,lVar16,param_6);
          } while (lVar5 <= (lVar16 + -1) / 2);
        }
      }
      FUN_1401a16f0(puVar15,param_2,uVar11,param_4,param_6);
    }
    FUN_1401a19e0(param_1,puVar15,param_2,lVar16,uVar11,param_4,param_5,param_6);
  }
  return;
}

