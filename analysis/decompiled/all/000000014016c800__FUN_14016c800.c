// Function: FUN_14016c800
// Addr: 14016c800
// Size: 388 bytes


undefined8 * FUN_14016c800(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  puVar1 = *(undefined8 **)(param_3 + 8);
  for (puVar2 = (undefined8 *)*puVar1; puVar2 != puVar1; puVar2 = (undefined8 *)*puVar2) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 8) + (longlong)*(int *)(puVar2 + 3) * 8);
    if (lVar3 != 0) {
      if (puVar2[10] != 0) {
        FUN_1400532a0(param_1,"#define ",8);
        plVar4 = puVar2 + 8;
        if (0xf < (ulonglong)puVar2[0xb]) {
          plVar4 = (longlong *)*plVar4;
        }
        FUN_1400532a0(param_1,plVar4,puVar2[10]);
        FUN_1400532a0(param_1,&DAT_14048d0b4,3);
      }
      lVar8 = puVar2[0x11];
      if (puVar2[0x12] - lVar8 >> 6 != 0) {
        uVar6 = 0;
        do {
          if ((*(uint *)(lVar3 + 0x1c) & 0x100000 << ((byte)uVar6 & 0x1f)) != 0) {
            uVar7 = uVar6 * 0x40;
            FUN_1400532a0(param_1,"#define ",8);
            if (*(ulonglong *)(lVar8 + 0x38 + uVar7) < 0x10) {
              lVar5 = lVar8 + (uVar7 | 0x20);
            }
            else {
              lVar5 = *(longlong *)(lVar8 + 0x20 + uVar7);
            }
            FUN_1400532a0(param_1,lVar5,*(undefined8 *)(lVar8 + 0x30 + uVar7));
            FUN_1400532a0(param_1,&DAT_14048d0b4,3);
          }
          lVar8 = puVar2[0x11];
          uVar6 = uVar6 + 1;
        } while (uVar6 < (ulonglong)(puVar2[0x12] - lVar8 >> 6));
      }
    }
  }
  return param_1;
}

