// Function: FUN_140019420
// Addr: 140019420
// Size: 102 bytes


void FUN_140019420(char param_1)

{
  undefined8 uVar1;
  undefined1 local_258 [272];
  undefined1 local_148 [288];
  
  if (param_1 == '\0') {
    (*DAT_140426838)(DAT_1404e5350,0x72);
    (*DAT_140426818)(DAT_1404e5350,0x72,5000,0);
    return;
  }
  if (DAT_1404df750 == '\0') {
    uVar1 = FUN_140005fb0(local_258);
    uVar1 = FUN_140005df0(uVar1,"config_backups");
                    /* WARNING: Subroutine does not return */
    FUN_1400166d0(local_148,uVar1);
  }
  return;
}

