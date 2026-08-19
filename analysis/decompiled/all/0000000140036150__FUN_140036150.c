// Function: FUN_140036150
// Addr: 140036150
// Size: 148 bytes


void FUN_140036150(void)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (DAT_1404e6b38 != (longlong *)0x0) {
    (**(code **)(*DAT_1404e6b38 + 0x20))
              (DAT_1404e6b38,CONCAT71(0x1404e6b,DAT_1404e6b38 != (longlong *)&DAT_1404e6b00));
    DAT_1404e6b38 = (longlong *)0x0;
  }
  uVar1 = DAT_1404df650;
  if (DAT_1404df650 != 0) {
    uVar2 = FUN_14028b190(DAT_1404df650 & 0xffffffff);
    puVar3 = &DAT_1404df640;
    if (0xf < DAT_1404df658) {
      puVar3 = DAT_1404df640;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1404211c0(uVar2,puVar3,uVar1 & 0xffffffff);
  }
  return;
}

