// Function: FUN_1403ea650
// Addr: 1403ea650
// Size: 345 bytes


undefined8 * FUN_1403ea650(byte *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  size_t sVar8;
  longlong lVar9;
  byte *pbVar10;
  bool bVar11;
  
  puVar7 = DAT_1404e51a8;
  while( true ) {
    for (; puVar4 = DAT_1404e51a8, puVar7 != (undefined8 *)0x0; puVar7 = (undefined8 *)*puVar7) {
      pbVar6 = (byte *)puVar7[1];
      bVar3 = *pbVar6;
      pbVar10 = param_1;
      while ((bVar3 != 0 && ((uint)bVar3 == (int)(char)(&DAT_14046d130)[*pbVar10]))) {
        pbVar1 = pbVar6 + 1;
        pbVar6 = pbVar6 + 1;
        pbVar10 = pbVar10 + 1;
        bVar3 = *pbVar1;
      }
      if ((uint)*pbVar6 == (int)(char)(&DAT_14046d130)[*pbVar10]) {
        return puVar7;
      }
    }
    puVar7 = (undefined8 *)_calloc_base(1,0x10);
    if (puVar7 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *puVar7 = puVar4;
    sVar8 = strlen((char *)param_1);
    lVar2 = sVar8 + 1;
    lVar9 = _malloc_base(lVar2);
    puVar7[1] = lVar9;
    if (lVar9 != 0) {
      if (lVar2 != 0) {
        FUN_1404210f0(lVar9,param_1,lVar2);
      }
      bVar3 = *(byte *)puVar7[1];
      pbVar6 = (byte *)puVar7[1];
      while (bVar3 != 0) {
        *pbVar6 = (&DAT_14046d130)[bVar3];
        bVar3 = pbVar6[1];
        pbVar6 = pbVar6 + 1;
      }
    }
    if (puVar7[1] == 0) break;
    LOCK();
    bVar11 = puVar4 == DAT_1404e51a8;
    puVar5 = puVar7;
    if (!bVar11) {
      puVar5 = DAT_1404e51a8;
    }
    DAT_1404e51a8 = puVar5;
    UNLOCK();
    if (bVar11) {
      if (puVar4 == (undefined8 *)0x0) {
        FUN_14028b410(FUN_1403c4b50);
        return puVar7;
      }
      return puVar7;
    }
    thunk_FUN_1402d9040(puVar7[1]);
    thunk_FUN_1402d9040(puVar7);
    puVar7 = DAT_1404e51a8;
  }
  thunk_FUN_1402d9040(puVar7);
  return (undefined8 *)0x0;
}

