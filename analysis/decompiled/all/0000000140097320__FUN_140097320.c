// Function: FUN_140097320
// Addr: 140097320
// Size: 363 bytes


undefined8 FUN_140097320(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 local_88 [8];
  longlong local_80;
  undefined1 local_78;
  longlong local_70;
  undefined1 local_68;
  longlong local_60;
  undefined2 local_58;
  longlong local_50;
  undefined2 local_48;
  longlong local_40;
  undefined1 local_38;
  longlong local_30;
  undefined1 local_28;
  
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    puVar2 = (undefined8 *)FUN_14028af20(0x10);
    lVar1 = *(longlong *)(param_2 + 8);
    if (lVar1 == 0) {
      puVar3 = &DAT_140474480;
    }
    else {
      puVar3 = *(undefined1 **)(lVar1 + 0x28);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = (undefined1 *)(lVar1 + 0x30);
      }
    }
    FUN_1402914b0(local_88,0);
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
    local_30 = 0;
    local_28 = 0;
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_14028c370("bad locale name");
    }
    FUN_1402917f0(local_88,puVar3);
    *(undefined4 *)(puVar2 + 1) = 0;
    *puVar2 = std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::vftable;
    *param_1 = (longlong)puVar2;
    FUN_1402918b0(local_88);
    if (local_30 != 0) {
      thunk_FUN_1402d9040();
    }
    local_30 = 0;
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
    FUN_140291550(local_88);
  }
  return 4;
}

