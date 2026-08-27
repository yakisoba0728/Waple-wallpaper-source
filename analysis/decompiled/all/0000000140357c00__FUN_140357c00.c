// Function: FUN_140357c00
// Addr: 140357c00
// Size: 366 bytes


ulonglong FUN_140357c00(undefined8 param_1)

{
  char cVar1;
  undefined2 uVar2;
  ulonglong uVar3;
  uint local_res10 [2];
  char local_res18;
  char local_res19;
  char local_res1a;
  byte local_res1b;
  
  uVar3 = FUN_1402f5c50(param_1,0);
  local_res10[0] = (uint)uVar3;
  if (local_res10[0] == 0) {
    uVar3 = FUN_1402f54b0(param_1,&local_res18,4);
    local_res10[0] = (uint)uVar3;
    if (local_res10[0] == 0) {
      if ((((local_res18 == '\x1f') && (local_res19 == -0x75)) && (local_res1a == '\b')) &&
         ((local_res1b & 0xe0) == 0)) {
        uVar3 = FUN_1402f5c90(param_1,6);
        local_res10[0] = (uint)uVar3;
        if ((local_res1b & 4) != 0) {
          uVar2 = FUN_1402f5b60(param_1,local_res10);
          if (local_res10[0] != 0) {
            return (ulonglong)local_res10[0];
          }
          uVar3 = FUN_1402f5c90(param_1,uVar2);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          local_res10[0] = 0;
        }
        if ((local_res1b & 8) != 0) {
          cVar1 = FUN_1402f55a0(param_1,local_res10);
          uVar3 = 0;
          if (local_res10[0] != 0) {
            return (ulonglong)local_res10[0];
          }
          while (cVar1 != '\0') {
            cVar1 = FUN_1402f55a0(param_1,local_res10);
            uVar3 = (ulonglong)local_res10[0];
            if (local_res10[0] != 0) {
              return uVar3;
            }
          }
        }
        if ((local_res1b & 0x10) != 0) {
          cVar1 = FUN_1402f55a0(param_1,local_res10);
          uVar3 = 0;
          if (local_res10[0] != 0) {
            return (ulonglong)local_res10[0];
          }
          while (cVar1 != '\0') {
            cVar1 = FUN_1402f55a0(param_1,local_res10);
            uVar3 = (ulonglong)local_res10[0];
            if (local_res10[0] != 0) {
              return uVar3;
            }
          }
        }
        if ((local_res1b & 2) != 0) {
          uVar3 = FUN_1402f5c90(param_1,2);
          return uVar3;
        }
      }
      else {
        uVar3 = 3;
      }
    }
  }
  return uVar3;
}

