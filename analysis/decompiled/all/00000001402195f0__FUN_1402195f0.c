// Function: FUN_1402195f0
// Addr: 1402195f0
// Size: 408 bytes


undefined8 * FUN_1402195f0(undefined8 *param_1,undefined8 *param_2,longlong param_3,code *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  for (; 0x20 < param_3; param_3 = param_3 + -0x20) {
    puVar6 = param_1 + 0x100;
    if ((param_1 != puVar6) && (puVar10 = param_1 + 8, local_88 = puVar6, puVar10 != puVar6)) {
      do {
        local_58 = puVar10[4];
        local_60 = puVar10[3];
        local_78 = *puVar10;
        local_70 = puVar10[1];
        puVar10[4] = 0;
        puVar10[3] = 0;
        local_68 = puVar10[2];
        puVar10[2] = 0;
        local_48 = puVar10[6];
        local_40 = puVar10[7];
        local_50 = puVar10[5];
        puVar10[7] = 0;
        puVar10[6] = 0;
        puVar10[5] = 0;
        cVar4 = (*param_4)(&local_78,param_1);
        if (cVar4 == '\0') {
          cVar4 = (*param_4)(&local_78,puVar10 + -8);
          puVar7 = puVar10 + -8;
          puVar9 = puVar10;
          uVar2 = local_78;
          while (puVar3 = puVar7, local_78 = uVar2, cVar4 != '\0') {
            *(undefined4 *)puVar9 = *(undefined4 *)puVar3;
            *(undefined4 *)((longlong)puVar9 + 4) = *(undefined4 *)((longlong)puVar3 + 4);
            *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar3 + 1);
            *(undefined4 *)((longlong)puVar9 + 0xc) = *(undefined4 *)((longlong)puVar3 + 0xc);
            func_0x000140219540(puVar9 + 2,puVar3 + 2);
            func_0x000140219540(puVar9 + 5,puVar3 + 5);
            cVar4 = (*param_4)(&local_78,puVar3 + -8);
            puVar7 = puVar3 + -8;
            puVar9 = puVar3;
            uVar2 = local_78;
          }
          local_78._0_4_ = (undefined4)uVar2;
          *(undefined4 *)puVar9 = (undefined4)local_78;
          local_78._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          *(undefined4 *)((longlong)puVar9 + 4) = local_78._4_4_;
          *(undefined4 *)(puVar9 + 1) = (undefined4)local_70;
          local_70._4_4_ = (undefined4)((ulonglong)local_70 >> 0x20);
          *(undefined4 *)((longlong)puVar9 + 0xc) = local_70._4_4_;
        }
        else {
          puVar9 = puVar10 + 8;
          puVar6 = local_88;
          uVar2 = local_78;
          for (puVar7 = puVar10; local_88 = puVar6, local_78 = uVar2, puVar7 != param_1;
              puVar7 = puVar7 + -8) {
            *(undefined4 *)(puVar9 + -8) = *(undefined4 *)(puVar7 + -8);
            *(undefined4 *)((longlong)puVar9 + -0x3c) = *(undefined4 *)((longlong)puVar7 + -0x3c);
            *(undefined4 *)(puVar9 + -7) = *(undefined4 *)(puVar7 + -7);
            *(undefined4 *)((longlong)puVar9 + -0x34) = *(undefined4 *)((longlong)puVar7 + -0x34);
            func_0x000140219540();
            func_0x000140219540(puVar9 + -3,puVar7 + -3);
            puVar9 = puVar9 + -8;
            puVar6 = local_88;
            uVar2 = local_78;
          }
          local_78._0_4_ = (undefined4)uVar2;
          *(undefined4 *)param_1 = (undefined4)local_78;
          local_78._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          *(undefined4 *)((longlong)param_1 + 4) = local_78._4_4_;
          *(undefined4 *)(param_1 + 1) = (undefined4)local_70;
          local_70._4_4_ = (undefined4)((ulonglong)local_70 >> 0x20);
          *(undefined4 *)((longlong)param_1 + 0xc) = local_70._4_4_;
          puVar9 = param_1;
        }
        func_0x000140219540(puVar9 + 2,&local_68);
        func_0x000140219540(puVar9 + 5,&local_50);
        func_0x000140031c50(&local_50);
        func_0x000140031c50(&local_68);
        puVar10 = puVar10 + 8;
      } while (puVar10 != puVar6);
    }
    param_1 = puVar6;
  }
  puVar6 = param_1;
  if (param_1 != param_2) {
    while (puVar10 = puVar6 + 8, puVar10 != param_2) {
      local_68 = puVar10[4];
      local_70 = puVar10[3];
      local_88 = (undefined8 *)*puVar10;
      uStack_80 = *(undefined4 *)(puVar10 + 1);
      uStack_7c = *(undefined4 *)((longlong)puVar6 + 0x4c);
      puVar10[4] = 0;
      puVar10[3] = 0;
      local_78 = puVar10[2];
      puVar10[2] = 0;
      local_58 = puVar10[6];
      local_50 = puVar10[7];
      local_60 = puVar10[5];
      puVar10[7] = 0;
      puVar10[6] = 0;
      puVar10[5] = 0;
      cVar4 = (*param_4)(&local_88,param_1);
      if (cVar4 == '\0') {
        cVar4 = (*param_4)(&local_88,puVar10 + -8);
        puVar9 = puVar10 + -8;
        puVar6 = puVar10;
        uVar2 = local_88;
        while (puVar7 = puVar9, local_88 = (undefined8 *)uVar2, cVar4 != '\0') {
          *(undefined4 *)puVar6 = *(undefined4 *)puVar7;
          *(undefined4 *)((longlong)puVar6 + 4) = *(undefined4 *)((longlong)puVar7 + 4);
          *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar7 + 1);
          *(undefined4 *)((longlong)puVar6 + 0xc) = *(undefined4 *)((longlong)puVar7 + 0xc);
          func_0x000140219540(puVar6 + 2,puVar7 + 2);
          func_0x000140219540(puVar6 + 5,puVar7 + 5);
          cVar4 = (*param_4)(&local_88,puVar7 + -8);
          puVar9 = puVar7 + -8;
          puVar6 = puVar7;
          uVar2 = local_88;
        }
        local_88._0_4_ = (undefined4)uVar2;
        *(undefined4 *)puVar6 = (undefined4)local_88;
        local_88._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
        *(undefined4 *)((longlong)puVar6 + 4) = local_88._4_4_;
        *(undefined4 *)(puVar6 + 1) = uStack_80;
        *(undefined4 *)((longlong)puVar6 + 0xc) = uStack_7c;
        func_0x000140219540(puVar6 + 2,&local_78);
      }
      else {
        puVar6 = puVar10 + 8;
        puVar9 = puVar10;
        uVar2 = local_88;
        while (local_88 = (undefined8 *)uVar2, param_1 != puVar9) {
          *(undefined4 *)(puVar6 + -8) = *(undefined4 *)(puVar9 + -8);
          *(undefined4 *)((longlong)puVar6 + -0x3c) = *(undefined4 *)((longlong)puVar9 + -0x3c);
          *(undefined4 *)(puVar6 + -7) = *(undefined4 *)(puVar9 + -7);
          *(undefined4 *)((longlong)puVar6 + -0x34) = *(undefined4 *)((longlong)puVar9 + -0x34);
          if (puVar6 != puVar9) {
            lVar5 = puVar6[-6];
            if (lVar5 != 0) {
              uVar8 = (puVar6[-4] - lVar5 >> 2) * 4;
              if (0xfff < uVar8) {
                if (0x1f < (lVar5 - *(longlong *)(lVar5 + -8)) - 8U) goto LAB_140216ec7;
                uVar8 = uVar8 + 0x27;
                lVar5 = *(longlong *)(lVar5 + -8);
              }
              puVar6 = (undefined8 *)func_0x00014028b040(lVar5,uVar8);
              return puVar6;
            }
            puVar6[-6] = puVar9[-6];
            puVar6[-5] = puVar9[-5];
            puVar6[-4] = puVar9[-4];
            puVar9[-6] = 0;
            puVar9[-5] = 0;
            puVar9[-4] = 0;
          }
          puVar7 = puVar6 + -3;
          puVar6 = puVar6 + -8;
          func_0x000140219540(puVar7,puVar9 + -3);
          puVar9 = puVar9 + -8;
          uVar2 = local_88;
        }
        local_88._0_4_ = (undefined4)uVar2;
        *(undefined4 *)param_1 = (undefined4)local_88;
        local_88._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
        *(undefined4 *)((longlong)param_1 + 4) = local_88._4_4_;
        *(undefined4 *)(param_1 + 1) = uStack_80;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_7c;
        puVar6 = param_1;
        if (param_1 + 2 != &local_78) {
          lVar5 = param_1[2];
          if (lVar5 != 0) {
            uVar8 = (param_1[4] - lVar5 >> 2) * 4;
            if (uVar8 < 0x1000) {
LAB_140216d8f:
              puVar6 = (undefined8 *)func_0x00014028b040(lVar5,uVar8);
              return puVar6;
            }
            if ((lVar5 - *(longlong *)(lVar5 + -8)) - 8U < 0x20) {
              uVar8 = uVar8 + 0x27;
              lVar5 = *(longlong *)(lVar5 + -8);
              goto LAB_140216d8f;
            }
            goto LAB_140216ec7;
          }
          param_1[2] = local_78;
          param_1[3] = local_70;
          param_1[4] = local_68;
          local_78 = 0;
          local_70 = 0;
          local_68 = 0;
        }
      }
      func_0x000140219540(puVar6 + 5,&local_60);
      func_0x000140031c50(&local_60);
      puVar6 = puVar10;
      if (local_78 != 0) {
        uVar8 = (local_68 - local_78 >> 2) * 4;
        lVar5 = local_78;
        if (0xfff < uVar8) {
          if (0x1f < (local_78 - *(longlong *)(local_78 + -8)) - 8U) {
LAB_140216ec7:
            pcVar1 = (code *)swi(0x29);
            (*pcVar1)(5);
            pcVar1 = (code *)swi(3);
            puVar6 = (undefined8 *)(*pcVar1)();
            return puVar6;
          }
          uVar8 = uVar8 + 0x27;
          lVar5 = *(longlong *)(local_78 + -8);
        }
        func_0x00014028b040(lVar5,uVar8);
      }
    }
  }
  return param_2;
}

