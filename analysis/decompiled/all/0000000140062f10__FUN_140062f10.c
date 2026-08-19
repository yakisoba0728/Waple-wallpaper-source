// Function: FUN_140062f10
// Addr: 140062f10
// Size: 133 bytes


void FUN_140062f10(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong local_res8;
  
  puVar2 = DAT_1404e6e18;
  if (DAT_1404e8df0 != 0) {
    for (puVar1 = (undefined8 *)*DAT_1404e6e18; puVar1 != puVar2; puVar1 = (undefined8 *)*puVar1) {
      local_res8 = puVar1[2];
      (*DAT_1404e8e10)(&local_res8);
    }
    FUN_140078020(&DAT_1404e6e10);
    (*DAT_1404e8e00)();
    (*DAT_140426728)(DAT_1404e8df0);
    DAT_1404e8df0 = 0;
  }
  return;
}

