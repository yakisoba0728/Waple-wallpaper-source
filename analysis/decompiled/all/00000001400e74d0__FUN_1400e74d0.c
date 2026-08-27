// Function: FUN_1400e74d0
// Addr: 1400e74d0
// Size: 381 bytes


void FUN_1400e74d0(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if ((*(uint *)(param_1 + 0x60) & 0x80080) != 0) {
    cVar2 = *(char *)(param_1 + 0x75);
    if ((byte)(cVar2 - 0x30U) < 10) {
      *(int *)(param_1 + 0x6c) = cVar2 + -0x30;
      if (cVar2 != '/') {
        FUN_1400e5740(param_1);
        uVar6 = *(ulonglong *)(param_1 + 0x60);
        if (((uVar6 >> 0x13 & 1) != 0) && (*(int *)(param_1 + 0x6c) == 0)) {
          if (9 < (byte)(*(char *)(param_1 + 0x75) - 0x30U)) {
            FUN_1400e77f0(param_1 + 0x38,0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_1400e74c0();
        }
        if (-1 < (char)uVar6) {
          return;
        }
        if ((uVar6 >> 8 & 1) == 0) {
          FUN_1400e7a50(param_1,3,*(undefined4 *)(param_1 + 0x6c));
        }
        iVar1 = *(int *)(param_1 + 0x6c);
        uVar6 = (ulonglong)iVar1;
        if (iVar1 != 0) {
          if (((uVar6 <= *(uint *)(param_1 + 0x10)) && (uVar6 < *(ulonglong *)(param_1 + 0x30))) &&
             (uVar5 = uVar6 >> 5, bVar4 = (byte)iVar1 & 0x1f, uVar6 = (ulonglong)bVar4,
             (*(uint *)(*(longlong *)(param_1 + 0x18) + uVar5 * 4) >> bVar4 & 1) != 0)) {
            puVar3 = (undefined8 *)FUN_14028af20();
            puVar3[2] = 0;
            puVar3[3] = 0;
            *puVar3 = &PTR_FUN_140486c20;
            puVar3[1] = 0xf;
            *(int *)(puVar3 + 4) = iVar1;
            FUN_1400e5e40(param_1 + 0x38,puVar3);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_1400e74c0(uVar6,3);
        }
                    /* WARNING: Subroutine does not return */
        FUN_1400e74c0();
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
    }
  }
  cVar2 = FUN_1400e7d50(param_1,0);
  if (cVar2 != '\0') {
    FUN_1400e77f0(param_1 + 0x38,*(undefined1 *)(param_1 + 0x76));
    return;
  }
  if (((*(uint *)(param_1 + 0x60) >> 0x10 & 1) != 0) &&
     (cVar2 = FUN_1400e7ae0(param_1,1), cVar2 != '\0')) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400e74c0();
}

