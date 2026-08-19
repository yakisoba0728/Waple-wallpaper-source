// Function: FUN_1402915d0
// Addr: 1402915d0
// Size: 20 bytes


void FUN_1402915d0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  LOCK();
  iVar2 = DAT_1404dc15c + -1;
  UNLOCK();
  iVar1 = DAT_1404dc15c + -1;
  DAT_1404dc15c = iVar2;
  if (iVar1 < 0) {
    puVar3 = (undefined4 *)&DAT_1404e3c20;
    do {
      FUN_140293b60(puVar3);
      puVar3 = puVar3 + 10;
    } while (puVar3 != &DAT_1404e3d60);
  }
  return;
}

