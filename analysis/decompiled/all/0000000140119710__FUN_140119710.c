// Function: FUN_140119710
// Addr: 140119710
// Size: 224 bytes


void FUN_140119710(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 local_60 [8];
  uint local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uVar1 = func_0x000140085160(local_60);
  func_0x00014010c450(param_1,uVar1);
  cVar2 = FUN_14010d1d0(param_1);
  if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_140086eb0(param_1 + 0x38,"wproperties","");
  }
  *(undefined1 *)(param_1 + 0x439) = 0;
  if (*(longlong *)(param_1 + 0x158) != -1) {
    local_58 = CONCAT31(local_58._1_3_,7);
    local_58 = local_58 & 0xfffffeff;
    local_40 = 0;
    local_50 = 0;
    uStack_48 = 0;
    func_0x00014028aff0(0x10);
    return;
  }
  FUN_14011aee0(param_1);
  func_0x000140085510(param_2);
  return;
}

