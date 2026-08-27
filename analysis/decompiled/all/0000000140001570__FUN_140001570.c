// Function: FUN_140001570
// Addr: 140001570
// Size: 204 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140001570(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  DAT_1404df7e8 = FUN_14028af20(0x18);
  *(longlong *)DAT_1404df7e8 = DAT_1404df7e8;
  *(longlong *)(DAT_1404df7e8 + 8) = DAT_1404df7e8;
  DAT_1404df7f8 = 0;
  _DAT_1404df800 = 0;
  uRam00000001404df808 = 0;
  DAT_1404df810 = 7;
  DAT_1404df818 = 8;
  DAT_1404df7e0 = 0x3f800000;
  FUN_14003e510(&DAT_1404df7f8,0x10,DAT_1404df7e8);
  lVar3 = 10;
  puVar2 = &DAT_1404df820;
  do {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar1 = (undefined8 *)FUN_14028af20(0x10);
    puVar1[1] = 0;
    *puVar2 = puVar1;
    *puVar1 = puVar2;
    puVar2 = puVar2 + 5;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  FUN_14028b410(FUN_140424870);
  return;
}

