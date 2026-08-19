// Function: FUN_1402a5460
// Addr: 1402a5460
// Size: 693 bytes


void FUN_1402a5460(undefined8 param_1,uint param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined1 local_res10 [8];
  undefined1 local_58 [4];
  uint local_54 [7];
  
  lVar1 = DAT_1404e3d88;
  local_54[0] = param_2 & 2;
  if ((param_2 & 2) != 0) {
    if (param_4 == 0) {
      if (DAT_1404e3d88 == 0) {
        func_0x000140291580(local_res10,0);
        return;
      }
      func_0x00014028aff0(0x60);
      return;
    }
    if (DAT_1404e3d88 == 0) {
      func_0x000140291580(local_res10,0);
      return;
    }
    uVar3 = FUN_14029d260(param_4);
    FUN_140293ba0(param_3,uVar3,lVar1);
  }
  if ((param_2 & 8) != 0) {
    if (param_4 != 0) {
      if (DAT_1404e4298 == 0) {
        func_0x000140291580(local_res10,0);
        return;
      }
      func_0x000140291580(local_58,0);
      return;
    }
    if (DAT_1404e4298 == 0) {
      func_0x000140291580(local_res10,0);
      return;
    }
    func_0x00014028aff0(0x10);
    return;
  }
  bVar2 = FUN_14029e870(0,0);
  if ((param_2 & (1 << (bVar2 & 0x1f)) >> 1) != 0) {
    if (param_4 != 0) {
      if (DAT_1404e42b0 == 0) {
        func_0x000140291580(local_res10,0);
        return;
      }
      func_0x000140291580(local_58,0);
      return;
    }
    if (DAT_1404e42b0 == 0) {
      func_0x000140291580(local_res10,0);
      return;
    }
    func_0x00014028aff0(0x20);
    return;
  }
  if ((param_2 & 0x20) != 0) {
    if (param_4 != 0) {
      if (DAT_1404e42b8 == 0) {
        func_0x000140291580(local_res10,0);
        return;
      }
      func_0x000140291580(local_58,0);
      return;
    }
    if (DAT_1404e42b8 == 0) {
      func_0x000140291580(local_res10,0);
      return;
    }
    func_0x00014028aff0(0x10);
    return;
  }
  if ((param_2 & 4) != 0) {
    if (param_4 != 0) {
      if (DAT_1404e42c0 == 0) {
        func_0x000140291580(local_res10,0);
        return;
      }
      func_0x000140291580(local_58,0);
      return;
    }
    if (DAT_1404e42c0 == 0) {
      func_0x000140291580(local_res10,0);
      return;
    }
    func_0x00014028aff0(0x10);
    return;
  }
  if ((param_2 & 0x10) == 0) {
    if (local_54[0] == 0) {
      return;
    }
    if (param_4 == 0) {
      if (DAT_1404e3d80 == 0) {
        func_0x000140291580(local_res10,0);
        return;
      }
      func_0x00014028aff0(0x40);
      return;
    }
    if (DAT_1404e3d80 == 0) {
      func_0x000140291580(local_res10,0);
      return;
    }
    func_0x000140291580(local_54,0);
    return;
  }
  if (param_4 != 0) {
    if (DAT_1404e42e0 == 0) {
      func_0x000140291580(local_res10,0);
      return;
    }
    func_0x000140291580(local_58,0);
    return;
  }
  if (DAT_1404e42e0 == 0) {
    func_0x000140291580(local_res10,0);
    return;
  }
  func_0x00014028aff0(0x58);
  return;
}

