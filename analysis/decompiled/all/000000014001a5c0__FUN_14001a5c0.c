// Function: FUN_14001a5c0
// Addr: 14001a5c0
// Size: 109 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14001a5c0(void)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong *in_RAX;
  undefined4 *puVar3;
  longlong *plStackX_8;
  
  puVar1 = DAT_1404e8ca0;
  puVar3 = DAT_1404e8c98;
  if (DAT_1404e8c98 != DAT_1404e8ca0) {
    do {
      in_RAX = (longlong *)(*DAT_140426ad0)(DAT_1404e5350,*puVar3);
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar1);
    if (DAT_1404e8c98 != DAT_1404e8ca0) {
      DAT_1404e8ca0 = DAT_1404e8c98;
    }
  }
  plVar2 = DAT_1404e8cb8;
  if (DAT_1404e8cc0 != 0) {
    if (DAT_1404e8cc0 < _DAT_1404e8ce8 >> 3) {
      if ((longlong *)*DAT_1404e8cb8 != DAT_1404e8cb8) {
                    /* WARNING: Subroutine does not return */
        FUN_140017310((longlong *)*DAT_1404e8cb8 + 0xb);
      }
      return DAT_1404e8cb8;
    }
    *(undefined8 *)DAT_1404e8cb8[1] = 0;
    if (*plVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140017310(*plVar2 + 0x58);
    }
    *DAT_1404e8cb8 = (longlong)DAT_1404e8cb8;
    DAT_1404e8cb8[1] = (longlong)DAT_1404e8cb8;
    plStackX_8 = DAT_1404e8cb8;
    DAT_1404e8cc0 = 0;
    in_RAX = (longlong *)FUN_140032690(DAT_1404e8cc8,_DAT_1404e8cd0,&plStackX_8);
  }
  return in_RAX;
}

