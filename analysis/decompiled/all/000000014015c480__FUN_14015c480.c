// Function: FUN_14015c480
// Addr: 14015c480
// Size: 683 bytes


void FUN_14015c480(int param_1,byte *param_2,longlong param_3,longlong param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((*param_2 & 1) == 0) {
    switch(param_1) {
    case 0:
      uVar7 = 0;
      if (*(int *)(param_2 + 0x20) != 0) {
        do {
          FUN_1404210f0((ulonglong)
                        (((*(int *)(param_2 + 0x18) + uVar7) * param_5 + *(int *)(param_2 + 0x14)) *
                        4) + param_4,(ulonglong)(*(int *)(param_2 + 0x1c) * uVar7 * 4) + param_3,
                        *(int *)(param_2 + 0x1c) * 4);
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(param_2 + 0x20));
      }
      break;
    case 4:
    case 6:
      uVar7 = 0;
      if (*(int *)(param_2 + 0x20) != 0) {
        do {
          FUN_1404210f0((ulonglong)
                        ((*(int *)(param_2 + 0x18) + uVar7) * param_5 + *(int *)(param_2 + 0x14) * 4
                        ) + param_4,(ulonglong)(*(int *)(param_2 + 0x1c) * uVar7) + param_3,
                        *(int *)(param_2 + 0x1c) * 4);
          uVar7 = uVar7 + 4;
        } while (uVar7 < *(uint *)(param_2 + 0x20));
      }
      break;
    case 7:
      uVar7 = 0;
      if (*(int *)(param_2 + 0x20) != 0) {
        do {
          FUN_1404210f0((ulonglong)
                        ((*(int *)(param_2 + 0x18) + uVar7) * param_5 + *(int *)(param_2 + 0x14) * 4
                        >> 1) + param_4,(ulonglong)(*(int *)(param_2 + 0x1c) * uVar7 >> 1) + param_3
                        ,*(int *)(param_2 + 0x1c) * 2);
          uVar7 = uVar7 + 4;
        } while (uVar7 < *(uint *)(param_2 + 0x20));
      }
      break;
    case 8:
      uVar7 = 0;
      if (*(int *)(param_2 + 0x20) != 0) {
        do {
          FUN_1404210f0((ulonglong)
                        (((*(int *)(param_2 + 0x18) + uVar7) * param_5 + *(int *)(param_2 + 0x14)) *
                        2) + param_4,(ulonglong)(*(int *)(param_2 + 0x1c) * uVar7 * 2) + param_3,
                        *(int *)(param_2 + 0x1c) * 2);
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(param_2 + 0x20));
      }
      break;
    case 9:
      uVar7 = 0;
      if (*(int *)(param_2 + 0x20) != 0) {
        do {
          FUN_1404210f0((ulonglong)
                        ((*(int *)(param_2 + 0x18) + uVar7) * param_5 + *(int *)(param_2 + 0x14)) +
                        param_4,(ulonglong)(*(int *)(param_2 + 0x1c) * uVar7) + param_3,
                        *(int *)(param_2 + 0x1c));
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(uint *)(param_2 + 0x20));
      }
    }
  }
  else if ((param_1 == 0) && (uVar7 = 0, *(int *)(param_2 + 0x20) != 0)) {
    do {
      uVar5 = *(uint *)(param_2 + 0x1c);
      if (uVar5 != 0) {
        uVar8 = 0;
        do {
          uVar6 = (ulonglong)((uVar5 * uVar7 + uVar8) * 4);
          uVar4 = ((*(int *)(param_2 + 0x18) + uVar7) * param_5 + *(int *)(param_2 + 0x14) + uVar8)
                  * 4;
          uVar5 = *(uint *)(param_4 + (ulonglong)uVar4);
          bVar1 = *(byte *)(param_3 + 3 + uVar6);
          uVar2 = *(uint *)(param_3 + uVar6);
          uVar3 = uVar5 >> 0x18;
          if (uVar5 >> 0x18 < (uint)bVar1) {
            uVar3 = (uint)bVar1;
          }
          uVar8 = uVar8 + 1;
          *(uint *)(param_4 + (ulonglong)uVar4) =
               (((uVar2 & 0xff00ff) - (uVar5 & 0xff00ff)) * (uint)bVar1 >> 8) + (uVar5 & 0xff00ff) &
               0xff00ff |
               (((uVar2 & 0xff00) - (uVar5 & 0xff00)) * (uint)bVar1 >> 8) + (uVar5 & 0xff00) &
               0xff00 | uVar3 << 0x18;
          uVar5 = *(uint *)(param_2 + 0x1c);
        } while (uVar8 < uVar5);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_2 + 0x20));
  }
  return;
}

