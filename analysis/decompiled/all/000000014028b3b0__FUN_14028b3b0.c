// Function: FUN_14028b3b0
// Addr: 14028b3b0
// Size: 37 bytes


undefined8 FUN_14028b3b0(char param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14028bbd0();
  uVar1 = DAT_1404e3a48;
  if (((int)uVar2 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_1404e3a48 = 0;
    UNLOCK();
    uVar2 = uVar1;
  }
  return uVar2;
}

