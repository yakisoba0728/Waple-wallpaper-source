// Function: FUN_140217de0
// Addr: 140217de0
// Size: 2190 bytes


void FUN_140217de0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,longlong param_4,
                  longlong param_5,undefined4 *param_6,longlong param_7,code *param_8)

{
  code *pcVar1;
  ulonglong uVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [24];
  longlong local_d8;
  undefined4 *local_d0;
  longlong local_c8;
  code *local_c0;
  undefined4 *local_b8;
  undefined4 *local_b0;
  undefined4 *local_a8;
  longlong local_a0;
  undefined4 *local_98;
  undefined4 *local_90;
  undefined4 *local_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  if (param_2 == param_3) {
    return;
  }
  puVar9 = auStack_f8;
  puVar10 = auStack_f8;
  while( true ) {
    if (param_1 == param_2) {
      return;
    }
    cVar3 = (*param_8)(param_2,param_1);
    if (cVar3 != '\0') break;
    param_1 = param_1 + 0x10;
    param_4 = param_4 + -1;
  }
  do {
    puVar12 = param_3 + -0x10;
    if (param_2 == puVar12) {
      local_78 = *param_2;
      local_58 = *(undefined8 *)(param_2 + 8);
      local_60 = *(undefined8 *)(param_2 + 6);
      local_74 = param_2[1];
      local_70 = param_2[2];
      local_6c = param_2[3];
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 6) = 0;
      local_68 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_2 + 4) = 0;
      local_48 = *(undefined8 *)(param_2 + 0xc);
      local_40 = *(undefined8 *)(param_2 + 0xe);
      local_50 = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(param_2 + 0xe) = 0;
      *(undefined8 *)(param_2 + 0xc) = 0;
      *(undefined8 *)(param_2 + 10) = 0;
      FUN_140217b50(param_1,param_2,param_3);
LAB_140218629:
      FUN_140216e00(param_1,&local_78);
      FUN_140031b80(&local_50);
      FUN_140031b80(&local_68);
      return;
    }
    cVar3 = (*param_8)(puVar12,param_2 + -0x10);
    if (cVar3 != '\0') {
      if (param_4 == 1) {
        local_78 = *param_1;
        local_58 = *(undefined8 *)(param_1 + 8);
        local_60 = *(undefined8 *)(param_1 + 6);
        local_74 = param_1[1];
        local_70 = param_1[2];
        local_6c = param_1[3];
        *(undefined8 *)(param_1 + 8) = 0;
        *(undefined8 *)(param_1 + 6) = 0;
        local_68 = *(undefined8 *)(param_1 + 4);
        *(undefined8 *)(param_1 + 4) = 0;
        local_50 = *(undefined8 *)(param_1 + 10);
        local_48 = *(undefined8 *)(param_1 + 0xc);
        local_40 = *(undefined8 *)(param_1 + 0xe);
        *(undefined8 *)(param_1 + 0xe) = 0;
        *(undefined8 *)(param_1 + 0xc) = 0;
        *(undefined8 *)(param_1 + 10) = 0;
        for (; param_2 != param_3; param_2 = param_2 + 0x10) {
          *param_1 = *param_2;
          param_1[1] = param_2[1];
          param_1[2] = param_2[2];
          param_1[3] = param_2[3];
          FUN_140219470(param_1 + 4,param_2 + 4);
          FUN_140219470(param_1 + 10,param_2 + 10);
          param_1 = param_1 + 0x10;
        }
        goto LAB_140218629;
      }
      if ((param_4 <= param_5) && (param_4 <= param_7)) {
        puVar4 = (undefined4 *)FUN_140219cb0(param_1,param_2,param_6);
        *param_1 = *param_2;
        param_1[1] = param_2[1];
        param_1[2] = param_2[2];
        param_1[3] = param_2[3];
        if (param_1 != param_2) {
          lVar7 = *(longlong *)(param_1 + 4);
          if (lVar7 != 0) {
            uVar8 = (*(longlong *)(param_1 + 8) - lVar7 >> 2) * 4;
            if (0xfff < uVar8) {
              if (0x1f < (lVar7 - *(longlong *)(lVar7 + -8)) - 8U) goto LAB_1402183b0;
              uVar8 = uVar8 + 0x27;
              lVar7 = *(longlong *)(lVar7 + -8);
            }
            thunk_FUN_14028af80(lVar7,uVar8);
            *(undefined8 *)(param_1 + 4) = 0;
            *(undefined8 *)(param_1 + 6) = 0;
            *(undefined8 *)(param_1 + 8) = 0;
          }
          *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
          *(undefined8 *)(param_2 + 4) = 0;
          *(undefined8 *)(param_2 + 6) = 0;
          *(undefined8 *)(param_2 + 8) = 0;
          lVar7 = *(longlong *)(param_1 + 10);
          if (lVar7 != 0) {
            uVar8 = (*(longlong *)(param_1 + 0xe) - lVar7 >> 2) * 4;
            if (0xfff < uVar8) {
              if (0x1f < (lVar7 - *(longlong *)(lVar7 + -8)) - 8U) goto LAB_1402183b0;
              uVar8 = uVar8 + 0x27;
              lVar7 = *(longlong *)(lVar7 + -8);
            }
            thunk_FUN_14028af80(lVar7,uVar8);
            *(undefined8 *)(param_1 + 10) = 0;
            *(undefined8 *)(param_1 + 0xc) = 0;
            *(undefined8 *)(param_1 + 0xe) = 0;
          }
          *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
          *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
          *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
          *(undefined8 *)(param_2 + 10) = 0;
          *(undefined8 *)(param_2 + 0xc) = 0;
          *(undefined8 *)(param_2 + 0xe) = 0;
        }
        param_2 = param_2 + 0x10;
        puVar12 = param_6;
        do {
          while( true ) {
            puVar11 = param_1;
            param_1 = puVar11 + 0x10;
            cVar3 = (*param_8)(param_2,puVar12);
            if (cVar3 != '\0') break;
            *param_1 = *puVar12;
            puVar11[0x11] = puVar12[1];
            puVar11[0x12] = puVar12[2];
            puVar11[0x13] = puVar12[3];
            FUN_140219470(puVar11 + 0x14,puVar12 + 4);
            FUN_140219470(puVar11 + 0x1a,puVar12 + 10);
            if (puVar12 == puVar4 + -0x20) {
              uVar5 = FUN_140219d50(param_2,param_3,puVar11 + 0x20);
              FUN_140216e00(uVar5,puVar4 + -0x10);
              for (; param_6 != puVar4; param_6 = param_6 + 0x10) {
                FUN_140031b80(param_6 + 10);
                FUN_140031b80(param_6 + 4);
              }
              return;
            }
            puVar12 = puVar12 + 0x10;
          }
          *param_1 = *param_2;
          puVar11[0x11] = param_2[1];
          puVar11[0x12] = param_2[2];
          puVar11[0x13] = param_2[3];
          FUN_140219470(puVar11 + 0x14,param_2 + 4);
          FUN_140219470(puVar11 + 0x1a,param_2 + 10);
          param_2 = param_2 + 0x10;
        } while (param_2 != param_3);
        FUN_140219d50(puVar12,puVar4,puVar11 + 0x20);
        for (; param_6 != puVar4; param_6 = param_6 + 0x10) {
          FUN_140031b80(param_6 + 10);
          FUN_140031b80(param_6 + 4);
        }
        return;
      }
      if (param_7 < param_5) {
        if (param_5 < param_4) {
          local_a0 = param_5 >> 1;
          lVar7 = local_a0 * 0x10;
          uVar8 = (longlong)param_2 - (longlong)param_1 >> 6;
          local_b0 = param_2 + lVar7;
          puVar12 = param_1;
          while (uVar2 = uVar8, local_98 = local_b0, local_80 = local_a0, 0 < (longlong)uVar2) {
            uVar8 = uVar2 >> 1;
            local_88 = puVar12 + uVar8 * 0x10;
            cVar3 = (*param_8)(param_2 + lVar7,local_88);
            local_a0 = local_80;
            local_b0 = local_98;
            local_90 = puVar12;
            if (cVar3 == '\0') {
              puVar12 = local_88 + 0x10;
              uVar8 = uVar2 + (-1 - uVar8);
              local_90 = puVar12;
            }
          }
          local_a8 = (undefined4 *)((longlong)puVar12 - (longlong)param_1 >> 6);
          local_b8 = puVar12;
        }
        else {
          local_a8 = (undefined4 *)(param_4 >> 1);
          lVar7 = (longlong)local_a8 * 0x10;
          uVar8 = (longlong)param_3 - (longlong)param_2 >> 6;
          local_90 = param_1 + lVar7;
          puVar12 = param_2;
          puVar11 = local_98;
          while (local_98 = puVar11, uVar2 = uVar8, local_88 = local_a8, 0 < (longlong)uVar2) {
            uVar8 = uVar2 >> 1;
            local_98 = puVar12 + uVar8 * 0x10;
            cVar3 = (*param_8)(local_98,param_1 + lVar7);
            local_a8 = local_88;
            puVar11 = puVar12;
            if (cVar3 != '\0') {
              puVar12 = local_98 + 0x10;
              uVar8 = uVar2 + (-1 - uVar8);
              puVar11 = puVar12;
            }
          }
          local_a0 = (longlong)puVar12 - (longlong)param_2 >> 6;
          local_b8 = local_90;
          local_b0 = puVar12;
        }
        local_c0 = param_8;
        local_c8 = param_7;
        local_d0 = param_6;
        local_d8 = param_5;
        FUN_140219eb0(param_1,param_2,param_3,param_4);
        return;
      }
      puVar4 = (undefined4 *)FUN_140219cb0(param_2,param_3,param_6);
      FUN_140216e00(puVar12,param_2 + -0x10);
      puVar11 = puVar4 + -0x10;
      param_2 = param_2 + -0x20;
      while( true ) {
        while( true ) {
          cVar3 = (*param_8)(puVar11,param_2);
          if (cVar3 == '\0') break;
          puVar12[-0x10] = *param_2;
          puVar12[-0xf] = param_2[1];
          puVar12[-0xe] = param_2[2];
          puVar12[-0xd] = param_2[3];
          FUN_140219470(puVar12 + -0xc,param_2 + 4);
          FUN_140219470(puVar12 + -6,param_2 + 10);
          if (param_1 == param_2) {
            FUN_140216e00(puVar12 + -0x20,puVar11);
            FUN_140217b50(param_6,puVar11,puVar12 + -0x20);
            for (; param_6 != puVar4; param_6 = param_6 + 0x10) {
              FUN_140031b80(param_6 + 10);
              FUN_140031b80(param_6 + 4);
            }
            return;
          }
          param_2 = param_2 + -0x10;
          puVar12 = puVar12 + -0x10;
        }
        puVar12[-0x10] = *puVar11;
        puVar12[-0xf] = puVar11[1];
        puVar12[-0xe] = puVar11[2];
        puVar12[-0xd] = puVar11[3];
        FUN_140219470(puVar12 + -0xc,puVar11 + 4);
        FUN_140219470(puVar12 + -6,puVar11 + 10);
        puVar11 = puVar11 + -0x10;
        if (param_6 == puVar11) break;
        puVar12 = puVar12 + -0x10;
      }
      FUN_140216e00(puVar12 + -0x20,param_2);
      FUN_140217b50(param_1,param_2,puVar12 + -0x20);
      *param_1 = *param_6;
      param_1[1] = param_6[1];
      param_1[2] = param_6[2];
      param_1[3] = param_6[3];
      if (param_1 == param_6) goto joined_r0x0001402183f5;
      lVar7 = *(longlong *)(param_1 + 4);
      if (lVar7 == 0) {
LAB_140218350:
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_6 + 4);
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_6 + 6);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_6 + 8);
        *(undefined8 *)(param_6 + 4) = 0;
        *(undefined8 *)(param_6 + 6) = 0;
        *(undefined8 *)(param_6 + 8) = 0;
        lVar7 = *(longlong *)(param_1 + 10);
        if (lVar7 != 0) {
          puVar10 = auStack_f8;
          if ((0xfff < (ulonglong)((*(longlong *)(param_1 + 0xe) - lVar7 >> 2) * 4)) &&
             (lVar6 = lVar7 - *(longlong *)(lVar7 + -8), lVar7 = *(longlong *)(lVar7 + -8),
             puVar10 = auStack_f8, 0x1f < lVar6 - 8U)) goto LAB_1402183b0;
          goto LAB_1402183ba;
        }
      }
      else {
        uVar8 = (*(longlong *)(param_1 + 8) - lVar7 >> 2) * 4;
        if (uVar8 < 0x1000) {
LAB_14021833c:
          thunk_FUN_14028af80(lVar7,uVar8);
          *(undefined8 *)(param_1 + 4) = 0;
          *(undefined8 *)(param_1 + 6) = 0;
          *(undefined8 *)(param_1 + 8) = 0;
          goto LAB_140218350;
        }
        if ((lVar7 - *(longlong *)(lVar7 + -8)) - 8U < 0x20) {
          uVar8 = uVar8 + 0x27;
          lVar7 = *(longlong *)(lVar7 + -8);
          goto LAB_14021833c;
        }
LAB_1402183b0:
        lVar7 = 5;
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        puVar10 = auStack_f0;
LAB_1402183ba:
        *(undefined8 *)(puVar10 + -8) = 0x1402183c2;
        thunk_FUN_14028af80(lVar7);
        *(undefined8 *)(param_1 + 10) = 0;
        *(undefined8 *)(param_1 + 0xc) = 0;
        *(undefined8 *)(param_1 + 0xe) = 0;
      }
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_6 + 10);
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_6 + 0xc);
      *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_6 + 0xe);
      *(undefined8 *)(param_6 + 10) = 0;
      *(undefined8 *)(param_6 + 0xc) = 0;
      *(undefined8 *)(param_6 + 0xe) = 0;
      puVar9 = puVar10;
joined_r0x0001402183f5:
      for (; param_6 != puVar4; param_6 = param_6 + 0x10) {
        *(undefined8 *)(puVar9 + -8) = 0x140218409;
        FUN_140031b80(param_6 + 10);
        *(undefined8 *)(puVar9 + -8) = 0x140218412;
        FUN_140031b80(param_6 + 4);
      }
      return;
    }
    param_5 = param_5 + -1;
    param_3 = puVar12;
  } while( true );
}

