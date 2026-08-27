// Function: FUN_14029f810
// Addr: 14029f810
// Size: 433 bytes


undefined8 FUN_14029f810(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
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
  
  puVar3 = (undefined8 *)0x0;
  if ((param_1 != (longlong *)0x0) && (*param_1 == 0)) {
    puVar2 = (undefined8 *)FUN_14028af20(0x78);
    puVar5 = puVar3;
    if (puVar2 != (undefined8 *)0x0) {
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
      if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_14028c370("bad locale name");
      }
      FUN_1402917f0(local_98,puVar4);
      *(undefined4 *)(puVar2 + 1) = 0;
      *puVar2 = std::_Mpunct<unsigned_short>::vftable;
      *(undefined1 *)((longlong)puVar2 + 0x44) = 0;
      FUN_1402a4550(puVar2,local_98,1);
      *puVar2 = std::moneypunct<unsigned_short,0>::vftable;
      puVar3 = puVar2;
      puVar5 = (undefined8 *)0x1;
    }
    *param_1 = (longlong)puVar3;
    if (puVar5 != (undefined8 *)0x0) {
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
    }
  }
  return 3;
}

