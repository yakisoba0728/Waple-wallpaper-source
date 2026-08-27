// Function: FUN_140062e40
// Addr: 140062e40
// Size: 133 bytes


void FUN_140062e40(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong local_res8;
  
  puVar2 = DAT_1404e6d48;
  if (DAT_1404e8d20 != (HMODULE)0x0) {
    for (puVar1 = (undefined8 *)*DAT_1404e6d48; puVar1 != puVar2; puVar1 = (undefined8 *)*puVar1) {
      local_res8 = puVar1[2];
      (*DAT_1404e8d40)(&local_res8);
    }
    FUN_140077f50(&DAT_1404e6d40);
    (*DAT_1404e8d30)();
    FreeLibrary(DAT_1404e8d20);
    DAT_1404e8d20 = (HMODULE)0x0;
  }
  return;
}

