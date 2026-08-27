// Function: FUN_14001a4f0
// Addr: 14001a4f0
// Size: 306 bytes


void FUN_14001a4f0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined8 *local_res8;
  
  piVar3 = DAT_1404e8bd0;
  piVar4 = DAT_1404e8bc8;
  if (DAT_1404e8bc8 != DAT_1404e8bd0) {
    do {
      UnregisterHotKey(DAT_1404e5280,*piVar4);
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar3);
    if (DAT_1404e8bc8 != DAT_1404e8bd0) {
      DAT_1404e8bd0 = DAT_1404e8bc8;
    }
  }
  puVar2 = DAT_1404e8be8;
  if (DAT_1404e8bf0 != 0) {
    if (DAT_1404e8bf0 < DAT_1404e8c18 >> 3) {
      FUN_1400336f0(&DAT_1404e8be0,*DAT_1404e8be8,DAT_1404e8be8);
      return;
    }
    *(undefined8 *)DAT_1404e8be8[1] = 0;
    puVar2 = (undefined8 *)*puVar2;
    while (puVar2 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*puVar2;
      FUN_140017240(puVar2 + 0xb);
      FUN_140017240(puVar2 + 7);
      FUN_140017240(puVar2 + 3);
      thunk_FUN_14028af80(puVar2,0x78);
      puVar2 = puVar1;
    }
    *DAT_1404e8be8 = DAT_1404e8be8;
    DAT_1404e8be8[1] = DAT_1404e8be8;
    local_res8 = DAT_1404e8be8;
    DAT_1404e8bf0 = 0;
    FUN_1400325c0(DAT_1404e8bf8,DAT_1404e8c00,&local_res8);
  }
  return;
}

