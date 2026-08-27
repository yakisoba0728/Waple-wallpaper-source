// Function: FUN_1403d15a0
// Addr: 1403d15a0
// Size: 520 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1403d15a0(longlong param_1,undefined8 param_2,undefined2 param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined ***local_a8;
  undefined2 local_98 [8];
  undefined **local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_e8;
  plVar4 = *(longlong **)(param_1 + 0xb8);
  uVar8 = 0;
  uVar2 = local_c0;
  do {
    if (plVar4 != (longlong *)0x0) {
LAB_1403d1621:
      local_88 = GeometrySink::vftable;
      local_70 = param_5;
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      uStack_40 = 0;
      lVar1 = *(longlong *)(param_1 + 0x20);
      uVar6 = *(uint *)(lVar1 + 0x14);
      local_98[0] = param_3;
      local_80 = param_1;
      local_78 = param_4;
      if (uVar6 == 0) {
        lVar5 = FUN_1403c5340(lVar1 + 0x78);
        uVar7 = (uint)*(byte *)(lVar5 + 0x13) + (uint)*(byte *)(lVar5 + 0x12) * 0x100;
        uVar6 = 1000;
        if (uVar7 - 0x10 < 0x3ff1) {
          uVar6 = uVar7;
        }
        *(uint *)(lVar1 + 0x14) = uVar6;
      }
      local_a8 = &local_88;
      local_b0 = 0;
      local_b8 = 0;
      local_c0 = CONCAT44(local_c0._4_4_,1);
      local_c8 = 0;
      iVar3 = (**(code **)(*plVar4 + 0x70))(plVar4,(float)uVar6,local_98,0);
      uVar2 = local_70;
      lVar1 = local_78;
      local_88 = GeometrySink::vftable;
      if ((int)local_68 != 0) {
        if ((local_68._4_4_ != local_60._4_4_) || ((float)local_60 != (float)local_58)) {
          local_c0 = uVar8;
          if (*(longlong *)(local_78 + 0x38) != 0) {
            local_c0 = *(undefined8 *)(*(longlong *)(local_78 + 0x38) + 8);
          }
          local_c8 = CONCAT44(local_c8._4_4_,(float)local_60);
          (**(code **)(local_78 + 0x18))(local_78,local_70,&local_68);
        }
        if (*(longlong *)(lVar1 + 0x38) != 0) {
          uVar8 = *(undefined8 *)(*(longlong *)(lVar1 + 0x38) + 0x20);
        }
        (**(code **)(lVar1 + 0x30))(lVar1,uVar2,&local_68,uVar8);
      }
      return iVar3 == 0;
    }
    local_c0._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      plVar4 = (longlong *)0x0;
      goto LAB_1403d1621;
    }
    local_c0 = uVar2;
    plVar4 = (longlong *)FUN_140413ae0();
    LOCK();
    bVar9 = *(longlong *)(param_1 + 0xb8) == 0;
    if (bVar9) {
      *(longlong *)(param_1 + 0xb8) = (longlong)plVar4;
    }
    UNLOCK();
    if (bVar9) goto LAB_1403d1621;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    plVar4 = *(longlong **)(param_1 + 0xb8);
    uVar2 = local_c0;
  } while( true );
}

