// Function: FUN_140038290
// Addr: 140038290
// Size: 546 bytes


undefined8 FUN_140038290(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined1 local_b8 [8];
  longlong local_b0;
  undefined1 local_a8;
  longlong local_a0;
  undefined1 local_98;
  longlong local_90;
  undefined2 local_88;
  longlong local_80;
  undefined2 local_78;
  longlong local_70;
  undefined1 local_68;
  longlong local_60;
  undefined1 local_58;
  undefined1 local_50 [56];
  
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    puVar3 = (undefined8 *)FUN_14028af20(0x30);
    lVar1 = *(longlong *)(param_2 + 8);
    if (lVar1 == 0) {
      puVar4 = &DAT_140474480;
    }
    else {
      puVar4 = *(undefined1 **)(lVar1 + 0x28);
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = (undefined1 *)(lVar1 + 0x30);
      }
    }
    FUN_1402914b0(local_b8,0);
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_14028c370("bad locale name");
    }
    FUN_1402917f0(local_b8,puVar4);
    *(undefined4 *)(puVar3 + 1) = 0;
    *puVar3 = std::numpunct<char>::vftable;
    FUN_1402ca9c0();
    FUN_140291ac0(local_50);
    puVar3[2] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar4 = (undefined1 *)_calloc_base(1);
    if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_14028b8c0();
    }
    *puVar4 = DAT_140474480;
    puVar3[2] = puVar4;
    puVar5 = (undefined4 *)_calloc_base(6,1);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_14028b8c0();
    }
    *puVar5 = DAT_140474458;
    *(undefined2 *)(puVar5 + 1) = DAT_14047445c;
    puVar3[4] = puVar5;
    puVar5 = (undefined4 *)_calloc_base(5,1);
    if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_14028b8c0();
    }
    *puVar5 = DAT_140474460;
    uVar2 = DAT_140474464;
    puVar3[5] = puVar5;
    *(undefined1 *)(puVar5 + 1) = uVar2;
    *(undefined2 *)(puVar3 + 3) = 0x2c2e;
    *param_1 = (longlong)puVar3;
    FUN_1402918b0(local_b8);
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
    if (local_a0 != 0) {
      thunk_FUN_1402d9040();
    }
    local_a0 = 0;
    if (local_b0 != 0) {
      thunk_FUN_1402d9040();
    }
    local_b0 = 0;
    FUN_140291550(local_b8);
  }
  return 4;
}

