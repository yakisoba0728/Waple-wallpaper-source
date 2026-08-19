// Function: FUN_1402b5d40
// Addr: 1402b5d40
// Size: 431 bytes


void FUN_1402b5d40(undefined8 param_1,uint param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  undefined1 local_res10 [8];
  undefined1 local_58 [32];
  
  bVar1 = FUN_1400e7070(0,0);
  if ((param_2 & (1 << (bVar1 & 0x1f)) >> 1) != 0) {
    if (param_4 != 0) {
      if (DAT_1404e9290 == 0) {
        func_0x000140291580(local_res10,0);
        return;
      }
      func_0x000140291580(local_58,0);
      return;
    }
    if (DAT_1404e9290 == 0) {
      func_0x000140291580(local_res10,0);
      return;
    }
    func_0x00014028aff0(0x20);
    return;
  }
  if ((param_2 & 0x20) != 0) {
    if (param_4 != 0) {
      if (DAT_1404e43a8 == 0) {
        func_0x000140291580(local_res10,0);
        return;
      }
      func_0x000140291580(local_58,0);
      return;
    }
    if (DAT_1404e43a8 == 0) {
      func_0x000140291580(local_res10,0);
      return;
    }
    func_0x00014028aff0(0x10);
    return;
  }
  if ((param_2 & 4) == 0) {
    if ((param_2 & 0x10) == 0) {
      return;
    }
    if (param_4 == 0) {
      if (DAT_1404e43d0 == 0) {
        func_0x000140291580(local_res10,0);
        return;
      }
      func_0x00014028aff0(0x58);
      return;
    }
    if (DAT_1404e43d0 == 0) {
      func_0x000140291580(local_res10,0);
      return;
    }
    func_0x000140291580(local_58,0);
    return;
  }
  if (param_4 != 0) {
    if (DAT_1404e43b0 == 0) {
      func_0x000140291580(local_res10,0);
      return;
    }
    func_0x000140291580(local_58,0);
    return;
  }
  if (DAT_1404e43b0 == 0) {
    func_0x000140291580(local_res10,0);
    return;
  }
  func_0x00014028aff0(0x10);
  return;
}

