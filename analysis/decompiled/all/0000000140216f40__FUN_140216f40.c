// Function: FUN_140216f40
// Addr: 140216f40
// Size: 1416 bytes


void FUN_140216f40(undefined4 *param_1,undefined4 *param_2,ulonglong param_3,undefined4 *param_4,
                  longlong param_5,code *param_6)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 *local_c0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  undefined4 *local_58;
  ulonglong local_50;
  
  if ((longlong)param_3 < 0x21) {
    puVar2 = param_1;
    if (param_1 != param_2) {
      while (puVar2 = puVar2 + 0x10, puVar2 != param_2) {
        local_a8 = *puVar2;
        local_88 = *(undefined8 *)(puVar2 + 8);
        local_90 = *(undefined8 *)(puVar2 + 6);
        local_a4 = puVar2[1];
        local_a0 = puVar2[2];
        local_9c = puVar2[3];
        *(undefined8 *)(puVar2 + 8) = 0;
        *(undefined8 *)(puVar2 + 6) = 0;
        local_98 = *(undefined8 *)(puVar2 + 4);
        *(undefined8 *)(puVar2 + 4) = 0;
        local_78 = *(undefined8 *)(puVar2 + 0xc);
        local_70 = *(undefined8 *)(puVar2 + 0xe);
        local_80 = *(undefined8 *)(puVar2 + 10);
        *(undefined8 *)(puVar2 + 0xe) = 0;
        *(undefined8 *)(puVar2 + 0xc) = 0;
        *(undefined8 *)(puVar2 + 10) = 0;
        cVar6 = (*param_6)(&local_a8,param_1);
        if (cVar6 == '\0') {
          cVar6 = (*param_6)(&local_a8,puVar2 + -0x10);
          puVar11 = puVar2 + -0x10;
          puVar7 = puVar2;
          while (puVar12 = puVar11, cVar6 != '\0') {
            *puVar7 = *puVar12;
            puVar7[1] = puVar12[1];
            puVar7[2] = puVar12[2];
            puVar7[3] = puVar12[3];
            FUN_140219470(puVar7 + 4,puVar12 + 4);
            FUN_140219470(puVar7 + 10,puVar12 + 10);
            cVar6 = (*param_6)(&local_a8,puVar12 + -0x10);
            puVar11 = puVar12 + -0x10;
            puVar7 = puVar12;
          }
          *puVar7 = local_a8;
          puVar7[1] = local_a4;
          puVar7[2] = local_a0;
          puVar7[3] = local_9c;
        }
        else {
          puVar7 = puVar2 + 0x10;
          for (puVar11 = puVar2; puVar11 != param_1; puVar11 = puVar11 + -0x10) {
            puVar7[-0x10] = puVar11[-0x10];
            puVar7[-0xf] = puVar11[-0xf];
            puVar7[-0xe] = puVar11[-0xe];
            puVar7[-0xd] = puVar11[-0xd];
            FUN_140219470();
            FUN_140219470(puVar7 + -6,puVar11 + -6);
            puVar7 = puVar7 + -0x10;
          }
          *param_1 = local_a8;
          param_1[1] = local_a4;
          param_1[2] = local_a0;
          param_1[3] = local_9c;
          puVar7 = param_1;
        }
        FUN_140219470(puVar7 + 4,&local_98);
        FUN_140219470(puVar7 + 10,&local_80);
        FUN_140031b80(&local_80);
        FUN_140031b80(&local_98);
      }
    }
  }
  else {
    uVar9 = param_3 >> 1;
    lVar14 = param_3 - uVar9;
    local_68 = lVar14 * 0x40;
    puVar2 = param_1 + lVar14 * 0x10;
    local_50 = uVar9;
    if (param_5 < lVar14) {
      FUN_140216f40(param_1,puVar2,lVar14,param_4,param_5,param_6);
      FUN_140216f40(puVar2,param_2,uVar9,param_4,param_5,param_6);
    }
    else {
      puVar7 = param_1;
      lVar10 = lVar14;
      if (lVar14 < 0x21) {
        FUN_140216ac0(param_1,puVar2,param_6);
      }
      else {
        do {
          puVar7 = (undefined4 *)FUN_140216ac0(puVar7,puVar7 + 0x200,param_6);
          lVar10 = lVar10 + -0x20;
        } while (0x20 < lVar10);
        FUN_140216ac0(puVar7,puVar2,param_6);
        puVar7 = param_4;
        lVar10 = lVar14;
        local_c0 = param_1;
        do {
          lVar1 = lVar10 + -0x20;
          puVar11 = local_c0 + 0x200;
          lVar13 = lVar10 + -0x40;
          if (lVar1 < 0x20) {
            lVar13 = 0;
          }
          local_60 = 0x1000;
          if (lVar1 < 0x20) {
            local_60 = lVar10 * 0x40;
          }
          local_58 = (undefined4 *)(local_60 + (longlong)local_c0);
          lVar8 = 0xfc0;
          if (lVar1 < 0x20) {
            lVar8 = lVar10 * 0x40 + -0x40;
          }
          puVar12 = local_c0;
          while( true ) {
            while (cVar6 = (*param_6)(puVar11,puVar12), cVar6 == '\0') {
              *puVar7 = *puVar12;
              puVar7[1] = puVar12[1];
              puVar7[2] = puVar12[2];
              puVar7[3] = puVar12[3];
              uVar3 = *(undefined8 *)(puVar12 + 8);
              uVar4 = *(undefined8 *)(puVar12 + 6);
              uVar5 = *(undefined8 *)(puVar12 + 4);
              *(undefined8 *)(puVar12 + 8) = 0;
              *(undefined8 *)(puVar12 + 6) = 0;
              *(undefined8 *)(puVar12 + 4) = 0;
              *(undefined8 *)(puVar7 + 4) = uVar5;
              *(undefined8 *)(puVar7 + 6) = uVar4;
              *(undefined8 *)(puVar7 + 8) = uVar3;
              uVar3 = *(undefined8 *)(puVar12 + 0xc);
              uVar4 = *(undefined8 *)(puVar12 + 10);
              uVar5 = *(undefined8 *)(puVar12 + 0xe);
              *(undefined8 *)(puVar12 + 0xe) = 0;
              *(undefined8 *)(puVar12 + 0xc) = 0;
              *(undefined8 *)(puVar12 + 10) = 0;
              *(undefined8 *)(puVar7 + 10) = uVar4;
              *(undefined8 *)(puVar7 + 0xc) = uVar3;
              *(undefined8 *)(puVar7 + 0xe) = uVar5;
              lVar10 = local_60;
              if (puVar12 == local_c0 + 0x1f0) goto LAB_14021733b;
              puVar12 = puVar12 + 0x10;
              puVar7 = puVar7 + 0x10;
            }
            *puVar7 = *puVar11;
            puVar7[1] = puVar11[1];
            puVar7[2] = puVar11[2];
            puVar7[3] = puVar11[3];
            uVar3 = *(undefined8 *)(puVar11 + 8);
            uVar4 = *(undefined8 *)(puVar11 + 6);
            uVar5 = *(undefined8 *)(puVar11 + 4);
            *(undefined8 *)(puVar11 + 8) = 0;
            *(undefined8 *)(puVar11 + 6) = 0;
            *(undefined8 *)(puVar11 + 4) = 0;
            *(undefined8 *)(puVar7 + 4) = uVar5;
            *(undefined8 *)(puVar7 + 6) = uVar4;
            *(undefined8 *)(puVar7 + 8) = uVar3;
            uVar3 = *(undefined8 *)(puVar11 + 0xe);
            uVar4 = *(undefined8 *)(puVar11 + 0xc);
            uVar5 = *(undefined8 *)(puVar11 + 10);
            *(undefined8 *)(puVar11 + 0xe) = 0;
            *(undefined8 *)(puVar11 + 0xc) = 0;
            *(undefined8 *)(puVar11 + 10) = 0;
            *(undefined8 *)(puVar7 + 10) = uVar5;
            *(undefined8 *)(puVar7 + 0xc) = uVar4;
            *(undefined8 *)(puVar7 + 0xe) = uVar3;
            if (puVar11 == (undefined4 *)(lVar8 + (longlong)local_c0)) break;
            puVar11 = puVar11 + 0x10;
            puVar7 = puVar7 + 0x10;
          }
          lVar10 = 0x800;
          puVar11 = puVar12;
LAB_14021733b:
          puVar7 = (undefined4 *)FUN_140219cb0(puVar11,lVar10 + (longlong)local_c0,puVar7 + 0x10);
          local_c0 = local_58;
          lVar10 = lVar13;
        } while (0x20 < lVar13);
        FUN_140219cb0(local_58,puVar2,puVar7);
        lVar10 = 0x40;
        puVar7 = (undefined4 *)(local_68 + (longlong)param_4);
        FUN_1402199c0(param_4,puVar7,param_1,0x40,lVar14,param_6);
        if (0x7f < lVar14 + -1) {
          do {
            FUN_1402199c0(param_1,puVar2,param_4,lVar10 * 2,lVar14,param_6);
            lVar10 = lVar10 * 4;
            FUN_1402199c0(param_4,puVar7,param_1,lVar10,lVar14,param_6);
          } while (lVar10 <= (lVar14 + -1) / 2);
        }
        puVar11 = param_4;
        if (local_68 != 0) {
          do {
            FUN_140031b80(puVar11 + 10);
            FUN_140031b80(puVar11 + 4);
            puVar11 = puVar11 + 0x10;
          } while (puVar11 != puVar7);
        }
      }
      uVar9 = local_50;
      FUN_140217cc0(puVar2,param_2,local_50,param_4,param_6);
    }
    FUN_140217de0(param_1,puVar2,param_2,lVar14,uVar9,param_4,param_5,param_6);
  }
  return;
}

