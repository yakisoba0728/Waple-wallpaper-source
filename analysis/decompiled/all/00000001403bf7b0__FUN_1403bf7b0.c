// Function: FUN_1403bf7b0
// Addr: 1403bf7b0
// Size: 312 bytes


longlong * FUN_1403bf7b0(longlong param_1,longlong *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *_Buf1;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  uVar7 = (ulonglong)(param_3 & 0x3fffffff) % (ulonglong)*(uint *)(param_1 + 0x20);
  if ((*(uint *)(lVar2 + 8 + uVar7 * 0x10) >> 1 & 1) != 0) {
    iVar10 = 0;
    do {
      if (*(uint *)(lVar2 + 8 + uVar7 * 0x10) >> 2 == (param_3 & 0x3fffffff)) {
        puVar3 = (undefined8 *)*param_2;
        plVar8 = (longlong *)(uVar7 * 0x10 + lVar2);
        puVar4 = (undefined8 *)*plVar8;
        _Buf1 = (void *)*puVar4;
        if (puVar4[1] - (longlong)_Buf1 == puVar3[1] - (longlong)*puVar3) {
          iVar6 = *(int *)((longlong)puVar3 + 0x14);
          iVar1 = *(int *)((longlong)puVar4 + 0x14);
          if ((iVar1 == iVar6) &&
             ((uVar9 = (int)puVar4[1] - (int)_Buf1, uVar9 == 0 ||
              (iVar5 = memcmp(_Buf1,(void *)*puVar3,(ulonglong)uVar9), iVar5 == 0)))) {
            if ((iVar6 * 0xc == iVar1 * 0xc) &&
               (((iVar1 * 3 & 0x3fffffffU) == 0 ||
                (iVar6 = memcmp((void *)puVar4[3],(void *)puVar3[3],(ulonglong)(uint)(iVar1 * 0xc)),
                iVar6 == 0)))) {
              if ((*(byte *)(plVar8 + 1) & 1) == 0) {
                return (longlong *)0x0;
              }
              return plVar8;
            }
          }
        }
      }
      iVar10 = iVar10 + 1;
      uVar7 = (ulonglong)((int)uVar7 + iVar10 & *(uint *)(param_1 + 0x1c));
    } while ((*(uint *)(lVar2 + 8 + uVar7 * 0x10) >> 1 & 1) != 0);
  }
  return (longlong *)0x0;
}

