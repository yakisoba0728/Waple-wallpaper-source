// Function: FUN_140067a40
// Addr: 140067a40
// Size: 37 bytes


ulonglong FUN_140067a40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*DAT_1404e5400;
  while( true ) {
    if (puVar1 == DAT_1404e5400) {
      return (ulonglong)puVar1 & 0xffffffffffffff00;
    }
    if ((puVar1[7] != puVar1[8]) && (1 < *(int *)(puVar1 + 0xe) - 2U)) break;
    puVar1 = (undefined8 *)*puVar1;
  }
  return CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
}

