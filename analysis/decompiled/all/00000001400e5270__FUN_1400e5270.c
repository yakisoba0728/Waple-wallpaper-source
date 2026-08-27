// Function: FUN_1400e5270
// Addr: 1400e5270
// Size: 306 bytes


ushort FUN_1400e5270(longlong param_1,undefined1 *param_2,undefined1 *param_3,char param_4)

{
  undefined1 *puVar1;
  char cVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  uVar6 = 0;
  if (PTR_s_alnum_140486c40 != (undefined *)0x0) {
    do {
      puVar1 = param_2;
      if ((longlong)param_3 - (longlong)param_2 == (ulonglong)(uint)(&DAT_140486c50)[uVar6 * 6]) {
        while( true ) {
          if (puVar1 == param_3) goto LAB_1400e5344;
          cVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
                            (*(longlong **)(param_1 + 8),*puVar1);
          cVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
          if (cVar2 != cVar3) break;
          puVar1 = puVar1 + 1;
        }
      }
      uVar6 = (ulonglong)((int)uVar6 + 1);
    } while ((&PTR_s_alnum_140486c40)[uVar6 * 3] != (undefined *)0x0);
  }
LAB_1400e5344:
  uVar5 = 0;
  if ((&PTR_s_alnum_140486c40)[uVar6 * 3] != (undefined *)0x0) {
    uVar5 = (&DAT_140486c54)[uVar6 * 0xc];
  }
  uVar4 = uVar5;
  if ((param_4 != '\0') && (uVar4 = uVar5 | 3, (uVar5 & 3) == 0)) {
    uVar4 = uVar5;
  }
  return uVar4;
}

