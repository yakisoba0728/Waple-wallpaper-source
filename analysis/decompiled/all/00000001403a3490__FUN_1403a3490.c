// Function: FUN_1403a3490
// Addr: 1403a3490
// Size: 513 bytes


undefined8 * FUN_1403a3490(undefined8 *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 == (undefined8 *)0x0) {
    cVar2 = FUN_1403a46a0(param_1 + 1,*(int *)((longlong)param_1 + 0xc) + 1,0);
    if (cVar2 == '\0') {
      return (undefined8 *)0x0;
    }
    puVar3 = (undefined8 *)_malloc_base(0x700);
    if (puVar3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    if ((*(int *)((longlong)param_1 + 0xc) < *(int *)(param_1 + 1)) ||
       (cVar2 = FUN_1403a46a0(param_1 + 1,*(int *)((longlong)param_1 + 0xc) + 1,0), cVar2 != '\0'))
    {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)((longlong)param_1 + 0xc) = uVar1 + 1;
      *(undefined8 **)(param_1[2] + (ulonglong)uVar1 * 8) = puVar3;
    }
    else {
      DAT_1404e4f20 = DAT_14045dd10;
    }
    *puVar3 = puVar3 + 7;
    puVar3[7] = puVar3 + 0xe;
    puVar3[0xe] = puVar3 + 0x15;
    puVar3[0x15] = puVar3 + 0x1c;
    puVar3[0x1c] = puVar3 + 0x23;
    puVar3[0x23] = puVar3 + 0x2a;
    puVar3[0x2a] = puVar3 + 0x31;
    puVar3[0x31] = puVar3 + 0x38;
    puVar3[0x38] = puVar3 + 0x3f;
    puVar3[0x3f] = puVar3 + 0x46;
    puVar3[0x46] = puVar3 + 0x4d;
    puVar3[0x4d] = puVar3 + 0x54;
    puVar3[0x54] = puVar3 + 0x5b;
    puVar3[0x5b] = puVar3 + 0x62;
    puVar3[0x62] = puVar3 + 0x69;
    puVar3[0x69] = puVar3 + 0x70;
    puVar3[0x70] = puVar3 + 0x77;
    puVar3[0x77] = puVar3 + 0x7e;
    puVar3[0x7e] = puVar3 + 0x85;
    puVar3[0x85] = puVar3 + 0x8c;
    puVar3[0x8c] = puVar3 + 0x93;
    puVar3[0x93] = puVar3 + 0x9a;
    puVar3[0x9a] = puVar3 + 0xa1;
    puVar3[0xa1] = puVar3 + 0xa8;
    puVar3[0xa8] = puVar3 + 0xaf;
    puVar3[0xaf] = puVar3 + 0xb6;
    puVar3[0xb6] = puVar3 + 0xbd;
    puVar3[0xbd] = puVar3 + 0xc4;
    puVar3[0xc4] = puVar3 + 0xcb;
    puVar3[0xcb] = puVar3 + 0xd2;
    puVar3[0xd2] = puVar3 + 0xd9;
    puVar3[0xd9] = 0;
    *param_1 = puVar3;
  }
  *param_1 = *puVar3;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  return puVar3;
}

