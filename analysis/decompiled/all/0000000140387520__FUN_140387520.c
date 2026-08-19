// Function: FUN_140387520
// Addr: 140387520
// Size: 26 bytes


/* WARNING: Removing unreachable block (ram,0x0001403c956f) */
/* WARNING: Removing unreachable block (ram,0x0001403c95e4) */
/* WARNING: Removing unreachable block (ram,0x0001403c95c1) */

undefined4 FUN_140387520(byte *param_1,uint param_2,uint *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  ushort uVar5;
  undefined8 unaff_RBX;
  
  cVar1 = FUN_1403c9500();
  if (cVar1 != '\0') {
    return 1;
  }
  if ((0xff < param_2) || (uVar5 = (short)param_2 - 0x1000, uVar5 == 0)) {
    return 0;
  }
  uVar4 = (uint)uVar5;
  switch((uint)*param_1 * 0x100 + (uint)param_1[1]) {
  case 0:
    if ((uVar4 < 0x100) && (param_1[(ulonglong)uVar4 + 6] != 0)) {
      *param_3 = (uint)param_1[(ulonglong)uVar4 + 6];
      return 1;
    }
    break;
  case 4:
    return 0;
  case 6:
    uVar4 = (uVar4 - param_1[7]) + (uint)param_1[6] * -0x100;
    if (uVar4 < (uint)param_1[9] + (uint)param_1[8] * 0x100) {
      lVar3 = (ulonglong)uVar4 + 5;
code_r0x0001403c9644:
      param_1 = param_1 + lVar3 * 2;
    }
    else {
      param_1 = (byte *)&DAT_14045dde0;
    }
    goto LAB_1403c9648;
  case 10:
    uVar4 = (uVar4 + (uint)param_1[0xd] * -0x10000 + (uint)param_1[0xe] * -0x100 +
            (uint)param_1[0xc] * -0x1000000) - (uint)param_1[0xf];
    if (uVar4 < (uint)param_1[0x11] * 0x10000 + (uint)param_1[0x12] * 0x100 +
                (uint)param_1[0x10] * 0x1000000 + (uint)param_1[0x13]) {
      lVar3 = (ulonglong)uVar4 + 10;
      goto code_r0x0001403c9644;
    }
    param_1 = (byte *)&DAT_14045dde0;
LAB_1403c9648:
    uVar4 = (uint)*param_1 * 0x100 + (uint)param_1[1];
    if (uVar4 != 0) {
      *param_3 = uVar4;
      return 1;
    }
    break;
  case 0xc:
    uVar2 = FUN_14036e150(param_1 + 0xc,&stack0x00000010,"",0,unaff_RBX);
    uVar4 = FUN_1403d0620(uVar2,uVar4);
    if (uVar4 != 0) {
      *param_3 = uVar4;
      return 1;
    }
    return 0;
  case 0xd:
    lVar3 = FUN_14036e150(param_1 + 0xc,&stack0x00000008,"");
    uVar4 = (uint)*(byte *)(lVar3 + 8) * 0x1000000 +
            (uint)*(byte *)(lVar3 + 9) * 0x10000 + (uint)*(byte *)(lVar3 + 10) * 0x100 +
            (uint)*(byte *)(lVar3 + 0xb);
    if (uVar4 != 0) {
      *param_3 = uVar4;
      return 1;
    }
  }
  return 0;
}

