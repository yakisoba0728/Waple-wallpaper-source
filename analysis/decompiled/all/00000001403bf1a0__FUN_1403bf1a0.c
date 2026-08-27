// Function: FUN_1403bf1a0
// Addr: 1403bf1a0
// Size: 271 bytes


char FUN_1403bf1a0(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  if ((param_2 == 0) || (uVar6 = *(uint *)(param_1 + 0x68), param_2 < uVar6)) {
    return '\x01';
  }
  if (*(uint *)(param_1 + 0xdc) < param_2) {
    *(undefined1 *)(param_1 + 0x58) = 0;
    return '\0';
  }
  if (*(char *)(param_1 + 0x58) == '\0') {
    return '\0';
  }
  lVar5 = 0;
  lVar4 = 0;
  lVar1 = *(longlong *)(param_1 + 0x70);
  lVar2 = *(longlong *)(param_1 + 0x78);
  if (param_2 < 0xccccccc) {
    do {
      uVar6 = uVar6 + 0x20 + (uVar6 >> 1);
    } while (uVar6 <= param_2);
    if (0xccccccb < uVar6) goto LAB_1403bf256;
    lVar4 = _realloc_base(*(undefined8 *)(param_1 + 0x80),uVar6 * 0x14);
    lVar5 = _realloc_base(*(undefined8 *)(param_1 + 0x70),uVar6 * 0x14);
    if ((lVar4 == 0) || (lVar5 == 0)) goto LAB_1403bf256;
    cVar3 = *(char *)(param_1 + 0x58);
  }
  else {
LAB_1403bf256:
    cVar3 = '\0';
    *(undefined1 *)(param_1 + 0x58) = 0;
    if (lVar4 == 0) goto LAB_1403bf268;
  }
  *(longlong *)(param_1 + 0x80) = lVar4;
LAB_1403bf268:
  if (lVar5 != 0) {
    *(longlong *)(param_1 + 0x70) = lVar5;
  }
  lVar4 = 0x80;
  if (lVar2 == lVar1) {
    lVar4 = 0x70;
  }
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar4 + param_1);
  if (cVar3 == '\0') {
    return '\0';
  }
  *(uint *)(param_1 + 0x68) = uVar6;
  return cVar3;
}

