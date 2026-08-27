// Function: FUN_140064450
// Addr: 140064450
// Size: 592 bytes


void FUN_140064450(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 local_res8;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  undefined4 local_20;
  
  lVar7 = *param_1;
  lVar1 = param_1[1];
  if (lVar7 != lVar1) {
    do {
      FUN_140017240(lVar7 + 0x20);
      FUN_140017240(lVar7);
      lVar7 = lVar7 + 0x60;
    } while (lVar7 != lVar1);
    param_1[1] = *param_1;
  }
  puVar2 = *(undefined8 **)(param_2 + 8);
  puVar3 = (undefined8 *)*puVar2;
  do {
    if (puVar3 == puVar2) {
      FUN_14007aeb0(*param_1,param_1[1],(param_1[1] - *param_1 >> 5) * -0x5555555555555555,
                    local_res8);
      return;
    }
    if ((*(byte *)((longlong)puVar3 + 0x53) & 1) == 0) {
      local_68 = 0;
      plVar5 = puVar3 + 2;
      local_60 = 0xf;
      local_48 = 0;
      local_40 = 0xf;
      uStack_70 = 0;
      local_78 = 0;
      uStack_50 = 0;
      local_58 = 0;
      if (&local_78 != plVar5) {
        if (0xf < (ulonglong)puVar3[5]) {
          plVar5 = (longlong *)*plVar5;
        }
        FUN_14000f880(&local_78,plVar5,puVar3[4]);
      }
      plVar5 = puVar3 + 6;
      if (&local_58 != plVar5) {
        if (0xf < (ulonglong)puVar3[9]) {
          plVar5 = (longlong *)*plVar5;
        }
        FUN_14000f880(&local_58,plVar5,puVar3[8]);
      }
      lVar7 = param_1[1];
      local_2c = CONCAT44((int)((ulonglong)puVar3[0xc] >> 0x20) -
                          (int)((ulonglong)puVar3[0xb] >> 0x20),(int)puVar3[0xc] - (int)puVar3[0xb])
      ;
      local_38 = (uint)*(byte *)((longlong)puVar3 + 0x51);
      local_34 = *(undefined4 *)(puVar3 + 0xb);
      local_24 = *(undefined4 *)(puVar3 + 0xd);
      local_30 = *(undefined4 *)((longlong)puVar3 + 0x5c);
      local_20 = *(undefined4 *)((longlong)puVar3 + 0x6c);
      if (lVar7 == param_1[2]) {
        FUN_14007c3a0(param_1,lVar7,&local_78);
      }
      else {
        FUN_140016fc0(lVar7,&local_78);
        FUN_140016fc0(lVar7 + 0x20,&local_58);
        *(uint *)(lVar7 + 0x40) = local_38;
        *(undefined4 *)(lVar7 + 0x44) = local_34;
        *(undefined4 *)(lVar7 + 0x48) = local_30;
        *(undefined4 *)(lVar7 + 0x4c) = (undefined4)local_2c;
        *(undefined4 *)(lVar7 + 0x50) = local_2c._4_4_;
        *(undefined4 *)(lVar7 + 0x54) = local_24;
        *(undefined4 *)(lVar7 + 0x58) = local_20;
        param_1[1] = param_1[1] + 0x60;
      }
      if (0xf < local_40) {
        uVar6 = local_40 + 1;
        lVar7 = local_58;
        if (0xfff < uVar6) {
          lVar7 = *(longlong *)(local_58 + -8);
          if (0x1f < (local_58 - lVar7) - 8U) goto LAB_140064698;
          uVar6 = local_40 + 0x28;
        }
        thunk_FUN_14028af80(lVar7,uVar6);
      }
      if (0xf < local_60) {
        uVar6 = local_60 + 1;
        lVar7 = local_78;
        if (0xfff < uVar6) {
          lVar7 = *(longlong *)(local_78 + -8);
          if (0x1f < (local_78 - lVar7) - 8U) {
LAB_140064698:
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)(5);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar6 = local_60 + 0x28;
        }
        thunk_FUN_14028af80(lVar7,uVar6);
      }
    }
    puVar3 = (undefined8 *)*puVar3;
  } while( true );
}

