// Function: FUN_14010c420
// Addr: 14010c420
// Size: 542 bytes


undefined8 FUN_14010c420(longlong param_1,undefined8 param_2)

{
  short *psVar1;
  short *psVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  short *psVar8;
  undefined8 ****ppppuVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  short *psVar12;
  undefined8 ***local_88;
  longlong lStack_80;
  longlong local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar5 = FUN_140086de0(param_1 + 0x10,"title","");
  if (*(char *)(lVar5 + 8) == '\x04') {
    uVar6 = FUN_140086de0(param_1 + 0x10,"title","");
    FUN_140085cc0(uVar6,param_2);
    return param_2;
  }
  plVar7 = (longlong *)FUN_140005880(&local_48,param_1 + 0x100);
  local_88 = (undefined8 ***)*plVar7;
  lStack_80 = plVar7[1];
  local_78 = plVar7[2];
  uStack_70 = plVar7[3];
  plVar7[2] = 0;
  plVar7[3] = 7;
  *(undefined2 *)plVar7 = 0;
  uVar11 = CONCAT44(uStack_2c,uStack_30);
  if (7 < uVar11) {
    lVar4 = CONCAT44(uStack_44,local_48);
    uVar10 = uVar11 * 2 + 2;
    lVar5 = lVar4;
    if (0xfff < uVar10) {
      lVar5 = *(longlong *)(lVar4 + -8);
      if (0x1f < (lVar4 - lVar5) - 8U) goto LAB_14010c63c;
      uVar10 = uVar11 * 2 + 0x29;
    }
    thunk_FUN_14028af80(lVar5,uVar10);
  }
  ppppuVar9 = &local_88;
  if (7 < uStack_70) {
    ppppuVar9 = (undefined8 ****)local_88;
  }
  psVar2 = (short *)((longlong)ppppuVar9 + local_78 * 2);
  psVar12 = psVar2;
  for (psVar8 = (short *)FUN_140015e90(ppppuVar9,psVar2); psVar8 != psVar2; psVar8 = psVar8 + 1) {
    if ((*psVar8 != 0x5c) && (*psVar8 != 0x2f)) goto LAB_14010c550;
  }
LAB_14010c56d:
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_140016170(&local_68,psVar12,(longlong)psVar2 - (longlong)psVar12 >> 1);
  local_48 = (undefined4)local_68;
  uStack_44 = local_68._4_4_;
  uStack_40 = (undefined4)uStack_60;
  uStack_3c = uStack_60._4_4_;
  local_38 = (undefined4)local_58;
  uStack_34 = local_58._4_4_;
  uStack_30 = (undefined4)uStack_50;
  uStack_2c = uStack_50._4_4_;
  FUN_140018ce0(&local_48,param_2);
  uVar11 = CONCAT44(uStack_2c,uStack_30);
  if (7 < uVar11) {
    lVar4 = CONCAT44(uStack_44,local_48);
    uVar10 = uVar11 * 2 + 2;
    lVar5 = lVar4;
    if (0xfff < uVar10) {
      lVar5 = *(longlong *)(lVar4 + -8);
      if (0x1f < (lVar4 - lVar5) - 8U) goto LAB_14010c63c;
      uVar10 = uVar11 * 2 + 0x29;
    }
    thunk_FUN_14028af80(lVar5,uVar10);
  }
  if (7 < uStack_70) {
    uVar11 = uStack_70 * 2 + 2;
    ppppuVar9 = (undefined8 ****)local_88;
    if (0xfff < uVar11) {
      ppppuVar9 = (undefined8 ****)local_88[-1];
      if (0x1f < (ulonglong)((longlong)local_88 + (-8 - (longlong)ppppuVar9))) {
LAB_14010c63c:
        pcVar3 = (code *)swi(0x29);
        (*pcVar3)(5);
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return uVar6;
      }
      uVar11 = uStack_70 * 2 + 0x29;
    }
    thunk_FUN_14028af80(ppppuVar9,uVar11);
  }
  return param_2;
LAB_14010c550:
  psVar1 = psVar12 + -1;
  if (psVar12[-1] == 0x5c) goto LAB_14010c56d;
  if ((psVar12[-1] == 0x2f) || (psVar12 = psVar1, psVar8 == psVar1)) goto LAB_14010c56d;
  goto LAB_14010c550;
}

