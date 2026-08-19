// Function: FUN_140041d40
// Addr: 140041d40
// Size: 111 bytes


void FUN_140041d40(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_248 [120];
  undefined4 local_1d0;
  undefined1 local_148 [288];
  
  if (*(char *)(param_1 + 0xe0) == '\0') {
    local_1d0 = 0;
    uVar1 = FUN_140005fb0(local_248);
    uVar1 = FUN_140005df0(uVar1,"config_backups");
                    /* WARNING: Subroutine does not return */
    FUN_1400166d0(local_148,uVar1);
  }
  return;
}

