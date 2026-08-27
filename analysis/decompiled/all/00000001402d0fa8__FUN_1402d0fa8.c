// Function: FUN_1402d0fa8
// Addr: 1402d0fa8
// Size: 59 bytes


void FUN_1402d0fa8(ulonglong param_1)

{
  byte bVar1;
  
  if (DAT_1404e4458 == DAT_1404dc040) {
    bVar1 = 0x40 - ((byte)DAT_1404dc040 & 0x3f) & 0x3f;
    DAT_1404e4458 = (param_1 >> bVar1 | param_1 << 0x40 - bVar1) ^ DAT_1404dc040;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402d3b24();
}

