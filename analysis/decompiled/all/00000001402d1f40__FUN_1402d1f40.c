// Function: FUN_1402d1f40
// Addr: 1402d1f40
// Size: 47 bytes


/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1402d1f40(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  code *pcVar3;
  
  bVar2 = (byte)DAT_1404dc040 & 0x3f;
  pcVar3 = (code *)((DAT_1404e45d0 ^ DAT_1404dc040) >> bVar2 |
                   (DAT_1404e45d0 ^ DAT_1404dc040) << 0x40 - bVar2);
  if (pcVar3 == (code *)0x0) {
    return 0;
  }
  uVar1 = (*pcVar3)(param_1);
  return uVar1;
}

