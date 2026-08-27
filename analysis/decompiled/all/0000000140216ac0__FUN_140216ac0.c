// Function: FUN_140216ac0
// Addr: 140216ac0
// Size: 831 bytes


undefined4 * FUN_140216ac0(undefined4 *param_1,undefined4 *param_2,code *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  puVar5 = param_1;
  if (param_1 != param_2) {
    while (puVar5 = puVar5 + 0x10, puVar5 != param_2) {
      local_88 = *puVar5;
      local_68 = *(longlong *)(puVar5 + 8);
      uStack_70 = *(undefined8 *)(puVar5 + 6);
      local_84 = puVar5[1];
      local_80 = puVar5[2];
      local_7c = puVar5[3];
      *(undefined8 *)(puVar5 + 8) = 0;
      *(undefined8 *)(puVar5 + 6) = 0;
      local_78 = *(longlong *)(puVar5 + 4);
      *(undefined8 *)(puVar5 + 4) = 0;
      local_58 = *(undefined8 *)(puVar5 + 0xc);
      local_50 = *(undefined8 *)(puVar5 + 0xe);
      local_60 = *(undefined8 *)(puVar5 + 10);
      *(undefined8 *)(puVar5 + 0xe) = 0;
      *(undefined8 *)(puVar5 + 0xc) = 0;
      *(undefined8 *)(puVar5 + 10) = 0;
      cVar3 = (*param_3)(&local_88,param_1);
      if (cVar3 == '\0') {
        cVar3 = (*param_3)(&local_88,puVar5 + -0x10);
        puVar2 = puVar5 + -0x10;
        puVar8 = puVar5;
        while (puVar6 = puVar2, cVar3 != '\0') {
          *puVar8 = *puVar6;
          puVar8[1] = puVar6[1];
          puVar8[2] = puVar6[2];
          puVar8[3] = puVar6[3];
          FUN_140219470(puVar8 + 4,puVar6 + 4);
          FUN_140219470(puVar8 + 10,puVar6 + 10);
          cVar3 = (*param_3)(&local_88,puVar6 + -0x10);
          puVar2 = puVar6 + -0x10;
          puVar8 = puVar6;
        }
        *puVar8 = local_88;
        puVar8[1] = local_84;
        puVar8[2] = local_80;
        puVar8[3] = local_7c;
        FUN_140219470(puVar8 + 4,&local_78);
      }
      else {
        puVar8 = puVar5 + 0x10;
        puVar2 = puVar5;
        while (param_1 != puVar2) {
          puVar8[-0x10] = puVar2[-0x10];
          puVar8[-0xf] = puVar2[-0xf];
          puVar8[-0xe] = puVar2[-0xe];
          puVar8[-0xd] = puVar2[-0xd];
          if (puVar8 != puVar2) {
            lVar4 = *(longlong *)(puVar8 + -0xc);
            if (lVar4 != 0) {
              uVar7 = (*(longlong *)(puVar8 + -8) - lVar4 >> 2) * 4;
              if (0xfff < uVar7) {
                if (0x1f < (lVar4 - *(longlong *)(lVar4 + -8)) - 8U) goto LAB_140216df7;
                uVar7 = uVar7 + 0x27;
                lVar4 = *(longlong *)(lVar4 + -8);
              }
              thunk_FUN_14028af80(lVar4,uVar7);
              *(undefined8 *)(puVar8 + -0xc) = 0;
              *(undefined8 *)(puVar8 + -10) = 0;
              *(undefined8 *)(puVar8 + -8) = 0;
            }
            *(undefined8 *)(puVar8 + -0xc) = *(undefined8 *)(puVar2 + -0xc);
            *(undefined8 *)(puVar8 + -10) = *(undefined8 *)(puVar2 + -10);
            *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar2 + -8);
            *(undefined8 *)(puVar2 + -0xc) = 0;
            *(undefined8 *)(puVar2 + -10) = 0;
            *(undefined8 *)(puVar2 + -8) = 0;
          }
          puVar6 = puVar8 + -6;
          puVar8 = puVar8 + -0x10;
          FUN_140219470(puVar6,puVar2 + -6);
          puVar2 = puVar2 + -0x10;
        }
        *param_1 = local_88;
        param_1[1] = local_84;
        param_1[2] = local_80;
        param_1[3] = local_7c;
        puVar8 = param_1;
        if ((longlong *)(param_1 + 4) != &local_78) {
          lVar4 = *(longlong *)(param_1 + 4);
          if (lVar4 != 0) {
            uVar7 = (*(longlong *)(param_1 + 8) - lVar4 >> 2) * 4;
            if (0xfff < uVar7) {
              if (0x1f < (lVar4 - *(longlong *)(lVar4 + -8)) - 8U) goto LAB_140216df7;
              uVar7 = uVar7 + 0x27;
              lVar4 = *(longlong *)(lVar4 + -8);
            }
            thunk_FUN_14028af80(lVar4,uVar7);
          }
          *(longlong *)(param_1 + 4) = local_78;
          *(undefined8 *)(param_1 + 6) = uStack_70;
          *(longlong *)(param_1 + 8) = local_68;
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0;
        }
      }
      FUN_140219470(puVar8 + 10,&local_60);
      FUN_140031b80(&local_60);
      if (local_78 != 0) {
        uVar7 = (local_68 - local_78 >> 2) * 4;
        lVar4 = local_78;
        if (0xfff < uVar7) {
          if (0x1f < (local_78 - *(longlong *)(local_78 + -8)) - 8U) {
LAB_140216df7:
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            pcVar1 = (code *)swi(3);
            puVar5 = (undefined4 *)(*pcVar1)();
            return puVar5;
          }
          uVar7 = uVar7 + 0x27;
          lVar4 = *(longlong *)(local_78 + -8);
        }
        thunk_FUN_14028af80(lVar4,uVar7);
      }
    }
  }
  return param_2;
}

