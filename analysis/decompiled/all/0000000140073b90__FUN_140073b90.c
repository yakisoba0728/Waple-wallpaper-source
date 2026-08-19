// Function: FUN_140073b90
// Addr: 140073b90
// Size: 291 bytes


void FUN_140073b90(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  if (((byte)DAT_1404e53b4 & 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140086eb0(&DAT_1404df6b8,"general","");
  }
  func_0x00014000d730(&DAT_1404e8bb0);
  puVar3 = DAT_1404e5400;
  puVar1 = (undefined8 *)*DAT_1404e5400;
  do {
    if (puVar1 == puVar3) {
      FUN_14006e190();
      return;
    }
    lVar2 = puVar1[6];
    if (lVar2 != 0) {
      if (puVar1 != (undefined8 *)(lVar2 + 0x40)) {
        plVar4 = (longlong *)(lVar2 + 0xe0);
        if (0xf < *(ulonglong *)(lVar2 + 0xf8)) {
          plVar4 = (longlong *)*plVar4;
        }
                    /* WARNING: Subroutine does not return */
        FUN_14000f950(puVar1 + 0x14,plVar4,*(undefined8 *)(lVar2 + 0xf0));
      }
      lVar2 = puVar1[6];
      if (puVar1 != (undefined8 *)(lVar2 + 0x60)) {
        plVar4 = (longlong *)(lVar2 + 0x120);
        if (0xf < *(ulonglong *)(lVar2 + 0x138)) {
          plVar4 = (longlong *)*plVar4;
        }
                    /* WARNING: Subroutine does not return */
        FUN_14000f950(puVar1 + 0x18,plVar4,*(undefined8 *)(lVar2 + 0x130));
      }
    }
    if ((longlong *)puVar1[6] != (longlong *)0x0) {
      (**(code **)(*(longlong *)puVar1[6] + 0x18))();
      puVar1[6] = 0;
    }
    puVar1 = (undefined8 *)*puVar1;
  } while( true );
}

