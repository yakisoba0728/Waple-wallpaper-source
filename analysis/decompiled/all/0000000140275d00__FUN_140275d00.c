// Function: FUN_140275d00
// Addr: 140275d00
// Size: 570 bytes


void FUN_140275d00(longlong *param_1,undefined8 param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 ****ppppuVar5;
  ulonglong uVar6;
  undefined8 ***local_68 [2];
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  (**(code **)(*param_1 + 0x40))(param_1,local_68,param_2);
  if (CONCAT44(uStack_54,local_58) == 0) {
LAB_140275db3:
    local_38 = 0;
    uStack_40 = 0;
    local_48 = (undefined8 *)0x0;
    uStack_30 = 7;
  }
  else {
    ppppuVar5 = local_68;
    if (0xf < local_50) {
      ppppuVar5 = (undefined8 ****)local_68[0];
    }
    iVar3 = (*DAT_140426748)(0xfde9,0,ppppuVar5,CONCAT44(uStack_54,local_58),0,0);
    if (iVar3 < 1) goto LAB_140275db3;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    FUN_1400168b0(&local_48,0,(longlong)iVar3);
    puVar4 = &local_48;
    if (7 < uStack_30) {
      puVar4 = local_48;
    }
    ppppuVar5 = local_68;
    if (0xf < local_50) {
      ppppuVar5 = (undefined8 ****)local_68[0];
    }
    (*DAT_140426748)(0xfde9,0,ppppuVar5,local_58,puVar4,iVar3);
  }
  cVar2 = FUN_140060ff0(&local_48);
  if (7 < uStack_30) {
    uVar6 = uStack_30 * 2 + 2;
    puVar4 = local_48;
    if (0xfff < uVar6) {
      puVar4 = (undefined8 *)local_48[-1];
      if (0x1f < (ulonglong)((longlong)local_48 + (-8 - (longlong)puVar4))) {
LAB_140275fb0:
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(5);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar6 = uStack_30 * 2 + 0x29;
    }
    func_0x00014028b040(puVar4,uVar6);
    return;
  }
  if (cVar2 == '\0') {
    if (local_50 < 0x10) {
      return;
    }
    uVar6 = local_50 + 1;
    ppppuVar5 = (undefined8 ****)local_68[0];
    if (0xfff < uVar6) {
      ppppuVar5 = (undefined8 ****)local_68[0][-1];
      if (0x1f < (ulonglong)((longlong)local_68[0] + (-8 - (longlong)ppppuVar5)))
      goto LAB_140275fb0;
      uVar6 = local_50 + 0x28;
    }
    func_0x00014028b040(ppppuVar5,uVar6);
    return;
  }
  if (CONCAT44(uStack_54,local_58) != 0) {
    ppppuVar5 = local_68;
    if (0xf < local_50) {
      ppppuVar5 = (undefined8 ****)local_68[0];
    }
    iVar3 = (*DAT_140426748)(0xfde9,0,ppppuVar5,CONCAT44(uStack_54,local_58),0,0);
    if (0 < iVar3) {
      local_38 = 0;
      uStack_30 = 0;
      local_48 = (undefined8 *)0x0;
      uStack_40 = 0;
      FUN_1400168b0(&local_48,0,(longlong)iVar3);
      puVar4 = &local_48;
      if (7 < uStack_30) {
        puVar4 = local_48;
      }
      ppppuVar5 = local_68;
      if (0xf < local_50) {
        ppppuVar5 = (undefined8 ****)local_68[0];
      }
      (*DAT_140426748)(0xfde9,0,ppppuVar5,local_58,puVar4,iVar3);
      goto LAB_140275ed6;
    }
  }
  local_38 = 0;
  uStack_40 = 0;
  local_48 = (undefined8 *)0x0;
  uStack_30 = 7;
LAB_140275ed6:
  local_28 = (undefined4)local_48;
  uStack_24 = local_48._4_4_;
  uStack_20 = (undefined4)uStack_40;
  uStack_1c = uStack_40._4_4_;
  local_18 = (undefined4)local_38;
  uStack_14 = local_38._4_4_;
  uStack_10 = (undefined4)uStack_30;
  uStack_c = uStack_30._4_4_;
  FUN_1402914f0();
                    /* WARNING: Subroutine does not return */
  FUN_1400166d0(&local_48,&local_28);
}

