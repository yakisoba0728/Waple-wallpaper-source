// Function: FUN_1400986c0
// Addr: 1400986c0
// Size: 146 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1400986c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  CHAR local_1018 [4095];
  undefined1 local_19;
  undefined8 uStack_18;
  
  uStack_18 = 0x1400986e0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  puVar1 = (undefined8 *)FUN_140016300();
  FUN_1402c7d8c(*puVar1,local_1018,0x1000,param_1,0,&local_res10);
  local_19 = 0;
  if ((DAT_1404e5294 != '\0') && (0 < DAT_1404e52b8)) {
    FUN_140098350(local_1018);
  }
  FatalAppExitA(0,local_1018);
  return;
}

