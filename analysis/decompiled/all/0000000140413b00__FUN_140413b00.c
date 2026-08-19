// Function: FUN_140413b00
// Addr: 140413b00
// Size: 78 bytes


void FUN_140413b00(longlong param_1,char param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int *piVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x60);
  if (uVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar5 = 0;
    uVar7 = uVar5;
    if (param_2 != '\0') {
      do {
        lVar1 = uVar5 * 0x14;
        if ((*(byte *)(lVar1 + 0xc + lVar3) & 8) != 0) {
          piVar4 = (int *)(*(longlong *)(param_1 + 0x80) + lVar1);
          piVar4[2] = piVar4[2] - *piVar4;
          piVar4[3] = piVar4[3] - piVar4[1];
          *(undefined8 *)(lVar1 + *(longlong *)(param_1 + 0x80)) = 0;
        }
        uVar6 = (int)uVar7 + 1;
        uVar5 = uVar5 + 1;
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < uVar2);
      return;
    }
    do {
      if ((*(byte *)(lVar3 + 0xc + uVar5 * 0x14) & 8) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x80) + uVar5 * 0x14) = 0;
      }
      uVar6 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar6;
    } while (uVar6 < uVar2);
  }
  return;
}

