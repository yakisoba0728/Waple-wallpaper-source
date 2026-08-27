// Function: FUN_1400e8940
// Addr: 1400e8940
// Size: 444 bytes


undefined8 FUN_1400e8940(longlong param_1,char param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  
  iVar2 = *(int *)(param_1 + 0x70);
  if (iVar2 == 0x5c) {
    if ((*(uint *)(param_1 + 0x60) >> 0x14 & 1) != 0) {
      FUN_1400e5740();
      if (((*(ulonglong *)(param_1 + 0x60) >> 0xd & 1) != 0) && (*(char *)(param_1 + 0x75) == 'b'))
      {
        FUN_1400e5740(param_1);
        *(undefined1 *)(param_1 + 0x76) = 8;
        return 1;
      }
      if ((*(ulonglong *)(param_1 + 0x60) & 0x80080) != 0) {
        cVar4 = *(char *)(param_1 + 0x75);
        if ((byte)(cVar4 - 0x30U) < 10) {
          *(int *)(param_1 + 0x6c) = cVar4 + -0x30;
          if (cVar4 != '/') {
            FUN_1400e5740(param_1);
            if ((((*(uint *)(param_1 + 0x60) >> 0x13 & 1) != 0) && (*(int *)(param_1 + 0x6c) == 0))
               && (9 < (byte)(*(char *)(param_1 + 0x75) - 0x30U))) {
              *(undefined1 *)(param_1 + 0x76) = 0;
              return 1;
            }
                    /* WARNING: Subroutine does not return */
            FUN_1400e74c0();
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
        }
      }
      cVar4 = FUN_1400e7d50(param_1,1);
      if (cVar4 != '\0') {
        return 1;
      }
      if (((*(uint *)(param_1 + 0x60) >> 0x10 & 1) != 0) &&
         (cVar4 = FUN_1400e7ae0(param_1,0), cVar4 != '\0')) {
        return 2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1400e74c0();
    }
  }
  else {
    if (iVar2 == 0x5b) {
      uVar1 = *(undefined1 *)(param_1 + 0x75);
      FUN_1400e5740();
      uVar3 = *(uint *)(param_1 + 0x70);
      if ((uVar3 < 0x3e) && ((0x2400400000000000U >> ((ulonglong)uVar3 & 0x3f) & 1) != 0)) {
        FUN_1400e5740(param_1);
        uVar5 = FUN_1400e9af0(param_1,uVar3);
        return uVar5;
      }
      *(undefined1 *)(param_1 + 0x76) = uVar1;
      return 1;
    }
    if (iVar2 == 0x5d) {
      if (((*(uint *)(param_1 + 0x60) >> 0x1d & 1) == 0) || (param_2 == '\0')) {
        return 0;
      }
    }
    else if (iVar2 == -1) {
      return 0;
    }
  }
  *(undefined1 *)(param_1 + 0x76) = *(undefined1 *)(param_1 + 0x75);
  FUN_1400e5740();
  return 1;
}

