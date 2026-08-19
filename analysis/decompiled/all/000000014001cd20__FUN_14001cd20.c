// Function: FUN_14001cd20
// Addr: 14001cd20
// Size: 143 bytes


void FUN_14001cd20(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *local_50;
  uint local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_48 = CONCAT31(local_48._1_3_,7);
  local_48 = local_48 & 0xfffffeff;
  local_30 = 0;
  local_40 = 0;
  uStack_38 = 0;
  plVar1 = (longlong *)func_0x00014028aff0(0x10);
  *plVar1 = 0;
  plVar1[1] = 0;
  lVar2 = func_0x00014028aff0(0x58);
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  *(undefined2 *)(lVar2 + 0x18) = 0x101;
  *plVar1 = lVar2;
  local_50 = plVar1;
                    /* WARNING: Subroutine does not return */
  FUN_140086eb0(&local_50,"wallpaperconfig","");
}

