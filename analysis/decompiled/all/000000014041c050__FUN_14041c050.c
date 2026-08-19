// Function: FUN_14041c050
// Addr: 14041c050
// Size: 66 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_14041c050(void)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  double dVar4;
  undefined1 in_XMM0 [16];
  double dVar5;
  double dVar6;
  
  dVar2 = in_XMM0._0_8_;
  dVar4 = 0.0;
  uVar3 = in_XMM0._4_4_ >> 0x14 & 0x7ff;
  if (0x7ff0000000000000 < (ulonglong)ABS(dVar2)) {
    return (double)((ulonglong)dVar2 | 0x8000000000000);
  }
  if (uVar3 < 0x3c7) {
    FUN_1402dea10(0x20);
    return _UNK_140471c68;
  }
  if (uVar3 < 0x3ff) {
    dVar5 = dVar2;
    if ((longlong)dVar2 < 0) {
      dVar5 = (double)CONCAT44(in_XMM0._4_4_ ^ DAT_1404930b0._4_4_,
                               in_XMM0._0_4_ ^ (uint)DAT_1404930b0);
    }
    if (uVar3 < 0x3fe) {
      dVar6 = dVar5 * dVar5;
    }
    else {
      dVar6 = (DAT_140492848 - dVar5) * DAT_140492828;
      dVar5 = SQRT(dVar6);
      dVar4 = dVar5;
    }
    dVar1 = ((((((dVar6 * _UNK_1404931b8 + _UNK_1404931c0) * dVar6 - _UNK_1404931c8) * dVar6 +
               _UNK_1404931e0) * dVar6 - _UNK_1404931e8) * dVar6 + _UNK_1404931d8) * dVar6) /
            ((((dVar6 * _UNK_1404931d0 - _UNK_1404931f0) * dVar6 + _UNK_140493200) * dVar6 -
             _UNK_140493208) * dVar6 + _UNK_1404931f8);
    if (uVar3 < 0x3fe) {
      return _UNK_140471c68 - (dVar2 - (_UNK_1404931b0 - dVar1 * dVar2));
    }
    if (-1 < (longlong)dVar2) {
      dVar2 = (double)((ulonglong)dVar4 & 0xffffffff00000000);
      dVar4 = (dVar6 - dVar2 * dVar2) / ((double)((ulonglong)dVar4 & 0xffffffff00000000) + dVar4);
      return (dVar5 + dVar5) * dVar1 + dVar4 + dVar4 + dVar2 + dVar2;
    }
    dVar4 = (dVar5 * dVar1 - _UNK_1404931b0) + dVar4;
    return _UNK_1404928a0 - (dVar4 + dVar4);
  }
  if (dVar2 == DAT_140492848) {
    return 0.0;
  }
  if (dVar2 != DAT_140492aa0) {
    dVar4 = (double)FUN_1402ecad0(&UNK_1404305f4,0xd,0xfff8000000000000,1,8,0x21);
    return dVar4;
  }
  FUN_1402dea10(0x20);
  return _UNK_1404928a0;
}

