// Function: FUN_14011af50
// Addr: 14011af50
// Size: 339 bytes


void FUN_14011af50(longlong param_1)

{
  int iVar1;
  undefined1 local_res8 [8];
  undefined4 local_238;
  undefined4 local_234;
  undefined1 *local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined1 local_218 [512];
  
  iVar1 = FUN_140290e10(param_1 + 0x450);
  do {
    if (iVar1 != 0) {
      return;
    }
    FUN_140290ea0(param_1 + 0x450);
    Sleep(0x21);
    if (*(longlong *)(param_1 + 0x158) != -1) {
      if (*(char *)(param_1 + 0x439) != '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x98) + 0x58))
                  (*(longlong **)(param_1 + 0x98),local_218,local_res8);
        local_230 = local_218;
        local_238 = 8;
        local_228 = 0;
        local_220 = 0;
        local_234 = 0x200;
        iVar1 = FUN_140290d80(param_1 + 0x4a0);
        if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_140290d30(5);
        }
        if (*(int *)(param_1 + 0x4ec) == 0x7fffffff) {
          *(undefined4 *)(param_1 + 0x4ec) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_140290d30(6);
        }
        FUN_1400182d0(param_1 + 0x158,&local_238);
        FUN_140290ea0(param_1 + 0x4a0);
        thunk_FUN_14028af80(0);
      }
      FUN_140084700(param_1 + 0x158);
    }
    iVar1 = FUN_140290e10(param_1 + 0x450);
  } while( true );
}

