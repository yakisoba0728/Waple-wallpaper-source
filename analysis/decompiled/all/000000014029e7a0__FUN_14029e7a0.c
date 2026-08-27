// Function: FUN_14029e7a0
// Addr: 14029e7a0
// Size: 464 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14029e7a0(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  _Collvec *p_Var6;
  undefined8 *puVar7;
  undefined1 auStack_f8 [32];
  uint local_d8;
  undefined1 local_d0 [8];
  longlong local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined2 local_a0;
  longlong local_98;
  undefined2 local_90;
  longlong local_88;
  undefined1 local_80;
  longlong local_78;
  undefined1 local_70;
  undefined8 *local_68 [2];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = DAT_1404dc040 ^ (ulonglong)auStack_f8;
  puVar5 = (undefined8 *)0x0;
  local_d8 = 0;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    puVar4 = (undefined8 *)FUN_14028af20(0x20);
    puVar7 = puVar5;
    local_68[0] = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)FUN_1400e9f60(param_2,local_58);
      local_d8 = 1;
      if (0xf < (ulonglong)puVar5[3]) {
        puVar5 = (undefined8 *)*puVar5;
      }
      FUN_1402914b0(local_d0,0);
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c370("bad locale name");
      }
      FUN_1402917f0(local_d0,puVar5);
      puVar5 = (undefined8 *)0x3;
      *(undefined4 *)(puVar4 + 1) = 0;
      *puVar4 = std::collate<unsigned_short>::vftable;
      p_Var6 = _Getcoll((_Collvec *)local_68);
      uVar1 = *(undefined4 *)&p_Var6->field_0x4;
      uVar2 = *(undefined4 *)&p_Var6->_LocaleName;
      uVar3 = *(undefined4 *)((longlong)&p_Var6->_LocaleName + 4);
      *(uint *)(puVar4 + 2) = p_Var6->_Page;
      *(undefined4 *)((longlong)puVar4 + 0x14) = uVar1;
      *(undefined4 *)(puVar4 + 3) = uVar2;
      *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar3;
      puVar7 = puVar4;
    }
    *param_1 = (longlong)puVar7;
    if (((ulonglong)puVar5 & 2) != 0) {
      local_d8 = (uint)puVar5 & 0xfffffffd;
      puVar5 = (undefined8 *)(ulonglong)local_d8;
      FUN_1402918b0(local_d0);
      if (local_78 != 0) {
        thunk_FUN_1402d9040();
      }
      local_78 = 0;
      if (local_88 != 0) {
        thunk_FUN_1402d9040();
      }
      local_88 = 0;
      if (local_98 != 0) {
        thunk_FUN_1402d9040();
      }
      local_98 = 0;
      if (local_a8 != 0) {
        thunk_FUN_1402d9040();
      }
      local_a8 = 0;
      if (local_b8 != 0) {
        thunk_FUN_1402d9040();
      }
      local_b8 = 0;
      if (local_c8 != 0) {
        thunk_FUN_1402d9040();
      }
      local_c8 = 0;
      FUN_140291550(local_d0);
    }
    if (((ulonglong)puVar5 & 1) != 0) {
      thunk_FUN_140017240(local_58);
    }
  }
  return 1;
}

