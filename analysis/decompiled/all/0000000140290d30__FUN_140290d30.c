// Function: FUN_140290d30
// Addr: 140290d30
// Size: 70 bytes


void FUN_140290d30(int param_1)

{
  undefined8 uVar1;
  undefined1 local_38 [48];
  
  uVar1 = FUN_140015d60();
  FUN_140290bf0(local_38,*(undefined4 *)(&DAT_14042aae8 + (longlong)param_1 * 4),uVar1,
                (&PTR_s_device_or_resource_busy_14042aab0)[param_1]);
                    /* WARNING: Subroutine does not return */
  FUN_1402bba60(local_38,&DAT_1404d8460);
}

