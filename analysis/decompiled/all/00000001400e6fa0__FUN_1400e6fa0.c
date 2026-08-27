// Function: FUN_1400e6fa0
// Addr: 1400e6fa0
// Size: 513 bytes


undefined8 FUN_1400e6fa0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  size_t sVar7;
  _Collvec *p_Var8;
  undefined8 ****ppppuVar9;
  ulonglong uVar10;
  char *_Str;
  undefined1 *puVar11;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [24];
  undefined8 ***local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  undefined1 local_98 [8];
  longlong local_90;
  undefined1 local_88;
  longlong local_80;
  undefined1 local_78;
  longlong local_70;
  undefined2 local_68;
  longlong local_60;
  undefined2 local_58;
  longlong local_50;
  undefined1 local_48;
  longlong local_40;
  undefined1 local_38;
  _Collvec local_30;
  
  puVar11 = auStack_d8;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    puVar6 = (undefined8 *)FUN_14028af20(0x20);
    lVar1 = *(longlong *)(param_2 + 8);
    if (lVar1 == 0) {
      local_a8 = 0;
      uStack_b0 = 0;
      local_b8 = (undefined8 ****)0x0;
      local_a0 = 0xf;
    }
    else {
      _Str = *(char **)(lVar1 + 0x28);
      if (_Str == (char *)0x0) {
        _Str = (char *)(lVar1 + 0x30);
      }
      local_a8 = 0;
      local_a0 = 0;
      local_b8 = (undefined8 ****)0x0;
      uStack_b0 = 0;
      sVar7 = strlen(_Str);
      FUN_140017480(&local_b8,_Str,sVar7);
    }
    ppppuVar9 = &local_b8;
    if (0xf < local_a0) {
      ppppuVar9 = (undefined8 ****)local_b8;
    }
    FUN_1402914b0(local_98,0);
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    if (ppppuVar9 == (undefined8 ****)0x0) {
LAB_1400e7195:
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar11 + -8) = &UNK_1400e71a1;
      FUN_14028c370("bad locale name");
    }
    FUN_1402917f0(local_98,ppppuVar9);
    *(undefined4 *)(puVar6 + 1) = 0;
    *puVar6 = std::collate<char>::vftable;
    p_Var8 = _Getcoll(&local_30);
    uVar3 = *(undefined4 *)&p_Var8->field_0x4;
    uVar4 = *(undefined4 *)&p_Var8->_LocaleName;
    uVar5 = *(undefined4 *)((longlong)&p_Var8->_LocaleName + 4);
    *(uint *)(puVar6 + 2) = p_Var8->_Page;
    *(undefined4 *)((longlong)puVar6 + 0x14) = uVar3;
    *(undefined4 *)(puVar6 + 3) = uVar4;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar5;
    *param_1 = (longlong)puVar6;
    FUN_1402918b0(local_98);
    if (local_40 != 0) {
      thunk_FUN_1402d9040();
    }
    local_40 = 0;
    if (local_50 != 0) {
      thunk_FUN_1402d9040();
    }
    local_50 = 0;
    if (local_60 != 0) {
      thunk_FUN_1402d9040();
    }
    local_60 = 0;
    if (local_70 != 0) {
      thunk_FUN_1402d9040();
    }
    local_70 = 0;
    if (local_80 != 0) {
      thunk_FUN_1402d9040();
    }
    local_80 = 0;
    if (local_90 != 0) {
      thunk_FUN_1402d9040();
    }
    local_90 = 0;
    FUN_140291550(local_98);
    if (0xf < local_a0) {
      uVar10 = local_a0 + 1;
      ppppuVar9 = (undefined8 ****)local_b8;
      if (0xfff < uVar10) {
        ppppuVar9 = (undefined8 ****)local_b8[-1];
        if (0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)ppppuVar9))) {
          pcVar2 = (code *)swi(0x29);
          (*pcVar2)(5);
          puVar11 = auStack_d0;
          goto LAB_1400e7195;
        }
        uVar10 = local_a0 + 0x28;
      }
      thunk_FUN_14028af80(ppppuVar9,uVar10);
    }
  }
  return 1;
}

