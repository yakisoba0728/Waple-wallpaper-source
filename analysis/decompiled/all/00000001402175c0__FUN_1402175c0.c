// Function: FUN_1402175c0
// Addr: 1402175c0
// Size: 1151 bytes


void FUN_1402175c0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,undefined8 *param_4,
                  longlong param_5,code *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *local_res18;
  undefined8 *local_res20;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  ulonglong local_60;
  longlong local_58;
  
  local_res20 = param_4;
  if ((longlong)param_3 < 0x21) {
    if (param_1 != param_2) {
      for (puVar5 = param_1 + 1; puVar5 != param_2; puVar5 = puVar5 + 1) {
        local_res18 = (undefined8 *)*puVar5;
        cVar4 = (*param_6)(&local_res18,param_1);
        if (cVar4 == '\0') {
          cVar4 = (*param_6)(&local_res18,puVar5 + -1);
          puVar7 = puVar5 + -1;
          puVar10 = puVar5;
          while (puVar9 = puVar7, cVar4 != '\0') {
            *puVar10 = *puVar9;
            cVar4 = (*param_6)(&local_res18,puVar9 + -1);
            puVar7 = puVar9 + -1;
            puVar10 = puVar9;
          }
          *puVar10 = local_res18;
        }
        else {
          FUN_1404210f0(param_1 + 1,param_1,(longlong)puVar5 - (longlong)param_1);
          *param_1 = local_res18;
        }
      }
    }
  }
  else {
    uVar6 = param_3 >> 1;
    puVar10 = (undefined8 *)(param_3 - uVar6);
    local_58 = (longlong)puVar10 * 8;
    puVar5 = param_1 + (longlong)puVar10;
    local_res18 = puVar10;
    local_70 = puVar5;
    local_60 = uVar6;
    if (param_5 < (longlong)puVar10) {
      FUN_1402175c0(param_1,puVar5,puVar10,param_4,param_5,param_6);
      FUN_1402175c0(puVar5,param_2,uVar6,param_4,param_5,param_6);
    }
    else {
      puVar7 = param_1;
      if ((longlong)puVar10 < 0x21) {
        local_68 = puVar10;
        FUN_1402174d0(param_1,puVar5,param_6);
        param_4 = local_res20;
      }
      else {
        do {
          puVar5 = puVar7 + 0x20;
          if (puVar7 != puVar5) {
            for (puVar9 = puVar7 + 1; puVar9 != puVar5; puVar9 = puVar9 + 1) {
              local_78 = (undefined8 *)*puVar9;
              local_68 = puVar10;
              cVar4 = (*param_6)(&local_78,puVar7);
              if (cVar4 == '\0') {
                cVar4 = (*param_6)(&local_78,puVar9 + -1);
                puVar1 = puVar9 + -1;
                puVar10 = puVar9;
                while (puVar2 = puVar1, cVar4 != '\0') {
                  *puVar10 = *puVar2;
                  cVar4 = (*param_6)(&local_78,puVar2 + -1);
                  puVar1 = puVar2 + -1;
                  puVar10 = puVar2;
                }
                *puVar10 = local_78;
              }
              else {
                FUN_1404210f0(puVar7 + 1,puVar7,(longlong)puVar9 - (longlong)puVar7);
                *puVar7 = local_78;
              }
              puVar10 = local_68;
            }
          }
          puVar10 = puVar10 + -4;
          puVar7 = puVar5;
        } while (0x20 < (longlong)puVar10);
        local_68 = puVar10;
        FUN_1402174d0(puVar5,local_70,param_6);
        puVar5 = param_1;
        puVar10 = local_res20;
        puVar7 = local_res18;
        do {
          puVar9 = puVar7 + -4;
          puVar1 = puVar5 + 0x20;
          puVar2 = puVar5 + 0x1f;
          local_78 = puVar7 + -8;
          if ((longlong)puVar9 < 0x20) {
            local_78 = (undefined8 *)0x0;
          }
          lVar11 = 0x200;
          if ((longlong)puVar9 < 0x20) {
            lVar11 = (longlong)puVar7 * 8;
          }
          local_68 = (undefined8 *)(lVar11 + (longlong)puVar5);
          lVar11 = 0x1f8;
          if ((longlong)puVar9 < 0x20) {
            lVar11 = (longlong)puVar7 * 8 + -8;
          }
          puVar9 = (undefined8 *)(lVar11 + (longlong)puVar5);
          puVar7 = puVar1;
          while( true ) {
            while (cVar4 = (*param_6)(puVar7,puVar5), puVar3 = local_68, cVar4 == '\0') {
              *puVar10 = *puVar5;
              if (puVar5 == puVar2) {
                lVar11 = (longlong)local_68 - (longlong)puVar7;
                FUN_1404210f0(puVar10 + 1,puVar7,lVar11);
                puVar5 = puVar3;
                goto LAB_1402178c9;
              }
              puVar5 = puVar5 + 1;
              puVar10 = puVar10 + 1;
            }
            *puVar10 = *puVar7;
            if (puVar7 == puVar9) break;
            puVar7 = puVar7 + 1;
            puVar10 = puVar10 + 1;
          }
          lVar11 = (longlong)puVar1 - (longlong)puVar5;
          FUN_1404210f0(puVar10 + 1,puVar5,lVar11);
          puVar5 = local_68;
LAB_1402178c9:
          puVar10 = (undefined8 *)((longlong)puVar10 + lVar11 + 8);
          puVar7 = local_78;
        } while (0x20 < (longlong)local_78);
        FUN_1404210f0(puVar10,puVar5,(longlong)local_70 - (longlong)puVar5);
        param_4 = local_res20;
        puVar10 = local_res18;
        lVar11 = 0x40;
        lVar8 = local_58 + (longlong)local_res20;
        FUN_140219b90(local_res20,lVar8,param_1,0x40,local_res18,param_6);
        puVar5 = local_70;
        uVar6 = local_60;
        if (0x7f < (longlong)puVar10 + -1) {
          do {
            FUN_140219b90(param_1,local_70,param_4,lVar11 * 2,puVar10,param_6);
            lVar11 = lVar11 * 4;
            FUN_140219b90(param_4,lVar8,param_1,lVar11,puVar10,param_6);
            puVar5 = local_70;
            uVar6 = local_60;
          } while (lVar11 <= ((longlong)puVar10 + -1) / 2);
        }
      }
      FUN_140218670(puVar5,param_2,uVar6,param_4,param_6);
    }
    FUN_140218970(param_1,puVar5,param_2,puVar10,uVar6,param_4,param_5,param_6);
  }
  return;
}

