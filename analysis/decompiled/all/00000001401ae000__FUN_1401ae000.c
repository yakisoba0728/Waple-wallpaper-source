// Function: FUN_1401ae000
// Addr: 1401ae000
// Size: 64 bytes


undefined8 FUN_1401ae000(longlong param_1,longlong param_2,int param_3,int param_4)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_18 [16];
  
  uVar7 = *(uint *)(param_2 + 0x1c);
  puVar1 = (uint *)(param_2 + 0x1c);
  if (uVar7 == 0) {
    if (*(char *)(param_1 + 0x20) == '\0') {
      uVar3 = 0;
      *puVar1 = 1;
      uVar9 = 0;
      uVar7 = 1;
      uVar10 = 0;
      goto code_r0x0001401ae077;
    }
    if (param_3 < param_4) {
      param_3 = param_4;
    }
    uVar3 = (int)(param_3 + 0x1f + (param_3 + 0x1f >> 0x1f & 0x1fU)) >> 5;
    uVar7 = 1;
    if (1 < (int)uVar3) {
      uVar7 = uVar3;
    }
    *puVar1 = uVar7;
  }
  uVar3 = uVar7 >> 8;
  uVar9 = uVar7 >> 0x10;
  uVar10 = (ulonglong)(uVar7 >> 0x18);
code_r0x0001401ae077:
  lVar2 = *(longlong *)(param_1 + 0x80);
  uVar10 = *(ulonglong *)(param_1 + 0xa8) &
           (((((ulonglong)(uVar7 & 0xff) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
             (ulonglong)(uVar3 & 0xff)) * 0x100000001b3 ^ (ulonglong)(uVar9 & 0xff)) * 0x100000001b3
           ^ uVar10) * 0x100000001b3;
  lVar8 = *(longlong *)(param_1 + 0x90);
  lVar4 = *(longlong *)(lVar8 + 8 + uVar10 * 0x10);
  if (lVar4 != lVar2) {
    lVar8 = *(longlong *)(lVar8 + uVar10 * 0x10);
    uVar3 = *(uint *)(lVar4 + 0x10);
    while (uVar7 != uVar3) {
      if (lVar4 == lVar8) goto code_r0x0001401ae109;
      lVar4 = *(longlong *)(lVar4 + 8);
      uVar3 = *(uint *)(lVar4 + 0x10);
    }
    if (lVar4 == 0) {
      lVar4 = lVar2;
    }
    if (lVar4 != lVar2) {
      return *(undefined8 *)(lVar4 + 0x18);
    }
  }
code_r0x0001401ae109:
  uVar5 = func_0x0001401ac9a0(CONCAT71((int7)((ulonglong)lVar8 >> 8),1),
                              *(undefined1 *)(param_1 + 0x20),*puVar1);
  plVar6 = (longlong *)func_0x00014004b970(param_1 + 0x78,auStack_18,puVar1);
  *(undefined8 *)(*plVar6 + 0x18) = uVar5;
  return uVar5;
}

