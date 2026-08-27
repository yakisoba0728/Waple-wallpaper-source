// Function: FUN_140098b00
// Addr: 140098b00
// Size: 156 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_140098b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 local_4018 [16383];
  undefined1 local_19;
  
  if (1 < DAT_1404e52b8) {
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20 = param_4;
    puVar1 = (undefined8 *)FUN_140016300();
    FUN_1402c7d8c(*puVar1,local_4018,0x4000,param_1,0,&local_res10);
    local_19 = 0;
    if ((DAT_1404e5294 != '\0') && (1 < DAT_1404e52b8)) {
      FUN_140098350(local_4018);
    }
  }
  return;
}

