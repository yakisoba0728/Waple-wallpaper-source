// Function: FUN_1403ea720
// Addr: 1403ea720
// Size: 159 bytes


undefined8 * FUN_1403ea720(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  puVar3 = DAT_1404e5278;
  while( true ) {
    if (puVar3 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_1402dd8b0(1,0x10);
    }
    pbVar4 = (byte *)puVar3[1];
    bVar2 = *pbVar4;
    pbVar5 = param_1;
    while ((bVar2 != 0 && ((uint)bVar2 == (int)(char)(&DAT_14046d200)[*pbVar5]))) {
      pbVar1 = pbVar4 + 1;
      pbVar4 = pbVar4 + 1;
      pbVar5 = pbVar5 + 1;
      bVar2 = *pbVar1;
    }
    if ((uint)*pbVar4 == (int)(char)(&DAT_14046d200)[*pbVar5]) break;
    puVar3 = (undefined8 *)*puVar3;
  }
  return puVar3;
}

