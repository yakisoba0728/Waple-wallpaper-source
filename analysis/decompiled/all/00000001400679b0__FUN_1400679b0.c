// Function: FUN_1400679b0
// Addr: 1400679b0
// Size: 76 bytes


void FUN_1400679b0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_1404e5330;
  for (puVar1 = (undefined8 *)*DAT_1404e5330; puVar1 != puVar2; puVar1 = (undefined8 *)*puVar1) {
    FUN_140067a00(&DAT_1404e52e0,puVar1 + 2,1);
  }
  FUN_14006a030();
  return;
}

