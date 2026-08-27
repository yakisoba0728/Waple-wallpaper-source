// Function: FUN_1400a7800
// Addr: 1400a7800
// Size: 322 bytes


char * FUN_1400a7800(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte bVar8;
  
  uVar3 = *(uint *)(param_1 + 0x60);
  uVar6 = (ulonglong)uVar3;
  if (uVar3 != 0) {
    bVar4 = 0;
    bVar8 = 0;
    uVar7 = uVar6;
    if ((uVar3 & 1) == 0) {
      do {
        bVar8 = bVar4 + 1;
        uVar6 = uVar7 >> 1;
        uVar1 = uVar7 & 2;
        uVar7 = uVar6;
        bVar4 = bVar8;
      } while (uVar1 == 0);
    }
    *(byte *)(param_1 + 0x70) = bVar8 & 0x1f;
    uVar3 = 0;
    uVar7 = uVar6 & 1;
    while (uVar7 != 0) {
      uVar3 = uVar3 + 1;
      uVar7 = uVar6 & 2;
      uVar6 = uVar6 >> 1;
    }
    if (((int)uVar6 == 0) && (uVar3 < 0x21)) {
      *(char *)(param_1 + 0x74) = (char)uVar3;
      uVar3 = *(uint *)(param_1 + 100);
      if (uVar3 != 0) {
        uVar2 = uVar3 & 1;
        while (uVar2 == 0) {
          uVar6 = (ulonglong)((int)uVar6 + 1);
          uVar2 = uVar3 & 2;
          uVar3 = uVar3 >> 1;
        }
        *(byte *)(param_1 + 0x71) = (byte)uVar6 & 0x1f;
        uVar5 = 0;
        uVar2 = uVar3 & 1;
        while (uVar2 != 0) {
          uVar5 = uVar5 + 1;
          uVar2 = uVar3 & 2;
          uVar3 = uVar3 >> 1;
        }
        if ((uVar3 == 0) && (uVar5 < 0x21)) {
          *(char *)(param_1 + 0x75) = (char)uVar5;
          uVar3 = *(uint *)(param_1 + 0x68);
          if (uVar3 != 0) {
            bVar4 = 0;
            uVar2 = uVar3 & 1;
            while (uVar2 == 0) {
              bVar4 = bVar4 + 1;
              uVar2 = uVar3 & 2;
              uVar3 = uVar3 >> 1;
            }
            *(byte *)(param_1 + 0x72) = bVar4 & 0x1f;
            uVar5 = 0;
            uVar2 = uVar3 & 1;
            while (uVar2 != 0) {
              uVar5 = uVar5 + 1;
              uVar2 = uVar3 & 2;
              uVar3 = uVar3 >> 1;
            }
            if ((uVar3 == 0) && (uVar5 < 0x21)) {
              *(char *)(param_1 + 0x76) = (char)uVar5;
              uVar3 = *(uint *)(param_1 + 0x6c);
              if (uVar3 != 0) {
                bVar4 = 0;
                uVar2 = uVar3 & 1;
                while (uVar2 == 0) {
                  bVar4 = bVar4 + 1;
                  uVar2 = uVar3 & 2;
                  uVar3 = uVar3 >> 1;
                }
                *(byte *)(param_1 + 0x73) = bVar4 & 0x1f;
                uVar5 = 0;
                uVar2 = uVar3 & 1;
                while (uVar2 != 0) {
                  uVar5 = uVar5 + 1;
                  uVar2 = uVar3 & 2;
                  uVar3 = uVar3 >> 1;
                }
                if ((uVar3 != 0) || (0x20 < uVar5)) goto LAB_1400a793a;
                *(char *)(param_1 + 0x77) = (char)uVar5;
              }
              return (char *)0x0;
            }
          }
        }
      }
    }
  }
LAB_1400a793a:
  return "#bmp: bad header";
}

