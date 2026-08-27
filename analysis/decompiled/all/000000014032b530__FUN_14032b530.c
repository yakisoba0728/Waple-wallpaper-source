// Function: FUN_14032b530
// Addr: 14032b530
// Size: 149 bytes


ulonglong FUN_14032b530(undefined8 param_1,ulonglong param_2,short *param_3)

{
  ulonglong uVar1;
  undefined *puVar2;
  byte local_res20;
  byte local_res21;
  byte local_res22;
  byte local_res23;
  byte local_res24;
  
  if ((param_2 & 0xffffff00) == 0) {
    puVar2 = &DAT_14043fdb8;
    if ((param_2 & 4) != 0) {
      puVar2 = &DAT_14043fdd8;
    }
    uVar1 = FUN_1402f5610(param_1,puVar2);
    return uVar1;
  }
  uVar1 = FUN_1402f5610(param_1,&DAT_14043fdf8,&local_res20);
  if ((int)uVar1 == 0) {
    *param_3 = local_res20 - 0x80;
    param_3[1] = local_res21 - 0x80;
    param_3[2] = local_res22 - 0x80;
    param_3[3] = local_res23 - 0x80;
    param_3[4] = local_res24 - 0x80;
    param_3[5] = 0;
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}

