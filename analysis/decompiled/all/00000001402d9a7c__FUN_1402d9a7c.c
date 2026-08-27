// Function: FUN_1402d9a7c
// Addr: 1402d9a7c
// Size: 53 bytes


void FUN_1402d9a7c(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((*param_2 != (&DAT_1404e4850)[param_3]) && ((DAT_1404dcf60 & *(uint *)(param_1 + 0x3a8)) == 0)
     ) {
    lVar1 = __acrt_update_thread_locale_data();
    *param_2 = lVar1;
  }
  return;
}

