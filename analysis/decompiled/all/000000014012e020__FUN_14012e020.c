// Function: FUN_14012e020
// Addr: 14012e020
// Size: 779 bytes


undefined8 FUN_14012e020(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 ****ppppuVar5;
  ulonglong uVar6;
  undefined8 ****ppppuVar7;
  uint uVar8;
  ulonglong uVar9;
  uint local_res10 [2];
  undefined8 local_res18;
  longlong *local_res20;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  undefined8 ***local_138;
  undefined8 uStack_130;
  ulonglong local_128;
  ulonglong local_120;
  int local_118;
  int iStack_114;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  undefined8 ***local_f0;
  undefined8 uStack_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 ***local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  undefined8 ***local_58;
  undefined8 uStack_50;
  
  iVar3 = (*DAT_140426b78)(&DAT_14048ada0,0,4,&DAT_14048ad90,&local_res20);
  if (-1 < iVar3) {
    (**(code **)(*local_res20 + 0x30))(local_res20,local_res10);
    uVar6 = 0;
    uVar9 = uVar6;
    if (local_res10[0] != 0) {
      do {
        local_e0 = 0;
        uStack_e8 = 0;
        local_f0 = (undefined8 ***)0x0;
        uStack_c8 = 0;
        local_c0 = 0;
        uStack_a8 = 0;
        local_b8 = 0xf;
        local_d0 = 0;
        local_a0 = 0;
        local_98 = 0xf;
        local_b0 = 0;
        local_88 = 0;
        iVar3 = (**(code **)(*local_res20 + 0x28))(local_res20,uVar9,&local_res18);
        if (-1 < iVar3) {
          iVar3 = (**(code **)(*local_res20 + 0x38))(local_res20,local_res18,&local_148);
          if (-1 < iVar3) {
            local_118 = (local_140 + local_148) / 2;
            iStack_114 = (local_13c + local_144) / 2;
            local_90 = (*DAT_140426850)(CONCAT44(iStack_114,local_118),2);
            local_100 = local_140 - local_148;
            local_108 = local_148;
            local_fc = local_13c - local_144;
            local_104 = local_144;
            local_138 = (undefined8 ****)0x0;
            uStack_130 = 0;
            local_128 = 0;
            local_120 = 0;
            uVar4 = FUN_1402d6b70(local_res18);
            FUN_140016240(&local_138,local_res18,uVar4);
            if (local_128 != 0) {
              ppppuVar5 = &local_138;
              if (7 < local_120) {
                ppppuVar5 = (undefined8 ****)local_138;
              }
              iVar3 = (*DAT_140426608)(0xfde9,0,ppppuVar5,local_128,0,0,0,0);
              if (0 < iVar3) {
                FUN_140016a10(&local_78,(longlong)iVar3,0);
                ppppuVar5 = &local_78;
                if (0xf < uStack_60) {
                  ppppuVar5 = (undefined8 ****)local_78;
                }
                ppppuVar7 = &local_138;
                if (7 < local_120) {
                  ppppuVar7 = (undefined8 ****)local_138;
                }
                (*DAT_140426608)(0xfde9,0,ppppuVar7,local_128 & 0xffffffff,ppppuVar5,iVar3,0,0);
                local_58 = local_78;
                uStack_50 = uStack_70;
                uVar6 = local_68;
                goto LAB_14012e275;
              }
            }
            uStack_60 = 0xf;
            uStack_50 = 0;
            local_58 = (undefined8 ****)0x0;
LAB_14012e275:
            local_f0 = local_58;
            uStack_e8 = uStack_50;
            local_e0 = uVar6;
            local_d8 = uStack_60;
            if (local_120 < 8) {
              uVar4 = func_0x00014028aff0(0x20);
              return uVar4;
            }
            uVar6 = local_120 * 2 + 2;
            ppppuVar5 = (undefined8 ****)local_138;
            if (0xfff < uVar6) {
              ppppuVar5 = (undefined8 ****)local_138[-1];
              if (0x1f < (ulonglong)((longlong)local_138 + (-8 - (longlong)ppppuVar5))) {
                pcVar2 = (code *)swi(0x29);
                (*pcVar2)(5);
                pcVar2 = (code *)swi(3);
                uVar4 = (*pcVar2)();
                return uVar4;
              }
              uVar6 = local_120 * 2 + 0x29;
            }
            uVar4 = func_0x00014028b040(ppppuVar5,uVar6);
            return uVar4;
          }
          (*DAT_140426b80)(local_res18);
        }
        uVar8 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 < local_res10[0]);
    }
    (**(code **)(*local_res20 + 0x10))();
  }
  lVar1 = ((longlong *)*param_1)[1];
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(longlong *)*param_1 != lVar1);
}

